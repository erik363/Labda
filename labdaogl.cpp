//FORRÁS:https://www.youtube.com/watch?v=cgk8iVrcTJM, http://www.opengl-tutorial.org/beginners-tutorials/tutorial-1-opening-a-window/

#include <GL/glew.h>
#include <GLFW/glfw3.h>

#define SCREEN_WIDTH 640
#define SCREEN_HEIGHT 480
#define sugar 25
int x=SCREEN_HEIGHT/2;
int y=SCREEN_HEIGHT/2;
int n=1;
int m=1;
int ablakx[SCREEN_WIDTH-sugar];
int ablaky[SCREEN_HEIGHT-sugar];
  
void mozgatas(){
	n*=ablakx[x];
	m*=ablaky[y];

	x+=n;
	y+=m;
};

int main( void )
{
    GLFWwindow *window;

    for (int i=0; i<SCREEN_WIDTH-sugar; i++) 
	    ablakx[i]=1;  
    for (int i=0; i<SCREEN_HEIGHT-sugar; i++) 
	    ablaky[i]=1;

ablakx[sugar]=-1;
ablakx[SCREEN_WIDTH-sugar]=-1;
ablaky[sugar]=-1;
ablaky[SCREEN_HEIGHT-sugar]=-1;
    // Initialize the library
    if ( !glfwInit( ) )
    {
        return -1;
    }
    
    // Create a windowed mode window and its OpenGL context
    window = glfwCreateWindow( SCREEN_WIDTH, SCREEN_HEIGHT, "Labdapattogás if nélkül", NULL, NULL );
    
    if ( !window )
    {
        glfwTerminate( );
        return -1;
    }
    
    // Make the window's context current
    glfwMakeContextCurrent( window );
    
    glViewport( 0.0f, 0.0f, SCREEN_WIDTH, SCREEN_HEIGHT ); // specifies the part of the window to which OpenGL will draw (in pixels), convert from normalised to pixels
    glMatrixMode( GL_PROJECTION ); // projection matrix defines the properties of the camera that views the objects in the world coordinate frame. Here you typically set the zoom factor, aspect ratio and the near and far clipping planes
    glLoadIdentity( ); // replace the current matrix with the identity matrix and starts us a fresh because matrix transforms such as glOrpho and glRotate cumulate, basically puts us at (0, 0, 0)
    glOrtho( 0, SCREEN_WIDTH, 0, SCREEN_HEIGHT,0,1); // essentially set coordinate system
    glMatrixMode( GL_MODELVIEW ); // (default matrix mode) modelview matrix defines how your objects are transformed (meaning translation, rotation and scaling) in your world
    glLoadIdentity( ); // same as above comment
        
    // Loop until the user closes the window
    while ( glfwGetKey(window, GLFW_KEY_ESCAPE ) != GLFW_PRESS && !glfwWindowShouldClose( window ) )
    {
        glClear( GL_COLOR_BUFFER_BIT );
        GLfloat pointVertex[] = { x, y};
        // Render OpenGL here
        glEnable( GL_POINT_SMOOTH ); // make the point circular
        glEnableClientState( GL_VERTEX_ARRAY ); // tell OpenGL that you're using a vertex array for fixed-function attribute
        glPointSize( sugar*2 ); // must be added before glDrawArrays is called
        glVertexPointer( 2, GL_FLOAT, 0, pointVertex ); // point to the vertices to be used
        glDrawArrays( GL_POINTS, 0, 1 ); // draw the vertixes
        glDisableClientState( GL_VERTEX_ARRAY ); // tell OpenGL that you're finished using the vertex arrayattribute
        glDisable( GL_POINT_SMOOTH ); // stop the smoothing to make the points circular
         
        // Swap front and back buffers
        glfwSwapBuffers( window );
        
        // Poll for and process events
        glfwPollEvents( );
        mozgatas();
    }
    
    glfwTerminate( );
    
    return 0;
}

//c verzió
//gcc labda.c -o labda
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

#define width 50
#define height 20
//const int width = 50;
//const int height = 20;
int x=30, y=15;	//labda poziciója
int n=1, m=1;  //x, y szorzó
int tombX[width];
int tombY[height];

void Logic();
void Draw();

int main(void)
{
	//egy szélességnek/magassagnak megfl. elemszámú tömböt, sorozatot vesz fel 1-es értékekkel
	for (int i=0; i<width; i++) tombX[i]=1;  
	for (int i=0; i<height; i++) tombY[i]=1;

	//a tömb 1., ill. utolsó(nálam a fal helyzete miatt utolsó előtti) elemét -1-re cseréljük
	tombX[0]=-1;
	tombX[width-1]=-1;
	tombY[0]=-1;
	tombY[height]=-1;
    
    for (;;)
    {
        Draw();
        Logic();
        usleep(40000);

    }
}



void Logic()
{
	x=x+n;
	y=y+m;
	n=n*tombX[x];
	m=m*tombY[y];
}

void Draw()
{
    system("clear");

    for (int i=0; i<width+2; i++) //felső fal
        printf("#");
   	printf("\n");

    for(int i=0; i<y; i++) //labdaig kitölt
    {
    		printf("#");
                for(int j=0; j<width; j++) 
                		printf(" ");
                
            printf("#");
            printf("\n");
    }
	
	//---a labda sora---
	printf("#");
	    for (int i=0; i<x; i++)  //labda előtti sor
        	printf(" ");
	printf("O");            //labda

    for (int i=x; i<width-1; i++) //labda utáni sor
        printf(" ");
    printf("#");
    printf("\n");


    for (int i=y; i<height; i++) //labdától aljáig kitölt
    {
    	printf("#");
        for (int j=0; j<width; j++)
        	printf(" ");
    	printf("#");
    	printf("\n");
	}

    for (int i=0; i<width+2; i++) printf("#"); //also fal
    printf("\n");


}


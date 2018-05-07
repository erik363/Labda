import java.lang.Runtime;
class Labda {
    static int width=50;
    static int height=20;
    static int x=30, y=15, n=1, m=1;
    static int[] tombX=new int[50];
    static int[] tombY=new int[20];

    public static void main(String[] args) {

        for (int i=0; i<50; i++){
            tombX[i]=1;
        }
      	for (int i=0; i<20; i++){
                  tombY[i]=1;
              }
        tombX[0]=-1;
	tombX[width-1]=-1;
	tombY[0]=-1;
	tombY[height-1]=-1;

        while (true){
        Draw();
        Logic();
        try{
          Thread.sleep(100);
        }
        catch(Exception e)
        {
          System.out.println("Error");
        }

        //usleep(40000);
    }
  }

  public static void Logic() {
      x=x+n;
      y=y+m;
      n=n*tombX[x];
      m=m*tombY[y];
  }

  public static void clrscr(){
      //Clears Screen in java
      try {
          if (System.getProperty("os.name").contains("Windows"))
              new ProcessBuilder("cmd", "/c", "cls").inheritIO().start().waitFor();
          else
              Runtime.getRuntime().exec("clear");
      } catch (Exception e) {}
  }

    public static void Draw() {
      try{
        clrscr();
      }
      catch(Exception e)
      {
        System.out.println("RuntimeError");
      }


    for (int i=0; i<width+2; i++) { //felső fal
        System.out.print("#");
    }
   	System.out.println();
    for(int i=0; i<y; i++) //labdaig kitölt
    {
    		System.out.print("#");
                for(int j=0; j<width; j++) {
                    System.out.print(" ");
                }
            System.out.print("#");
            System.out.println();
    }
	//---a labda sora---
	System.out.print("#");
	    for (int i=0; i<x; i++){  //labda előtti sor
        System.out.print(" ");
      }

	System.out.print("0");            //labda

  for (int i=x; i<width-1; i++) //labda utáni sor
  System.out.print(" ");
  System.out.print("#");
  System.out.println();


    for (int i=y; i<height-1; i++) //labdától aljáig kitölt
    {
        System.out.print("#");
        for (int j=0; j<width; j++)
            System.out.print(" ");
        System.out.print("#");
        System.out.println();
    }

    for (int i=0; i<width+2; i++){
    System.out.print("#"); //also fal

  }
  System.out.println();

    }
}

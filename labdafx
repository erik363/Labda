package Labdaifnelkul;

import javax.swing.JPanel;
import javax.swing.JFrame;
import java.awt.*;

public class JavaFXSwingApplication1 extends JPanel { 
   int width=800, higth=600;
   int x=width/2,y=higth/2;
   int n=1,m=1;
   int[] ablakx=new int[width];
   int[] ablaky=new int[higth];
    private void move(){
    x+=n;
    y+=m;
    n*=ablakx[x];
    m*=ablaky[y];
    }
    
    @Override
    public void paint(Graphics g){
        super.paint(g);
        g.fillOval(x,y,50,50);
    }
    
    public static void main(String[] args) throws InterruptedException{
    JFrame frame=new JFrame("Labda if nélkül");
    JavaFXSwingApplication1 app=new JavaFXSwingApplication1();
    frame.add(app);
    frame.setSize(app.width,app.higth);
    frame.setVisible(true);
    frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
    
    for(int i=0;i<app.width;i++){
     app.ablakx[i]=1;
    }
     for(int i=0;i<app.higth;i++){
     app.ablaky[i]=1;
    }
    app.ablakx[0]=-1;
    app.ablakx[(app.width)-50]=-1;
    app.ablaky[0]=-1;
    app.ablaky[(app.higth)-50]=-1;
   
    while(true){
    app.move();
    app.repaint();
    Thread.sleep(10);
    }
    }
}

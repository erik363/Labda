/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package valtozocsere;

/**
 *
 * @author dobi
 */
public class Valtozocsere {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        System.out.println("Az eredeti változók");
        int x = 5;
        int y = 4;
        System.out.println("x=" + x + " y=" + y);
        System.out.println("Csere szorzással:");
        x=x*y;
        y=x/y;
        x=x/y;
        System.out.println("x=" + x + " y=" + y);
        System.out.println("Visszacsere összeadással:");
        x=x+y;
        y=x-y;
        x=x-y;
        System.out.println("x=" + x + " y=" + y);
        System.out.println("Csere exorral:");
        x=x^y;
        y=x^y;
        x=x^y;
        System.out.println("x=" + x + " y=" + y);
    }
    
}

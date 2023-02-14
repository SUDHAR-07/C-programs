package tictactoe;
import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner my = new Scanner(System.in);
        System.out.print("Enter cells");
        String a = my.next();
        System.out.println("---------"); 
        System.out.println("| " + a.charAt(0) + " " + a.charAt(1) + " " + a.charAt(2) + " |");
        System.out.println("| " + a.charAt(3) + " " + a.charAt(4) + " " + a.charAt(5) + " |");
        System.out.println("| " + a.charAt(6) + " " + a.charAt(7) + " " + a.charAt(8) + " |"); 
        System.out.println("---------"); 
        int[][] ar = new int[3][3];
        int c = 0;
        for (int  i = 0; i < 3; i++) {
            for (int j=  0; j < 3; j++) {
                ar[i][j] = a.charAt(c);
                c++;
            }
        }
        int x = 0;
        int o = 0;
        // int xrow = 0;
        // int orow = 0;
        // int xcol = 0;
        // int ocol = 0;
        // int xdia = 0;
        // int odia = 0;
        int xno = 0;
        int ono = 0;
        int g = 0;
        int f = 0;
        for (int  i = 0; i < 3; i++) {
            for (int j=  0; j < 3; j++) {
                if (ar[i][j] == 88) {
                    xno = xno + 1;
                } else if (ar[i][j] == 79) {
                    ono = ono + 1;
                }
                if(ar[i][j] == 88 || ar[i][j] == 79){
                    g = g + 1;
                }
                if(g == 3) {
                   f = 1; 
                }
            }
            g = 0;
        }
        for (int i = 0; i < 3; i++) {
            if (ar[i][0] + ar[i][1] + ar[i][2] == 264) {
                x = x + 1;
            } else if (ar[i][0] + ar[i][1] + ar[i][2] == 237) { 
                o = o + 1;
            }
        }
        for (int j = 0; j < 3; j++) {
            if (ar[0][j] + ar[1][j] + ar[2][j] == 264) {
                x = x + 1;
            } else if (ar[0][j] + ar[1][j] + ar[2][j] == 237) { 
                o = o + 1;
            }
        }
        if (ar[0][0] + ar[1][1] + ar[2][2] == 264){
            x = x + 1;
        } else if (ar[0][0] + ar[1][1] + ar[2][2] == 237) {
            o = o + 1;
        }
        if (ar[0][2] + ar[1][1] + ar[2][0] == 264){
            x = x + 1;
        } else if (ar[0][2] + ar[1][1] + ar[2][0] == 237) {
            o = o + 1;
        }
        // int x = xrow + xcol + xdia;
        // int o = orow + ocol + odia;
        if (x > o) {
            System.out.println("X wins");
        } else if (o > x) {
            System.out.println("O wins");
        } else if (xno + ono == 9) {
            System.out.println("Draw");
        } else if (x + o == 0 && xno + ono < 9 && f==1) {
            System.out.println("Game not finished");
        } else {
            System.out.println("Impossible");
        }
        // write your code here
    }
}

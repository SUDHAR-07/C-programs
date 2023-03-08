/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
import java.util.*;

public class Main
{
	public static void main(String[] args) {
// 		System.out.println("Hello World");
        Scanner susan = new Scanner(System.in);
        String a = susan.next();
        int c = 0;
        for(int i = 0;i < a.length();i++){
            c *= 26;
            c += (int)(a.charAt(i)- 'A' + 1);
        }
        System.out.println(c);
	}
}


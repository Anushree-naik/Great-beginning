import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {
	
    public static void main(String[] args) {
        int i = 4;
        double d = 4.0;
        String s = "HackerRank ";
		
        Scanner scan = new Scanner(System.in);
        //Init
        int i1;
        double d1;
        String s1;
        
        //Reading input
        i1= scan.nextInt();
        d1= scan.nextDouble();
        
        scan.nextLine();
        s1= scan.nextLine();

        //Prinitng output
        System.out.println(i+i1);
        System.out.println(d+d1);    
        System.out.println(s+s1);
        scan.close();
    }
}

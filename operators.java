import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution 
{

    public static void main(String[] args) 
    {
        Scanner in = new Scanner(System.in);
        double mealCost = in.nextDouble();
        int tipPercent = in.nextInt();
        int taxPercent = in.nextInt();
       
        double tip = (tipPercent * mealCost)/100;
        
        double tax = (taxPercent * mealCost)/100;
       
        double totalCost = mealCost + tip + tax ;
 
        int roundedTotal = (int) Math.round(totalCost);
        
        System.out.println("The total meal cost is " + roundedTotal + " dollars.");
        
        in.close();
    }
}

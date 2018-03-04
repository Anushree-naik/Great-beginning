#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int i = 4;
    double d = 4.0;
    char s[] = "HackerRank ";
      
    int i1;
    double d1;
    char s1[1000];
    // Declare second integer, double, and String variables.
    
    scanf("%d%lf", &i1,&d1);
    getchar();
    scanf("%[^\n]s",s1);
    // Read and save an integer, double, and String to your variables.
    printf("%d\n%.1lf\n",(i+i1),(d+d1));
    printf("%s%s",s,s1);
    
    // Concatenate and print the String variables on a new line
    
    return 0;
}
    

#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    float totalCost=0;
    float tip,tax,mealCost;
    scanf("%f%f%f",&tip,&tax,&mealCost);
    
    tip=mealCost*tip/100;
    tax=mealCost*tax/100;
    totalCost= tip+tax+mealCost;
    
    printf("The total meal cost is %d dollars.", (int)round(totalCost));
    return 0;
}

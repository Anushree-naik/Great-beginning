#include <bits/stdc++.h>

using namespace std;

int main() {
    float totalCost=0;
    float mealCost, tipPercent, taxPercent;
    cin >> mealCost >> tipPercent >> taxPercent ;
    
    tipPercent = mealCost*tipPercent/100;
    taxPercent = mealCost*taxPercent/100;
    
    totalCost = mealCost+tipPercent+taxPercent;
    cout<< "The total meal cost is " << round(totalCost) << " dollars." ;
    
    return 0;
}

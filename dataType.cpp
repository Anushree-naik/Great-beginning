#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() 
{
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";
    
    int i1;
    double d1;
    string s1;
    // Declare second integer, double, and String variables.
    
    cin >> i1;
    cin >> d1;
    cin.get();
    getline(cin, s1);
    // Read and save an integer, double, and String to your variables.
    cout << i+i1 << endl;
    // Print the sum of both integer variables on a new line.
    cout << std::fixed << std::setprecision(1)<< d+d1 << endl;
    // Print the sum of the double variables on a new line.
    cout << s << s1;
    // Concatenate and print the String variables on a new line
    
    return 0;
}
    

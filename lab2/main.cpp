#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;
int f(float n, bool isRoundedTo100 = false) {
    int roundedValue;
    if (isRoundedTo100) {
        roundedValue = ((n + 50) / 100) * 100;
    }
    else {
        roundedValue = round (n); 
    }
    return roundedValue;
}
void swapByReference(int& m, int& n) {
    int temp = m;
    m = n;
    n = temp;
}
int main()
{
    float n;
    
    
    int a, b;
    cout << "Enter two numbers n: " << endl;
    cin >> n;
    cout << "Enter two numbers A & B" << endl;
    cin >> a;
    cin >> b;

    cout << "Value of A before swapping: " << a << endl;
    cout << "Value of B before swapping: " << b << endl;
     
    int roundedValue1 = f(n);          
    int roundedValue2 = f(n, true);
     
        
    swapByReference(a, b);
    
   
    cout << "Rounded to nearest integer: " << roundedValue1 << endl;
    cout << "Rounded to nearest multiple of 100: " << roundedValue2 << endl;



    return 0;
}
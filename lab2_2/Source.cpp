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
        roundedValue = round(n);
    }
    return roundedValue;
}

int main()
{
    float n;


  
    cout << "Enter two numbers n: " << endl;
    cin >> n;
    

    
    int roundedValue1 = f(n);
    int roundedValue2 = f(n, true);


    


    cout << "Rounded to nearest integer: " << roundedValue1 << endl;
    cout << "Rounded to nearest multiple of 100: " << roundedValue2 << endl;



    return 0;
}
//Write a program to generate the Fibonacci series up to a given number.
#include <iostream>
using namespace std;

int main(){
    int limit;
    cout << "Enter the Limit: ";
    cin >> limit;

    int a=0, b=1;

    cout << "Fibonacci series: ";

    for (int i=0; i <=limit; i++) {
        cout << a << " ";
        int c=a+b;
        a=b; //changing the value to previous one
        b=c;
    }
    return 0;
}
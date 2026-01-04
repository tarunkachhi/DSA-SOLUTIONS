//Finding the Factorial of a Number
#include <iostream>
using namespace std;

int main(){
    int num=5, ans=1;

    for (int i=num; i>0; i--)
    {
        ans *= i;
    }
    cout << "The Factorial of given number: "<< ans ;
}
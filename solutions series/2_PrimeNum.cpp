// Checking for Prime Numbers
#include <iostream>
using namespace std;

int main(){
    int num =9;
    
    bool isPrime =true;

    if (num<=1){
        isPrime = false;
    } else {
        for (int i = 2; num % i==0; i++){
            //
            isPrime = false;
            break;
        } 
    }
    
    if (isPrime)
    {
        cout << num << " is a Prime Number";
    } else {
        cout << num << " is not a Prime Number";
    }
    return 0;
}
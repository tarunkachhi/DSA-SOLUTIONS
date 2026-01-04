//Write a program to calculate the sum of digits of a number.
#include <iostream>
using namespace std;

int main(){
    int num = 12345, sum=0;
    int temp = num, digit;

    while (temp > 0){
        digit = temp %10;
        sum += digit;
        temp/=10;
    }
    cout<< "The Sum of Digits is: " << sum ;
    return 0;
}
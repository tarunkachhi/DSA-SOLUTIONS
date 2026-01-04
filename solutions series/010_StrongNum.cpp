#include <iostream>
using namespace std;

int factorial(int num){
    int ans=1;
    for (int i=num; i>0; i--){
       ans *= i;
    }
    return ans;
}
int main(){
    int num=145;
    int temp,digit,sum=0;
    temp=num;

    while (temp>0) {
        digit = temp%10;
       sum = sum + factorial(digit);
       temp /=10;
    }
    if (num==temp) {
        cout << "The given number is Strong Number";
    } else
        cout << "The given number is not Strong";
    
    return 0;
}
// Validating Leap Years
#include <iostream>
using namespace std;

int main(){
    int year = 2024;    //Initialising the year
        //checking if the year is divisible by 400 or ( divisible by 4 and not divisible by 100)
    if ((year % 400 ==0) || ((year % 4 ==0)&&(year % 100))) {
        cout << "Year is Leap Year\n";
    } else {
        cout << "Year is not a Leap Year";
    }
    return 0;
}
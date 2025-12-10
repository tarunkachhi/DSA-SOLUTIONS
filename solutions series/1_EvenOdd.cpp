// Determining Even/Odd Numbers
#include <iostream>
using namespace std;

int main(){
    int num = 5; // initialising the number

    if (num%2==0) // checking the number is divisible by 2 or not
    {
        cout << "The given Number is Even" << endl; // if yes then print this
    } else {
        cout << "The given Number is Odd"; // if not then print this
    }
    return 0;
}
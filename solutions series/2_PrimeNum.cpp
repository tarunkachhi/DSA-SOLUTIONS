// Checking for Prime Numbers
#include <iostream>
using namespace std;

int main(){
    int num = 5 ; //Initialising number
    
    bool isPrime =true; //Taking Prime number as TRUE (boolean)

    if (num<=1){
        isPrime = false; //Giving value false if number is less than 1 or equal to 1
    } else {            //Checking the number between 2 to that number
        for (int i = 2; i<num ; i++){
            if (num%i==0) {
                isPrime=false;
                break;
            }
        } 
    }
    
    if (isPrime) {  //if ans is true 
        cout << num << " is a Prime Number";
    } else {    //if ans is false
        cout << num << " is not a Prime Number";
    }
    return 0;
}
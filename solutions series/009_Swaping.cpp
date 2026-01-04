#include <iostream>
using namespace std;

int main(){
    int a=4;
    int b=8;
    //With Third variable
    int temp;
    cout<< "BEFORE\na = " << a << " b = " << b << endl;
    temp=a;
    a=b;
    b=temp;
    cout<< "AFTER\na = " << a << " b = "<< b << endl;

    //Without Third variable
    cout<< "BEFORE\na = " << a << " b = " << b << endl;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<< "AFTER\na = " << a << " b = "<< b << endl;
    return 0;
}

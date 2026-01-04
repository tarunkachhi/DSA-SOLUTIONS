//Write a program to check if a string or number is a palindrome.
#include <iostream>
using namespace std;

// Check number palindrome
bool isNumberPalindrome(int n) {
    int original = n, reversed = 0;

    while(n != 0) {
        int digit = n % 10;
        reversed = reversed * 10 + digit;
        n /= 10;
    }
    return original == reversed;
}

// Check string palindrome
bool isStringPalindrome(string s) {
    int left = 0, right = s.length() - 1;

    while(left < right) {
        if(s[left] != s[right])
            return false;
        left++;
        right--;
    }
    return true;
}

int main() {

    // For number
    int num;
    cout << "Enter a number: ";
    cin >> num;

    // For string
    string str;
    cout << "Enter a string: ";
    cin >> str;

    cout << "\n--- Results ---\n";

    // Number result
    if(isNumberPalindrome(num))
        cout << num << " is a Palindrome Number.\n";
    else
        cout << num << " is NOT a Palindrome Number.\n";

    // String result
    if(isStringPalindrome(str))
        cout << "\"" << str << "\" is a Palindrome String.\n";
    else
        cout << "\"" << str << "\" is NOT a Palindrome String.\n";

    return 0;
}
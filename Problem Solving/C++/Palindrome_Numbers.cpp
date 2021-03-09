// A palindromic number is a number (such as 626) that remains the same when its digits are reversed.
// Write a function that returns true if a given number is a palindrome, and false, if it is not.
// Complete the given function, so that the code in main works and results in the expected output.

// Sample Input:
// 13431

// Sample Output:
// 13431 is a palindrome
// To check if a number is palindrome, you need to reverse it and compare with the original one.

#include <iostream>
using namespace std;

int reverse(int n) {
    int rem = 0, reverse = 0;

    while(n != 0) {
        rem = n % 10;

        reverse = (reverse * 10) + rem;

        n /= 10;
    }
    
    return reverse;
}

bool isPalindrome(int x) {
    if(reverse(x) == x)
        return true;

    return false;    
}

int main() {
    int n;
    cin >>n;
    
    if(isPalindrome(n)) {
        cout <<n<<" is a palindrome";
    }
    else {
        cout << n<<" is NOT a palindrome";
    }
    return 0;
}
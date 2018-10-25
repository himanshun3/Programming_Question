#include<iostream>
#include <string.h>
using namespace std;
void isPalindrome(char str[]) 
{ 
    int l = 0; 
    int h = strlen(str) - 1; 
    while (h > l) 
    { 
        if (str[l++] != str[h--]) 
        { 
            cout<<str<<" is not a palindrome "<<endl; 
            return; 
        } 
    } 
    cout<<str<<" is a palindrome "<<endl; 
} 
int main() 
{ 
    isPalindrome("abba"); 
    isPalindrome("abbccbba"); 
    isPalindrome("geeks"); 
    return 0; 
}
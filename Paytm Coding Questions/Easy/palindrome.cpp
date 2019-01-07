#include<iostream>
#include<string.h>
using namespace std;
void ispalindrome(char str[]){
    int l=0;
    int h=strlen(str)-1;
    while(h>l){
        if(str[l++]!=str[h--]){
            cout<<str<<" is not a palindrome "<<endl;
            return;
        }
    }
    cout<<str<<" is a palindrome "<<endl;
}
int main(){
    ispalindrome("abba");
    ispalindrome("abbbbac");
    return 0;
}
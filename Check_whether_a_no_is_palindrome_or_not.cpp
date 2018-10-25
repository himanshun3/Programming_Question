#include<iostream>
using namespace std;
int main(){
    int num=121;
    int n=num;
    int r=0;
    int digit;
    while(num!=0){
        digit=num%10;
        r=(r*10)+digit;
        num=num/10;
    }
    if(n==r){
        cout<<"It is a palindrome ";
    }
    else{
        cout<<"It is not a palindrome ";
    }
    return 0;
}
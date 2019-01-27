#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void roman(int n){
    string normal[]={"","I","II","III","IV","V","VI","VII","VIII","IX" };
    string ones[]={"","X","XX","XXX","XL","L","LX","LXX","LXXX","XC"};
    string tens[]={"","C","CC","CCC","CD","D","DC","DCC","DCCC","CM"};
    string thousands[]={"","M","MM","MMM","MMMM"};
    string s1=thousands[n/1000]+tens[((n%1000)/100)]+ones[((n%1000)%100)/10]+normal[((((n%1000)%100)%10))/1];
    cout<<s1;
}
int main(){
    roman(330);
    return 0;
}
#include<iostream>
using namespace std;
int noofsubstrings(string str){
    int n=str.length();
    int ans= n*(n+1)/2;
    return ans+1;
}
int main(){
    string str="abcd";
    cout<<noofsubstrings(str);
    return 0;
}
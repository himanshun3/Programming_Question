#include<iostream>
#include<string.h>
using namespace std;
bool issubsequence(char a[],char b[],int m,int n){
    if(m==0){
        return true;
    }
    if(n==0){
        return false;
    }
    if(a[m-1]==b[n-1]){
        return issubsequence(a,b,m-1,n-1);
    }
    return issubsequence(a,b,m,n-1);
}
int main(){
    char a[]="gksfrgks";
    char b[]="geeksforgeeks";
    int m=strlen(a);
    int n=strlen(b);
    if(issubsequence(a,b,m,n)){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
    return 0;
}
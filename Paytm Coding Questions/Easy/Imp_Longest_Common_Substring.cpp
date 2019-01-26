#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int max(int a,int b){
    return (a>b)? a:b;
}
int lcs(char *x,char *y,int m,int n){
    int L[m+1][n+1];
    int i,j;
    for(i=0;i<=m;i++){
        for(j=0;j<=n;j++){
            if(i==0 || j==0){
                L[i][j]=0;
            }
            else if(x[i-1]==y[j-1]){
                L[i][j]=L[i-1][j-1]+1;
            }
            else{
                L[i][j]=max(L[i-1][j],L[i][j-1]);
            }
        }
    }
    return L[m][n];
}
int main(){
    int T;
    cin>>T;
    int A,B;
    while(T--){
        cin>>A>>B;
        char str1[A];
        char str2[B];
        cin>>str1;
        cin>>str2;
        cout<<lcs(str1,str2,A,B)<<endl;
    }
    return 0;
}
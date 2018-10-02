#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void naivesearch(char *txt,char *pat){
    int m=strlen(txt);
    int n=strlen(pat);
    int i,j;
    for(i=0;i<=m-n;i++){
        for(j=0;j<n;j++){
            if(txt[i+j]!=pat[j]){
                break;
            }
        }
        if(j==n){
                cout<<"Pattern found at location "<<i<<endl;
            }
    }
}
int main(){
    char txt[]="AABAACAADAABAAABAA";
    char pat[]="AABA";
    naivesearch(txt,pat);
    return 0;
}
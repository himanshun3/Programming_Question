#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool givenbase(string str,int base){
    if(base>16){
        return false;
    }
    else if(base<=10){
        for(int i=0;i<str.length();i++){
            if(!(str[i]>='0' && str[i]<=('0'+base))){
                return false;
            }
        }
    }
    else{
        for(int i=0;i<str.length();i++){
            if(!((str[i]>='0' && str[i]<=('0'+base))||(str[i]>'A' && str[i]<=('A'+base-10)))){
                return false;
            }
        }
    }
    return true;
}
int main(){
    string str="0101";
    int base=2;
    int ans=givenbase(str,base);
    if(ans==1){
        cout<<"Yes! The string "<<str<<" belongs to the base "<<base<<endl;
    }
    else{
        cout<<"No! The string "<<str<<" does not belongs to the base "<<base<<endl;
    }
    return 0;   
}
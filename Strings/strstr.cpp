#include<iostream>
#include<string.h>
using namespace std;
int main(){
    char str1[]="Geeksforgeeks";
    char str2[]="for";
    char *p;
    p=strstr(str1,str2);
    if(p){
        cout<<"String Found"<<endl;
        cout<<" First occurance of "<<str2<<" in "<<str1<<" is "<<p<<endl;
    }
    else{
        cout<<"String not Found";
    }
    return 0;
}
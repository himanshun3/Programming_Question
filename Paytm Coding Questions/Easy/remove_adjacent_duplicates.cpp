#include<iostream>
#include<string.h>
using namespace std;
char *removedup(char *str){
    int len=strlen(str);
    int i=0;
    int k=0;
    for(int i=1;i<len;i++){
        if(str[i-1]!=str[i]){
            str[k++]=str[i-1];
        }
        else{
            while(str[i-1]==str[i]){
                i++;
            }
        }
    }
    str[k++]=str[i-1];
    str[k]='\0';
    return str;
}
int main(){
    char str[]="geeksforgeek";
    cout<<removedup(str);
    return 0;
}
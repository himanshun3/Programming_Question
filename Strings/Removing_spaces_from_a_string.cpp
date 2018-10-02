#include<iostream>
using namespace std;
char *removespaces(char *str){
    int i=0;
    int j=0;
    while(str[i]){
        if(str[i]!=' '){
        str[j++]=str[i];
        }
        i++;
    }
    str[j]='\0';
    return str;
}
int main(){
    char str[]="ge e ks";
    cout<<removespaces(str);
    return 0;
}
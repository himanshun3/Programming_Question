#include <iostream>
#include<bits/stdc++.h>
using namespace std;
bool vowel(char c){
    c=tolower(c);
    if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u'){
        return true;
    }
    return false;
}
void reverse(string str){
   int l=str.length();
   char temp;
   for(int i=0,j=l-1;i<j;){
       if(vowel(str[i]) && vowel(str[j])){
           temp=str[i];
           str[i]=str[j];
           str[j]=temp;
           i++;
           j--;
       }
       if(!vowel(str[i])){
           i++;
       }
       if(!vowel(str[j])){
           j--;
       }
   }
    cout<<str<<endl;
    return;
}


int main() {
	int t;
	cin>>t;
	string str;
	while(t--){
	    cin>>str;
	    reverse(str);
	}
	return 0;
}
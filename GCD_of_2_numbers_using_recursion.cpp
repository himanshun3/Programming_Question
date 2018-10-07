#include<iostream>
using namespace std;
int GCD(int x,int y){
    int rem=x%y;
    if(rem==0){
        return y;
    }
    else{
        return GCD(y,rem);
    }
}
int main(){
    int m=8,n=12;
    cout<<GCD(m,n);
    return 0;
}
#include<iostream>
using namespace std;
int count_num_finger(int n){
    int r=n%8;
    if(r==1){
        return r;
    }
    if(r==2 || r==0){
        return 2;
    }
    if(r==3 || r==7){
        return 3;
    }
    if(r==4 || r==6){
        return 4;
    }
    if(r==5){
        return r;
    }
}
int main(){
    int n=30;
    cout<<count_num_finger(n);
    return 0;
}

#include<iostream>
using namespace std;
int main(){
    int a =5;int b=4;
    cout<<"values of a and b before swapping: "<<a<<" "<<b<<endl;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"Values of a and b after swapping: "<<a<<" "<<b;
    return 0;
}
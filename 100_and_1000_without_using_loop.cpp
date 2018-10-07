#include<iostream>
using namespace std;
class A{
    public:
    static int a;
    A(){
        while(a<1000){
            cout<<a;
            a++;
        }
    }
};
int A::a=100;
int main(){
    int N=900;
    A obj[N];
    return 0;
}
#include<iostream>
using namespace std;
class Print{
    public:
    Print(){
        cout<<"Hello World! "<<endl;
    }
};
int main(){
    int n=5;
    Print p[5];
    return 0;
}
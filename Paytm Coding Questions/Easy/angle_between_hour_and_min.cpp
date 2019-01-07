#include<iostream>
using namespace std;
void findangle(int h,int m){
    if(h==12){
        h=0;
    }
    if(m==60){
        m=0;
    }
    int hour_angle=h*30+m*0.5;
    int min_angle=m*6;
    int angle=abs(hour_angle-min_angle);
    angle=min(angle,360-angle);
    cout<<angle;
}
int main(){
    int h,m;
    cout<<"Enter the hour "<<endl;
    cin>>h;
    cout<<"Enter the minutes "<<endl;
    cin>>m;
    findangle(h,m);
    return 0;
}
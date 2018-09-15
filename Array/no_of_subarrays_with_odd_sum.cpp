#include<iostream>
using namespace std;
int countsubarray(int arr[],int n){
    int result=0;
    for(int i=0;i<n;i++){
        int val=0;
        for(int j=i;j<n;j++){
            val=val+arr[j];
            if(val%2!=0){
                result++;
            }
        }
    }
    return result;
}
int main(){
    int arr[]={5,4,4,5,1,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<countsubarray(arr,n);
    return 0;
}

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int fib(int n) 
{ 
  int fibo[n+1]; 
  fibo[0]=0; 
  fibo[1]=1;  
  for (int i=2;i<=n;i++) 
      fibo[i]=fibo[i-1] + fibo[i-2]; 
  
  return fibo[n]; 
} 
   
int main () 
{ 
  int n=20; 
  cout<<"Fibonacci number is "<< fib(n); 
  return 0; 
}
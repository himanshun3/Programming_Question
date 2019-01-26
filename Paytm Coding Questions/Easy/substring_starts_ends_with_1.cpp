#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    string str;
	    cin>>str;
	    int c=0;
	    for(int i=0;i<n;i++){
	        if(str[i]=='1'){
	            c++;
	        }
	    }
	    cout<<(c*(c-1))/2<<endl;;
	}
	return 0;
}
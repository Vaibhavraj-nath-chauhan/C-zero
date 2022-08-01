#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	int a,b,c;
	while(t--){
	    cin>>a>>b>>c;
	    if(a%b==0){
	        cout<<-1<<endl;
	    }
        else{
	        while(1){
	            if(c%a==0 && c%b!=0){
	                cout<<c<<endl;
	                break;
	            }
	            c++;
	        }
	    }
	}
	return 0;
}


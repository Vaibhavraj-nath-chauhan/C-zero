#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	int x;
	int count =0;
	while(t--){
	    cin>>x;
	    while(x){
	        int rem = x%10;
	        if(rem==4){
	            count++;
	        }
	        x = x/10;
	    }
	    cout<<count<<endl;
	    count =0;
	}
	return 0;
}


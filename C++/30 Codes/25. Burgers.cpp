#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	int a,b;
	while(t--){
	    cin>>a>>b;
	    if(a>b) cout<<b<<endl;
	    else cout<<a<<endl;
	}
	return 0;
}


#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,n,k,x,y;
	int amout =0;
	cin>>t;
	while(t--){
	    cin>>n>>k>>x>>y;
	    amout = k*x;
	    n = n-k;
	    if(x>y){
	        amout+=n*y;
	    }
	    else{
	        amout+=n*x;
	    }
	    cout<<amout<<endl;
	}
	return 0;
}


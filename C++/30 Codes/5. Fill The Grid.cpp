#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	int n,m;
	while(t--){
	    cin>>n>>m;
	    int x,y;
	    x = n%2;
	    y = m%2;
	    if(x && y){
	        cout<<n+m-1<<endl;
	    }
	    else{
	        cout<<n*y+x*m<<endl;
	    }
	}
	return 0;
}


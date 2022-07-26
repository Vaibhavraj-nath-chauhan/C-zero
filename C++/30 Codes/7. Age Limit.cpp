#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	int x,y,a;
	while(t--){
	    cin>>x>>y>>a;
	    if(a>=x && a<y){
	        cout<<"YES";
	    }else{
	        cout<<"No";
	    }
	    cout<<endl;
	}
	return 0;
}


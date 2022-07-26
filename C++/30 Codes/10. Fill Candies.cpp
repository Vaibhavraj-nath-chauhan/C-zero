#include <iostream>
#include<math.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	float n,k,m;
	while(t--){
	    cin>>n>>k>>m;
	    cout<<ceil(n/(k*m))<<endl;
	}
	return 0;
}


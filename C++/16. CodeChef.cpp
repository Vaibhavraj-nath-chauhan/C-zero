#include<iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	int n;
	string f,r;
	int count;
	while(t--){
	    count =0;
	    cin>>n>>f>>r;
	    for(int i=0;i<n;i++){
	        if(f[i] != r[i]){
	            count +=1;
	        }
	    }
	    if(count%2==0){
	        cout<<1<<endl;
	    }
	    else{
	        cout<<0<<endl;
	    }
	}
	return 0;
	
}


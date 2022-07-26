#include<iostream>

using namespace std;

int main(){
	
	int weight, height;
	int count =0;
	int t;
	cin>>t;
	while(t--){
		cout<<"Enter Weight-->";
		cin>>weight;
		cout<<"Enter Height-->";
		cin>>height;
		if(height>170 && weight<50){
			count++;
		}
	}
	
	cout<<count;
	return 0;
}

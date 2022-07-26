#include<iostream>

using namespace std;

int main(){
	int n=1;
	int val =n;
	int l,u;
	cin>>l>>u;
	int count=0,sum=0;
	while(1){
		val *=n;
		if(val>u){
			break;
		}
		if(val>=l && val<=u){
			cout<<val<<"--";
			count +=1;
			sum +=val;
		}
		
		n++;
		
	}
	cout<<endl<<count<<"   "<<sum;
}

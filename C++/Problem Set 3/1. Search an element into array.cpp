#include<iostream>
using namespace std;
int main(){
	int arr[10]=[0];
	for(int i=0;i<10;i++){
		cin>>arr[i];
	}
	//elemet to find
	int k = 50;
	//cin>>k;
	for(int i=0;i<10;i++){
		if(arr[i]==k){
			cout<<i+1<<endl;
		}
	}
}

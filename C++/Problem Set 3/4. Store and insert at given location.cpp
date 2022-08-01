#include<iostream>

using namespace std;

int main(){
	int arr[50];
	for(int i=0;i<10;i++) cin>>arr[i];
	for(int i=0;i<10;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	int ele =30;
	//cin>>ele;
	int pos =4;
	for(int i=10;i>=3;i--) arr[i+1]=arr[i];
	//cin>>pos;
	arr[pos-1]=ele;
	for(int i=0;i<11;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	
}

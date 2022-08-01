#include<iostream>
#include<algorithm>

using namespace std;

int main(){
	int arr[50];
	for(int i=0;i<10;i++){
		cin>>arr[i];
	}
	for(int i=0;i<10;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	sort(arr,arr+10);
	for(int i=0;i<10;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	// Shift
	for(int i=10;i>=0;i--) arr[i+1]= arr[i];
	// Enlement to insert
	int i= 1;
	//cin>>i;
	arr[0]= i;
	for(int i=0;i<11;i++){
		cout<<arr[i]<<" ";
	}
}

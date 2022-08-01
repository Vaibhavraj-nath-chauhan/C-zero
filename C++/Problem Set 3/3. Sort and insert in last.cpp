#include<iostream>

using namespace std;

int main(){
	int arr[50] ={0};
	for(int i=0;i<10;i++){
		cin>>arr[i];
	}
	for(int i=0;i<10;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	int i= 1;
	//cin>>i;
	arr[10]= i;
	for(int i=0;i<11;i++){
		cout<<arr[i]<<" ";
	}
}

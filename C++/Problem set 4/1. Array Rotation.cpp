#include<iostream>
using namespace std;
void rotation(int arr[],int d,int n){
	
	for(int i=0;i<d;i++){
		int x =arr[0];
		for(int j=0;j<n-1;j++){
			arr[j] = arr[j+1];
		}
		arr[n-1] = x;
	}
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
}
int main(){
	int n;
	cin>>n;
	int arr[n]={0};
	for(int i =0;i<n;i++){
		cin>>arr[i];
	}
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	int d;
	cin>>d;
	rotation(arr,d,n);
}



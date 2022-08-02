#include<iostream>

using namespace std;


int main(){
	int arr[] = {10,3,5,6,2};
	int n=sizeof(arr)/sizeof(arr[0]);
	int r[n] ={1},l[n]={1};
	int x= 1;
	for(int i=0;i<n-1;i++){
		x *=arr[i];
		r[i+1]= x;
	}
	x = 1;
	l[n-1]=1;
	for(int i=n-1;i>=0;i--){
		x*=arr[i];
		l[i-1]=x;
	}
	for(int i=0;i<n;i++)	{
		cout<<l[i]*r[i]<<" ";
	}
	
}

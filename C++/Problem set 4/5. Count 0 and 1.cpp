#include<iostream>

using namespace std;
int main(){
	int arr[]={1,1,0,1,0,0,1,1,1,0};
	int n =10;
	int count =0;
	for(int i=0;i<n;i++){
		if(arr[i]==0){
			count +=1;
		}
	}
	for(int i=0;i<n;i++){
		if(count){
			cout<<0<<" ";
			count--;
		}
		else cout<<1<<" ";
	}
}

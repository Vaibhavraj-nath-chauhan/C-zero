#include<iostream>
using namespace std;

int arr[] ={10,20,30,40,50,60,70,80};
int main(){
	
	int i= sizeof(arr)/sizeof(arr[0]);
	int left =0;
	int right= i-1;
	int ele =10;
	//cout<<bin_sear(0,i-1,80);
	while(left<=right){
		int mid = (left+right)/2;
		if(arr[mid]==ele){
			cout<<mid;
			break;
		}
		else if(arr[mid]>ele){
			right = mid-1;
		}
		else{
			left =mid+1;
		}	
	}
}

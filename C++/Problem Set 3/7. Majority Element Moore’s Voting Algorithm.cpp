#include<iostream>

using namespace std;

int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	// Checking the max number 
	int votes=0,candi = -1,count =0;
	for(int i=0;i<n;i++){
		if(votes==0){
			candi = arr[i];
			votes =1;
		}
		
		else{
		 if(arr[i]==candi){
			votes++;
		}
		else{
			votes--;
		}
	}
	}
	for(int i=0;i<n;i++){
		if(arr[i]==candi){
			count++;
		}
	}
	if(count >n/2){
		cout<<candi;
	}
	else{
		cout<<-1;
	}
}

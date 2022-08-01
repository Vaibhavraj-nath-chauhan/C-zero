#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	sort(arr,arr+n);
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	int x;
	cin>>x;
	int count =0;
	cout<<endl;
	for(int i =n-1;i>=0;i--){
		if(x>=arr[i]){
			x -= arr[i];
			count +=1;
		}
		if(count ==2){
			break;
		}
		if(x==0){
			break;
		}
	}
	if(count ==2){
		if(x==0){
			cout<<"YES";
		}
		else{
			cout<<"No";
		}
	}
	else{
		cout<<"No";
	}
	
}

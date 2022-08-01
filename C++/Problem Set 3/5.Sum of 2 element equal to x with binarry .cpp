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
	cout<<endl;
	int x;
	cin>>x;
	int l =0;
	int h = sizeof(arr)/sizeof(arr[0])-1;
	int flag =0;
	while(l<h){
		int k = arr[l]+arr[h];
		if(k==x){
			flag=1;
			break;
		}
		else if(k>x){
			h--;
		}
		else{
			l--;
		}
	}
	if(flag==1) cout<<"YES";
	else cout<<"No";
}

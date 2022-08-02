#include<iostream>
#include<vector>
using namespace std;
int main(){
	vector<int> st;
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	st.insert(st.begin(),arr[n-1]);
	int x = arr[n-2];
	for(int i=n-2;i>=0;i--){
		if(x<arr[i]){
			st.insert(st.begin(),x);
			x = arr[i];
		}
	}
	st.insert(st.begin(),x);
	for(int i = 0;i<st.size();i++){
		cout<<st[i]<<" ";
	}
}

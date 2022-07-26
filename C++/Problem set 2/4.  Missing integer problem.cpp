#include<iostream>

using namespace std;

int main(){
	int a;
	cin>>a;
	int n = ((a)*(a+1))/2;
	int sum=0;
	int k;
	for(int i=0;i<a-1;i++){
		cin>>k;
		sum+=k;
	}
	cout<<n-sum;
}

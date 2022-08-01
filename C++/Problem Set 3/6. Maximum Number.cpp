#include<iostream>
using namespace std;
int main(){
	int p[10] ={0};
	int val;
	cin>>val;
	int x;
	while(val--){
		cin>>x;
		while(x){
			int rem = x%10;
			x = x/10;
			p[rem]++;
		}
	}
	for(int i=9;i>=0;i--){
		while(p[i]--){
			cout<<i;
		}
	}
}

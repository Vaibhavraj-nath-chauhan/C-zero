#include<iostream>

using namespace std;

int fact(int n){
	int val =n;
	while(--n){
		val*=n;
	}
	return val;
}

int main(){
	int a,b;
	cin>>a>>b;
	int k;
	k = fact(a)/(fact(b)*fact(a-b));
	cout<<k;
}

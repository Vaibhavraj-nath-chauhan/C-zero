#include<iostream>

using namespace std;

int main(){
	cout<<"Enter a number--> ";
	int a;
	cin>>a;
	
	for(int i=1;i<=10;i++){
		cout<<a<<" X "<<i<<" = "<<a*i<<endl;
	}
}

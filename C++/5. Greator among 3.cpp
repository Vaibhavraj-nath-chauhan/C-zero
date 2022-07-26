#include<iostream>
using namespace std;

int main(){
	int a,b,c;
	cout<<"Enter three values->\n";
	cin>>a>>b>>c;
	cout<<(a>b?a>c?a:c:b>c?b:c);
	
	
	/*
	if(a>b){
		if(a>c){
			cout<<a;
		}
		else{
			cout<<c;
		}
	}
	else if(b>c){
		cout<<b;
	}
	else{
		cout<<c;
	}
	
	
	*/
}

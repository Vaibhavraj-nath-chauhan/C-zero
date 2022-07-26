#include<iostream>

using namespace std;

void p(int a,int b,int c){
	if(a*a == b*b+c*c){
		cout<<"YES";
	}
	else{
		cout<<"No";
	}
}

int main(){
	int a,b,c;
	cin>>a>>b>>c;
	if(a>b && a>c) p(a,b,c);
	else if(b>a && b>c) p(b,a,c);
	else p(c,a,b);
	
	
}

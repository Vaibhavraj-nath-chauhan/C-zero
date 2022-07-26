#include<iostream>
using namespace std;

void hcf(int a,int b){
	int hc =1;
	for(int i=1;i<=a/2;i++){
		if(a%i==0 && b%i==0){
			hc = i;
		}
	}
	if(hc==1){
		cout<<"Number is co-prime";
	}
	else{
		cout<<"Not a co prime nume";
	}
}

int main(){
	
	int a,b;
	cin>>a>>b;
	if(a>b){
		hcf(a,b);
	}
	else{
		hcf(b,a);
	}
	
}

#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int a,sum =0;
	cout<<"Enter a number to check armstrong condtion-> ";
	cin>>a;
	int k = a;
	while(a){	
		sum += pow(a%10,3);
		a = a/10;
	}
	if(sum==k){
		cout<<"Number is armstong";
	}
	else{
		cout<<"Number is not armstong";
	}
}

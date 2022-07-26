#include<iostream>
#include<math.h>
using namespace std;


int main(){
	int a;
	cin>>a;
	int s=0;
	for(int i=1;i<=a;i++){
		s += pow(i,4);
	}
	cout<<s;
	
	
}

#include<iostream>
using namespace std;
int main(){
	int s,l;
	int sm =-9999999;
	while(1){
		cin>>l;
		if(l==-1){
			break;
		}
		if(l>sm){
			s = sm;
			sm = l;		
		}
		else if(s<l){
			s =l;
		}
	}
	cout<<"SEcond largest->"<<s;
}

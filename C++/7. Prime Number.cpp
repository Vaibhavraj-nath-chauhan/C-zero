#include<iostream>
using namespace std;

int main(){
	
	int a,b;
	cout<<"Enter Range of numbers -> ";
	cin>>a;
	int k;
	int count =0;
	if(a==0 ||a==1){
		cout<<a;
	}
	else{
	
		for(int i=2;i<=a;++i){
			k =1;
			for(int j=2;j<i/2+1;++j){
				if(i%j ==0){
					k=0;
					break;
				}
			}
			if(k==1){
				count++;
				cout<<i<<endl;
			}
		}
	}
	cout<<"\n\nNumber of prime numbers-->"<<count;	
}

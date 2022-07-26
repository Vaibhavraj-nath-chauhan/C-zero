#include<iostream>
using namespace std;
int main(){
	int old =0,sum=0,n=0;
	cin>>n;
	while(1){
		old = n;
		cin>>n;
		if(n==-1) break;
		cout<<endl<<old+n<<" "<<endl;
	}
}

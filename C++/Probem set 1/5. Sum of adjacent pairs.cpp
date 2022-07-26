#include<iostream>
using namespace std;
int main(){
	int old =0,sum=0,count=0,n=0;
	while(1){
		old = n;
		cin>>n;
		if(n==-1){
			break;
		}
		count +=1;
		if(count ==2){
			cout<<endl<<old +n<<" "<<endl;
			count =1;
		}
		
		
	}
	
}

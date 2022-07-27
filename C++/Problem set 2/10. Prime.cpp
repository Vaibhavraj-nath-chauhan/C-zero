#include<iostream>
using namespace std;

void prime(int x,int y){
	int count=1,co=0,sum=0;
	for(int i=x+1;i<y;i++){
		count =1;
		for(int j=2;j<i/2+1;j++){
			if(i%j==0){
				count =0;
				break;
			}
		}
		if(count ==1){
			cout<<i<<" ";
			co +=1;
			sum +=i;
		}
	}
	cout<<endl<<co<<" "<<sum;
}

int main(){
	int x,y;
	cin>>x>>y;
	prime(100,200);
		
}

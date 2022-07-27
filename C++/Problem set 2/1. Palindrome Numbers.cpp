#include<iostream>
using namespace std;

void chk_palindrome(int x,int y){
	int count =0,sum=0;
	for(int i=x+1;i<y;i++){
		int temp=i,rev=0;
		int rem;
		while(temp){
			rem = temp%10;
			rev =rev*10 + rem; 
			temp = temp/10;
		}
		if(i==rev){
			sum += i;
			count +=1;
			cout<<" "<<i;
		}
	}
	cout<<endl<<count<<"  "<<sum;
}

int main(){
	int x,y;
	cin>>x>>y;
	int sum=0,count=0;
	chk_palindrome(x,y);
}

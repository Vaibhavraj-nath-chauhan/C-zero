#include<iostream>
using namespace std;
int magic(int x){
	int y =18;
	int rem;
	int sum=0;
	while(x){
		rem =x%10;
		if(rem%2!=0){
			sum+=rem;
		}
		if(sum>18){
			return 18;
		}
		x = x/10;
	}
	if(sum>18){
		return 18;
	}
	else{
		return sum;
	}	
}
int main(){
	int x;
	cin>>x;
	int dic = magic(x);
	cout<<(x*(100-dic))/100;		
}

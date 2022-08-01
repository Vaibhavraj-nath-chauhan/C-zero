#include<iostream>
#include<map>
using namespace std;

int main(){
	map<int ,int> map11;
	// size of n
	int size;
	cin>>size;
	int n = size/2;
	int x;
	int flag=0;
	while(size--){
		cin>>x;
		map11[x]++;
		if(map11[x]>n){
			flag=1;
			break;
		}
	}
	
	if (flag){
		cout<<x<<" "<<map11[x];
	}
	else{
		cout<<"No Element";
	}
}

#include<iostream>
#include<vector>

using namespace std;
int main(){
	
	vector<int> v1{10,20,30,40,100};
	vector<int> v2{50,60,70,80};
	cout<<"Befor Swap-->\n\tVector 1->\n\t\t";
	for(auto it=v1.begin();it!=v1.end();it++){
		cout<<*it<<" ";
	}
	cout<<"\n\n\tVector 2->\n\t\t";
	for(auto it=v2.begin();it!=v2.end();it++){
		cout<<*it<<" ";
	}
	
	//swap
	v1.swap(v2);
	
	cout<<"\n\nAfter Swap-->\n\tVector 1->\n\t\t";
	for(auto it=v1.begin();it!=v1.end();it++){
		cout<<*it<<" ";
	}
	cout<<"\n\n\tVector 2->\n\t\t";
	for(auto it=v2.begin();it!=v2.end();it++){
		cout<<*it<<" ";
	}
	
	
}

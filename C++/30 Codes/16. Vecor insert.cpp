#include<iostream>
#include<vector>
using namespace std;


int main(){
	vector<int> v1{10,30,40,50};
	cout<<"Initial Vecotr->\n\t";
	for(int i=0;i<v1.size();i++){
		cout<<v1[i]<<" ";
	}
	cout<<endl<<endl;
	v1.insert(v1.begin()+1,20);
	cout<<"Inserted Value in Vecotr->\n\t";
	for(int i=0;i<v1.size();i++){
		cout<<v1[i]<<" ";
	}
}

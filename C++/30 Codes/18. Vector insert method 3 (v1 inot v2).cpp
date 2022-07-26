#include<iostream>
#include<vector>
using namespace std;


int main(){
	vector<string> v1{"C","Java"};
	vector<string> v2{"C++","Python"};
	cout<<"Initial Vecotr->\n\t";
	for(int i=0;i<v1.size();i++){
		cout<<v1[i]<<" ";
	}
	cout<<endl<<endl;
	v1.insert(v1.end(),v2.begin(),v2.end());
	cout<<"Inserted Value in Vecotr->\n\t";
	for(int i=0;i<v1.size();i++){
		cout<<v1[i]<<" ";
	}
}

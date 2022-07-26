#include<iostream>
#include<vector>
using namespace std;


int main(){
	vector<string> v1{"C","Java"};
	cout<<"Initial Vecotr->\n\t";
	for(int i=0;i<v1.size();i++){
		cout<<v1[i]<<" ";
	}
	cout<<endl<<endl;
	v1.insert(v1.begin()+1,3,"C");
	cout<<"Inserted Value in Vecotr->\n\t";
	for(int i=0;i<v1.size();i++){
		cout<<v1[i]<<" ";
	}
}

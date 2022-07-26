#include<iostream>
#include<vector>

using namespace std;
int main(){
	vector<int> v1{10,20,30,40};
	cout<<"Before erase -->\n\t";
	for(int i=0;i<v1.size();i++){
		cout<<v1[i]<<" ";
	}
	cout<<endl<<endl;
	// Return 0 for non empty vector and return 1 for empty vector;
	v1.erase(v1.begin()+2);
	cout<<"After erase -->\n\t";
	for(int i=0;i<v1.size();i++){
		cout<<v1[i]<<" ";
	}
}

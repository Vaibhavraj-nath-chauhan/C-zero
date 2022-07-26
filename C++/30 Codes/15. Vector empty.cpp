#include<iostream>
#include<vector>

using namespace std;
int main(){
	vector<int> v1{10,20,30,40};
	vector<int> v2;
	// Return 0 for non empty vector and return 1 for empty vector;
	cout<<v1.empty()<<endl;
	cout<<v2.empty();
}

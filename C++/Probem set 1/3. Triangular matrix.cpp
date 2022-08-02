#include<iostream>
#include<math.h>
using namespace std;


int main(){
	int m=3;
	//cin>>m;
	int arr[m][m]{{1,0,0},{0,1,0},{1,1,2}};
	cout<<endl;
	for(int i=0;i<m;i++){
		for(int j=0;j<m;j++){
			cout<<arr[i][j]<<"    ";
		}
		cout<<endl;
	}
	// Upper 
	int u=1,l=1;
	for(int i=0;i<m;i++){
		
		for(int j=0;j<m-1;j++){
			
			if(i>j){
					if(arr[i][j]!=0){
						u=0;
						break;
				}
			}
		}
	}
	
	// Lower
	for(int i=1;i<m;i++){
		for(int j=1;j<m;j++){
			if(i<j){
				if(arr[i][j]!=0){
					l=0;
					break;
				}
			}
		}
	}

	if(u||l){
		cout<<"YES";
	}
	else cout<<"NO";
		
}

#include<iostream>
#include<math.h>
using namespace std;


int main(){
	int m;
	cin>>m;
	int arr[m][m],upper=0,lower=0;
	for(int i=0;i<m;i++){
		for(int j=0;j<m;j++){
			cin>>arr[i][j];
		}
	}
	cout<<endl;
	for(int i=0;i<m;i++){
		for(int j=0;j<m;j++){
			cout<<arr[i][j]<<"    ";
		}
		cout<<endl;
	}
	// Upper 
	int count =1;
	for(int i=0;i<m;i++){
		
		for(int j=0;j<m-1;j++){
			
			if(i==j){
					if(arr[i+1][j]==0){
						count +=1;
				}
			}
		}
	}
	if(count ==m){
		upper= 1;
	}
	else{
		upper= 0;
	}
	
	// Lower
	count =1;
	for(int i=1;i<m;i++){
		for(int j=1;j<m;j++){
			if(i==j){
				if(arr[i-1][j]==0){
					count +=1;
				}
			}
		}
	}
	if(count ==m){
		lower= 1;
	}
	else{
		 lower= 0;
	}
	if(upper || lower){
		cout<<"YES";
	}
	else cout<<"NO";
		
}

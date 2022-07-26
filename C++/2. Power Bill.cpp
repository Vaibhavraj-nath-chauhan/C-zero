#include<iostream>

using namespace std;
int main(){
	int num,pow;
	float charge;
	cout<<"Enter you ID-->";
	cin>>num;
	cout<<"Enter Your Power Consumption-->";
	cin>>pow;
	if(pow<=200){
		charge = pow*0.50f;
	}
	else if(pow>200 && pow<=400){
		charge = 100 + (pow-200)*0.65f;
		
	}
	else if(pow>400 && pow<=600){
		charge = 230 + (pow-400)*0.85f;
		
	}
	else{
		charge = 390 + (pow-600)*1.00f;
		
	}
	cout<<"You Bill is "<<charge;
}

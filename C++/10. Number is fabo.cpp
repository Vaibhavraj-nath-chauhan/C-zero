
#include<iostream>
using namespace std;

int febo(int n){
    if(n==0) return 0;
    if(n==1) return 1;
    else return febo(n-1)+febo(n-2);
}
int main(){
    int a;
    cin>>a;
    int o =0;
    while(1){
        int k= febo(o);
        if(k==a){
            cout<<"Number found";
            break;
        }
        else if(k>a){
            cout<<"Not in list";
            break;
        }
        o +=1;
    }
}

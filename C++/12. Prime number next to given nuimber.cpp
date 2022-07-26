#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int a=101;
    int count;
    int i=2;
    while(1){
        count =0;
        for(int j=1;j<=i/2;j++){
            if(i%j==0){
                count+=1;
                
            }
            if(count>1){
                break;
            }
        }
        if(a<i && count==1){
            cout<<i<<" " ;
            break;
        }
        i++;
    }
    
    
}

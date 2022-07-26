#include<bits/stdc++.h>
#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    int k= s.length();
    int c=0,sb=0,d=0;
    for(int i=0;i<k;i++){
        if(s[i]>=65 && s[i]<=92 ||s[i]>=97 && s[i]<=122){
            c++;
        }
        if(s[i]>=48 && s[i]<57){
            d++;
        }
        else{
            sb++;
        }
    }
    cout<<c<<" "<<sb<<" "<<d;
    
    
}

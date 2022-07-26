#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    string sc;
    cin>>sc;
    string s="";
    for(int i;i<sc.length();i++){
        if(sc[i]>=48 && sc[i]<=57 || sc[i]==45){
            s +=sc[i]; 
        }
        
        else if(sc[i]==44){
            cout<<s<<endl;
            s ="";
        }
    }
    cout<<s<<endl;
    return 0;
}


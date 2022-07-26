#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int *fun(){
    int k;
    cin>>k;
    int ar[k];
    int *prt;
    for(int j=0;j<k;j++){
        cin>>ar[j];
    }
    prt = ar;
    return prt;
    
}


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,q,k,r,c;
    cin>>n>>q;
    int *arr[n];
    for(int i=0;i<n;i++){
        arr[i] = fun();
        cout<<*(arr[i]+2)<<endl;
    }
    cout<<*(arr[0])<<endl<<endl;
    for(int i=0;i<q;i++){
        cin>>r>>c;
        cout<<*(arr[r]+c)<<endl;
    }
    
    return 0;
}


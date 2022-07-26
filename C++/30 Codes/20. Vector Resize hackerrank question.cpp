#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int a,q;
    cin>>a>>q;
    vector<int> v[a];
    int n;
    for(int i=0;i<a;i++){
        cin>>n;
        v[i].resize(n);
        for(int j=0;j<n;j++){
            cin>>v[i][j];
        }
    }
    int r,c;
    for(int i=0;i<q;i++){
        cin>>r>>c;
        cout<<v[r][c]<<endl;
    }
    return 0;
}


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,q,k,r,c;
    cin>>n>>q;
    int *arr[n];
    for(int i=0;i<n;i++){
        cin>>k;
        int ar[k]={0};
        for(int j=0;j<k;j++){
            cin>>ar[j];
        }
        arr[i] = ar;
        
    }
    for(int i=0;i<q;i++){
    	cin>>r>>c;
    	cout<<*(arr[r]+(c));
	}
    
    return 0;
}


/*
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    // Enter your code here. Read input from STDIN. Print output to STDOUT 
    int n,q,k,r,c;
    cin>>n>>q;
    int *arr[n];
    cout<<n<<endl<<endl;
    for(int i=0;i<n;i++){
        cout<<i<<endl<<endl;
        cin>>k;
        int ar[k];
        for(int j=0;j<k;j++){
            cin>>ar[j];
            cout<<ar[j]<<" ";
        }
        cout<<endl;
        arr[i] = ar;
        
    }
    cout<<*(arr[0]+1)<<endl;
    for(int i=0;i<q;i++){
        cin>>r>>c;
        cout<<*(arr[r]+c)<<endl;
    }
    
    return 0;
}
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class student{
    int age,stadard;
    string fn,ln;
public:
    void get_data(){
        cin>>age>>fn>>ln>>stadard;
    }
    void put_data(){
        cout<<age<<endl;
        cout<<ln<<", "<<fn<<endl;
        cout<<stadard<<endl<<endl;
    }
    void whole(){
        cout<<age<<","<<fn<<","<<ln<<","<<stadard;
    }
};

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    student s;
    s.get_data();
    s.put_data();
    s.whole();
    return 0;
}


#include<bits/stdc++.h>
using namespace std;
int main(){
    int count =11;
    int counts=2*count;
    
    for(int i=1;i<=count;i++){
        for(int spaces=1;spaces<i;spaces++){
            cout<<" ";

        }
        for(int j=1;j<=(counts-(2*i)+1);j++){
            cout<<"*";
        }
        cout<<endl;
    }
}








 
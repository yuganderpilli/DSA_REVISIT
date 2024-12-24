#include<bits/stdc++.h>
using namespace std;
int main(){
    map<int,int> sample;
    int arr[]={1,1,1,2,2,2,2,3};
    int sizes = sizeof(arr)/sizeof(arr[0]);

    for(int i=0;i<sizes;i++){
        sample[arr[i]]++;
    }
int k = sizes/3;
k+=1;

for(auto it:sample){
    if(it.second>k)
    {cout<<it.first<<" "<<it.second;
    cout<<endl;}
}
}

#include<bits/stdc++.h>
using namespace std;
int main(){
       int arr[]={1,1,2,1,1,1,1,3,3,4};
       int sizes= sizeof(arr)/sizeof(arr[0]);
       map<int,int> sample;
       for(int i=0;i<sizes;i++){
            sample[arr[i]]++;
       } 
    for(auto it:sample) cout<<it.first<<" "<<it.second<<endl;

}
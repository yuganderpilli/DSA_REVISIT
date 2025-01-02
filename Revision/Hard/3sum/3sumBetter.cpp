#include<bits/stdc++.h>
using namespace std;
 int main(){
    
    int arr[]={-1,0,1,2,-1,-4};
    int sizes= sizeof(arr)/sizeof(arr[0]);
    set<vector<int>> ans;
    for(int i=0;i<sizes;i++){
        set<int> hashset;
        for(int j=i+1;j<sizes;j++){
            int temp = -(arr[i]+arr[j]);
            if(hashset.find(temp)!=hashset.end()){
                vector<int> sample={arr[i],arr[j],temp};
                sort(sample.begin(),sample.end());
                ans.insert(sample);
            }
            hashset.insert(arr[j]);
        }
    }
 
for(auto it:ans){
    cout<<it[0]<<it[1]<<it[2];
    cout<<endl;
}
 
 }

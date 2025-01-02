#include<bits/stdc++.h>
using namespace std;
 int main(){
    set<vector<int>> ans;
    int arr[]={-1,0,1,2,-1,-4};
    int sizes= sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<sizes-2;i++){
        for(int j=i+1;j<sizes-1;j++){
            for(int k=j+1;k<sizes;k++){
                    if(arr[i]+arr[j]+arr[k]==0){
                        vector<int> temp={arr[i],arr[j],arr[k]};
                        sort(temp.begin(),temp.end());
                        ans.insert(temp);
                    }
                    
            }
        
        }
        
    }
    for(auto it:ans){
        cout<<it[0]<<it[1]<<it[2];
        cout<<endl;
    }

 }
#include<bits/stdc++.h>
using namespace std;
int main(){
     int arr[] = {4, 3, 3, 4, 4, 2, 1, 2, 1, 1};
     int sizes = sizeof(arr)/sizeof(arr[0]);
     int find=9;
     set<vector<int>> ans;
     for(int i=0;i<sizes;i++){
        for(int j=i+1;j<sizes;j++){
            set<long long> hashSet;
            for(int k=j+1;k<sizes;k++){
                    int temp = find-(arr[i]+arr[j]+arr[k]);
                    if(hashSet.find(temp)!=hashSet.end()){
                        vector<int> sample = {arr[i],arr[j],arr[k],temp};
                        sort(sample.begin(),sample.end());
                        
                        ans.insert(sample);
                    }
                    hashSet.insert(arr[k]);
            }
        }
        
     }

    for(auto it:ans){
       cout<<it[0]<<it[1]<<it[2]<<it[3];
       cout<<endl;
    } 
}
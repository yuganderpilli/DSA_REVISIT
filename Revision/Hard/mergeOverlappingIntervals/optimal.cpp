#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<vector<int>> arr={{1, 3}, {8, 10}, {2, 6}, {15, 18}};
    sort(arr.begin(),arr.end());
    vector<vector<int>> ans;
    int sizes = arr.size();
    for(int i=0;i<sizes;i++){
        if(ans.empty() || arr[i][0]>ans.back()[1]) {
            ans.push_back(arr[i]);
        }else{
            ans.back()[1]=max(ans.back()[1],arr[i][i]);
        }
    }
for(auto it: ans){
    cout<<it[0]<<it[1]<<endl;
}
}
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<vector<int>> arr={{1, 3}, {8, 10}, {2, 6}, {15, 18}};
sort(arr.begin(),arr.end());
for(auto it:arr){
    cout<<it[0]<<it[1]<<endl;
}
cout<<endl<<endl;
    
    vector<vector<int>> ans;
    int sizes=arr.size();
    for(int i=0;i<sizes;i++){
        int start = arr[i][0];
        int end = arr[i][1];
        if(!ans.empty() && end<=ans.back()[1]){
            continue;
        }
    for(int j=i+1;j<sizes;j++){
        if(end>=arr[j][0]){
            end=max(end,arr[j][1]);
        }else break;
    }
    ans.push_back({start,end});
    }
for(auto it:ans){
    cout<<it[0]<<it[1]<<endl;
}

}
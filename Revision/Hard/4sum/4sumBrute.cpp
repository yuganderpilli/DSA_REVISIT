#include<bits/stdc++.h>
using namespace std;
int main(){
     int arr[] = {4, 3, 3, 4, 4, 2, 1, 2, 1, 1};
     int sizes = sizeof(arr)/sizeof(arr[0]);
     set<vector<int>> ans;
     for(int i=0;i<sizes;i++){

        for(int j=i+1;j<sizes;j++){
            for(int k=j+1;k<sizes;k++){
                for(int l =k+1;l<sizes;l++){
                    if(arr[i]+arr[j]+arr[k]+arr[l]==9){
                        vector<int> temp={arr[i],arr[j],arr[k],arr[l]};
                        sort(temp.begin(),temp.end());
                        ans.insert(temp);
                    }
                }
            }
        }
     }

    for(auto it:ans){
        cout<<it[0]<<" "<<it[1]<<" "<<it[2]<<" "<<it[3]<<endl;
    } 
}
#include<bits/stdc++.h>
using namespace std;
int main(){
     int arr[] = {4, 3, 3, 4, 4, 2, 1, 2, 1, 1};
     
     int sizes = sizeof(arr)/sizeof(arr[0]);
        sort(arr,arr+sizes);
     int find=9;
     set<vector<int>> ans;
        for(int i=0;i<sizes;i++){
             if (i > 0 && arr[i] == arr[i - 1]) continue;
            for(int j=i+1;j<sizes;j++){
                if(j>i+1 && arr[j]==arr[j-1]) continue;
                int k=j+1;
                int l = sizes-1;
                while(k<l){
                        int sum =arr[i]+arr[j]+arr[k]+arr[l];
                        if(sum>find){
                            l--;
                        }else if(sum<find){
                            k++;
                        }else{
                            vector<int> temp={arr[i],arr[j],arr[k],arr[l]};
                            
                            ans.insert(temp);
                            while (k < l && arr[k] == arr[k +1]) k++;
                    while (k < l && arr[l] == arr[l- 1]) l--;
                        k++;
                        l--;
                        }
                    
                }
            }
        }

    for(auto it:ans){
       cout<<it[0]<<it[1]<<it[2]<<it[3];
       cout<<endl;
    } 
}
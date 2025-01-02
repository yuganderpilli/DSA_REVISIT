#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={-1, 0, 1, 2, -1, -4, -2, -3, 3};
    int sizes= sizeof(arr)/sizeof(arr[0]);
    int find =0;
    sort(arr,arr+sizes);
    set<vector<int> >ans;
    for(auto it:arr) cout<<it<<" ";
    cout<<endl;
    for(int i=0;i<sizes;i++){
        
        if(i!=0 && arr[i]==arr[i-1]) continue;
        int j=i+1;
        int k=sizes-1;
        while(j<k){
            int sum = arr[i]+arr[j]+arr[k];
            if(sum<find){
            j++;
            }else if(sum>find){
                j++;
            }else{
              vector<int> temp = {arr[i],arr[j],arr[k]};
              ans.insert(temp);
                j++;
                k--;
                while(j<k && arr[j]==arr[j-1]) j++;
                while(j>k && arr[k]==arr[k+1]) k--;
                i++;
            }
        }
    }

for(auto it:ans){
    cout<<it[0]<<it[1]<<it[2]<<endl;
}


}
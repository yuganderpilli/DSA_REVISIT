#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={0,1,1,1,0,2,2,0,1,1,0,2};
for(auto it:arr) cout<<it<<" ";
cout<<endl;
    int sizes = sizeof(arr)/sizeof(arr[0]);
    int i=0;
    int j=0;
    int k=sizes-1;
    while(j<=k){
        if(arr[j]==1){
            j++;
        }else if(arr[j]==0){
            swap(arr[i],arr[j]);
            i++;
            j++;
        }else{
            swap(arr[k],arr[j]);
            k--;
        }
    }
for(auto it:arr) cout<<it<<" ";
}
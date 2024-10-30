#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={6,4,32,4,6,2,1,4,6,7,823,5,6,7};
    int sizes= sizeof(arr)/sizeof(arr[0]);
    
    for(int i=0;i<sizes;i++){
        int k = i;
    for(int j=i+1;j<sizes;j++){
        if(arr[k]>arr[j]){
            k=j;
        }
    }
    if(arr[k]!=arr[i]) swap(arr[k],arr[i]);

    }
for(auto it:arr) cout<<it<<" ";
}
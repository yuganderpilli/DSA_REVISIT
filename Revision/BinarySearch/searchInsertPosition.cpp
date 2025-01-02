#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={1,2,34,41,55,65,72,84,112,116,117,118};
    int low = 0;
    int sizes = sizeof(arr)/sizeof(arr[0]);
    int high= sizes-1;
    int ans = sizes;
    int find = 119;
    while(low<=high){
        int mid= (low + ((high-low)/2));
        if(arr[mid]>=find){
            ans= mid;
            high = mid-1;
        }else{
            low = mid+1;
        }        
    }
cout<<ans;

}
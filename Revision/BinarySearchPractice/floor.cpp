#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9,10,12,13,14,15};
    int sizes = sizeof(arr)/sizeof(arr[0]);
    int key = 11;
    // lower bound >=key
    int low = 0;
    int ans =-1;
    int high = sizes-1;
    
    while(low<=high){
       int mid = low  + ((high-low)/2);
       if(arr[mid]<=key){
        ans=mid;
        low = mid+1;
       }else {
        high= mid-1;
       }
    }

    cout<<ans;

}

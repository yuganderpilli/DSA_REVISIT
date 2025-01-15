#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,6,8,9,10,11,12,13};
    int sizes = sizeof(arr)/sizeof(arr[0]);
    int low = 0;
    int high = sizes-1;
    int key = 7;
    int ans = sizes;
    while(low<=high){
        int mid = low+((high-low)/2);
        if(arr[mid]>=key){
            ans= mid;
            high = mid-1;
        }else{
            low=mid+1;
        }
    }
cout<<ans;
}
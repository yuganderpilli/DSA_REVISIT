#include<bits/stdc++.h>
using namespace std;
int main(){
      int arr[]={4,5,6,7,8,9,10,11,12,13,0,1,2};
    int sizes = sizeof(arr)/sizeof(arr[0]);
    int low = 0;
    int high = sizes-1;
    int mins = INT_MAX;
    int idx=0;
    while(low<=high){
        int mid = low+ ((high-low)/2);
        if(arr[low]<=arr[high]){
            if(arr[low]<mins){
                mins= arr[low];
                idx=low;
            }
            break;
        }
        if(arr[low]<=arr[mid]){
             if(arr[low]<mins){
                mins= arr[low];
                idx=low;

            }
            low=mid+1;
        }else{
            high=mid-1;
        }
    }

cout<<idx<<mins;
}
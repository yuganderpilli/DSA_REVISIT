#include<bits/stdc++.h>
using namespace std;
int main(){
 int arr[] = {7, 8, 0, 1, 2, 3, 4, 5, 6};
 int sizes = sizeof(arr)/sizeof(arr[0]);
 int low =0;
 int high = sizes -1;
 int mins= INT_MAX;
 while(low<=high){
        int mid = (high+low)/2;
        if(arr[low]<=arr[mid]){
            mins=min(arr[low],mins);
            low=mid+1;
        }else{
            high =mid-1;
        }
 }

cout<<mins;
}
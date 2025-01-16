#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={4,5,6,7,8,9,10,11,12,13,0,1,2};
    int sizes = sizeof(arr)/sizeof(arr[0]);
    int low = 0;
    int high = sizes-1;
    int mins = INT_MAX;
    while(low<=high){
        int mid = low+((high-low)/2);
        if(arr[low]<=arr[high]){
            mins=min(arr[low],mins);
            break;
        }
        
        if(arr[mid]>=arr[low]){
            mins=min(mins,arr[low]);
            low=mid+1;
        }else{
            high=mid-1;
        }
    }
cout<<mins;
}
#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={3,3,3,1,2,3};
    int sizes = sizeof(arr)/sizeof(arr[0]);
    int low =0;
    int high = sizes-1;
    int target=3;
    while(low<=high){
        int mid = (high+low)/2;
        if(arr[mid]==target){
            cout<<mid<<endl;
            break;
        }
        if(arr[mid]==arr[low]==arr[high]){
            low+=1;
            high-=1;
            continue;
        }
        if(arr[mid]>=arr[low]){
            if(arr[low]<=target && arr[mid]>target){
                high = mid-1;
            }else{
                low=mid+1;
            }
        }else{
            if(arr[mid]<target && arr[high]<=target){
                    low=mid+1;
            }else{
                high = mid-1;
            }
        }
    }
}
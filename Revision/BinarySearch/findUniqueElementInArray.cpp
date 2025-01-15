#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={1,1,2,2,3,3,4,4,5,6,6,7,7,8,8,9,9,10,10,11,12,12,13,13,14,14,15,15};
    int sizes = sizeof(arr)/sizeof(arr[0]);
    int ans=0;
    if(sizes==1){
        cout<<arr[0];
    }
    if(arr[0]!=arr[1]){
            cout<<arr[0];
    }
    else if(arr[sizes-1]!=arr[sizes-2]){
        cout<<arr[sizes-1];
    }else{
        int start=0;
        int end = sizes-2;
        while(start<=end){
            int mid = (start+end)/2;
            if(arr[mid]!=arr[mid-1] && arr[mid]!=arr[mid+1]){
                    cout<<arr[mid];
                    break;
            }
            if((mid%2==0  && arr[mid]==arr[mid+1] ) || (mid%2 ==1 && arr[mid]==arr[mid-1])){
                start=mid+1;
            }else{
                end=mid-1;
            }
        }
    }
}
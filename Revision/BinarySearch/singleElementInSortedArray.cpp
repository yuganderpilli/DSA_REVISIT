#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={1,1,2,2,3,3,4,4,5,5,6,6,7,7,8,8,9};
    int sizes = sizeof(arr)/sizeof(arr[0]);
    int low = 1;
    int high = sizes-2;
    int ans=0;
    bool proceed=true;
        if(arr[0]!=arr[1]){
            cout<<arr[0];
            proceed=false;
        }else if(arr[sizes-1]!=arr[sizes-2]){
                cout<<arr[sizes-1];
                proceed=false;
        }



    if(proceed){
        while(low<=high){
        int mid = low + ((high-low)/2);
        if(arr[mid]!=arr[mid+1] && arr[mid]!=arr[mid-1]){
            cout<<arr[mid];
            break;
        }
        if((mid%2==0 && arr[mid]==arr[mid+1] )|| (mid%2==1 && arr[mid]==arr[mid-1])){
            low=mid+1;
        }else{
            high= mid-1;
        }

    }
    }
}
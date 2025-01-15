#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={1,2,34,41,55,65,72,84,112,116,117,118};
    int sizes=sizeof(arr)/sizeof(arr[0]);
    int low=0;
    int key = 111;
    int high = sizes-1;
    int ans = sizes;
    while(low<=high){
        int mid= low+ ((high-low)/2);
        if(arr[mid]>key){
            ans = mid;
            high = mid-1;
        }else low= mid+1;
    }

    cout<<ans;
}
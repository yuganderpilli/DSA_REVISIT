#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    int sizes= sizeof(arr)/sizeof(arr[0]);
    int low=0;
    int high= sizes-1;
    int key = 14;
    int ans=-1;
    while(low<=high){
        int mid= low+((high-low)/2);
        if(arr[mid]==key){
            ans=mid;
            break;
        }else if(arr[mid]>key){
            high = mid-1;
        }else{
            low=mid+1;
        }
    }   
cout<<ans;

}
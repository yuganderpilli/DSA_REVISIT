#include<bits/stdc++.h>
using namespace std;
int first_binary(int arr[],int start,int end,int n){
    int ans = -1;
    while(start<=end){
        int mid = (start+end)/2;
        if(arr[mid]==n){
            ans = mid;
            end = mid-1;
        }else if ( arr[mid]>n){
                end = mid-1;
        }else start = mid+1;
    }

    return ans;
}

int last_binary(int arr[],int start,int end,int n){
    int ans = -1;
    while(start<=end){
        int mid = (start+end)/2;
        if(arr[mid]==n){
            ans = mid;
            start = mid+1;
        }else if ( arr[mid]>n){
                end = mid-1;
        }else start = mid+1;
    }

    return ans;
}




int main(){

    int arr[]={1,2,3,4,5,6,7,8,9};
    int find = 3;
    int sizes = sizeof(arr)/sizeof(arr[0]);
    int first = first_binary(arr,0,sizes-1,find);
    int last = last_binary(arr,0,sizes-1,find);
    cout<<first<<last<<endl;
    cout<<"number of occurances "<<(last-first+1)<<endl;

}
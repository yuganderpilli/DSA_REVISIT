#include<bits/stdc++.h>
using namespace std;
int first_binary(int arr[],int start,int end,int key){
    int ans=-1;
    while(start<=end){
        int mid = start+ ((end-start)/2);
        if(arr[mid]==key){
            ans=mid;
            end=mid-1;
        }else if(arr[mid]<key) start=mid+1;
        else end=mid-1;
    }
return ans;

}

int last_binary(int arr[],int start,int end,int key){
int ans=-1;
    while(start<=end){
        int mid = start+ ((end-start)/2);
        if(arr[mid]==key){
            ans=mid;
            start=mid+1;
        }else if(arr[mid]>key) end=mid-1;
        else start=mid+1;
    }
return ans;

}


int main(){
    int arr[]={1,2,3,3,3,4,5,6,7,8,9};
    int find = 3;
    int sizes = sizeof(arr)/sizeof(arr[0]);
    int first = first_binary(arr,0,sizes-1,find);
    int last = last_binary(arr,0,sizes-1,find);
    cout<<first<<last;
}
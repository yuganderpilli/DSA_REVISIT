#include<bits/stdc++.h>
using namespace std;
int lowerBound(int arr[],int low,int high,int n){
    int ans = high;
    while(low<=high){
        
        int mid= (low+high)/2;
        if(arr[mid]>=n){
         ans = mid;
         high= mid-1;   
        }
        else{
            low=mid+1;
        }
    }
    return ans;
}

int upperBound(int arr[],int low, int high, int n){
        int ans = high;
        int mid= (low+high)/2;
        if(arr[mid]>n){
         ans = mid;
         high= mid-1;   
        }
        else{
            low=mid+1;
        }
        return ans;
}


int main(){

    int arr[]={1,2,3,3,3,4,5,6,7,8,9};
    int find = 3;
    int sizes = sizeof(arr)/sizeof(arr[0]);
    int first =lowerBound(arr,0,sizes-1,3);
    int last=upperBound(arr,0,sizes-1,find)-1;
    
    


cout<<first<<last;
}
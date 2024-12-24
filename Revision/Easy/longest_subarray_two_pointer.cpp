#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={2, 3, 5, 1, 9};
    int sizes = sizeof(arr)/sizeof(arr[0]);
    int left =0;
    int right =0;
    int sum=0;
    int find=6;
    int maxLen=0;
    while(right<sizes){
        sum+=arr[right];
        if(sum > find && left <right){
            sum-=arr[left];
            left++;
        }
        if(sum==find){

                maxLen= max(maxLen,(right-left+1));
        }
        right++;
    }

cout<<maxLen;
}
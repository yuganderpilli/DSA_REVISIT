#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={1, 2, -3, 3, -1, 6, -6};
    int sizes = sizeof(arr)/sizeof(arr[0]);
    int maxs=0;
    for(int i=0;i<sizes;i++){
        int sum=0;
        
        for(int j=i;j<sizes;j++){
            sum+=arr[j];
            if(sum==0){

                maxs=max(maxs,j-i+1);
            }
        }

    }
    cout<<maxs;
}
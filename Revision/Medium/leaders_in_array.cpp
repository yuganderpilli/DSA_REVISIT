#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={10, 22, 12, 3, 0, 6};
    int sizes = sizeof(arr)/sizeof(arr[0]);
    int maxs=INT_MIN;
    for(int i=sizes-1;i>=0;i--){
        if(arr[i]>maxs){
            cout<<arr[i]<<" ";
            maxs=arr[i];

        }
    }

}
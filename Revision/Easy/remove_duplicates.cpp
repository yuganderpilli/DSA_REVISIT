#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={1,1,2,2,3,4,4,4,5,6,7,8};
    int sizes= sizeof(arr)/sizeof(arr[0]);
    int i=0;
    for(int j=1;j<sizes;j++){
            if(arr[i]!=arr[j]){
                i++;
                arr[i]=arr[j];
            }
    }
    for(auto it:arr){
        cout<<it<<" ";
    }
}
#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9};
    int sizes= sizeof(arr)/sizeof(arr[0]);
    int sorted=1;
    for(int i=0;i<sizes-1;i++){
        if(arr[i]>arr[i+1]){
                sorted=0;
                break;
        }
    }
    if(sorted){
        cout<<"array is sorted";
    }else cout<<" array is not sorted";
}
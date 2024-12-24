#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={4,52,6,345,1,65,7,854,4,23,314,24};
    for(auto it:arr) cout<<it<<" ";
    cout<<endl;
    int sizes = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<sizes-1;i++){
        for(int j=0;j<sizes-i-1;j++){
                if(arr[j]>arr[j+1]){
                        swap(arr[j],arr[j+1]);
                }
        }
    }
    for(auto it:arr) cout<<it<<" ";
}
#include<bits/stdc++.h>
using namespace std;
int main(){
       int arr[]={1,2,3,4,2,3,6,8,5,2};
       int sizes = sizeof(arr)/sizeof(arr[0]);
       int target=6;
       for(int i=0;i<sizes-2;i++){
        for(int j=i+1;j<sizes;j++){
            for(int k=j+1;k<sizes;k++){
                    if(arr[i]+arr[j]+arr[k]==target){
                        cout<<arr[i]<<arr[j]<<arr[k]<<endl;
                    }
            }
        }
       }
}
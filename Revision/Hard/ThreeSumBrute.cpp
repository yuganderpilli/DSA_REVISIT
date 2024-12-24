#include<bits/stdc++.h>
using namespace std;
int main(){
 int  arr[] = {-1,0,1,2,-1,-4};
 int sum =1;
 int sizes = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<sizes;i++){
        for(int j=i+1;j<sizes;j++){
            for(int k=j+1;k<sizes;k++){
                if(arr[i]+arr[j]+arr[k]==sum){
                    cout<<arr[i]<<arr[j]<<arr[k]<<endl;
                }
            }
        }
    }
}
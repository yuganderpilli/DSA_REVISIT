#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={1,1,2,1,1,1,1,3,3,4};
    int sizes= sizeof(arr)/sizeof(arr[0]);
    int maxs=0;
    int majority=-1;
    for(int i=0;i<sizes;i++){
        int count=1;
        for(int j=1;j<sizes;j++){
                if(arr[i]==arr[j]) {
                    count++;
                }
                if(count>maxs){
                    maxs=maxs=count;
                    majority=arr[i];
                }
        }
    }

    cout<<majority<<" "<<maxs;
}
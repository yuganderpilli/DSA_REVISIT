#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={56,43,32,314,46,68,6,4,3,6};
    int sizes = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<sizes;i++){
        int min = i;
        for(int j=i+1;j<sizes;j++){
            if(arr[j]<arr[min]){
                min=j;
            }
        }
        swap(arr[i],arr[min]);
    }

for(auto it:arr)cout<<it<<" ";
}
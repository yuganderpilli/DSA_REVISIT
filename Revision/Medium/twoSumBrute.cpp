#include<bits/stdc++.h>
using namespace std;
int main()
{
    int  arr[] = {2,6,5,8,11,12,9};
    int sizes = sizeof(arr)/sizeof(arr[0]);
    int find = 14;
    for(int i=0;i<sizes-1;i++){
        for(int j=i+1;j<sizes;j++){
            if(arr[i]+arr[j] == find){
                cout<<arr[i]<<" "<<arr[j]<<endl;
            }
        }
    }

} 

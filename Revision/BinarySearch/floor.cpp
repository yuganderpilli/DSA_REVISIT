#include<bits/stdc++.h>
using namespace std;
int main(){
      int arr[]={1,2,34,41,55,65,72,84,112,116,117,118};
      int sizes= sizeof(arr)/sizeof(arr[0]);
      int ans = -1;
      int low =0;
      int high = sizes-1;
      int find = 64;
      while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid]<=find){
            ans = mid;
            low = mid+1;
            
        }else{
            high = mid-1;
        }
      }
cout<<ans;

}
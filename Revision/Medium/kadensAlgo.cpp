#include<bits/stdc++.h>
using namespace std;
int main(){
   int arr[]= {-2, 1, -3, 4, -1, 2, 1, -5, 4};
   int sizes = sizeof(arr)/sizeof(arr[0]);
   int sum =0;
   int max_sum=INT_MIN;
   int start=0;
   int end=0;
   int ans_start=0;
   for(int i=0;i<sizes;i++){
    sum+=arr[i];
        if(sum>max_sum){
            max_sum=sum;
            end=i;
            ans_start=start;
        }
    if(sum<0){
        sum=0;
        start=i+1;
    }
   }
   cout<<max_sum<<" "<<ans_start<<" "<<end;
}
#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={-1,2,1,-4};
    int target=1;
    int sizes= sizeof(arr)/sizeof(arr[0]);

    sort(arr,arr+sizes);
    int ans =INT_MAX;
    for(int i=0;i<sizes;i++){
        int j=i+1;
        int k=sizes-1;
        while(j<k){
            int sum = arr[i]+arr[j]+arr[k];
            ans = min(ans,abs(target-sum));
            if(sum>target){
                    j++;
            }else k--;
        }
    }

cout<<ans;
}
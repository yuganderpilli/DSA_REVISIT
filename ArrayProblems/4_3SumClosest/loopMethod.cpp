#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={-1,2,1,-4};
    int sizes = sizeof(arr)/sizeof(arr[0]);
    set<int> sample;
    for(int i=0;i<sizes;i++){
        for(int j=i+1;j<sizes;j++){
            for(int k= j+1; k<sizes;k++){
                    sample.insert(arr[i]+arr[j]+arr[k]);
            }
        }
    }
    int target=1;
int ans=INT_MAX;
for(auto it:sample){
    ans=min(ans,abs(target-it));
}
cout<<ans;

}
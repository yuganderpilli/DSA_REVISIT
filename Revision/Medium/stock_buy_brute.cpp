#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={4,1,3,2,4,9};
    int sizes = sizeof(arr)/sizeof(arr[0]);
    int max_profit=0;
    int buy_price=INT_MAX;
    for(int i=1;i<sizes;i++){
        max_profit=max(max_profit,arr[i]-buy_price);
        buy_price=min(buy_price,arr[i]); 
    }
    cout<<max_profit;
}
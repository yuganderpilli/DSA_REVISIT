#include<bits/stdc++.h>
using namespace std;
vector<int>leftMax(vector<int> &height, int n)
{
    vector<int> left(n);
    left[0]=height[0];
    for(int i=1;i<n;i++){
        left[i]=max(left[i-1],height[i]);
    }
    return left;
}




vector<int>rightMax(vector<int> &height, int n)
{
        vector<int>right(n);
        cout<<height[n-1];
        cout<<endl;
        right[n-1]=height[n-1];
        for(int i=n-2;i>=0;i--){
            right[i]=max(right[i+1],height[i]);
        }    
    return right;
}
int main(){
    vector<int> arr={4,2,0,3,2,6};
vector<int> left_max=leftMax(arr,arr.size());
vector<int> right_max=rightMax(arr,arr.size());
for(auto it:left_max) cout<<it<<" ";
cout<<endl;
for(auto it:right_max) cout<<it<<" ";    
cout<<endl<<endl;
int sum=0;
for(int i=0;i<arr.size();i++){
    
    int temp=min(left_max[i],right_max[i])-arr[i];
    if(temp>0)
    sum+=temp;
}
    cout<<sum;
}
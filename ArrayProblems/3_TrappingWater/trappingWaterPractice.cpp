#include<bits/stdc++.h>
using namespace std;
vector<int>leftMax(vector<int> &height){
vector<int> temp(height.size());
temp[0]=height[0];
for(int i=1;i<height.size();i++){
    temp[i]=max(temp[i-1],height[i]);
}
return temp;
}
vector<int>rightMax(vector<int> &height){
vector<int> temp(height.size());
temp[height.size()-1]=height[height.size()-1];
    for(int i=height.size()-2;i>=0;i--){
      temp[i]=max(temp[i+1],height[i]);
    }
return temp;
}


int main(){
    vector<int> arr={4,2,0,3,2,6};
    int sizes = sizeof(arr);
    vector<int> left_max=leftMax(arr);
    vector<int> right_max=rightMax(arr);
    int sum =0;
    for(int i=0;i<arr.size();i++){
        int temp = min(left_max[i],right_max[i])-arr[i];
        if(temp>0){
            sum+=temp;
        } 
    }

cout<<sum;
}
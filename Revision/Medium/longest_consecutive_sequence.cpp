#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={100, 200, 1, 2, 3, 4};
    set<int> sample;
    for(auto it:arr) sample.insert(it); 
    int sizes = sizeof(arr)/sizeof(arr[0]);
    int i=0;
    int maxs=0;

    for(auto it:sample){
        
        if(sample.find(it-1)==sample.end()){
            int count=1;
            int x=it;
            while(sample.find(x+1)!=sample.end()){
                x+=1;
                count++;
            }
            maxs=max(count,maxs);
        }
    }
cout<<maxs;
}
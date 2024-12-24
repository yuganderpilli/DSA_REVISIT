#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={1,2,-4,-5,3,4};
    int sizes=sizeof(arr)/sizeof(arr[0]);
    vector<int> pos;
    vector<int> neg;
    int ans[sizes]={0};
    for(int i=0;i<sizes;i++){
        if(arr[i]>0){
            pos.push_back(arr[i]);
        }else{
            neg.push_back(arr[i]);
        }
    }
if(pos.size()>neg.size()){
    for(int i=0;i<neg.size();i++){
     ans[2*i]=pos[i];
     ans[(2*i)+1]=neg[i];   
    }
   int index = neg.size()*2;
for(int i=neg.size();i<pos.size();i++){
    ans[index]=pos[i];
    index++;
}

}else{

for(int i=0;i<pos.size();i++){
     ans[2*i]=pos[i];
     ans[(2*i)+1]=neg[i];   
    }
   int index = pos.size()*2;
for(int i=pos.size();i<neg.size();i++){
    ans[index]=neg[i];
    index++;
}


}
for(auto it:ans) cout<<it<<" ";


}
#include<bits/stdc++.h>
using namespace std;
void multiply(vector<int> &arr,int &size,int multipier){
    int carry=0;
   for(int i=0;i<size;i++){
    int res=multipier*arr[i]+carry;
    arr[i]=res%10;
    carry=res/10;
   }
   while(carry>0){
    arr[size]=carry%10;
    size++;
    carry=carry/10;

   }
}


int main(){
    int num=122;
vector<int> arr(1000,0);
arr[0]=1;
int sizes = 1;

for(int multiplier=2;multiplier<=num;multiplier++){
    multiply(arr,sizes,multiplier);
}

vector<int> result;

for(int i=sizes-1; i>=0;i--){
    result.push_back(arr[i]);
}


for(auto it:result) cout<<it<<" ";


}
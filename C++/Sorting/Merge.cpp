#include<bits/stdc++.h>
using namespace std;

void merge(int arr[],int start, int mid, int end){
int low= start;
int high = mid+1;
vector<int> temp;
while(low<=mid && high <= end){
    if(arr[low]<=arr[high]){
        temp.push_back(arr[low]);
        low++;
    }else {
        temp.push_back(arr[high]);
        high++;
    }
}

while(low<=mid){
        temp.push_back(arr[low]);
        low++;
}


while(high<=end){
        temp.push_back(arr[high]);
        high++;
}


for(int i=start;i<=end;i++) arr[i]=temp[i-start];

}
void mergeSort(int arr[],int start,int end){
if(start>=end) return;
int mid = (start+end)/2;

mergeSort(arr,start,mid);
mergeSort(arr,mid+1,end);
merge(arr,start,mid,end);

}

int main(){
    int arr []={8,6,56,4,2,3,324,5346,457,6578};
    int sizes = sizeof(arr)/sizeof(arr[0]);
        mergeSort(arr,0,sizes-1);
    for(auto it:arr) cout<<it<<" ";
}
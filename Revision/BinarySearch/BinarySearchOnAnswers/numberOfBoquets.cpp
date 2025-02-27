#include<bits/stdc++.h>
using namespace std;
int pickMax(int arr[],int size){
    int maxs=INT_MIN;
    for(int i=0;i<size;i++){
        maxs=max(arr[i],maxs);
    }

return maxs;
}
int getMinDays(int arr[],int size,int days,int flowers){
int count=0;
int number=0;

for(int i=0;i<size;i++){
    if(arr[i]<=days){
        count++;
           if (count == flowers) {  // Correct logic to form a bouquet
    number++;
    count = 0;
}
        
   }else{
    count=0;    
    }
}

return number;
}


int num_of_boquets(int arr[],int boq,int flowers,int size){
        int maxi=pickMax(arr,size);
        
        for(int i=1;i<=maxi;i++){
            int count = getMinDays(arr,size,i,flowers);
               
            if(count>=boq){
                    return count;
            }
        }


return 0;
}

int main(){
    int arr[]={1,2,3,2,9,1}, m = 2, k = 3;
    int sizes = sizeof(arr)/sizeof(arr[0]);
    int count = num_of_boquets(arr,m,k,sizes);
    if(count==m){
        cout<<"possible with "<<count;
    }else{
        cout<<"not possible";
    }
}
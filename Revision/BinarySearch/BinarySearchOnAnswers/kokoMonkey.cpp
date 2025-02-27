#include<bits/stdc++.h>
using namespace std;
int calcTotalHours(int arr[],int sizes,int maxi){
int total_hours=0;
for(int i=0;i<sizes;i++){
total_hours+= ceil( (double)(arr[i])/(double)(maxi));
}
return total_hours;
}


int minimumRate(int arr[],int time,int sizes){
    
    int maxi =INT_MIN;
    for(int i=0;i<sizes;i++){
        maxi=max(maxi,arr[i]);
    } 
int mins =INT_MAX;
// for(int i=1;i<maxi;i++){
//     int total_hours = calcTotalHours(arr,sizes,i);
//     if(total_hours<=time){
//         mins=min(mins,i);
//     }
// }
int low=0;
int high=maxi;
while(low<high){
    int mid= (low+high)/2;
    int total_hours=calcTotalHours(arr,sizes,mid);
    if(total_hours<=time){
        mins=min(mid,mins);
        high=mid-1;
        
    }else{
        low=mid+1;
    }
}




return mins;
}

int main(){
 int arr[]={7, 15, 6, 3};
 int time_limit=8;
 int sizes = sizeof(arr)/sizeof(arr[0]);
 int ans = minimumRate(arr,time_limit,sizes);
 cout<<ans;

}
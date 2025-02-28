#include<bits/stdc++.h>
using namespace std;
int main(){
   int arr[]={1,2,3,4,2,3,6,8,5,2};
   int sizes = sizeof(arr)/sizeof(arr[0]);
   int i=0;
   int j=sizes-1;
   int target=7;
   sort(arr,arr+sizes);
   while(i<j){
        if(arr[i]+arr[j]>target){
            j--;
           
        }else if(arr[i]+arr[j]<target){
            i++;
        }else{
            cout<<arr[i]<<arr[j]<<endl;
            j--;
            while( i < j && arr[j]==arr[j-1]){
                j--;
            }
            i++;
            while( i < j && arr[j]==arr[j-1]){
                j--;
            }

        }
   }

}
#include<bits/stdc++.h>
using namespace std;
int main(){
    int largest=INT_MIN;
    int secondLargest=INT_MIN;
    int arr[]={1,1,1,1,1,1,1,12d,1,1};
    int sizes = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<sizes;i++){
        if(arr[i]>largest){
            secondLargest=largest;
            largest=arr[i];
            
        }else if(arr[i]<largest && arr[i]>secondLargest){
            secondLargest = arr[i];
        }
    }
 // Check if we found a valid second largest
    if (secondLargest == INT_MIN) {
        cout << "There is no second largest element." << endl;
    } else {
        cout << "Largest: " << largest << ", Second Largest: " << secondLargest << endl;
    }

}
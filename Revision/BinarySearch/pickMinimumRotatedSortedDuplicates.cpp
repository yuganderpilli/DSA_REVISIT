#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {7, 8, 0, 1, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 5, 6};
    int sizes = sizeof(arr) / sizeof(arr[0]);
    int low = 0;
    int high = sizes - 1;
    int mins = INT_MAX;
    while (low <= high)
    {
        int mid = (high + low) / 2;
        mins = min(mins,arr[mid]);
        if(arr[low]<=arr[mid]){
                low=mid+1;
        }else if(arr[mid]<=arr[high]){
            high = mid-1;
        }else{
            high--;
        }
    }

    cout << mins;
}
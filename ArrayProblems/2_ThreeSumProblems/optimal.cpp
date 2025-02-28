#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {-1, 0, 1, 2, -1, -4};
    int sizes = sizeof(arr) / sizeof(arr[0]);
    int target = 3;
    vector<vector<int>> ans;
    sort(arr, arr + sizes);
    for (int i = 0; i < sizes; i++)
    {
        if(i!=0 && arr[i]==arr[i-1]) continue;
        int j = i + 1;
        int k = sizes - 1;
        int difference = target - arr[i];
        while (j < k)
        {

             if (arr[j] + arr[k] > difference)
            {
                k--;
            }else if(arr[j]+arr[k]<difference){
                j++;
            }else{
                ans.push_back({arr[i],arr[j],arr[k]});
                j++;
                k--;
                while( j<k && arr[k]==arr[k-1]){
                    k--;
                }
                while(j<k && arr[j]==arr[j+1]){
                    j++;
                }
            }
        }
    }

for(auto it:ans){
    cout<<it[0]<<it[1]<<it[2];
    cout<<endl;
}

}
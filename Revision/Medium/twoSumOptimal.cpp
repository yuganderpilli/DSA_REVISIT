#include<bits/stdc++.h>
using namespace std;
int main()
{
    int  arr[] = {2,6,5,8,11,12,9};
    int sizes = sizeof(arr)/sizeof(arr[0]);
    int find = 14;
    map <int,int> temp;
    for(int i=0;i<sizes-1;i++){
        int num = arr[i];
        int moreNeeded=find-arr[i];
        if(temp.find(moreNeeded)!=temp.end()){
            cout<<num<<" "<<moreNeeded<<endl;
        }
        temp[arr[i]]=i;
    }

} 

#include<bits/stdc++.h>
using namespace std;
int main(){
   int arr[6][6] = {
    {0, 1, 1, 0, 1, 0},
    {1, 1, 0, 1, 0, 0},
    {0, 1, 1, 1, 1, 0},
    {1, 1, 1, 1, 0, 0},
    {1, 1, 1, 1, 1, 1},
    {0, 0, 0, 0, 0, 0}
};


int rows = sizeof(arr)/sizeof(arr[0]);

int columns = sizeof(arr[0])/sizeof(arr[0][0]);

//naive solution 

for(int i=0;i<rows-2;i++){
    map<int,int> temp;
    int count=0;
    for(int j=0;j<columns-2;j++){
        for(int k=i;k<i+2;k++){
            for(int l=j;l<j+2;l++){
                if(arr[k][l]==1) {
                        temp[i]=j;
                        count++;
                        if(count==4){
                            for(auto it:temp){
                                cout<<it.first<<" " <<it.second<<" ";
                                cout<<endl;
                                    break;
                                    }

                        }
                }
            }
        }
    }

}


}
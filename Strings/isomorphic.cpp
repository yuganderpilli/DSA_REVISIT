#include<bits/stdc++.h>
using namespace std;
int main(){
    string str1="egg";
    string str2="app";
    vector<int> a(128,-1);
    vector<int>b(128,-1);
    bool hello=true;
    if(str1.size()==str2.size()){
        for(int i=0;i<str1.size();i++){
                if(a[str1[i]]!=b[str2[i]]){
                   hello=false;
                    break;
                }
                a[str1[i]]=b[str2[i]]=i;

        }
    }
    if(hello) cout<<"true";
    else cout<<"false";
}
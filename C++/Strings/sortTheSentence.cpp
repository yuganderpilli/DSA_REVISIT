#include <bits/stdc++.h>
using namespace std;

int main() {
    string s = "a0 I1 being5 am2 a3 human4";
    string temp;
    vector<string> ans(10);  // Allocate space for 10 possible positions
    int count = 0;
    int index = 0;
    while(index<s.size()){
        if(s[index]==' ' || index == s.size()-1){
            if(index==(s.size()-1) && s[index]!= ' '){
                temp+=s[index];
            }
            int pos = temp[temp.size()-1]-'0';
            temp.pop_back();
            ans[pos]=temp;
            temp.clear();
            count++;
        }else{
            temp+=s[index];
        }
        index++;
    }
    for(int i=0;i<count;i++){
        cout<<ans[i]<<" ";
    }
}

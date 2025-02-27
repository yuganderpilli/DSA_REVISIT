#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s = "LEetCode";
    string ans = "";
    vector<int> lower(26, 0);

    vector<int> upper(26, 0);
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
        {
            int pos = s[i] - 'a';
            lower[pos] +=1;
            s[i]='#';
        }
        else if (s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
        {
            int pos = s[i] - 'A';
            upper[pos] +=1;
            s[i]='#';
        }
     }

for(int i=0;i<26;i++){
    while(upper[i]>0){
        ans+=char(i+'A');
        upper[i]--;
    }

}



for(int i=0;i<26;i++){
    while(lower[i]>0){
        ans+=char(i+'a');
        lower[i]--;
    }
}

int index=0;
for(int i=0;i<s.size();i++){
    if(s[i]=='#'){
        s[i]=ans[index];
        index++;
    }
}

cout<<s;

}


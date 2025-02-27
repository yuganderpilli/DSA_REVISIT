#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s = "LEetCode";
    string temp = "";
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' ||
            s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
        {
            temp +=s[i];
        }
    }
 
    sort(temp.begin(), temp.end());

    int begin=0;
for (int i = 0; i < s.size(); i++)
    {
        if ((s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' ||
            s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U') && begin<temp.size())
        {
            s[i]=temp[begin];
            begin++;
        }
    }
cout<<s;


}
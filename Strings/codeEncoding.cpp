#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str = "3[b2[c5[a]]]";
    int lens = str.size();
    string result = "";

    for (int i = 0; i < lens; i++)
    {
        if (str[i] != ']')
        {
            result.push_back(str[i]);
        }
        else
        {
            string str = "";
            while (!result.empty() && result.back() != '[')
            {
                str.push_back(result.back());
                result.pop_back();
            }
            reverse(str.begin(), str.end());
            result.pop_back();
            string num = "";
            while (!result.empty() && (result.back() >= '0' && result.back() <= '9'))
            {
                num.push_back(result.back());
                result.pop_back();
            }
            reverse(num.begin(), num.end());
            int int_num = stoi(num);
            while (int_num)
            {
                result += str;
                int_num--;
            }
        }
    }

    cout << result;
}
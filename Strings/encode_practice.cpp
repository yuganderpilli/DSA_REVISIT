#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str = "3[a2[b]]";
    int str_len = str.length();
    string result = "";
    for (int i = 0; i < str_len; i++)
    {
        if (str[i] != ']')
        {
            result.push_back(str[i]);
        }
        else
        {
            string temp;
            while (!result.empty() && (result.back() != '['))
            {
                temp.push_back(result.back());
                result.pop_back();
            }
            reverse(temp.begin(), temp.end());
            result.pop_back();
            string str_num;
            while (!result.empty() && (result.back() >= '0' && result.back() <= '9'))
            {
                str_num.push_back(result.back());
                result.pop_back();
            }
            reverse(str_num.begin(), str_num.end());
            int num = stoi(str_num);
            while (num)
            {
                result += temp;
                num--;
            }
        }
    }

    cout << result;
}

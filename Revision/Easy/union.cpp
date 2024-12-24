#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 5};
    int brr[] = {3, 4, 4, 5, 6, 7, 7};
    int size_a = sizeof(arr) / sizeof(arr[0]);
    int size_b = sizeof(brr) / sizeof(brr[0]);
    int i = 0;
    int j = 0;
    vector<int> temp;
    while (i < size_a && j < size_b)
    {
        if (arr[i] <= brr[j])
        {
            if ((temp.empty()) || temp.back() != arr[i])
            {
                temp.push_back(arr[i]);
            }
            i++;
        }
        else
        {
            if ((temp.empty()) || temp.back() != brr[j])
            {
                temp.push_back(brr[j]);
            }
            j++;
        }
    }
    while (i < size_a)
    {
        if ((temp.empty()) || temp.back() != arr[i])
        {
            temp.push_back(arr[i]);
        }
        i++;
    }
    while (j < size_b)
    {
        if ((temp.empty()) || temp.back() != brr[j])
        {
            temp.push_back(brr[j]);
        }
        j++;
    }

    for (auto it : temp)
    {
        cout << it << " ";
    }
}
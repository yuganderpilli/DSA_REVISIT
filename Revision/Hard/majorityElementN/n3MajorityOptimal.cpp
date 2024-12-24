#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {1, 1, 1, 2, 2, 2, 2, 3};
    int sizes = sizeof(arr) / sizeof(arr[0]);
    int ele1 = INT_MIN;
    int ele2 = INT_MIN;
    int count1 = 0;
    int count2 = 0;
    for (int i = 0; i < sizes; i++)
    {
        if (count1 == 0)
        {
            ele1 = arr[i];
            count1 = 1;
        }
        else if (count2 == 0)
        {
            ele2 = arr[i];
            count2 = 1;
        }
        else if (ele1 == arr[i])
        {
            count1++;
        }
        else if (ele2 == arr[i])
            count2++;
        else
        {
            count1--;
            count2--;
        }
    }
    count1 = 0;
    count2 = 0;
    for (int i = 0; i < sizes; i++)
    {
        if (arr[i] == ele1)
        {
            count1++;
        }
        else if (arr[i] == ele2)
        {
            count2++;
        }
    }

cout<<count2<<endl<<endl;

    if (count1 > (sizes / 3)+1)
    {
        cout << ele1 << endl;
    }
    if (count2 > (sizes / 3)+1)
    {
        cout << ele2 << endl;
    }
}
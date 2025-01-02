#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {4, 2, 2, 6, 4};
    int k = 6;
    int sizes = sizeof(arr) / sizeof(arr[0]);
    int count = 0;
    for (int i = 0; i < sizes; i++)
    {
        int xors = 0;
        for (int j = i; j < sizes; j++)
        {

            xors = arr[j] ^ xors;
        if (xors == k)
        {
            count++;
        }
        }

        
    }

    cout << count;
}
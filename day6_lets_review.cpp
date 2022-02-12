#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n, i, j;
    cin >> n;
    string strings[n], newstringseven[n * 2], newstringsodd[n * 2];
    for (i = 0; i < n; i++)
    {
        /* code */
        cin >> strings[i];
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < strings[i].size(); j++)
        {
            if (j % 2 == 0)
            {
                newstringseven[i] = newstringseven[i] + (strings[i][j]);
            }
            else
            {
                newstringsodd[i] = newstringsodd[i] + (strings[i][j]);
            }
        }
        cout << newstringseven[i] << " " << newstringsodd[i] << "\n";
    }

    return 0;
}

#include <bits/stdc++.h>

using namespace std;

void length();

int main()
{
    length();
}

void length()
{
    int n[] = { 6, 2, 5, 1, 7, 4, 8, 3 };
    int nSize = sizeof(n) / sizeof(*n);

    int length[nSize] = {0};    

    for (int i = 0; i < nSize; i++)
    {
        length[i] = 1;

        for (int j = 0; j < i; j++)
        {
            if (n[j] < n[i])
            {
                length[i] = max(length[i], length[j] + 1);
            }
        }
    }
}
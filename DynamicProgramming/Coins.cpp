#include <bits/stdc++.h>

using namespace std;

int coins[3] = { 1, 3, 4 };

void solve(int n);


int main()
{
    solve(10);
}

void solve(int n)
{
    int value[n + 1];
    int first[n + 1];

    value[0] = 0;

    for (int i = 1; i <= n; i++)
    {
        value[i] = numeric_limits<int>::max();        
        for(auto c : coins)
        {
            int index = i - c;
            if (index >= 0 && value[index] < value[i]) 
            {
                value[i] = value[index] + 1;

                first[i] = c;
            }
        }
    }

    while (n > 0)
    {
        cout << first[n] << "\n";
        n -= first[n];
    }
}
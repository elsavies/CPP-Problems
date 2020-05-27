#include <bits/stdc++.h>

using namespace std;

void path(int n);

int main()
{
    path(5);
}

void path(int n)
{
    int sum[n + 1][n + 1] = {0};
    int values[n + 1][n + 1] = {0};

    values[1][1] = 3;
    values[1][2] = 7;
    values[1][3] = 9;
    values[1][4] = 2;
    values[1][5] = 7;

    values[2][1] = 9;
    values[2][2] = 8;
    values[2][3] = 3;
    values[2][4] = 5;
    values[2][5] = 5;

    values[3][1] = 1;
    values[3][2] = 7;
    values[3][3] = 9;
    values[3][4] = 8;
    values[3][5] = 5;

    values[4][1] = 3;
    values[4][2] = 8;
    values[4][3] = 6;
    values[4][4] = 4;
    values[4][5] = 10;

    values[5][1] = 6;
    values[5][2] = 3;
    values[5][3] = 9;
    values[5][4] = 7;
    values[5][5] = 8;

    for (int y = 1; y <= 5; y++)
    {
        for (int x = 1; x <= 5; x++)
        {
            sum[y][x] = max(sum[y][x - 1], sum[y - 1][x]) + values[y][x];
        }    
    }

    cout << "Resultado: " << sum[5][5];
}
#include <bits/stdc++.h>

using namespace std;

int n = 4;
int countResults = 0;
int* col = new int[4]; 
int* diag1 = new int[4]; 
int* diag2 = new int[4];

void search(int y);

int main()
{
    search(0);
    cout << countResults;
}

void search(int y)
{
    if (y == n)
    {
        countResults++;
        return;
    }
    
    for (int x = 0; x < n; x++) 
    {
        int diag1Index = x+y;
        int diag2Index = x-y+n-1;

        if (col[x] || diag1[diag1Index] || diag2[diag2Index]) continue;

        col[x] = diag1[diag1Index] = diag2[diag2Index] = 1;
        
        search(y+1);
        
        col[x] = diag1[diag1Index] = diag2[diag2Index] = 0;
    }
}
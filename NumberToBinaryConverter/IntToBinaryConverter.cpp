#include <bits/stdc++.h>

using namespace std;

char* IntToBinaryConverter(int n);

int main()
{
    char* result = IntToBinaryConverter(80);

    cout << "\n" << result;
}

char* IntToBinaryConverter(int n)
{    
    char *result = new char[32];

    for(int i = 31; i >= 0; i--)
    {        
        if (n & (1 << i))
        {
            result[31-i] = '1';
            cout << 1;
        } else 
        {
            result[31-i] = '0';    
            cout << 0;
        }
    }

    return result;
}
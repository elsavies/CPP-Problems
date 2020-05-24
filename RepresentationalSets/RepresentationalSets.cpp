#include <bits/stdc++.h>

using namespace std;

char* ConvertIntSubSetToBinary(int *collectionSet, int collectionSize);
int ConvertIntSubSetToInt(int *collectionSet, int collectionSize);
list<int> ConvertIntToIntSubSet(int value);
char* IntToBinaryConverter(int n);

int main()
{
    int collectionSet[4] = { 1, 3, 4, 8 };

    int collectionSize = (sizeof(collectionSet)/sizeof(*collectionSet));

    cout << ConvertIntSubSetToBinary(collectionSet, collectionSize) << "\n";
    
    int intResult = ConvertIntSubSetToInt(collectionSet, collectionSize);

    cout << intResult << "\n";

    ConvertIntToIntSubSet(intResult);
}

char* ConvertIntSubSetToBinary(int *collectionSet, int collectionSize)
{       
    int x = 0;

    for (int i = 0; i < collectionSize; i++)
    {        
        x |= 1 << collectionSet[i];
    } 

     char *result = IntToBinaryConverter(x);   
}

int ConvertIntSubSetToInt(int *collectionSet, int collectionSize)
{       
    int x = 0;

    for (int i = 0; i < collectionSize; i++)
    {        
        x |= 1 << collectionSet[i];
    } 

    return x;  
}

list<int> ConvertIntToIntSubSet(int value)
{    
    list<int> result;
    int j = 0;

    for (int i = 0; i < 32; i++)
    {
        if (value&(1<<i))
        {
            result.push_back(i);
            j++;   
            cout << i << " ";        
        }
    }

    return result;
}

char* IntToBinaryConverter(int n)
{
    char *result = new char[32];

    for(int i = 31; i >= 0; i--)
    {
        if (n & (1 << i))        
            result[31-i] = '1';            
        else        
            result[31-i] = '0';            
        
    }

    return result;
}

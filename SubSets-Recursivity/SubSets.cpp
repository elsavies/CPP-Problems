#include <vector>

using namespace std;

vector<int> permutation;
int n = 3;
bool chosen[3];
void search();

int main()
{
    search();
}

void search()
{
    if (permutation.size() == n)
    {
        
    }
    else
    {
        for (int i = 0; i <= n - 1; i++)
        {
            if (chosen[i]) continue;
            chosen[i] = true;
            permutation.push_back(i);
            search();
            chosen[i] = false;
            permutation.pop_back();
        }
    }
    
}
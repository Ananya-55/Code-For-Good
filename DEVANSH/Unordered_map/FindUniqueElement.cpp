#include <iostream>
#include <vector>
#include <algorithm>
#include <stdlib.h>
#include <math.h>
#include <unordered_map>
using namespace std;
class Solution
{
public:
    int findUnique(int a[], int n, int k)
    {
        unordered_map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            mp[a[i]]++;
        }
        for (auto it : mp)
        {
            if (it.second % k != 0)
            {
                return it.first;
            }
            else
            {
                continue;
            }
        }
        return -1;
    }
};
int main()
{
    
    return 0;
}
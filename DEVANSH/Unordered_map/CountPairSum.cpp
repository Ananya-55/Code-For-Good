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
    int countPairs(int arr1[], int arr2[], int m, int n, int x)
    {
        unordered_map<int, int> mp;
        for (int i = 0; i < m; i++)
        {
            mp[arr1[i]]++;
        }
        int count;
        count = 0;
        for (int j = 0; j < n; j++)
        {
            if (mp.find(x - arr2[j]) != mp.end())
            {
                count++;
                mp[x - arr2[j]]--;
                if (mp[x - arr2[j]] == 0)
                {
                    mp.erase(x - arr2[j]);
                }
            }
        }
        return count;
    }
};
int main()
{

    return 0;
}
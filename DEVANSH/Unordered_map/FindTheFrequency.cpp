#include <iostream>
#include <vector>
#include <algorithm>
#include <stdlib.h>
#include <math.h>
#include <unordered_map>
using namespace std;
/*Function to find frequency of x
 * x : element whose frequency is to be found
 * v : input vector
 */
int findFrequency(vector<int> v, int x)
{
    unordered_map<int, int> mp;
    for (auto it : v)
    {
        mp[it]++;
    }
    if (mp.find(x) != mp.end())
    {
        return mp[x];
    }
    else
    {
        return 0;
    }
}
int main()
{

    return 0;
}
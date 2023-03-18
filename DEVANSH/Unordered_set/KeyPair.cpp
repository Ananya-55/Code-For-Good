#include <iostream>
#include <vector>
#include <algorithm>
#include <stdlib.h>
#include <math.h>
#include <unordered_set>
using namespace std;
class Solution
{
public:
    // Function to check if array has 2 elements
    // whose sum is equal to the given value
    bool hasArrayTwoCandidates(int arr[], int n, int x)
    {
        // sum 3
        // first element 1
        // second element 2
        // set ={}
        // set ={1}
        // return true 1+2=3
        unordered_set<int> s;
        for (int i = 0; i < n; i++)
        {
            if (s.find(x - arr[i]) != s.end())
            {
                return true;
            }
            s.insert(arr[i]);
        }
        return false;
    }
};
int main()
{

    return 0;
}
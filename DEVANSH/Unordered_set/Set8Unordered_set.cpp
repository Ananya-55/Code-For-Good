#include <iostream>
#include <vector>
#include <algorithm>
#include <stdlib.h>
#include <math.h>
#include <unordered_set>
using namespace std;
/* You are required to complete below methods */

/*inserts an element x to the unordered set s */
void insert(unordered_set<int> &s, int x)
{
    s.insert(x);
}

/*erases an element x from the unordered set s */
void erase(unordered_set<int> &s, int x)
{
    s.erase(x);
}

/*returns the size of the unordered set s */
int size(unordered_set<int> &s)
{
    int n;
    n = s.size();
    return n;
}

/*returns 1 if the element x is present
in unordered set s else returns -1 */
int find(unordered_set<int> &s, int x)
{
    if (s.find(x) != s.end())
    {
        return 1;
    }
    else
    {
        return -1;
    }
}
int main()
{

    return 0;
}
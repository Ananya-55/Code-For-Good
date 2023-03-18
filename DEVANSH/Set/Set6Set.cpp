#include <iostream>
#include <vector>
#include <algorithm>
#include <stdlib.h>
#include <math.h>
#include <set>
using namespace std;
/* You are required to complete below methods */

/*inserts an element x to the set s */
void insert(set<int> &s, int x)
{
    s.insert(x);
}

/*prints the contents of the set s */
void print_contents(set<int> &s)
{
    for (auto it : s)
    {
        cout << it << " ";
    }
}

/*erases an element x from the set s */
void erase(set<int> &s, int x)
{
    s.erase(x);
}

/*returns 1 if the element x is
present in set s else returns -1 */
int find(set<int> &s, int x)
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

/*returns the size of the set s */
int size(set<int> &s)
{
    int n;
    n = s.size();
    return n;
}
int main()
{

    return 0;
}
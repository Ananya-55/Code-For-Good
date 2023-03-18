#include <iostream>
#include <vector>
#include <algorithm>
#include <stdlib.h>
#include <math.h>
#include <map>
using namespace std;
/* Adds a value with key x and value y to the map*/
void add_value(map<int, int> &m, int x, int y)
{
    m[x] = y;
}

/* Returns the value of the key
 x if present else returns -1 */
int find_value(map<int, int> &m, int x)
{
    if (m.find(x) != m.end())
    {
        return m[x];
    }
    else
    {
        return -1;
    }
}

/* Prints contents of the map ie keys and values*/
void print_contents(map<int, int> &m)
{
    for (auto it : m)
    {
        cout << it.first << " " << it.second << " ";
    }
}
int main()
{

    return 0;
}
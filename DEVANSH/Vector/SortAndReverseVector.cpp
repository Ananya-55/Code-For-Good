#include <iostream>
#include <vector>
#include <algorithm>
#include <stdlib.h>
#include <math.h>
using namespace std;
vector<int> sortVector(vector<int> v)
{
    // Your code here. Use library function
    sort(v.begin(), v.end());
    //   reverse(v.begin(),v.end())
    return v;
}
vector<int> reverseVector(vector<int> v)
{
    // Your code here. Use library function
    reverse(v.begin(), v.end());
    return v;
}
int main()
{

    return 0;
}
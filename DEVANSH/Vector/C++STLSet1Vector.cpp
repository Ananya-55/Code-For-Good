#include <iostream>
#include <vector>
#include <algorithm>
#include <stdlib.h>
#include <math.h>
using namespace std;
/*You are required to complete below methods*/

/*inserts an element x at
the back of the vector A */
void add_to_vector(vector<int> &A, int x)
{
    A.push_back(x);
}

/*sort the vector A in ascending order*/
void sort_vector_asc(vector<int> &A)
{
    sort(A.begin(), A.end());
}

/*reverses the vector A*/
void reverse_vector(vector<int> &A)
{
    reverse(A.begin(), A.end());
}

/*returns the size of the vector  A */
int size_of_vector(vector<int> &A)
{
    int n;
    n = A.size();
    return n;
}

/*sorts the vector A in descending order*/
void sort_vector_desc(vector<int> &A)
{
    sort(A.begin(), A.end(), greater<int>());
    // 	reverse(A.begin(),A.end());
}

/*prints space separated
elements of vector A*/
void print_vector(vector<int> &A)
{
    for (auto it : A)
    {
        cout << it << " ";
    }
}
int main()
{

    return 0;
}
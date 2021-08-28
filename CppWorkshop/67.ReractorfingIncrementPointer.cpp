#include <iostream>
using namespace std;

int main()
{
    int a[]{ 10, 20, 30, 40, 50 };
    int* p;
    for (p = a; p < a + sizeof(a) / sizeof(a[0]); ++p)
    {
        cout << *p << " ";
    }
    cout << endl;
    return 0;
}
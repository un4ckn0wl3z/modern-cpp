#include <iostream>
using namespace std;


void add(int& x, int& y, int& result) {
    result = x + y;
}


int main()
{

    int a = 20;
    int b = 30;
    int sum;

    add(a, b, sum);

    cout << sum << endl;



    return 0;
}
#include <iostream>
#include <cmath>
using namespace std;

int main()
{   
    float res = sqrt(3);
    int n;
    cin >> n;

    for(int i = 1; i < n; ++i)
    {
        res = sqrt(3 + res);
    }

    cout << res;
    return 0;
}
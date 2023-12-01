#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    long double sum = 0, sum1 = 0;
    int n;
    cin >> n;
    int m = n;

    for(int i = 1; i <= n; ++i)
    {
        sum += i*i;
    }

    cout << sqrt(sum) << endl;
//-----------------------------------------------------
    do
    {
        sum1 += m*m;
    } while (m--);
    
    cout << sqrt(sum1);
    return 0;
}
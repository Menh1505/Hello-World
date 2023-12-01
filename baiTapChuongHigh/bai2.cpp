#include <iostream>

using namespace std;

int main()
{
    int a, b, c, d;
    cout << "\nNhap 4 so: ";
    cin >> a >> b >> c >> d;

    int minL, maxL, minR, maxR;

    if(a < b) 
    {
        minL = a;
        maxL = b;
    }
    else 
    {
        maxL = a;
        minL = b;
    }

    if(c < d) 
    {
        maxR = d;
        minR = c;
    }
    else 
    {
        minR = d;
        maxR = c;
    }
    
    int max, min;
    if(maxL < maxR) max = maxR;
    else max = maxL;

    if(minL > minR) min = minR;
    else min = minL;

    cout << "\nMax = " << max;
    cout << "\nMin = " << min; 
    return 0;
}
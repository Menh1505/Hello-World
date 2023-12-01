#include <iostream>

using namespace std;

int main()
{
    int n;
    while (1)
    {
    nhap:
        cout << "\nNhap ngay thang 11: ";
        cin >> n;

        if (!(n >= 1 && n <= 30))
        {
            cout << "\nNhap ngay tu 1 den 30";
            goto nhap;
        }
        
        if(n > 7)
        {
            n %= 7;
        }
        switch (n)
        {
        case 1:
            cout << "Thu tu"; 
            break;
        case 2:
            cout << "Thu nam";
            break;
        case 3:
            cout << "Thu sau";
            break;
        case 4: 
            cout << "Thu bay";
            break;
        case 5: 
            cout << "Chu nhat";
            break;
        case 6: 
            cout << "Thu hai";
            break;
        case 0:
            cout << "Thu ba";
            break;
        default:
            break;
        }
    }
    return 0;
}
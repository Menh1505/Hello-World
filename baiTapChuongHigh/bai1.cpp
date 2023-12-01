#include <iostream>

using namespace std;

int main()
{
    char c;

    while (1)
    {
        cout << "\n\nNhap vao ky tu ";
        cin >> c;
        if (c >= 'A' && c <= 'Z')
        {
            cout << "Chu hoa";
        }
        else if (c >= 'a' && c <= 'z')
        {
            cout << "Chu thuong";
        }
        else
        {
            cout << "Khong phai chu";
        }
    }

    return 0;
}
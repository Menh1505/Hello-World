#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    // ios_base::out -> xoá hết file nhập từ đầu, ::app -> nhập từ cuối file
    ifstream file("oi zoi oi.txt", ios_base::in); //mở file để nhập

    while(file.is_open())
    {
        //xử lý trong này
        file.close();
    }

    ofstream file("oi zoi oi.txt", ios_base::out); //mở file đê xuất

    while(file.is_open())
    {
        //xử lý trong này
        file.close();
    }
    return 0;
} // namespace std;


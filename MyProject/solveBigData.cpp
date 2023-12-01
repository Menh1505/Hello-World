#include <iostream>
#include <cmath>
using namespace std;

double mySqrt(int number)
{
    double EPSILON = 0.0001f;
    double result = 1.0f;
    while (fabs(result * result - number) / number >= EPSILON)
        result = (number / result  - result) / 2 + result;
    return result;
}

string congData(string a, string b)
{
    if(a.length() < b.length())
    {
        int tmp = (b.length() - a.length());
        for(int i = 0; i < tmp; ++i)
        {
            a = "0" + a;
        }
    }
    else if(a.length() > b.length())
    {
        int tmp = (a.length() - b.length());
        for(int i = 0; i < tmp; ++i)
        {
            b = "0" + b;
        }
    }
    
    string result = "";
    bool soDu = 0;
    for(int i = a.length() - 1; i >= 0; --i)
    {
        int tong = (int)(a[i] - '0') + (int)(b[i] - '0') + soDu;
        if(tong > 9)
        {
            soDu = 1;
            result = (char)(tong % 10 + '0') + result;
        }
        else
        {
            soDu = 0;
            result = (char)(tong + '0') + result;
        }
    }
    if(soDu) result = "1" + result;
    return result;
}

string nhanMotChuSo(string a, short n)
{
    short soDu = 0;
    string result = "";
    for(int i = a.length() - 1; i >= 0; --i)
    {
        int tich = (int)(a[i] - '0') * n + soDu;
        if(tich > 9)
        {
            soDu = tich / 10;
            result = (char)(tich % 10 + '0') + result;
        }
        else
        {
            soDu = 0;
            result = (char)(tich + '0') + result;
        }
    }
    if(soDu) result = (char)(soDu + '0') + result;
    return result;
}
string chiaMotChuSo(string a, short n)
{
    string result = "";
    for(int i = a.length() - 1; i >= 0; --i)
    {
        int tich = (int)(a[i] - '0') * n + soDu;
        if(tich > 9)
        {
            soDu = tich / 10;
            result = (char)(tich % 10 + '0') + result;
        }
        else
        {
            soDu = 0;
            result = (char)(tich + '0') + result;
        }
    }
}
int main()
{
    string s1 = "3", s2 = "1234", s3;
    s3 = nhanMotChuSo(s2, 9);
    cout << s3;
    return 0;
}
//48 49 50 51 52 53 54 55 56 57
//0  1  2  3  4  5  6  7  8  9
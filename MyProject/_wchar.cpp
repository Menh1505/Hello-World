#include <iostream>
#include <cwchar>

using namespace std;
int main()
{
    for(int i = 0; i < 1023; ++i)
    {
        wcout << (wchar_t)i << endl;
    }
    return 0;
} // namespace std;


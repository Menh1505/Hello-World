#include <iostream>
#include <cmath>

using namespace std;
int main()
{
    // pt duong thang: (y1 - y2).(x - x1) + (x2 - x1).(y - y1)
    bool DaGialom = false;
    int x1, x2, x3, x4, y1, y2, y3, y4;
    cout << "Nhap 4 diem cua tu giac: " << endl;
    cout << "Diem thu 1: ";
    cin >> x1 >> y1;
    cout << "Diem thu 2: ";
    cin >> x2 >> y2;
    cout << "Diem thu 3: ";
    cin >> x3 >> y3;
    cout << "Diem thu 4: ";
    cin >> x4 >> y4;

    if (((y1 - y2) * (x3 - x1) + (x2 - x1) * (y3 - y1)) * ((y1 - y2) * (x4 - x1) + (x2 - x1) * (y4 - y1)) < 0)
    {
        cout << x1 << " " << y1 << endl;
        cout << x2 << " " << y2 << endl;
        DaGialom = true;
    }
    if (((y2 - y3) * (x4 - x2) + (x3 - x2) * (y4 - y2)) * ((y2 - y3) * (x1 - x2) + (x3 - x2) * (y1 - y2)) < 0)
    {
        cout << x2 << " " << y2 << endl;
        cout << x3 << " " << y3 << endl;
        DaGialom = true;
    }
    if (((y3 - y4) * (x1 - x3) + (x4 - x3) * (y1 - y3)) * ((y3 - y4) * (x2 - x3) + (x4 - x3) * (y2 - y3)) < 0)
    {
        cout << x3 << " " << y3 << endl;
        cout << x4 << " " << y4 << endl;
        DaGialom = true;
    }
    if (((y4 - y1) * (x2 - x4) + (x1 - x4) * (y2 - y4)) * ((y4 - y1) * (x3 - x4) + (x1 - x4) * (y1 - y4)) < 0)
    {
        cout << x4 << " " << y4 << endl;
        cout << x1 << " " << y1 << endl;
        DaGialom = true;
    }

    int v1_x = x2 - x1, v1_y = y2 - y1;
    int v2_x = x3 - x2, v2_y = y3 - y2;
    int v3_x = x4 - x3, v3_y = y4 - y3;
    int v4_x = x1 - x4, v4_y = y1 - y4; 
    double chuvi = sqrt(v1_x * v1_x + v1_y * v1_y) + sqrt(v2_x * v2_x + v2_y * v2_y) + sqrt(v3_x * v3_x + v3_y * v3_y) + sqrt(v4_x * v4_x + v4_y * v4_y);
    DaGialom ? cout << "Da giac lom" : cout << "Da giac loi";
    cout << "\nChu vi: " << chuvi;

    double dientich;
    double nuaChuVi = chuvi / 2;
    if(!DaGialom)
    {
        double S1 = 0.5 * abs((x2 - x1)*(y3 - y1) - (x3 - x1)*(y2 - y1));
        double S2 = 0.5 * abs((x3 - x2)*(y4 - y2) - (x4 - x2)*(y3 - y2));
        dientich = S1 + S2;
    }
    
    cout << "\nDien tich: " << dientich;
    return 0;
} // namespace std;

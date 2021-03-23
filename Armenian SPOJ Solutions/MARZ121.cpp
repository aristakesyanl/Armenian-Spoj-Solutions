#include <iostream>
using namespace std;
int main()
{
    double x1, y1, x2, y2, x3, y3, x4, y4;
    double xm, ym;
    cin >> x1 >> y1 >> x2 >> y2;
    xm = (x1 + x2) / 2;
    ym = (y1 + y2) / 2;
    x3 = -(y1 - ym) + xm;
    y3 = x1 - xm + ym;
    x4 = -(y2 - ym) + xm;
    y4 = x2 - xm + ym;

    if (x3 < x4)
    {
        cout << (int)x3 << " " << (int)y3 << " " << (int)x4 << " " << (int)y4 << endl;
    }

    else
    {
        if (x3 > x4)
        {
            cout << (int)x4 << " " << (int)y4 << " " << (int)x3 << " " << (int)y3 << endl;
        }
        if (x3 == x4)
        {
            if (y3 < y4)
            {
                cout << (int)x3 << " " << (int)y3 << " " << (int)x4 << " " << (int)y4 << endl;
            }

            else
            {
                cout << (int)x4 << " " << (int)y4 << " " << (int)x3 << " " << (int)y3 << endl;
            }
        }
    }

    return 0;
}
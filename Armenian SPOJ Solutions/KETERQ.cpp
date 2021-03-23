#include <bits/stdc++.h>
using namespace std;
class Point
{
public:
    int x, y;
    Point(int a = 0, int b = 0) : x(a), y(b) {}
};

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int getBoundaryCount(Point p, Point q)
{

    if (p.x == q.x)
        return abs(p.y - q.y) - 1;
    if (p.y == q.y)
        return abs(p.x - q.x) - 1;

    return gcd(abs(p.x - q.x), abs(p.y - q.y)) - 1;
}

int getInternalCount(Point p, Point q, Point r)
{

    int BoundaryPoints = getBoundaryCount(p, q) +
                         getBoundaryCount(p, r) +
                         getBoundaryCount(q, r) + 3;

    int doubleArea = abs(p.x * (q.y - r.y) + q.x * (r.y - p.y) +
                         r.x * (p.y - q.y));

    return (doubleArea - BoundaryPoints + 2) / 2;
}

int main()
{
    int p, k;
    cin >> p >> k;
    Point a(0, 0);
    Point b(k, p - k);
    Point c(k + 1, p - k - 1);
    cout << getInternalCount(a, b, c) << endl;
    return 0;
}
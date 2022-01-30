#include <iostream>
#include <string>
using namespace std;

class Point
{

private:
    int x;
    int y;

public:
    int GetY()
    {
        return y;
    }

    int GetX()
    {
        return x;
    }

    void SetX(int valueX)
    {
        x = valueX;
    }

    void SetY(int valueY)
    {
        y = valueY * 2;
    }

    void Print()
    {
        cout << "X = " << x << "\t"
             << "Y = " << y << endl;
    }
};

int main()
{
    Point a;
    a.SetX(5);
    a.SetY(2);
    a.Print();

    return 0;
}
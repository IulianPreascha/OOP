#include <iostream>
#include <string>
using namespace std;

class Point
{
public:
    int x;

    void Print()
    {
        cout << "y= " << y << endl;
        cout << "z= " << z << endl;
        PrintY();
    }

private:
    int y = 5;
    int z = 10;

    void PrintY()
    {
        cout << "y from private ->" << y << endl;
    }
};

int main()
{
    Point a;
    a.Print();

    return 0;
}
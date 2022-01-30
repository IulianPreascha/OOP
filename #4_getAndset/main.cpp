#include <iostream>
#include <string>
using namespace std;

class Human
{
public:
    int age;
    int weight;
    string name;

    void Print()
    {
        cout << "Name: " << name << "\nWeight: " << weight << "\nAge: " << age << endl;
    }
};

class Point
{

private:
    int x;
    int y;

public:
    Point()
    {
        x = 2;
        y = 3;
    }

    Point(int valueX, int valueY)
    {
        x = valueX;
        y = valueY;
    }

    Point(int valueX, bool boolean)
    {
        x = valueX;
        if (boolean)
        {
            y = 1;
        }
        else
        {
            y = -1;
        }
    }

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

class CoffeeGrinder
{
private:
    bool CheckVoltage()
    {
        return true;
    }

public:
    void Start()
    {
        if (CheckVoltage())
        {
            cout << "VjuHHH!!" << endl;
        }
        else
        {
            cout << "Beep Beep" << endl;
        }
    }
};

int main()
{
    Point a;
    a.Print();

    Point b(5, 41);
    b.Print();

    return 0;
}
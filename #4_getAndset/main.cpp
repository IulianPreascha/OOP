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
    Point(int valueX, int valueY)
    {
        x = valueX;
        y = valueY;
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
    Point a(5, 44);
    a.Print();

    Point b(77, 9);
    b.Print();

    
    return 0;
}
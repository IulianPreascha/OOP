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
        x = 0;
        y = 0;
        cout << this << " construcotr" << endl;
    }

    Point(int valueX, int valueY)
    {
        x = valueX;
        y = valueY;
        cout << this << " construcotr" << endl;
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

    void SetY(int y)
    {
        this->y = y;
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

class MyClass
{
private:
    int *data;

public:
    MyClass(int size)
    {
        data = new int[size];
        for (int i = 0; i < size; i++)
        {
            data[i] = i;
        }
        cout << "Object = " << data << " The constructor called" << endl;
    }

    ~MyClass()
    {
        delete[] data;
        cout << "Object = " << data << " The destructor called" << endl;
    }
};

int main()
{
    Point a;
    a.SetY(5);
    a.Print();

    return 0;
}
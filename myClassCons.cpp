#include <iostream>
using namespace std;
// C++ Bangla Tutorials 69 : Constructor
// C++ Bangla Tutorials 70 : Types of Constructor | constructor overloading

class Student
{
public:
    int id;
    double gpa;
    Student(int x, double y)
    {
        id = x;
        gpa = y;
    }
    void display()
    {
        cout << id << " " << gpa << endl;
    }
    Student()
    {
        cout << "default constructor/constructor without parameter" << endl;
    }
};

int main()
{
    Student Sohel(117, 3.82);
    Sohel.display();

    Student Sumi(119, 3.92);
    Sumi.display();

    Student defaultCons;

    return 0;
}
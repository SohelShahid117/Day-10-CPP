#include <iostream>
using namespace std;

class Student
{
public:
    int id;
    double gpa;
    void display()
    {
        cout << id << " " << gpa << endl;
    }
    void setValue(int x, double y)
    {
        id = x;
        gpa = y;
    }
};

int main()
{
    Student Sohel, Shahid;
    Sohel.setValue(117, 3.82);
    Sohel.display();
    // cout << "hello world" << endl;
    // void display();
    return 0;
}
#include "mydestructorclass.h"
#include<iostream>
using namespace std;

myDestructorClass::~myDestructorClass(){
    cout<<"destructor is called---1"<<endl;
}

myDestructorClass::myDestructorClass()
{
    cout<<"constructor is called"<<endl;
}
/*myDestructorClass::~myDestructorClass(){
    cout<<"destructor is called---2"<<endl;
}
*/
void myDestructorClass::display(){

cout<<"called from display method"<<endl;
}

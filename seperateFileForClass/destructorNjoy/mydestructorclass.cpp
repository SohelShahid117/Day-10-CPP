#include "mydestructorclass.h"
#include<iostream>
using namespace std;

myDestructorClass::myDestructorClass()
{
    cout<<"constructor is called"<<endl;
}
myDestructorClass::~myDestructorClass(){
    cout<<"destructor is called"<<endl;
}

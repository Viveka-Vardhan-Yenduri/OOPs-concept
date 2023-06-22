//Hierarchical Inheritance

#include <iostream>
using namespace std;

class Sports 				//Base class
{
public:
Sports ()
{
cout << "This is a Sport" << endl;
}
};


class football: public Sports 		//Derived class inheriting Sports class
{
};


class cricket: public Sports		//Derived class inheriting Sports class
{
};


int main ()
{
football ();
cricket ();
return 0;
}

//Hierarchical inheritance is defined as the process of deriving more than one class from a base class.

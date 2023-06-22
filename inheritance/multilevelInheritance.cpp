//Multilevel inheritance

#include <iostream>
using namespace std;

class Transport 				//Base Class
{
public:
Transport ()
{
cout << "This is a Transport" << endl;
}
};

class fourWheeler: public Transport		//Derived class inheriting Transport class
{
public:
fourWheeler()
{
cout<<"Transport vehicle have 4 wheels "<<endl;
}
};

class AutoRikshaw: public fourWheeler{		//Derived class inheriting fourwheeler class
public:
AutoRikshaw()
{
cout<<"AutoRikshaw has 4 Wheels"<<endl;
}
};


int main ()
{
AutoRikshaw ();
return 0;
}

//Multilevel inheritance is a process of deriving a class from another derived class.

//Public: When the member is declared as public, it is accessible to all the functions of the program.
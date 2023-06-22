//Multiple inheritance

#include <iostream>  
using namespace std;  

class A  			//Base Class
{  
    protected:  	
     int a;  
    public:  		
    void get_a(int n)  
    {  
        a = n;  
    }  
};  
  
class B  			//Base Class
{  	
    protected:  
    int b;  
    public:  
    void get_b(int n)  
    {  
        b = n;  
    }  
};  
class C : public A,public B 	 //Derived Class inheriting both class A and class B
{  
   public:  
    void display()  
    {  
        std::cout << "The value of a is : " <<a<< std::endl;  
        std::cout << "The value of b is : " <<b<< std::endl;  
        cout<<"Addition of a and b is : "<<a+b;  
    }  
};  
int main()  
{  
   C c;  
   c.get_a(10);  
   c.get_b(20);  
   c.display();  
  
    return 0;  
}  

//Multiple inheritance is the process of deriving a new class that inherits the attributes from two or more classes.

//Protected: When the member is declared as protected, it is accessible within its own class as well as the class immediately derived from it.

//Public: When the member is declared as public, it is accessible to all the functions of the program.
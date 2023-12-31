//single inheritance

#include <iostream>  
using namespace std;  

 class Account { 			 //Base class
   public:  
   float salary = 60000;   
 };  

   class Programmer: public Account { 	 //Derived class inheriting Account class
   public:  
   float bonus = 5000;    
   };       

int main(void) {  
     Programmer p1;  
     cout<<"Salary: "<<p1.salary<<endl;    
     cout<<"Bonus: "<<p1.bonus<<endl;    
    return 0;  
}  

//Single inheritance is defined as the inheritance in which a derived class is inherited from the only one base class.
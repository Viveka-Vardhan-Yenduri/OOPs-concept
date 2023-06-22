//Abstraction

#include<iostream>

using namespace std ;
class Addition

{
private :  int p, q, r ;				 // declaring private variables p, q, and r
public :    						// public function add() can be used by any outside class
void add ()
{
cout << " Please enter the two numbers : " ;
cin >> q >> r ;
p = q + r ;    						// performing addition and storing total in integer variable p
cout << " The Sum of two number is : " << p << endl ;
}
} ;

int main ()
{
Addition ad;   					// creating declared class object “ad”
ad.add () ;    						// calling add () method
return 0 ;
}

//Hiding internal details and showing functionality
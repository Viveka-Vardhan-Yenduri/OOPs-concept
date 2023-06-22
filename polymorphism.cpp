//Polymorphism

#include<iostream>
using namespace std;


int add(int n1, int n2) {
return n1 + n2;
}


double add(double num1, double num2) {
return num1 + num2;
}


int add(int n1, int n2, int n3) {
return n1 + n2 + n3;
}


int main() {
cout << "Result 1 = " << add(10, 20) << endl;		// Calling function with 2 int parameters

cout << "Result 2 = " << add(10.5, 60.6) << endl;	// Calling function with 2 double parameters

cout << "Result 3 = " << add(50, 10, 20) << endl;	// Calling function with 3 int parameters

}

//When one task is performed by different ways
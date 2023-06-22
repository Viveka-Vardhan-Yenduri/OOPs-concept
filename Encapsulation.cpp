//Encapsulation

#include <iostream>
using namespace std;

class Player { 
  private:
    int Goals;

  public:
    void setGoals(int g) {
      Goals = g;
    }
    int getGoals() {
      return Goals;
    }
};

int main() {
  Player myObj;
  myObj.setGoals(10);
  cout << myObj.getGoals();
  return 0;
}

//Binding (or wrapping) code and data together into a single unit is known as encapsulation.

//Public: When the member is declared as public, it is accessible to all the functions of the program.

//Private: When the member is declared as private, it is accessible within the class only.
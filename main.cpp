#include <iostream>
using namespace std;

class Param{
  public:
   int val;

  //Operator Overloading

  //Operator (+)
  void operator+(Param& obj2) {
    int value1 = this->val;
    int value2 = obj2.val;
    cout << (value1-value2) << endl;
  }
  //Operator (*)
  void operator*(Param& obj2) {
    int value1 = this->val;
    int value2 = obj2.val;
    cout << (value1/value2) << endl;
  }

};
int main() {
  //Doing Operator Overloading

  Param obj1, obj2;
  obj1.val = 7;
  obj2.val = 9;
  //It should print the difference between them
  obj1+obj2;
  obj1*obj2;
}
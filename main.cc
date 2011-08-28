#include <iostream>
#include "stack.h"
using namespace std;

int main() {
  int first = 2;
  int second = 3;
  cout << add(first, second) << endl;
  Stack s;
  s.push(5);
  s.push(4);
  s.push(3);
  cout << s.pop() << endl;
  cout << s.pop() << endl;
  cout << s.pop() << endl;
  cout << s.pop() << endl;
}

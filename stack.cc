#include <iostream>
#include "stack.h"

using namespace std;

int add(int a, int b) {
  return (a + b);
}

Stack::Stack() {
  cout << "Constructor" << endl;
}

int Stack::pop() {
  cout << "POP" << endl;
  return 1;
}

void Stack::push(int val) {
  cout << "PUSH" << endl;
  return;
}

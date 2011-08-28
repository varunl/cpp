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
  if (v.size() == 0) {
    cout << "Underflow!" << endl;
    return -1;
  }
  int last = v.back();
  v.pop_back();
  return last;
}

void Stack::push(int val) {
  v.push_back(val);
  return;
}

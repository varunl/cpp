#include <vector>
using namespace std;

int add(int a, int b);

// Integer stack
class Stack {
  private:
    vector<int> array(int);
  public:
    Stack();
    void push(int);
    int pop();
    void print();
};

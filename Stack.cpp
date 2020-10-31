#include "Stack.h"

struct Node {
  unsigned elem;
  Node* next;
};

Stack::Stack() {
  _top = new Node();
  _count = 0;
}

void Stack::push(unsigned elem) {
  // TODO.
}

void Stack::pop() {
  // TODO.
}

unsigned Stack::top() const {
  return 0;  // TODO.
}

unsigned Stack::count() const {
  return 0;  // TODO.
}
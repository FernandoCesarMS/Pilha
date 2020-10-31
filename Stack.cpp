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
  if (_count == 0){
    _top->elem = elem;
    _count++;
  }
  else{
    Node* aux;
    aux->elem = _top->elem;
    aux->next = _top->next;
    _top->next = aux;
    _top->elem = elem;
  }
}

void Stack::pop() {
 _top->next->elem = _top->elem;
 _top->next->next = _top->next;
}

unsigned Stack::top() const {
  return _top->elem;  
}

unsigned Stack::count() const {
  return count; 
}
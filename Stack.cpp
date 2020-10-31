#include "Stack.h"

struct Node{
  unsigned elem;
  Node *next;
};

Stack::Stack(){
  _top = new Node();
  _count = 0;
}

void Stack::push(unsigned elem){
  if (_count == 0){
    _top->elem = elem;
    _count++;
  }
  else{
    Node *aux;
    aux->elem = _top->elem;
    aux->next = _top->next;
    _top->next = aux;
    _top->elem = elem;
    _count++;
  }
}

void Stack::pop(){
  if (_count == 0)
    throw EmptyException();
  else{
    _top->next->elem = _top->elem;
    _top->next->next = _top->next;
    _count--;
  }
}

unsigned Stack::top() const{
  if (_count == 0)
    throw EmptyException();
  return _top->elem;
}

unsigned Stack::count() const{
  return _count;
}
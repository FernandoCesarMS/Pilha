#include "Stack.h"
#include <iostream>

struct Node{
  unsigned elem;
  Node *next;
  Node(){
      elem = 0;
      next = NULL;
  }
  Node(unsigned a,Node* b){
      elem = a;
      next = b;
  }
};

Stack::Stack(){
  _top = new Node();
  _count = 0;
}

void Stack::push(unsigned elem){
  if (_count == 0)
    _top = new Node(elem,NULL);
  else if (_count == 1){
      _top->next = new Node(_top->elem,NULL);
      _top->elem = elem;
  }
  else{
    _top->next = new Node(_top->elem,_top->next->next);
    _top->elem = elem;
  }
  _count++;
}

void Stack::pop(){
  if (_count == 0)
    throw EmptyException();
  else{
      _top->elem = _top->next->elem;
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
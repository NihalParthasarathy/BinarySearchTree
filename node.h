#ifndef NODE_H
#define NODE_H
#include <iostream>

class Node {
 public:
  Node* left;
  Node* right;
  Node* parent;
  int data;
  Node(int newdata);
  ~Node();
  void setLeft(Node* newleft);
  void setRight(Node* newright);
  Node* getLeft();
  Node* getRight();
  Node* getParent();
  int getData();

};




#endif

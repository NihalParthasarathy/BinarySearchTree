#include "node.h"
#include <iostream>

using namespace std;

Node::Node(int newdata) {
  left = NULL;
  right = NULL;
  data = newdata;
}



void Node::setRight(Node* newright) {
  right = newright;
}
void Node::setLeft(Node* newleft) {
  left = newleft;
}
Node* Node::getLeft() {
  return left;
}
Node* Node::getRight() {
  return right;
}
Node* Node::getParent() {
  return parent;
}
int Node::getData() {
  return data;
}

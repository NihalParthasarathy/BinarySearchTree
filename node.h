//Nihal Parthasrathy
//4/20/2022
//This program uses a binary tree to sort numbers and is able to add them, search for numbers, display the tree, and remove numbers

//Header Gaurd
#ifndef NODE_H
#define NODE_H
#include <iostream>

class Node {//Node Class
 public:
  //Varubles and pointers
  Node* left;
  Node* right;
  Node* parent;
  int data;
  //Prototypes
  Node(int newdata);
  void setLeft(Node* newleft);
  void setRight(Node* newright);
  Node* getLeft();
  Node* getRight();
  Node* getParent();
  int getData();

};




#endif

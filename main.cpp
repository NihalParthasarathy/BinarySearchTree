#include "node.h"
#include <iostream>
#include <cstring>

using namespace std;

void manualAdd(Node* &root);
void recurciveAdd(Node* curr, int value);

int main() {
  cout << "Binary Search Tree" << endl;
  Node* root = NULL;
  bool playing = true;
  while (playing == true) {//While loop
    cout << "would you like to add from a file(ADD), Manualy add(TYPE), search(SEARCH), display(DISPLAY), remove from heap(REMOVE), or quit(QUIT)" << endl;
    char input[10];
    cin >> input;
    if (strcmp(input, "ADD") == 0) {//Calls the add function
      manualAdd(root);
    }
    else if (strcmp(input, "TYPE") == 0) {//Calls type function
      
    }
    else if (strcmp(input, "DISPLAY") == 0) {//Calls display function
      
    }
    else if (strcmp(input, "SEARCH") == 0) {//Calls the print function
      
    }
    else if (strcmp(input, "REMOVE") == 0) {//Calls remove function
      
    }
    else if (strcmp(input, "QUIT") == 0) {//Returns false
      playing = false;//Exits while Loop stopping game
    }
  }
}

void manualAdd(Node* &root) {
  cout << "enter a number between 1-999" << endl;
  int num;
  cin >> num;
  if (root == NULL) {
    root = new Node(num);
    root->parent = NULL;
  }
  else if (root != NULL) {
    recurciveAdd(root, num);
  }
}

void recurciveAdd(Node* curr, int value) {
  if (curr->data >= value && curr->getLeft() == NULL) {
    curr->setLeft(new Node(value));
    curr->getLeft()->parent = curr;
  }
  else if (curr->data < value && curr->getRight() == NULL) {
    curr->setRight(new Node(value));
    curr->getRight()->parent = curr;
  }
  else if (curr->data >= value) {
    recurciveAdd(curr->getLeft(), value);
  }
  else if (curr->data < value) {
    recurciveAdd(curr->getRight(), value);
  }
}

//Eyasu Berehanu
//12/20/22
//This is part 1 of link list where a node files and student files are given 
//so the person reciving this code will be able to make a student list
// A mass majority of my code such as the nodes.cpp the node.h and the main.cpp 
//are based of Mr. Galbraith Walkthrough, im using a verison of his main to show
//my code works and complies

#include <iostream>
#include <cstring>
#include "student.h"
#include "node.h"
using namespace std;

void add(Node*& head, int newValue);
void print(Node* head, Node* next);

int main() {

Node* head = NULL;  

  add(head, 5);
  print(head, head);
  add(head, 7);
  print(head, head);
  add(head, 2);
  print(head, head);
  
  while (head != NULL) {
        Node* temp = head;
        head = head->getNext();
        delete temp;
    }

    return 0;
}

void add(Node*& head, int newValue) {
  if (head == NULL) {
    head = new Node();
    head->setValue(newValue);
  } else {
    Node* current = head;
    while (current->getNext() != NULL) {
      current = current->getNext();
    }
    current->setNext(new Node());
    current->getNext()->setValue(newValue);
  }
  
}


void print(Node* head, Node* next) {
  if (next == head) {
    cout << "list: ";
  }
  if (next != NULL) {
    cout << next->getValue() << " ";
    print(head, next->getNext());
} else {
        cout << endl;  
    }
}

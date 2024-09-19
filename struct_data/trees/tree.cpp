#include <iostream>

// Define the structure of a node
struct Node {
  int value;
  Node *next;
};

// Function to insert a node at the beginning of the list
void insertAtBeginning(Node *&head, int newValue) {
  Node *newNode = new Node(); // Create a new node
  newNode->value = newValue;  // Assign value to the new node
  newNode->next = head;       // Point to the previous first node
  head = newNode;             // Move the head to the new node
}

// Function to print the list
void printList(Node *head) {
  Node *current = head;
  while (current != nullptr) {
    std::cout << current->value << " -> ";
    current = current->next; // Move to the next node
  }
  std::cout << "NULL" << std::endl;
}

int main() {
  Node *head = nullptr; // Initially, the list is empty

  insertAtBeginning(head, 10); // Insert 10
  insertAtBeginning(head, 20); // Insert 20
  insertAtBeginning(head, 30); // Insert 30

  printList(head); // Prints the list: 30 -> 20 -> 10 -> NULL

  return 0;
}


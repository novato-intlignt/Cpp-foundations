#include <iostream>
#include <string> // For std::string

// Definition of the Person structure
struct Person {
  std::string name; // Name of the person
  int age;          // Age of the person
  float height;     // Height of the person in meters
};

// Function to display the information of a Person
void displayPerson(const Person &p) {
  std::cout << "Nombre: " << p.name << std::endl;
  std::cout << "Edad: " << p.age << std::endl;
  std::cout << "Altura: " << p.height << " m" << std::endl;
}

int main() {
  // Create a variable of type Person
  Person person1;

  // Assign values to the members of the structure
  person1.name = "Juan Pérez";
  person1.age = 30;
  person1.height = 1.75;

  // Display the person's information
  displayPerson(person1);

  return 0;
}

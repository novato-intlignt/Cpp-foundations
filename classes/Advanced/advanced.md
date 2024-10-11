# Advanced Object-Oriented Programming in C++

## Multiple Inheritance

- Multiple inheritance allows a class to inherit from more than one base class. This can lead to complexities like the Diamond Problem, where ambiguities may arise when multiple paths to a common base class exist.

## Virtual Functions

- Virtual functions enable run-time polymorphism, allowing derived classes to override functions defined in base classes. This allows the program to decide which function to call at run time based on the object type.

## Abstract Classes and Interfaces

- **Abstract Classes:** Can contain both complete and pure virtual functions. Used when some methods should be implemented by derived classes.
- **Interfaces:** Define a set of methods that implementing classes must provide, offering a way to achieve abstraction and multiple inheritance.

## Operator Overloading

- Operator overloading allows developers to redefine the behavior of operators (like +, -, \*, etc.) for user-defined types, making it possible to use objects in a more intuitive way.

## Friend Classes

- Friend classes can access the private and protected members of another class. This is useful for tightly coupled classes that need direct access to each other's data.

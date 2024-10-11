# Fundamentals of Object-Oriented Programming in C++

## 1. Introduction to OOP

- OOP is a programming paradigm based on the concept of "objects," which can contain data and code.

## 2. Classes and Objects Definition

- **Class**: A blueprint for creating objects. Defines attributes (data) and methods (functions) that operate on the data.
- **Object**: An instance of a class. Represents a specific item with its own state and behavior.

## Access Modifiers

- Access modifiers define the accessibility of class members:
  - **Public:** Accessible from outside the class.
  - **Private:** Not accessible from outside the class.
  - **Protected:** Accessible in derived classes.

## Constructors and Destructors

- **Constructors:** Special member functions called when an object is created. Types include:
  - Default Constructor
  - Parameterized Constructor
  - Copy Constructor
- **Destructors:** Special member functions called when an object is destroyed, used to release resources.

## Inheritance

- Inheritance allows a new class to inherit properties and behaviors from an existing class. Types include:
  - Single Inheritance
  - Multiple Inheritance
  - Multilevel Inheritance
  - Hierarchical Inheritance
  - Hybrid Inheritance

## Polymorphism

- Polymorphism allows methods to do different things based on the object it is acting upon:
  - **Compile-Time Polymorphism:** Achieved through function and operator overloading.
  - **Run-Time Polymorphism:** Achieved through method overriding in derived classes.

## Abstraction

- Abstraction is the concept of hiding the complex reality while exposing only the necessary parts. It involves:
  - **Abstract Classes:** Cannot be instantiated and may contain pure virtual functions.
  - **Interfaces:** Define a contract that derived classes must implement.

## Encapsulation

- Encapsulation is the bundling of data and methods that operate on that data within one unit, such as a class. Benefits include:
  - Protects data from unauthorized access.
  - Maintains the integrity of the data.

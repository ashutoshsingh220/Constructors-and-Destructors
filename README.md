# Constructors-and-Destructors

## Aim:
To study and implement constructors and destructors in C++.

## Theory:
Constructors and destructors are special member functions of a class in C++ that are used to initialize and clean up objects, respectively.

### Constructors-
Definition: A constructor is a special member function that is automatically called when an object of the class is created. It has the same name as the class and does not have a return type.

Purpose: To initialize the object's data members.

Types:
1) Default Constructor: Takes no arguments.
2) Parameterized Constructor: Takes one or more arguments.
3) Copy Constructor: Initializes an object using another object of the same class.
4) Move Constructor: Transfers resources from a temporary object to a new object (introduced in C++11).

### Destructors-
Definition: A destructor is a special member function that is automatically called when an object goes out of scope or is explicitly deleted. It has the same name as the class, preceded by a tilde (~), and does not take any arguments or return a value.

Purpose: To release resources allocated to the object.

Characteristics:
1) There can only be one destructor in a class.
2) It cannot be overloaded.
3) It is called in the reverse order of the constructor calls.

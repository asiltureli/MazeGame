# Creational Design Patterns in C++

This repository demonstrates implementations of the creational design patterns from the classic book *"Design Patterns: Elements of Reusable Object-Oriented Software"* by the "Gang of Four" (Erich Gamma, Richard Helm, Ralph Johnson, and John Vlissides). Each pattern is written in plain C++11 and organized with CMake for ease of building and testing.

## Creational Design Patterns Covered

This repository includes the following creational design patterns:

1. **Factory Method** - Defines an interface for creating an object, but lets subclasses alter the type of created objects.
2. **Abstract Factory** - Provides an interface for creating families of related or dependent objects without specifying their concrete classes.
3. **Builder** - Separates the construction of a complex object from its representation so that the same construction process can create different representations.
4. **Prototype** - Specifies the kinds of objects to create using a prototypical instance and creates new objects by copying this prototype.

# Requirements
- C++11 or later: Smart pointers are used in the code.
- CMake: The build system uses CMake for portability and ease of use.

# Building the Project

To build the project, follow these steps:

```
# Clone the repository
git clone https://github.com/asiltureli/MazeGame.git
cd MazeGame

# Create a build directory and navigate into it
mkdir build && cd build

# Run CMake to configure the project
cmake ..

# Build the project
make <target-name>
```

Each pattern can be built as a library and as an executable. You can find target names in the root CMakeLists.txt

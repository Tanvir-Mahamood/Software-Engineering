# Software Engineering Repository
This document provides an overview of the projects in this repository, along with instructions for setting up the necessary tools (Google Test, CMake, and Visual Studio) for unit testing.
## Projects Overview
### 1. **Calculator (Python)**
   A simple Python calculator that performs basic arithmetic operations (addition, subtraction, multiplication, division).
   <br>**Features and Testing**
   - User input handling
   - Error handling for invalid inputs
   - Unit tests written using [Python's unittest framework](https://www.geeksforgeeks.org/unit-testing-python-unittest/).

### 2. **CoffeeShop (Java - Decorator Design Pattern)**
   A Java project demonstrating the Decorator Design Pattern for a coffee shop system.
   <br>**Classes and Functionality:**
   - PlainCoffee (Base class)
   - CoffeeDecorator (Abstract decorator)
   - HoneyDecorator, MilkDecorator, SugarDecorator (Concrete decorators)
   - Users can customize coffee with different combinations of decorators (e.g., Milk + Sugar, Honey + Milk).
     
### 3. **Factory_Method (Java - Factory Method Design Pattern)**
   A Java project illustrating the Factory Method Design Pattern for creating UI buttons.
   <br>**Classes and Functionality:**
   - Button (Interface)
   - WindowsButton, MacButton (Concrete implementations)
   - Dialog (Abstract creator with factory method)
   - WindowsDialog, MacDialog (Concrete creators)
   - Generates platform-specific buttons (Windows/Mac) based on the factory method.
     
### 4. **Factory Project and Testing (C++ - Factory Method with GTest)**
   A C++ project implementing the Factory Method Design Pattern for shape creation, along with unit tests using [Google Test (GTest)](https://learn.microsoft.com/en-us/visualstudio/test/how-to-use-google-test-for-cpp?view=vs-2022).
   <br>**Classes and Testing:**
   - Shape (Base class)
   - Circle, Rectangle, etc. (Derived classes)
   - ShapeFactory (Factory class)
   - Unit tests written using GTest (Google Test Framework).


### 5. **LabFinal (C++ - Vehicle Inheritance Hierarchy)**
   A C++ project for a vehicle management system demonstrating Factory Method.
   <br>**Classes Features:**
   - Vehicle (Base class)
   - Car, Truck, Bike (Derived classes)
   - Different vehicle types with unique attributes and methods.

<br>

## Setting Up Google Test (GTest) in Visual Studio
1. **Download the Compiler:**
   Choose a compiler like GCC or Clang.
   - On Windows: Install [MinGW-w64](https://www.mingw-w64.org/) or use [MSVC (Microsoft Visual Studio C++ Compiler)](https://visualstudio.microsoft.com/vs/features/cplusplus/).
   - On Linux/macOS: Install GCC/Clang using your package manager `sudo apt install g++` for Ubuntu or `brew install gcc` for macOS).

2. **Installing Visual Studio with C++ Workload**
Download [Visual Studio](https://visualstudio.microsoft.com/)
Run the installer and select:
`Desktop development with C++` workload.
Ensure `C++ CMake tools for Windows` is checked.

<br> Follow this [Tutorial For Complete Insrtallation](https://youtu.be/Ek5JL1790pQ?si=AuX67VPrD0VoGX-T)

3. **Alternative:** Installing `GTest` Manually with `CMake`
 - Download `CMake` [from here](https://cmake.org/download/)
 - Download `Google Test` [from here](https://github.com/google/googletest)
 - Build GTest using CMake:

```sh
mkdir build
cd build
cmake ..
cmake --build .
```

4. Link GTest in your project (update CMakeLists.txt):
```
find_package(GTest REQUIRED)
target_link_libraries(YourProject GTest::GTest GTest::Main)
```

## Useful Links
- [Google Test Documentation](https://google.github.io/googletest/)
- [GTest GitHub](https://github.com/google/googletest)
- [CMake Installation Guide](https://cmake.org/resources/)
- [Design Patterns](https://refactoring.guru/design-patterns/catalog)
- [Short Overview](https://youtube.com/playlist?list=PLlsmxlJgn1HJpa28yHzkBmUY-Ty71ZUGc&si=UrKzlO1jK0ZANmoQ)
- [Design Patterns](https://github.com/kamranahmedse/design-patterns-for-humans)

## Conclusion
This repository contains multiple projects demonstrating key software design patterns (Decorator, Factory Method) and unit testing practices in Python and C++.


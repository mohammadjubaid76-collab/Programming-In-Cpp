# Programming-in-cpp

A structured repository of foundational C++ programs highlighting core computer science principles, including procedural control flow, mathematical logic, algorithmic patterns, and Object-Oriented Programming (OOP).

---

## 📁 Repository Architecture

The codebase is organized categorically based on programming concepts and complexity:

### 1. Control Flow & Decisional Logic
* **`if_else.cpp`**: Demonstrates basic conditional branching through a voting eligibility verification script.
* **`odd_even.cpp`**: Evaluates integer parity (odd or even) utilizing the modular arithmetic operator (`%`).
* **`large_two_no.cpp`**: Implements basic relational operators to determine the maximum of two numerical inputs.
* **`Largest_3_Number.cpp`**: Multi-conditional branching utilizing nested `if-else` statements to identify the maximum among three discrete values.
* **`Income_tax_calculator.cpp`**: Calculates progressive tax liabilities based on defined annual income brackets (evaluated in Lakhs).

### 2. Algorithmic Loops & Mathematical Logic
* **`Fibonacci_Series.cpp`**: An iterative approach to generating and printing the Fibonacci sequence up to $n$ terms.
* **`Pallindrom_Number.cpp`**: Utilizes digit extraction and arithmetic reconstruction to determine if an integer reads identically in reverse.

### 3. Structural Pattern Generation (Nested Loops)
* **`Character_Pramid.cpp`**: Generates a right-angled triangular matrix featuring sequentially incremented uppercase ASCII characters.
* **`Diamond_pattern.cpp`**: Constructs a perfectly symmetrical diamond geometric pattern using nested loops to handle space-padding and asterisk calculations.
* **`Floyd's_cpp`**: Implements Floyd's Triangle, mapping sequential natural numbers row-by-row into a triangular matrix.
* **`half_Pramid.cpp`**: Outputs a standard sequential numeric half-pyramid relative to row indexes.
* **`Half-Pattern.cpp`**: Renders an indented, spaced matrix pattern leveraging dynamic padding computation.
* **`Hollow_star.cpp`**: Demonstrates edge-detection and boundary constraints within nested loops to output a hollow square star frame.

### 4. Object-Oriented Programming (OOP)
* **`inside_the_class.cpp`**: Illustrates class architecture, separating interface from implementation by defining member functions outside the class scope via the scope resolution operator (`::`).
* **`Friend_class.cpp`**: Showcases encapsulation design patterns, demonstrating how a designated `friend` class bypasses standard access modifiers to read private member variables.

---

## 🛠️ Environment & Compilation Setup

### Prerequisites
To compile and execute these source files, you require a standard C++ compiler supporting at least C++11 (e.g., `GCC/G++` or `Clang`).

### Compilation & Execution Workflow

Navigate to the root directory containing the source files and execute the following commands in your terminal interface:

1. **Compile the Source Code:**
```bash
   g++ filename.cpp -o program

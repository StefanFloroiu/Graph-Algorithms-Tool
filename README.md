# Graph Algorithms Tool
**University of Bucharest | Data Structures & OOP Project**


### 🚀 Description

This project is a C++ Command Line Interface (CLI) application designed to solve shortest-path problems in graphs. 

It serves as a practical implementation of core algorithms and advanced Object-Oriented Programming (OOP) principles studied at **FMI UniBuc**.


### 🛠️ Key Features

* **Pathfinding Algorithms:** Implements **Dijkstra’s Algorithm** for weighted graphs ($O(E \log V)$) and **BFS** for unweighted shortest paths.

* **OOP Architecture:** Modular design using classes for `Graph`, `Node`, and `Edge` to ensure **encapsulation** and **maintainability**.

* **Memory Management:** Optimized performance using **STL containers** (`std::vector`, `std::list`) and efficient memory allocation.

* **Interactive CLI:** User-friendly terminal interface for graph input and real-time path calculation.


### 📂 File Structure

* `Graph.h`: Header file containing class declarations, structures, and method prototypes.

* `Graph.cpp`: Core logic implementation, including Dijkstra and BFS algorithms.

* `main.cpp`: Entry point of the application, handling user input and the CLI menu.


### 💻 Getting Started

**Prerequisites:** A C++ compiler supporting **C++17** (e.g., `g++` on Linux/Ubuntu).


**Installation & Execution:**

```bash
# Clone the repository
git clone [https://github.com/StefanFloroiu/Graph-Algorithms-Tool.git](https://github.com/StefanFloroiu/Graph-Algorithms-Tool.git)

# Navigate to the project folder
cd Graph-Algorithms-Tool

# Compile the application
g++ -std=c++17 main.cpp Graph.cpp -o graph_tool

# Run the tool
./graph_tool

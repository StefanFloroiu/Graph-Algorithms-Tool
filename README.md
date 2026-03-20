# Graph Algorithms Tool
**University of Bucharest | Data Structures & OOP Project**


### 🚀 Description

[cite_start]This project is a C++ Command Line Interface (CLI) application designed to solve shortest-path problems in graphs[cite: 27, 28]. 

[cite_start]It serves as a practical implementation of core algorithms and advanced Object-Oriented Programming (OOP) principles studied at **FMI UniBuc**[cite: 21, 22].


### 🛠️ Key Features

* [cite_start]**Pathfinding Algorithms:** Implements **Dijkstra’s Algorithm** for weighted graphs ($O(E \log V)$) and **BFS** for unweighted shortest paths[cite: 28].

* [cite_start]**OOP Architecture:** Modular design using classes for `Graph`, `Node`, and `Edge` to ensure **encapsulation** and **maintainability**[cite: 29].

* [cite_start]**Memory Management:** Optimized performance using **STL containers** (`std::vector`, `std::list`) and efficient memory allocation[cite: 29].

* [cite_start]**Interactive CLI:** User-friendly terminal interface for graph input and real-time path calculation[cite: 28].


### 📂 File Structure

* `Graph.h`: Header file containing class declarations, structures, and method prototypes.

* `Graph.cpp`: Core logic implementation, including Dijkstra and BFS algorithms.

* `main.cpp`: Entry point of the application, handling user input and the CLI menu.


### 💻 Getting Started

[cite_start]**Prerequisites:** A C++ compiler supporting **C++17** (e.g., `g++` on Linux/Ubuntu)[cite: 18, 25].


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
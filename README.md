# C++ Portfolio — Irfana Aslam

![Build](https://github.com/IrfanaAslam/CPlusPlus-portfolio/actions/workflows/build.yml/badge.svg)

A structured collection of C++ programs spanning core language fundamentals, object-oriented design, the STL, classic data structures and algorithms, mini console projects, and small research-oriented utilities. Built while strengthening core CS fundamentals alongside research and Python work.

## Structure

```text
CPlusPlus-portfolio/
├── 01_Fundamentals/
│   ├── Basics/          variables, I/O, simple calculators
│   ├── Conditionals/    if-else, switch-style decision logic
│   ├── Loops/           for/while, Fibonacci, primality testing
│   ├── Functions/       recursion, overloading, default args
│   ├── Arrays/          1D/2D arrays, matrix basics
│   └── Pointers/        references, pointers, dynamic memory
├── 02_OOP/               classes, inheritance, polymorphism, templates
├── 03_STL/               vector, map/set, string algorithms
├── 04_DataStructures/    stack, queue, linked list, BST, hash table (built from scratch)
├── 05_Algorithms/        binary search, merge/quick sort, BFS, DFS, Dijkstra
├── 06_MiniProjects/      library management system, student record system
└── 07_ResearchUtilities/ matrix operations, descriptive statistics, CSV dataset parsing
```

## Highlights

- **Data structures implemented from first principles** (not just `std::` usage) — singly linked list, binary search tree, hash table with separate chaining, array-backed stack/queue.
- **Algorithms with complexity annotations** — every file documents its time complexity in a header comment.
- **Mini projects** that combine classes, STL containers, and file I/O into small but complete console applications.
- **Research utilities** — a matrix class with operator overloading, a statistics toolkit (mean/median/variance/std-dev), and a CSV parser, reflecting the numerical/data-processing work this portfolio connects to.
- **CI** — every `.cpp` file is compiled automatically on push via GitHub Actions ([.github/workflows/build.yml](.github/workflows/build.yml)).

## Build & Run

Each program is self-contained. Compile any file directly with `g++`:

```bash
g++ -std=c++17 path/to/file.cpp -o program
./program
```

On Windows:

```bash
g++ -std=c++17 path/to/file.cpp -o program.exe
program.exe
```

Mini projects under `06_MiniProjects/` each have their own `README.md` with specific build notes.

## About Me

I'm Irfana Aslam, a PhD applicant in Computer Science / AI & Machine Learning. This repository is part of how I keep my core CS fundamentals — data structures, algorithms, and systems-level programming in C++ — sharp alongside my primary research and Python work. I see strong fundamentals in a lower-level language like C++ as a complement to applied ML research: it forces a clearer understanding of memory, performance, and the algorithms that higher-level tools abstract away.

- **Email:** [irfanaaslam@bitwithbite.com](mailto:irfanaaslam@bitwithbite.com)
- **LinkedIn:** [linkedin.com/in/irfana-aslam-b26751176](https://www.linkedin.com/in/irfana-aslam-b26751176)

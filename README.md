RMQ (Range Minimum Query) Data Structures
This repository contains C++ implementations of two different RMQ (Range Minimum Query) data structures: Sparse Table RMQ and Precomputed RMQ. These data structures provide efficient ways to find the index of the minimum element within a given range of an array.

Contents
1. Introduction
2. Usage
3. File Descriptions
4. Contributing
5. License

Introduction
RMQ (Range Minimum Query) is a classic problem in computer science that involves finding the index of the minimum element within a given range of an array. This repository contains two different implementations of RMQ data structures:

Sparse Table RMQ: This data structure preprocesses the array to efficiently answer RMQ queries in O(1) time after O(n log n) preprocessing time.
Precomputed RMQ: This data structure precomputes all possible RMQ queries in O(n^2) time and answers each query in O(1) time.
Both implementations provide efficient solutions for RMQ queries with different trade-offs in preprocessing time and query time.

Usage
To use these RMQ data structures in your C++ projects, follow these steps:

Clone the repository to your local machine.
Include the necessary header files (SparseTableRMQ.h and PrecomputedRMQ.h) in your project.
Instantiate the SparseTableRMQ or PrecomputedRMQ class with your array of elements.
Use the rmq method to query the RMQ data structure for the index of the minimum element within a given range.

// Example usage of Sparse Table RMQ
#include "SparseTableRMQ.h"

// Define your array of elements
RMQEntry* elems = ...;
std::size_t numElems = ...;

// Instantiate SparseTableRMQ
SparseTableRMQ rmq(elems, numElems);

// Query the RMQ data structure
std::size_t minIndex = rmq.rmq(0, 5); // Example query for range [0, 5)
File Descriptions
SparseTableRMQ.h and SparseTableRMQ.cpp: Implementation of the Sparse Table RMQ data structure.
PrecomputedRMQ.h and PrecomputedRMQ.cpp: Implementation of the Precomputed RMQ data structure.
RMQEntry.h: Definition of the RMQEntry struct used in the RMQ data structures.

Contributing
Contributions to this repository are welcome! If you find any bugs or have suggestions for improvements, please feel free to open an issue or create a pull request.

License
This project is licensed under the MIT License - see the LICENSE file for details.

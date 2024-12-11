# Block Space Difference Calculator

## Description

This C++ program calculates the difference between total block weight and available space, helping to determine the remaining or excess block weight in a given scenario.

## Features

- Input total number of blocks
- Calculate total block weight
- Compare total block weight with available space
- Determine remaining or excess weight

## Algorithm

1. Read total number of blocks
2. Read available space
3. Input weights for each block
4. Calculate total block weight
5. Compute difference between total weight and available space
6. Output the result

## Prerequisites

- C++ Compiler (C++11 or later)
- Standard C++ Libraries

## Compilation

Compile the program using a C++ compiler:

```bash
g++ -std=c++11 block_space_calculator.cpp -o block_space_calculator
```

## Usage

1. Run the compiled executable
2. Enter the total number of blocks
3. Enter the available space
4. Enter the weight of each block
5. Program will output:
   - `-1` if total block weight exactly matches available space
   - Difference between total block weight and available space otherwise

### Example Input
```
5     # Total number of blocks
10    # Available space
2     # Weight of block 1
3     # Weight of block 2
4     # Weight of block 3
1     # Weight of block 4
5     # Weight of block 5
```

## Limitations

- No input validation
- Limited error handling
- Assumes integer weights and spaces

## Potential Improvements

- Add input validation
- Handle floating-point weights
- Implement more detailed output
- Add error checking for invalid inputs

## Contributing

Contributions, issues, and feature requests are welcome. Feel free to check [issues page](your-github-repo-link/issues).


## Author

Salman Hashemi

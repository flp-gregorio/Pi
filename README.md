## About

This C program estimates the value of Pi using the Monte Carlo method. The program prompts the user to input the number of iterations to run the simulation. It then generates random points within a unit square and counts how many fall inside the unit circle. The ratio of points inside the circle to the total number of points is used to estimate Pi.

### Files
- pi.c : Contains the implementation of the Monte Carlo simulation for estimating Pi.

### Functions
- `double calcula_pi(long num_ite)`: Performs the Monte Carlo simulation to estimate Pi based on the number of iterations provided.
- `int main()`: The entry point of the program. It prompts the user for input, calls the `calcula_pi` function, and prints the estimated value of Pi.

### Usage
1. Compile the program using a C compiler (e.g., `gcc pi.c -o pi`).
2. Run the executable (e.g., `./pi` on Unix-like systems or pi.exe on Windows).
3. Enter the number of iterations when prompted.
4. The program will output the estimated value of Pi.

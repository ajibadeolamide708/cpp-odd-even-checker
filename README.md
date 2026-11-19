# C++ Odd or Even Checker

A simple C++17 program that tells you whether an integer is odd or even. It supports negative numbers, treats zero as even, lets you check multiple numbers, and exits when you enter `q`.

## Compile

```bash
g++ -std=c++17 -Wall -Wextra main.cpp -o oddeven
```

## Run

```bash
./oddeven
```

On Windows, run `oddeven.exe` instead.

## Sample output

```text
Odd or Even Checker
Enter an integer (or q to quit): 7
7 is Odd.
Enter an integer (or q to quit): 10
10 is Even.
Enter an integer (or q to quit): 0
0 is Even.
Enter an integer (or q to quit): -3
-3 is Odd.
Enter an integer (or q to quit): -8
-8 is Even.
Enter an integer (or q to quit): abc
Invalid input. Please enter a whole integer or 'q' to quit.
Enter an integer (or q to quit): q
Goodbye!
```

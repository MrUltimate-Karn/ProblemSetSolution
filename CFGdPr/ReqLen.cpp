/*
D. Required Length
time limit per test2 seconds
memory limit per test512 megabytes
inputstandard input
outputstandard output
You are given two integer numbers, n and x. You may perform several operations with the integer x.

Each operation you perform is the following one: choose any digit y that occurs in the decimal representation of x at least once, and replace x by x⋅y.

You want to make the length of decimal representation of x (without leading zeroes) equal to n. What is the minimum number of operations required to do that?

Input
The only line of the input contains two integers n and x (2≤n≤19; 1≤x<10n−1).

Output
Print one integer — the minimum number of operations required to make the length of decimal representation of x (without leading zeroes) equal to n, or −1 if it is impossible.

Examples
inputCopy
2 1
outputCopy
-1
inputCopy
3 2
outputCopy
4
inputCopy
13 42
outputCopy
12
Note
In the second example, the following sequence of operations achieves the goal:

multiply x by 2, so x=2⋅2=4;
multiply x by 4, so x=4⋅4=16;
multiply x by 6, so x=16⋅6=96;
multiply x by 9, so x=96⋅9=864.

*/

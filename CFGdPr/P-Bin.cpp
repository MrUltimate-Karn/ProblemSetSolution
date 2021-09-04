/*
C. p-binary
time limit per test2 seconds
memory limit per test512 megabytes
inputstandard input
outputstandard output
Vasya will fancy any number as long as it is an integer power of two. Petya, on the other hand, is very conservative and only likes a single integer p (which may be positive, negative, or zero). To combine their tastes, they invented p-binary numbers of the form 2x+p, where x is a non-negative integer.

For example, some −9-binary ("minus nine" binary) numbers are: −8 (minus eight), 7 and 1015 (−8=20−9, 7=24−9, 1015=210−9).

The boys now use p-binary numbers to represent everything. They now face a problem: given a positive integer n, what's the smallest number of p-binary numbers (not necessarily distinct) they need to represent n as their sum? It may be possible that representation is impossible altogether. Help them solve this problem.

For example, if p=0 we can represent 7 as 20+21+22.

And if p=−9 we can represent 7 as one number (24−9).

Note that negative p-binary numbers are allowed to be in the sum (see the Notes section for an example).

Input
The only line contains two integers n and p (1≤n≤109, −1000≤p≤1000).

Output
If it is impossible to represent n as the sum of any number of p-binary numbers, print a single integer −1. Otherwise, print the smallest possible number of summands.

Examples
inputCopy
24 0
outputCopy
2
inputCopy
24 1
outputCopy
3
inputCopy
24 -1
outputCopy
4
inputCopy
4 -7
outputCopy
2
inputCopy
1 1
outputCopy
-1
Note
0-binary numbers are just regular binary powers, thus in the first sample case we can represent 24=(24+0)+(23+0).

In the second sample case, we can represent 24=(24+1)+(22+1)+(20+1).

In the third sample case, we can represent 24=(24−1)+(22−1)+(22−1)+(22−1). Note that repeated summands are allowed.

In the fourth sample case, we can represent 4=(24−7)+(21−7). Note that the second summand is negative, which is allowed.

In the fifth sample case, no representation is possible.
*/

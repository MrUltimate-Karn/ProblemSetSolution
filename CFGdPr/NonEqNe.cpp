/*
F. Non-equal Neighbours
time limit per test3 seconds
memory limit per test512 megabytes
inputstandard input
outputstandard output
You are given an array of n positive integers a1,a2,…,an. Your task is to calculate the number of arrays of n positive integers b1,b2,…,bn such that:

1≤bi≤ai for every i (1≤i≤n), and
bi≠bi+1 for every i (1≤i≤n−1).
The number of such arrays can be very large, so print it modulo 998244353.

Input
The first line contains a single integer n (1≤n≤2⋅105) — the length of the array a.

The second line contains n integers a1,a2,…,an (1≤ai≤109).

Output
Print the answer modulo 998244353 in a single line.

Examples
inputCopy
3
2 2 2
outputCopy
2
inputCopy
2
2 3
outputCopy
4
inputCopy
3
1 1 1
outputCopy
0
Note
In the first test case possible arrays are [1,2,1] and [2,1,2].

In the second test case possible arrays are [1,2], [1,3], [2,1] and [2,3].


*/

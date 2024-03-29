/*
D. Permutation Graph
time limit per test2 seconds
memory limit per test512 megabytes
inputstandard input
outputstandard output
A permutation is an array consisting of n distinct integers from 1 to n in arbitrary order. For example, [2,3,1,5,4] is a permutation, but [1,2,2] is not a permutation (2 appears twice in the array) and [1,3,4] is also not a permutation (n=3 but there is 4 in the array).

You are given a permutation of 1,2,…,n, [a1,a2,…,an]. For integers i, j such that 1≤i<j≤n, define mn(i,j) as mink=ijak, and define mx(i,j) as maxk=ijak.

Let us build an undirected graph of n vertices, numbered 1 to n. For every pair of integers 1≤i<j≤n, if mn(i,j)=ai and mx(i,j)=aj both holds, or mn(i,j)=aj and mx(i,j)=ai both holds, add an undirected edge of length 1 between vertices i and j.

In this graph, find the length of the shortest path from vertex 1 to vertex n. We can prove that 1 and n will always be connected via some path, so a shortest path always exists.

Input
Each test contains multiple test cases. The first line contains the number of test cases t (1≤t≤5⋅104). Description of the test cases follows.

The first line of each test case contains one integer n (1≤n≤2.5⋅105).

The second line of each test case contains n integers a1, a2, …, an (1≤ai≤n). It's guaranteed that a is a permutation of 1, 2, …, n.

It is guaranteed that the sum of n over all test cases does not exceed 5⋅105.

Output
For each test case, print a single line containing one integer — the length of the shortest path from 1 to n.

Example
inputCopy
5
1
1
2
1 2
5
1 4 2 3 5
5
2 1 5 3 4
10
7 4 8 1 6 10 3 5 2 9
outputCopy
0
1
1
4
6
*/

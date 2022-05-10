/*
H2. Maximum Crossings (Hard Version)
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
The only difference between the two versions is that in this version n≤2⋅105 and the sum of n over all test cases does not exceed 2⋅105.

A terminal is a row of n equal segments numbered 1 to n in order. There are two terminals, one above the other.

You are given an array a of length n. For all i=1,2,…,n, there should be a straight wire from some point on segment i of the top terminal to some point on segment ai of the bottom terminal. For example, the following pictures show two possible wirings if n=7 and a=[4,1,4,6,7,7,5].


A crossing occurs when two wires share a point in common. In the picture above, crossings are circled in red.

What is the maximum number of crossings there can be if you place the wires optimally?

Input
The first line contains an integer t (1≤t≤1000) — the number of test cases.

The first line of each test case contains an integer n (1≤n≤2⋅105) — the length of the array.

The second line of each test case contains n integers a1,a2,…,an (1≤ai≤n) — the elements of the array.

The sum of n across all test cases does not exceed 2⋅105.

Output
For each test case, output a single integer — the maximum number of crossings there can be if you place the wires optimally.

Example
inputCopy
4
7
4 1 4 6 7 7 5
2
2 1
1
1
3
2 2 2
outputCopy
6
1
0
3
Note
The first test case is shown in the second picture in the statement.

In the second test case, the only wiring possible has the two wires cross, so the answer is 1.

In the third test case, the only wiring possible has one wire, so the answer is 0.
*/

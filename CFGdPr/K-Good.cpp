/*
D. K-good
time limit per test3 seconds
memory limit per test256 megabytes
inputstandard input
outputstandard output
We say that a positive integer n is k-good for some positive integer k if n can be expressed as a sum of k positive integers which give k distinct remainders when divided by k.

Given a positive integer n, find some k≥2 so that n is k-good or tell that such a k does not exist.

Input
The input consists of multiple test cases. The first line contains a single integer t (1≤t≤105) — the number of test cases.

Each test case consists of one line with an integer n (2≤n≤1018).

Output
For each test case, print a line with a value of k such that n is k-good (k≥2), or −1 if n is not k-good for any k. If there are multiple valid values of k, you can print any of them.

Example
inputCopy
5
2
4
6
15
20
outputCopy
-1
-1
3
3
5
Note
6 is a 3-good number since it can be expressed as a sum of 3 numbers which give different remainders when divided by 3: 6=1+2+3.

15 is also a 3-good number since 15=1+5+9 and 1,5,9 give different remainders when divided by 3.

20 is a 5-good number since 20=2+3+4+5+6 and 2,3,4,5,6 give different remainders when divided by 5.


*/

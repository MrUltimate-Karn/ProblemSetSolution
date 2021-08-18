/*
F1. Nearest Beautiful Number (easy version)
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
It is a simplified version of problem F2. The difference between them is the constraints (F1: k≤2, F2: k≤10).

You are given an integer n. Find the minimum integer x such that x≥n and the number x is k-beautiful.

A number is called k-beautiful if its decimal representation having no leading zeroes contains no more than k different digits. E.g. if k=2, the numbers 3434443, 55550, 777 and 21 are k-beautiful whereas the numbers 120, 445435 and 998244353 are not.

Input
The first line contains one integer t (1≤t≤104) — the number of test cases. Then t test cases follow.

Each test case consists of one line containing two integers n and k (1≤n≤109, 1≤k≤2).

Output
For each test case output on a separate line x — the minimum k-beautiful integer such that x≥n.

Example
inputCopy
4
1 1
221 2
177890 2
998244353 1
outputCopy
1
221
181111
999999999

*/

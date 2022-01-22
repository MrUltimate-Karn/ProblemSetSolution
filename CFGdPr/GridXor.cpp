/*
E. Grid Xor
time limit per test2 seconds
memory limit per test256 megabytes
inputstandard input
outputstandard output
Note: The XOR-sum of set {s1,s2,…,sm} is defined as s1⊕s2⊕…⊕sm, where ⊕ denotes the bitwise XOR operation.

After almost winning IOI, Victor bought himself an n×n grid containing integers in each cell. n is an even integer. The integer in the cell in the i-th row and j-th column is ai,j.

Sadly, Mihai stole the grid from Victor and told him he would return it with only one condition: Victor has to tell Mihai the XOR-sum of all the integers in the whole grid.

Victor doesn't remember all the elements of the grid, but he remembers some information about it: For each cell, Victor remembers the XOR-sum of all its neighboring cells.

Two cells are considered neighbors if they share an edge — in other words, for some integers 1≤i,j,k,l≤n, the cell in the i-th row and j-th column is a neighbor of the cell in the k-th row and l-th column if |i−k|=1 and j=l, or if i=k and |j−l|=1.

To get his grid back, Victor is asking you for your help. Can you use the information Victor remembers to find the XOR-sum of the whole grid?

It can be proven that the answer is unique.

Input
The first line of the input contains a single integer t (1≤t≤100) — the number of test cases. The description of test cases follows.

The first line of each test case contains a single even integer n (2≤n≤1000) — the size of the grid.

Then follows n lines, each containing n integers. The j-th integer in the i-th of these lines represents the XOR-sum of the integers in all the neighbors of the cell in the i-th row and j-th column.

It is guaranteed that the sum of n over all test cases doesn't exceed 1000 and in the original grid 0≤ai,j≤230−1.

Hack Format

To hack a solution, use the following format:

The first line should contain a single integer t (1≤t≤100) — the number of test cases.

The first line of each test case should contain a single even integer n (2≤n≤1000) — the size of the grid.

Then n lines should follow, each containing n integers. The j-th integer in the i-th of these lines is ai,j in Victor's original grid. The values in the grid should be integers in the range [0,230−1]
The sum of n over all test cases must not exceed 1000.

Output
For each test case, output a single integer — the XOR-sum of the whole grid.

Example
inputCopy
3
2
1 5
5 1
4
1 14 8 9
3 1 5 9
4 13 11 1
1 15 4 11
4
2 4 1 6
3 7 3 10
15 9 4 2
12 7 15 1
outputCopy
4
9
5
Note
For the first test case, one possibility for Victor's original grid is:

1	3
2	4
For the second test case, one possibility for Victor's original grid is:

3	8	8	5
9	5	5	1
5	5	9	9
8	4	2	9
For the third test case, one possibility for Victor's original grid is:

4	3	2	1
1	2	3	4
5	6	7	8
8	9	9	1
*/

/*
D. Lena and Matrix
time limit per test2 seconds
memory limit per test256 megabytes
inputstandard input
outputstandard output
Lena is a beautiful girl who likes logical puzzles.

As a gift for her birthday, Lena got a matrix puzzle!

The matrix consists of n rows and m columns, and each cell is either black or white. The coordinates (i,j) denote the cell which belongs to the i-th row and j-th column for every 1≤i≤n and 1≤j≤m. To solve the puzzle, Lena has to choose a cell that minimizes the Manhattan distance to the farthest black cell from the chosen cell.

More formally, let there be k≥1 black cells in the matrix with coordinates (xi,yi) for every 1≤i≤k. Lena should choose a cell (a,b) that minimizes
maxi=1k(|a−xi|+|b−yi|).
As Lena has no skill, she asked you for help. Will you tell her the optimal cell to choose?

Input
There are several test cases in the input data. The first line contains a single integer t (1≤t≤10000) — the number of test cases. This is followed by the test cases description.

The first line of each test case contains two integers n and m (2≤n,m≤1000)  — the dimensions of the matrix.

The following n lines contain m characters each, each character is either 'W' or 'B'. The j-th character in the i-th of these lines is 'W' if the cell (i,j) is white, and 'B' if the cell (i,j) is black.

It is guaranteed that at least one black cell exists.

It is guaranteed that the sum of n⋅m does not exceed 106.

Output
For each test case, output the optimal cell (a,b) to choose. If multiple answers exist, output any.

Example
inputCopy
5
3 2
BW
WW
WB
3 3
WWB
WBW
BWW
2 3
BBB
BBB
5 5
BWBWB
WBWBW
BWBWB
WBWBW
BWBWB
9 9
WWWWWWWWW
WWWWWWWWW
BWWWWWWWW
WWWWWWWWW
WWWWBWWWW
WWWWWWWWW
WWWWWWWWW
WWWWWWWWW
WWWWWWWWB
outputCopy
2 1
2 2
1 2
3 3
6 5
Note
In the first test case the two black cells have coordinates (1,1) and (3,2). The four optimal cells are (1,2), (2,1), (2,2) and (3,1). It can be shown that no other cell minimizes the maximum Manhattan distance to every black cell.

In the second test case it is optimal to choose the black cell (2,2) with maximum Manhattan distance being 2.


*/

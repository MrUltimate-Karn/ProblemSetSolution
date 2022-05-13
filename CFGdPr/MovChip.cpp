/*
E. Moving Chips
time limit per test2 seconds
memory limit per test256 megabytes
inputstandard input
outputstandard output
You are given a board of size 2×n (2 rows, n columns). Some cells of the board contain chips. The chip is represented as '*', and an empty space is represented as '.'. It is guaranteed that there is at least one chip on the board.

In one move, you can choose any chip and move it to any adjacent (by side) cell of the board (if this cell is inside the board). It means that if the chip is in the first row, you can move it left, right or down (but it shouldn't leave the board). Same, if the chip is in the second row, you can move it left, right or up.

If the chip moves to the cell with another chip, the chip in the destination cell disappears (i. e. our chip captures it).

Your task is to calculate the minimum number of moves required to leave exactly one chip on the board.

You have to answer t independent test cases.

Input
The first line of the input contains one integer t (1≤t≤2⋅104) — the number of test cases. Then t test cases follow.

The first line of the test case contains one integer n (1≤n≤2⋅105) — the length of the board. The second line of the test case contains the string s1 consisting of n characters '*' (chip) and/or '.' (empty cell). The third line of the test case contains the string s2 consisting of n characters '*' (chip) and/or '.' (empty cell).

Additional constraints on the input:

in each test case, there is at least one chip on a board;
the sum of n over all test cases does not exceed 2⋅105 (∑n≤2⋅105).
Output
For each test case, print one integer — the minimum number of moves required to leave exactly one chip on the board.

Example
inputCopy
5
1
*
.
2
.*
**
3
*.*
.*.
4
**.*
**..
5
**...
...**
outputCopy
0
2
3
5
5

*/

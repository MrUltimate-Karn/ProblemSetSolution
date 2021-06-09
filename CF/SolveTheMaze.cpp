/*
D. Solve The Maze
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
Vivek has encountered a problem. He has a maze that can be represented as an n×m grid. Each of the grid cells may represent the following:

Empty — '.'
Wall — '#'
Good person  — 'G'
Bad person — 'B'
The only escape from the maze is at cell (n,m).

A person can move to a cell only if it shares a side with their current cell and does not contain a wall. Vivek wants to block some of the empty cells by replacing them with walls in such a way, that all the good people are able to escape, while none of the bad people are able to. A cell that initially contains 'G' or 'B' cannot be blocked and can be travelled through.

Help him determine if there exists a way to replace some (zero or more) empty cells with walls to satisfy the above conditions.

It is guaranteed that the cell (n,m) is empty. Vivek can also block this cell.

Input
The first line contains one integer t (1≤t≤100) — the number of test cases. The description of the test cases follows.

The first line of each test case contains two integers n, m (1≤n,m≤50) — the number of rows and columns in the maze.

Each of the next n lines contain m characters. They describe the layout of the maze. If a character on a line equals '.', the corresponding cell is empty. If it equals '#', the cell has a wall. 'G' corresponds to a good person and 'B' corresponds to a bad person.

Output
For each test case, print "Yes" if there exists a way to replace some empty cells with walls to satisfy the given conditions. Otherwise print "No"

You may print every letter in any case (upper or lower).

Example
inputCopy
6
1 1
.
1 2
G.
2 2
#B
G.
2 3
G.#
B#.
3 3
#B.
#..
GG.
2 2
#B
B.
outputCopy
Yes
Yes
No
No
Yes
Yes
Note
For the first and second test cases, all conditions are already satisfied.

For the third test case, there is only one empty cell (2,2), and if it is replaced with a wall then the good person at (1,2) will not be able to escape.

For the fourth test case, the good person at (1,1) cannot escape.

For the fifth test case, Vivek can block the cells (2,3) and (2,2).

For the last test case, Vivek can block the destination cell (2,2).
*/

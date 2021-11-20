/*
C. You Are Given a WASD-string...
time limit per test2 seconds
memory limit per test256 megabytes
inputstandard input
outputstandard output
You have a string s — a sequence of commands for your toy robot. The robot is placed in some cell of a rectangular grid. He can perform four commands:

'W' — move one cell up;
'S' — move one cell down;
'A' — move one cell left;
'D' — move one cell right.
Let Grid(s) be the grid of minimum possible area such that there is a position in the grid where you can place the robot in such a way that it will not fall from the grid while running the sequence of commands s. For example, if s=DSAWWAW then Grid(s) is the 4×3 grid:

you can place the robot in the cell (3,2);
the robot performs the command 'D' and moves to (3,3);
the robot performs the command 'S' and moves to (4,3);
the robot performs the command 'A' and moves to (4,2);
the robot performs the command 'W' and moves to (3,2);
the robot performs the command 'W' and moves to (2,2);
the robot performs the command 'A' and moves to (2,1);
the robot performs the command 'W' and moves to (1,1).

You have 4 extra letters: one 'W', one 'A', one 'S', one 'D'. You'd like to insert at most one of these letters in any position of sequence s to minimize the area of Grid(s).

What is the minimum area of Grid(s) you can achieve?

Input
The first line contains one integer T (1≤T≤1000) — the number of queries.

Next T lines contain queries: one per line. This line contains single string s (1≤|s|≤2⋅105, si∈{W,A,S,D}) — the sequence of commands.

It's guaranteed that the total length of s over all queries doesn't exceed 2⋅105.

Output
Print T integers: one per query. For each query print the minimum area of Grid(s) you can achieve.

Example
inputCopy
3
DSAWWAW
D
WA
outputCopy
8
2
4
Note
In the first query you have to get string DSAWWD––AW.

In second and third queries you can not decrease the area of Grid(s).


*/

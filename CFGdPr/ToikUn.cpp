/*
D. Tolik and His Uncle
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
This morning Tolik has understood that while he was sleeping he had invented an incredible problem which will be a perfect fit for Codeforces! But, as a "Discuss tasks" project hasn't been born yet (in English, well), he decides to test a problem and asks his uncle.

After a long time thinking, Tolik's uncle hasn't any ideas on how to solve it. But, he doesn't want to tell Tolik about his inability to solve it, so he hasn't found anything better than asking you how to solve this task.

In this task you are given a cell field n⋅m, consisting of n rows and m columns, where point's coordinates (x,y) mean it is situated in the x-th row and y-th column, considering numeration from one (1≤x≤n,1≤y≤m). Initially, you stand in the cell (1,1). Every move you can jump from cell (x,y), which you stand in, by any non-zero vector (dx,dy), thus you will stand in the (x+dx,y+dy) cell. Obviously, you can't leave the field, but also there is one more important condition — you're not allowed to use one vector twice. Your task is to visit each cell of the field exactly once (the initial cell is considered as already visited).

Tolik's uncle is a very respectful person. Help him to solve this task!

Input
The first and only line contains two positive integers n,m (1≤n⋅m≤106) — the number of rows and columns of the field respectively.

Output
Print "-1" (without quotes) if it is impossible to visit every cell exactly once.

Else print n⋅m pairs of integers, i-th from them should contain two integers xi,yi (1≤xi≤n,1≤yi≤m) — cells of the field in order of visiting, so that all of them are distinct and vectors of jumps between them are distinct too.

Notice that the first cell should have (1,1) coordinates, according to the statement.

Examples
inputCopy
2 3
outputCopy
1 1
1 3
1 2
2 2
2 3
2 1
inputCopy
1 1
outputCopy
1 1
Note
The vectors from the first example in the order of making jumps are (0,2),(0,−1),(1,0),(0,1),(0,−2).


*/

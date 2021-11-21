/*
D. Treasure Hunting
time limit per test3 seconds
memory limit per test256 megabytes
inputstandard input
outputstandard output
You are on the island which can be represented as a n×m table. The rows are numbered from 1 to n and the columns are numbered from 1 to m. There are k treasures on the island, the i-th of them is located at the position (ri,ci).

Initially you stand at the lower left corner of the island, at the position (1,1). If at any moment you are at the cell with a treasure, you can pick it up without any extra time. In one move you can move up (from (r,c) to (r+1,c)), left (from (r,c) to (r,c−1)), or right (from position (r,c) to (r,c+1)). Because of the traps, you can't move down.

However, moving up is also risky. You can move up only if you are in a safe column. There are q safe columns: b1,b2,…,bq. You want to collect all the treasures as fast as possible. Count the minimum number of moves required to collect all the treasures.

Input
The first line contains integers n, m, k and q (2≤n,m,k,q≤2⋅105, q≤m) — the number of rows, the number of columns, the number of treasures in the island and the number of safe columns.

Each of the next k lines contains two integers ri,ci, (1≤ri≤n, 1≤ci≤m) — the coordinates of the cell with a treasure. All treasures are located in distinct cells.

The last line contains q distinct integers b1,b2,…,bq (1≤bi≤m) — the indices of safe columns.

Output
Print the minimum number of moves required to collect all the treasures.

Examples
inputCopy
3 3 3 2
1 1
2 1
3 1
2 3
outputCopy
6
inputCopy
3 5 3 2
1 2
2 3
3 1
1 5
outputCopy
8
inputCopy
3 6 3 2
1 6
2 2
3 4
1 6
outputCopy
15
Note
In the first example you should use the second column to go up, collecting in each row treasures from the first column.


In the second example, it is optimal to use the first column to go up.


In the third example, it is optimal to collect the treasure at cell (1;6), go up to row 2 at column 6, then collect the treasure at cell (2;2), go up to the top row at column 1 and collect the last treasure at cell (3;4). That's a total of 15 moves.



*/

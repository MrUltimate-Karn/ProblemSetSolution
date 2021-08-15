/*
D2. Mocha and Diana (Hard Version)
time limit per test2 seconds
memory limit per test256 megabytes
inputstandard input
outputstandard output
This is the hard version of the problem. The only difference between the two versions is the constraint on n. You can make hacks only if all versions of the problem are solved.

A forest is an undirected graph without cycles (not necessarily connected).

Mocha and Diana are friends in Zhijiang, both of them have a forest with nodes numbered from 1 to n, and they would like to add edges to their forests such that:

After adding edges, both of their graphs are still forests.
They add the same edges. That is, if an edge (u,v) is added to Mocha's forest, then an edge (u,v) is added to Diana's forest, and vice versa.
Mocha and Diana want to know the maximum number of edges they can add, and which edges to add.

Input
The first line contains three integers n, m1 and m2 (1≤n≤105, 0≤m1,m2<n) — the number of nodes and the number of initial edges in Mocha's forest and Diana's forest.

Each of the next m1 lines contains two integers u and v (1≤u,v≤n, u≠v) — the edges in Mocha's forest.

Each of the next m2 lines contains two integers u and v (1≤u,v≤n, u≠v) — the edges in Diana's forest.

Output
The first line contains only one integer h, the maximum number of edges Mocha and Diana can add.

Each of the next h lines contains two integers u and v (1≤u,v≤n, u≠v) — the edge you add each time.

If there are multiple correct answers, you can print any one of them.

Examples
inputCopy
3 2 2
1 2
2 3
1 2
1 3
outputCopy
0
inputCopy
5 3 2
5 4
2 1
4 3
4 3
1 4
outputCopy
1
2 4
inputCopy
8 1 2
1 7
2 6
1 5
outputCopy
5
5 2
2 3
3 4
4 7
6 8
Note
In the first example, we cannot add any edge.

In the second example, the initial forests are as follows.



We can add an edge (2,4).


*/

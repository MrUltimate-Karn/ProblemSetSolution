/*
G. Counting Shortcuts
time limit per test2 seconds
memory limit per test256 megabytes
inputstandard input
outputstandard output
Given an undirected connected graph with n vertices and m edges. The graph contains no loops (edges from a vertex to itself) and multiple edges (i.e. no more than one edge between each pair of vertices). The vertices of the graph are numbered from 1 to n.

Find the number of paths from a vertex s to t whose length differs from the shortest path from s to t by no more than 1. It is necessary to consider all suitable paths, even if they pass through the same vertex or edge more than once (i.e. they are not simple).

Graph consisting of 6 of vertices and 8 of edges
For example, let n=6, m=8, s=6 and t=1, and let the graph look like the figure above. Then the length of the shortest path from s to t is 1. Consider all paths whose length is at most 1+1=2.

6→1. The length of the path is 1.
6→4→1. Path length is 2.
6→2→1. Path length is 2.
6→5→1. Path length is 2.
There is a total of 4 of matching paths.

Input
The first line of test contains the number t (1≤t≤104) —the number of test cases in the test.

Before each test case, there is a blank line.

The first line of test case contains two numbers n,m (2≤n≤2⋅105, 1≤m≤2⋅105) —the number of vertices and edges in the graph.

The second line contains two numbers s and t (1≤s,t≤n, s≠t) —the numbers of the start and end vertices of the path.

The following m lines contain descriptions of edges: the ith line contains two integers ui, vi (1≤ui,vi≤n) — the numbers of vertices that connect the ith edge. It is guaranteed that the graph is connected and does not contain loops and multiple edges.

It is guaranteed that the sum of values n on all test cases of input data does not exceed 2⋅105. Similarly, it is guaranteed that the sum of values m on all test cases of input data does not exceed 2⋅105.

Output
For each test case, output a single number — the number of paths from s to t such that their length differs from the length of the shortest path by no more than 1.

Since this number may be too large, output it modulo 109+7.

Example
inputCopy
4

4 4
1 4
1 2
3 4
2 3
2 4

6 8
6 1
1 4
1 6
1 5
1 2
5 6
4 6
6 3
2 6

5 6
1 3
3 5
5 4
3 1
4 2
2 1
1 4

8 18
5 1
2 1
3 1
4 2
5 2
6 5
7 3
8 4
6 4
8 7
1 4
4 7
1 6
6 7
3 8
8 5
4 5
4 3
8 2
outputCopy
2
4
1
11

*/

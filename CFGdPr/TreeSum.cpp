/*
D. Sum in the tree
time limit per test2 seconds
memory limit per test256 megabytes
inputstandard input
outputstandard output
Mitya has a rooted tree with n vertices indexed from 1 to n, where the root has index 1. Each vertex v initially had an integer number av≥0 written on it. For every vertex v Mitya has computed sv: the sum of all values written on the vertices on the path from vertex v to the root, as well as hv — the depth of vertex v, which denotes the number of vertices on the path from vertex v to the root. Clearly, s1=a1 and h1=1.

Then Mitya erased all numbers av, and by accident he also erased all values sv for vertices with even depth (vertices with even hv). Your task is to restore the values av for every vertex, or determine that Mitya made a mistake. In case there are multiple ways to restore the values, you're required to find one which minimizes the total sum of values av for all vertices in the tree.

Input
The first line contains one integer n — the number of vertices in the tree (2≤n≤105). The following line contains integers p2, p3, ... pn, where pi stands for the parent of vertex with index i in the tree (1≤pi<i). The last line contains integer values s1, s2, ..., sn (−1≤sv≤109), where erased values are replaced by −1.

Output
Output one integer — the minimum total sum of all values av in the original tree, or −1 if such tree does not exist.

Examples
inputCopy
5
1 1 1 1
1 -1 -1 -1 -1
outputCopy
1
inputCopy
5
1 2 3 1
1 -1 2 -1 -1
outputCopy
2
inputCopy
3
1 2
2 -1 1
outputCopy
-1

*/

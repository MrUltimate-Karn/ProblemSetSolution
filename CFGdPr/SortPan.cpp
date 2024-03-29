/*
G. Sorting Pancakes
time limit per test2 seconds
memory limit per test256 megabytes
inputstandard input
outputstandard output
Nastya baked m pancakes and spread them on n dishes. The dishes are in a row and numbered from left to right. She put ai pancakes on the dish with the index i.

Seeing the dishes, Vlad decided to bring order to the stacks and move some pancakes. In one move, he can shift one pancake from any dish to the closest one, that is, select the dish i (ai>0) and do one of the following:

if i>1, put the pancake on a dish with the previous index, after this move ai=ai−1 and ai−1=ai−1+1;
if i<n, put the pancake on a dish with the following index, after this move ai=ai−1 and ai+1=ai+1+1.
Vlad wants to make the array anon-increasing, after moving as few pancakes as possible. Help him find the minimum number of moves needed for this.

The array a=[a1,a2,…,an] is called non-increasing if ai≥ai+1 for all i from 1 to n−1.

Input
The first line of the input contains two numbers n and m (1≤n,m≤250) — the number of dishes and the number of pancakes, respectively.

The second line contains n numbers ai (0≤ai≤m), the sum of all ai is equal to m.

Output
Print a single number: the minimum number of moves required to make the array a non-increasing.

Examples
inputCopy
6 19
5 3 2 3 3 3
outputCopy
2
inputCopy
3 6
3 2 1
outputCopy
0
inputCopy
3 6
2 1 3
outputCopy
1
inputCopy
6 19
3 4 3 3 5 1
outputCopy
3
inputCopy
10 1
0 0 0 0 0 0 0 0 0 1
outputCopy
9
Note
In the first example, you first need to move the pancake from the dish 1, after which a=[4,4,2,3,3,3]. After that, you need to move the pancake from the dish 2 to the dish 3 and the array will become non-growing a=[4,3,3,3,3,3].


*/

/*
E. Tokitsukaze and Two Colorful Tapes
time limit per test2 seconds
memory limit per test256 megabytes
inputstandard input
outputstandard output
Tokitsukaze has two colorful tapes. There are n distinct colors, numbered 1 through n, and each color appears exactly once on each of the two tapes. Denote the color of the i-th position of the first tape as cai, and the color of the i-th position of the second tape as cbi.

Now Tokitsukaze wants to select each color an integer value from 1 to n, distinct for all the colors. After that she will put down the color values in each colored position on the tapes. Denote the number of the i-th position of the first tape as numai, and the number of the i-th position of the second tape as numbi.


For example, for the above picture, assuming that the color red has value x (1≤x≤n), it appears at the 1-st position of the first tape and the 3-rd position of the second tape, so numa1=numb3=x.

Note that each color i from 1 to n should have a distinct value, and the same color which appears in both tapes has the same value.

After labeling each color, the beauty of the two tapes is calculated as
∑i=1n|numai−numbi|.
Please help Tokitsukaze to find the highest possible beauty.

Input
The first contains a single positive integer t (1≤t≤104) — the number of test cases.

For each test case, the first line contains a single integer n (1≤n≤105) — the number of colors.

The second line contains n integers ca1,ca2,…,can (1≤cai≤n) — the color of each position of the first tape. It is guaranteed that ca is a permutation.

The third line contains n integers cb1,cb2,…,cbn (1≤cbi≤n) — the color of each position of the second tape. It is guaranteed that cb is a permutation.

It is guaranteed that the sum of n over all test cases does not exceed 2⋅105.

Output
For each test case, print a single integer — the highest possible beauty.

Example
inputCopy
3
6
1 5 4 3 2 6
5 3 1 4 6 2
6
3 5 4 6 2 1
3 6 4 5 2 1
1
1
1
outputCopy
18
10
0
Note
An optimal solution for the first test case is shown in the following figure:


The beauty is |4−3|+|3−5|+|2−4|+|5−2|+|1−6|+|6−1|=18.

An optimal solution for the second test case is shown in the following figure:


The beauty is |2−2|+|1−6|+|3−3|+|6−1|+|4−4|+|5−5|=10.


*/

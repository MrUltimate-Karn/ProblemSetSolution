/*
E. Split Into Two Sets
time limit per test2 seconds
memory limit per test256 megabytes
inputstandard input
outputstandard output
Polycarp was recently given a set of n (number n — even) dominoes. Each domino contains two integers from 1 to n.

Can he divide all the dominoes into two sets so that all the numbers on the dominoes of each set are different? Each domino must go into exactly one of the two sets.

For example, if he has 4 dominoes: {1,4}, {1,3}, {3,2} and {4,2}, then Polycarp will be able to divide them into two sets in the required way. The first set can include the first and third dominoes ({1,4} and {3,2}), and the second set — the second and fourth ones ({1,3} and {4,2}).

Input
The first line contains a single integer t (1≤t≤104) — the number of test cases.

The descriptions of the test cases follow.

The first line of each test case contains a single even integer n (2≤n≤2⋅105) — the number of dominoes.

The next n lines contain pairs of numbers ai and bi (1≤ai,bi≤n) describing the numbers on the i-th domino.

It is guaranteed that the sum of n over all test cases does not exceed 2⋅105.

Output
For each test case print:

YES, if it is possible to divide n dominoes into two sets so that the numbers on the dominoes of each set are different;
NO if this is not possible.
You can print YES and NO in any case (for example, the strings yEs, yes, Yes and YES will be recognized as a positive answer).

Example
inputCopy
6
4
1 2
4 3
2 1
3 4
6
1 2
4 5
1 3
4 6
2 3
5 6
2
1 1
2 2
2
1 2
2 1
8
2 1
1 2
4 3
4 3
5 6
5 7
8 6
7 8
8
1 2
2 1
4 3
5 3
5 4
6 7
8 6
7 8
outputCopy
YES
NO
NO
YES
YES
NO
Note
In the first test case, the dominoes can be divided as follows:

First set of dominoes: [{1,2},{4,3}]
Second set of dominoes: [{2,1},{3,4}]
In other words, in the first set we take dominoes with numbers 1 and 2, and in the second set we take dominoes with numbers 3 and 4.
In the second test case, there's no way to divide dominoes into 2 sets, at least one of them will contain repeated number.
*/

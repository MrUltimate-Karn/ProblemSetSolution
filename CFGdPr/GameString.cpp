/*
E. Game With String
time limit per test3 seconds
memory limit per test256 megabytes
inputstandard input
outputstandard output
Alice and Bob play a game. Initially they have a string s1,s2,…,sn, consisting of only characters . and X. They take alternating turns, and Alice is moving first. During each turn, the player has to select a contiguous substring consisting only of characters . and replaces each of them with X. Alice must select a substing of length a, and Bob must select a substring of length b. It is guaranteed that a>b.

For example, if s= ...X.. and a=3, b=2, then after Alice's move string can turn only into XXXX... And if it's Bob's turn and the string s= ...X.., then after Bob's move the string can turn into XX.X.., .XXX.. or ...XXX.

Whoever is unable to make a move, loses. You have to determine who wins if they both play optimally.

You have to answer q independent queries.

Input
The first line contains one integer q (1≤q≤3⋅105) — the number of queries.

The first line of each query contains two integers a and b (1≤b<a≤3⋅105).

The second line of each query contains the string s (1≤|s|≤3⋅105), consisting of only characters . and X.

It is guaranteed that sum of all |s| over all queries not exceed 3⋅105.

Output
For each test case print YES if Alice can win and NO otherwise.

You may print every letter in any case you want (so, for example, the strings yEs, yes, Yes and YES will all be recognized as positive answer).

Example
inputCopy
3
3 2
XX......XX...X
4 2
X...X.X..X
5 3
.......X..X
outputCopy
YES
NO
YES
Note
In the first query Alice can select substring s3…s5. After that s turns into XXXXX...XX...X. After that, no matter what move Bob makes, Alice can make the move (this will be her second move), but Bob can't make his second move.

In the second query Alice can not win because she cannot even make one move.

In the third query Alice can choose substring s2…s6. After that s turns into .XXXXX.X..X, and Bob can't make a move after that.


*/

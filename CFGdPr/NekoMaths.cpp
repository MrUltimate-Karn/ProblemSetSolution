/*
C. Neko does Maths
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
Neko loves divisors. During the latest number theory lesson, he got an interesting exercise from his math teacher.

Neko has two integers a and b. His goal is to find a non-negative integer k such that the least common multiple of a+k and b+k is the smallest possible. If there are multiple optimal integers k, he needs to choose the smallest one.

Given his mathematical talent, Neko had no trouble getting Wrong Answer on this problem. Can you help him solve it?

Input
The only line contains two integers a and b (1≤a,b≤109).

Output
Print the smallest non-negative integer k (k≥0) such that the lowest common multiple of a+k and b+k is the smallest possible.

If there are many possible integers k giving the same value of the least common multiple, print the smallest one.

Examples
inputCopy
6 10
outputCopy
2
inputCopy
21 31
outputCopy
9
inputCopy
5 10
outputCopy
0
Note
In the first test, one should choose k=2, as the least common multiple of 6+2 and 10+2 is 24, which is the smallest least common multiple possible.


*/

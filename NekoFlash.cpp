/*
E. Neko and Flashback
time limit per test2 seconds
memory limit per test256 megabytes
inputstandard input
outputstandard output
A permutation of length k is a sequence of k integers from 1 to k containing each integer exactly once. For example, the sequence [3,1,2] is a permutation of length 3.

When Neko was five, he thought of an array a of n positive integers and a permutation p of length n−1. Then, he performed the following:

Constructed an array b of length n−1, where bi=min(ai,ai+1).
Constructed an array c of length n−1, where ci=max(ai,ai+1).
Constructed an array b′ of length n−1, where b′i=bpi.
Constructed an array c′ of length n−1, where c′i=cpi.
For example, if the array a was [3,4,6,5,7] and permutation p was [2,4,1,3], then Neko would have constructed the following arrays:

b=[3,4,5,5]
c=[4,6,6,7]
b′=[4,5,3,5]
c′=[6,7,4,6]
Then, he wrote two arrays b′ and c′ on a piece of paper and forgot about it. 14 years later, when he was cleaning up his room, he discovered this old piece of paper with two arrays b′ and c′ written on it. However he can't remember the array a and permutation p he used.

In case Neko made a mistake and there is no array a and permutation p resulting in such b′ and c′, print -1. Otherwise, help him recover any possible array a.

Input
The first line contains an integer n (2≤n≤105) — the number of elements in array a.

The second line contains n−1 integers b′1,b′2,…,b′n−1 (1≤b′i≤109).

The third line contains n−1 integers c′1,c′2,…,c′n−1 (1≤c′i≤109).

Output
If Neko made a mistake and there is no array a and a permutation p leading to the b′ and c′, print -1. Otherwise, print n positive integers ai (1≤ai≤109), denoting the elements of the array a.

If there are multiple possible solutions, print any of them.

Examples
inputCopy
5
4 5 3 5
6 7 4 6
outputCopy
3 4 6 5 7 
inputCopy
3
2 4
3 2
outputCopy
-1
inputCopy
8
2 3 1 1 2 4 3
3 4 4 2 5 5 4
outputCopy
3 4 5 2 1 4 3 2 
Note
The first example is explained is the problem statement.

In the third example, for a=[3,4,5,2,1,4,3,2], a possible permutation p is [7,1,5,4,3,2,6]. In that case, Neko would have constructed the following arrays:

b=[3,4,2,1,1,3,2]
c=[4,5,5,2,4,4,3]
b′=[2,3,1,1,2,4,3]
c′=[3,4,4,2,5,5,4]

*/

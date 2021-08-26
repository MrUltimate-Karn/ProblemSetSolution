/*
D2. Two Hundred Twenty One (hard version)
time limit per test2 seconds
memory limit per test512 megabytes
inputstandard input
outputstandard output
This is the hard version of the problem. The difference between the versions is that the hard version does require you to output the numbers of the rods to be removed. You can make hacks only if all versions of the problem are solved.

Stitch likes experimenting with different machines with his friend Sparky. Today they built another machine.

The main element of this machine are n rods arranged along one straight line and numbered from 1 to n inclusive. Each of these rods must carry an electric charge quantitatively equal to either 1 or −1 (otherwise the machine will not work). Another condition for this machine to work is that the sign-variable sum of the charge on all rods must be zero.

More formally, the rods can be represented as an array of n numbers characterizing the charge: either 1 or −1. Then the condition must hold: a1−a2+a3−a4+…=0, or ∑i=1n(−1)i−1⋅ai=0.

Sparky charged all n rods with an electric current, but unfortunately it happened that the rods were not charged correctly (the sign-variable sum of the charge is not zero). The friends decided to leave only some of the rods in the machine. Sparky has q questions. In the ith question Sparky asks: if the machine consisted only of rods with numbers li to ri inclusive, what minimal number of rods could be removed from the machine so that the sign-variable sum of charges on the remaining ones would be zero? Also Sparky wants to know the numbers of these rods. Perhaps the friends got something wrong, and the sign-variable sum is already zero. In that case, you don't have to remove the rods at all.

If the number of rods is zero, we will assume that the sign-variable sum of charges is zero, that is, we can always remove all rods.

Help your friends and answer all of Sparky's questions!

Input
Each test contains multiple test cases.

The first line contains one positive integer t (1≤t≤103), denoting the number of test cases. Description of the test cases follows.

The first line of each test case contains two positive integers n and q (1≤n,q≤3⋅105) — the number of rods and the number of questions.

The second line of each test case contains a non-empty string s of length n, where the charge of the i-th rod is 1 if si is the "+" symbol, or −1 if si is the "-" symbol.

Each next line from the next q lines contains two positive integers li ans ri (1≤li≤ri≤n) — numbers, describing Sparky's questions.

It is guaranteed that the sum of n over all test cases does not exceed 3⋅105, and the sum of q over all test cases does not exceed 3⋅105.

It is guaranteed that the sum of the answers (minimal number of rods that can be removed) over all test cases does not exceed 106.

Output
For each test case, print the answer in the following format:

In the first line print a single integer k — the minimal number of rods that can be removed.

In the second line print k numbers separated by a space — the numbers of rods to be removed.

If there is more than one correct answer, you can print any.

Example
inputCopy
3
14 1
+--++---++-++-
1 14
14 3
+--++---+++---
1 14
6 12
3 10
4 10
+-+-
1 1
1 2
1 3
1 4
2 2
2 3
2 4
3 3
3 4
4 4
outputCopy
2
5 8
2
1 11
1
9
0
1
1
2
1 2
1
2
2
1 3
1
2
2
2 3
1
3
1
3
2
3 4
1
4
Note
In the first test case for the first query you can remove the rods numbered 5 and 8, then the following set of rods will remain: +--+--++-++-. It is easy to see that here the sign-variable sum is zero.

In the second test case:

For the first query, we can remove the rods numbered 1 and 11, then the following set of rods will remain: --++---++---. It is easy to see that here the sign-variable sum is zero.
For the second query we can remove the rod numbered 9, then the following set of rods will remain: ---++-. It is easy to see that here the variable sum is zero.
For the third query we can not remove the rods at all.

*/

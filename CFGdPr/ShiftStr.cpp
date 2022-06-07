/*
F. Shifting String
time limit per test3 seconds
memory limit per test256 megabytes
inputstandard input
outputstandard output
Polycarp found the string s and the permutation p. Their lengths turned out to be the same and equal to n.

A permutation of n elements — is an array of length n, in which every integer from 1 to n occurs exactly once. For example, [1,2,3] and [4,3,5,1,2] are permutations, but [1,2,4], [4,3,2,1,2] and [0,1,2] are not.

In one operation he can multiply s by p, so he replaces s with string new, in which for any i from 1 to n it is true that newi=spi. For example, with s=wmbe and p=[3,1,4,2], after operation the string will turn to s=s3s1s4s2=bwem.

Polycarp wondered after how many operations the string would become equal to its initial value for the first time. Since it may take too long, he asks for your help in this matter.

It can be proved that the required number of operations always exists. It can be very large, so use a 64-bit integer type.

Input
The first line of input contains one integer t (1≤t≤5000) — the number of test cases in input.

The first line of each case contains single integer n (1≤n≤200) — the length of string and permutation.

The second line of each case contains a string s of length n, containing lowercase Latin letters.

The third line of each case contains n integers — permutation p (1≤pi≤n), all pi are different.

Output
Output t lines, each of which contains the answer to the corresponding test case of input. As an answer output single integer — the minimum number of operations, after which the string s will become the same as it was before operations.

Example
inputCopy
3
5
ababa
3 4 5 2 1
5
ababa
2 1 4 5 3
10
codeforces
8 6 1 7 5 2 9 3 10 4
outputCopy
1
6
12
Note
In the first sample operation doesn't change the string, so it will become the same as it was after 1 operations.

In the second sample the string will change as follows:

s = babaa
s = abaab
s = baaba
s = abbaa
s = baaab
s = ababa
*/

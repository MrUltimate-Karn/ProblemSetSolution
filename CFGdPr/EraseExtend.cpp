/*
E2. Erase and Extend (Hard Version)
time limit per test2 seconds
memory limit per test256 megabytes
inputstandard input
outputstandard output
This is the hard version of the problem. The only difference is the constraints on n and k. You can make hacks only if all versions of the problem are solved.

You have a string s, and you can do two types of operations on it:

Delete the last character of the string.
Duplicate the string: s:=s+s, where + denotes concatenation.
You can use each operation any number of times (possibly none).

Your task is to find the lexicographically smallest string of length exactly k that can be obtained by doing these operations on string s.

A string a is lexicographically smaller than a string b if and only if one of the following holds:

a is a prefix of b, but a≠b;
In the first position where a and b differ, the string a has a letter that appears earlier in the alphabet than the corresponding letter in b.
Input
The first line contains two integers n, k (1≤n,k≤5⋅105) — the length of the original string s and the length of the desired string.

The second line contains the string s, consisting of n lowercase English letters.

Output
Print the lexicographically smallest string of length k that can be obtained by doing the operations on string s.

Examples
inputCopy
8 16
dbcadabc
outputCopy
dbcadabcdbcadabc
inputCopy
4 5
abcd
outputCopy
aaaaa
Note
In the first test, it is optimal to make one duplication: "dbcadabc" → "dbcadabcdbcadabc".

In the second test it is optimal to delete the last 3 characters, then duplicate the string 3 times, then delete the last 3 characters to make the string have length k.

"abcd" → "abc" → "ab" → "a" → "aa" → "aaaa" → "aaaaaaaa" → "aaaaaaa" → "aaaaaa" → "aaaaa".


*/

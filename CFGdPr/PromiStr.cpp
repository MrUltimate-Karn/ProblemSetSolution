/*
F2. Promising String (hard version)
time limit per test2 seconds
memory limit per test256 megabytes
inputstandard input
outputstandard output
This is the hard version of Problem F. The only difference between the easy version and the hard version is the constraints.

We will call a non-empty string balanced if it contains the same number of plus and minus signs. For example: strings "+--+" and "++-+--" are balanced, and strings "+--", "--" and "" are not balanced.

We will call a string promising if the string can be made balanced by several (possibly zero) uses of the following operation:

replace two adjacent minus signs with one plus sign.
In particular, every balanced string is promising. However, the converse is not true: not every promising string is balanced.

For example, the string "-+---" is promising, because you can replace two adjacent minuses with plus and get a balanced string "-++-", or get another balanced string "-+-+".

How many non-empty substrings of the given string s are promising? Each non-empty promising substring must be counted in the answer as many times as it occurs in string s.

Recall that a substring is a sequence of consecutive characters of the string. For example, for string "+-+" its substring are: "+-", "-+", "+", "+-+" (the string is a substring of itself) and some others. But the following strings are not its substring: "--", "++", "-++".

Input
The first line of the input contains an integer t (1≤t≤104) —the number of test cases in the test.

Then the descriptions of test cases follow.

Each test case of input data consists of two lines. The first line consists of the number n (1≤n≤2⋅105): the length of s.

The second line of the test case contains the string s of length n, consisting only of characters "+" and "-".

It is guaranteed that the sum of values n over all test cases does not exceed 2⋅105.

Output
For each test case, print a single number: the number of the promising non-empty substrings of string s. Each non-empty promising substring must be counted in the answer as many times as it occurs in string s.

Example
inputCopy
5
3
+-+
5
-+---
4
----
7
--+---+
6
+++---
outputCopy
2
4
2
7
4
Note
The following are the promising substrings for the first three test cases in the example:

s[1…2]="+-", s[2…3]="-+";
s[1…2]="-+", s[2…3]="+-", s[1…5]="-+---", s[3…5]="---";
s[1…3]="---", s[2…4]="---".

*/

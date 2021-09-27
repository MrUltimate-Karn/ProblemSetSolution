/*
D1. The World Is Just a Programming Task (Easy Version)
time limit per test1 second
memory limit per test512 megabytes
inputstandard input
outputstandard output
This is an easier version of the problem. In this version, n≤500.

Vasya is an experienced developer of programming competitions' problems. As all great minds at some time, Vasya faced a creative crisis. To improve the situation, Petya gifted him a string consisting of opening and closing brackets only. Petya believes, that the beauty of the bracket string is a number of its cyclical shifts, which form a correct bracket sequence.

To digress from his problems, Vasya decided to select two positions of the string (not necessarily distinct) and swap characters located at this positions with each other. Vasya will apply this operation exactly once. He is curious what is the maximum possible beauty he can achieve this way. Please help him.

We remind that bracket sequence s is called correct if:

s is empty;
s is equal to "(t)", where t is correct bracket sequence;
s is equal to t1t2, i.e. concatenation of t1 and t2, where t1 and t2 are correct bracket sequences.
For example, "(()())", "()" are correct, while ")(" and "())" are not.

The cyclical shift of the string s of length n by k (0≤k<n) is a string formed by a concatenation of the last k symbols of the string s with the first n−k symbols of string s. For example, the cyclical shift of string "(())()" by 2 equals "()(())".

Cyclical shifts i and j are considered different, if i≠j.

Input
The first line contains an integer n (1≤n≤500), the length of the string.

The second line contains a string, consisting of exactly n characters, where each of the characters is either "(" or ")".

Output
The first line should contain a single integer — the largest beauty of the string, which can be achieved by swapping some two characters.

The second line should contain integers l and r (1≤l,r≤n) — the indices of two characters, which should be swapped in order to maximize the string's beauty.

In case there are several possible swaps, print any of them.

Examples
inputCopy
10
()()())(()
outputCopy
5
8 7
inputCopy
12
)(()(()())()
outputCopy
4
5 10
inputCopy
6
)))(()
outputCopy
0
1 1
Note
In the first example, we can swap 7-th and 8-th character, obtaining a string "()()()()()". The cyclical shifts by 0,2,4,6,8 of this string form a correct bracket sequence.

In the second example, after swapping 5-th and 10-th character, we obtain a string ")(())()()(()". The cyclical shifts by 11,7,5,3 of this string form a correct bracket sequence.

In the third example, swap of any two brackets results in 0 cyclical shifts being correct bracket sequences.


*/

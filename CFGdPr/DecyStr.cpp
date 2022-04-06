/*
E. Decypher the String
time limit per test2 seconds
memory limit per test256 megabytes
inputstandard input
outputstandard output
This is an interactive problem. Remember to flush your output while communicating with the testing program. You may use fflush(stdout) in C++, system.out.flush() in Java, stdout.flush() in Python or flush(output) in Pascal to flush the output. If you use some other programming language, consult its documentation. You may also refer to the guide on interactive problems: https://codeforces.com/blog/entry/45307.

You are given a string t consisting of n lowercase Latin letters. This string was cyphered as follows: initially, the jury had a string s consisting of n lowercase Latin letters. Then they applied a sequence of no more than n (possibly zero) operations. i-th operation is denoted by two integers ai and bi (1≤ai,bi≤n), and means swapping two elements of the string with indices ai and bi. All operations were done in the order they were placed in the sequence. For example, if s is xyz and 2 following operations are performed: a1=1,b1=2; a2=2,b2=3, then after the first operation the current string is yxz, and after the second operation the current string is yzx, so t is yzx.

You are asked to restore the original string s. Unfortunately, you have no information about the operations used in the algorithm (you don't even know if there were any operations in the sequence). But you may run the same sequence of operations on any string you want, provided that it contains only lowercase Latin letters and its length is n, and get the resulting string after those operations.

Can you guess the original string s asking the testing system to run the sequence of swaps no more than 3 times?

The string s and the sequence of swaps are fixed in each test; the interactor doesn't try to adapt the test to your solution.

Input
Initially the testing system sends one string t, consisting of lowercase Latin letters (1≤|t|=n≤104).

Output
To give the answer, your program should print one line ! s with a line break in the end. After that, it should flush the output and terminate gracefully.

Interaction
Before giving the answer, you may submit no more than 3 queries. To ask a query, print one line in the following format: ? s′, where s′ should be a string consisting of exaclty n lowercase Latin letters. The line should be ended with a line break character. After submitting a query, flush the output and read the answer to your query — a string t′ consisting of n lowercase Latin letters, which is the result of applying the sequence of swaps to string s′. This string will be given on a separate line ended by a line break character.

If you submit an incorrect query (or ask more than 3 queries), the answer to it will be one string 0. After receiving such an answer, your program should terminate immediately — otherwise you may receive verdict "Runtime error", "Time limit exceeded" or some other verdict instead of "Wrong answer".

Example
inputCopy
yzx
aab
baa
aba
outputCopy
? baa
? aba
? aab
! xyz
Note
In the sample, the testcase described in the statement is used. The participant asks the first query with string baa, which is transformed to aab. The second query contains string aba, which is transformed to baa. The third query contains string aab, which is transformed to aba. The participant can deduce that the initial string s was xyz.

Note for hacking phase:

To submit a test in hacking phase, you should provide it in the following format:

The first line should contain the string s you guess, consisting of n∈[1,10000] lowercase Latin letters.

The second line should contain k (0≤k≤n) — the number of swap operations in the sequence.

Then k lines should follow, i-th of them should denote i-th operation with two integers ai and bi (1≤ai,bi≤n).

For example, the sample test would look like that:

xyz

2

1 2

2 3
*/

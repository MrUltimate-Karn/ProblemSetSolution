/*
D. Guess The String
time limit per test4 seconds
memory limit per test512 megabytes
inputstandard input
outputstandard output
This is an interactive problem. Remember to flush your output while communicating with the testing program. You may use fflush(stdout) in C++, system.out.flush() in Java, stdout.flush() in Python or flush(output) in Pascal to flush the output. If you use some other programming language, consult its documentation. You may also refer to the guide on interactive problems: https://codeforces.com/blog/entry/45307.

The jury has chosen a string s consisting of n characters; each character of s is a lowercase Latin letter. Your task is to guess this string; initially, you know only its length.

You may ask queries of two types:

1 i — the query of the first type, where i is an integer from 1 to n. In response to this query, the jury will tell you the character si;
2 l r — the query of the second type, where l and r are integers such that 1≤l≤r≤n. In response to this query, the jury will tell you the number of different characters among sl,sl+1,…,sr.
You are allowed to ask no more than 26 queries of the first type, and no more than 6000 queries of the second type. Your task is to restore the string s.

For each test in this problem, the string s is fixed beforehand, and will be the same for every submission.

Input
Initially, the jury program sends one integer n on a separate line — the size of s (1≤n≤1000).

Output
To give the answer, print one line ! s with a line break in the end, where s should be the string picked by the jury. After that, your program should flush the output and terminate gracefully.

Interaction
To ask a query, you should send one line containing the query, in one of the following formats:

? 1 i — for a query of the first type (1≤i≤n);
? 2 l r — for a query of the second type (1≤l≤r≤n).
Don't forget to flush the output after sending the query line.

The answer to your query will be given on a separate line. For a query of the first type, the answer will be the character si. For a query of the second type, the answer will be an integer equal to the number of different characters among sl,sl+1,…,sr.

You are allowed to ask no more than 26 queries of the first type, and no more than 6000 queries of the second type.

In case you ask too many queries, or the jury program fails to recognize your query format, the answer to your query will be one integer 0. After receiving 0 as the answer, your program should terminate immediately — otherwise you may receive verdict "Runtime error", "Time limit exceeded" or some other verdict instead of "Wrong answer".

Example
inputCopy
5
4
u
2
g
e
s
1
outputCopy
? 2 1 5
? 1 2
? 2 1 2
? 1 1
? 1 3
? 1 4
? 2 4 5
! guess
Note
Let's analyze the example of interaction.

The string chosen by the jury is guess, so initially the jury sends one integer 5.

the first query is ? 2 1 5, which means "count the number of different characters among s1,s2,…,s5". The answer to it is 4.
the second query is ? 1 2, which means "tell which character is s2". The answer to it is u.
the third query is ? 2 1 2, which means "count the number of different characters among s1 and s2". The answer to it is 2.
the fourth query is ? 1 1, which means "tell which character is s1". The answer to it is g.
the fifth query is ? 1 3, which means "tell which character is s3". The answer to it is e.
the sixth query is ? 1 4, which means "tell which character is s4". The answer to it is s.
the seventh query is ? 2 4 5, which means "count the number of different characters among s4 and s5". The answer to it is 1, so it's possible to deduce that s4 is the same as s5.
In the end, the answer is submitted as ! guess, and it is deduced correctly.


*/

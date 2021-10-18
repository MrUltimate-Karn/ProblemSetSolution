/*
D. Omkar and the Meaning of Life
time limit per test2 seconds
memory limit per test256 megabytes
inputstandard input
outputstandard output
It turns out that the meaning of life is a permutation p1,p2,…,pn of the integers 1,2,…,n (2≤n≤100). Omkar, having created all life, knows this permutation, and will allow you to figure it out using some queries.

A query consists of an array a1,a2,…,an of integers between 1 and n. a is not required to be a permutation. Omkar will first compute the pairwise sum of a and p, meaning that he will compute an array s where sj=pj+aj for all j=1,2,…,n. Then, he will find the smallest index k such that sk occurs more than once in s, and answer with k. If there is no such index k, then he will answer with 0.

You can perform at most 2n queries. Figure out the meaning of life p.

Interaction
Start the interaction by reading single integer n (2≤n≤100)  — the length of the permutation p.

You can then make queries. A query consists of a single line "?a1a2…an" (1≤aj≤n).

The answer to each query will be a single integer k as described above (0≤k≤n).

After making a query do not forget to output end of line and flush the output. Otherwise, you will get Idleness limit exceeded. To do this, use:

fflush(stdout) or cout.flush() in C++;
System.out.flush() in Java;
flush(output) in Pascal;
stdout.flush() in Python;
see documentation for other languages.
To output your answer, print a single line "!p1p2…pn" then terminate.

You can make at most 2n queries. Outputting the answer does not count as a query.

Hack Format

To hack, first output a line containing n (2≤n≤100), then output another line containing the hidden permutation p1,p2,…,pn of numbers from 1 to n.

Example
inputCopy
5

2

0

1
outputCopy

? 4 4 2 3 2

? 3 5 1 5 5

? 5 2 4 3 1

! 3 2 1 5 4
Note
In the sample, the hidden permutation p is [3,2,1,5,4]. Three queries were made.

The first query is a=[4,4,2,3,2]. This yields s=[3+4,2+4,1+2,5+3,4+2]=[7,6,3,8,6]. 6 is the only number that appears more than once, and it appears first at index 2, making the answer to the query 2.

The second query is a=[3,5,1,5,5]. This yields s=[3+3,2+5,1+1,5+5,4+5]=[6,7,2,10,9]. There are no numbers that appear more than once here, so the answer to the query is 0.

The third query is a=[5,2,4,3,1]. This yields s=[3+5,2+2,1+4,5+3,4+1]=[8,4,5,8,5]. 5 and 8 both occur more than once here. 5 first appears at index 3, while 8 first appears at index 1, and 1<3, making the answer to the query 1.

Note that the sample is only meant to provide an example of how the interaction works; it is not guaranteed that the above queries represent a correct strategy with which to determine the answer.


*/

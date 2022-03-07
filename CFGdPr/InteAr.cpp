/*
D. Integral Array
time limit per test2 seconds
memory limit per test512 megabytes
inputstandard input
outputstandard output
You are given an array a of n positive integers numbered from 1 to n. Let's call an array integral if for any two, not necessarily different, numbers x and y from this array, x≥y, the number ⌊xy⌋ (x divided by y with rounding down) is also in this array.

You are guaranteed that all numbers in a do not exceed c. Your task is to check whether this array is integral.

Input
The input consists of multiple test cases. The first line contains a single integer t (1≤t≤104) — the number of test cases. Description of the test cases follows.

The first line of each test case contains two integers n and c (1≤n≤106, 1≤c≤106) — the size of a and the limit for the numbers in the array.

The second line of each test case contains n integers a1, a2, ..., an (1≤ai≤c) — the array a.

Let N be the sum of n over all test cases and C be the sum of c over all test cases. It is guaranteed that N≤106 and C≤106.

Output
For each test case print Yes if the array is integral and No otherwise.

Examples
inputCopy
4
3 5
1 2 5
4 10
1 3 3 7
1 2
2
1 1
1
outputCopy
Yes
No
No
Yes
inputCopy
1
1 1000000
1000000
outputCopy
No
Note
In the first test case it is easy to see that the array is integral:

⌊11⌋=1, a1=1, this number occurs in the arry
⌊22⌋=1
⌊55⌋=1
⌊21⌋=2, a2=2, this number occurs in the array
⌊51⌋=5, a3=5, this number occurs in the array
⌊52⌋=2, a2=2, this number occurs in the array
Thus, the condition is met and the array is integral.

In the second test case it is enough to see that

⌊73⌋=⌊213⌋=2, this number is not in a, that's why it is not integral.

In the third test case ⌊22⌋=1, but there is only 2 in the array, that's why it is not integral.
*/

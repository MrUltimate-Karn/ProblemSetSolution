/*
F. Jee, You See?
time limit per test2 seconds
memory limit per test256 megabytes
inputstandard input
outputstandard output
During their training for the ICPC competitions, team "Jee You See" stumbled upon a very basic counting problem. After many "Wrong answer" verdicts, they finally decided to give up and destroy turn-off the PC. Now they want your help in up-solving the problem.

You are given 4 integers n, l, r, and z. Count the number of arrays a of length n containing non-negative integers such that:

l≤a1+a2+…+an≤r, and
a1⊕a2⊕…⊕an=z, where ⊕ denotes the bitwise XOR operation.
Since the answer can be large, print it modulo 109+7.

Input
The only line contains four integers n, l, r, z (1≤n≤1000, 1≤l≤r≤1018, 1≤z≤1018).

Output
Print the number of arrays a satisfying all requirements modulo 109+7.

Examples
inputCopy
3 1 5 1
outputCopy
13
inputCopy
4 1 3 2
outputCopy
4
inputCopy
2 1 100000 15629
outputCopy
49152
inputCopy
100 56 89 66
outputCopy
981727503
Note
The following arrays satisfy the conditions for the first sample:

[1,0,0];
[0,1,0];
[3,2,0];
[2,3,0];
[0,0,1];
[1,1,1];
[2,2,1];
[3,0,2];
[2,1,2];
[1,2,2];
[0,3,2];
[2,0,3];
[0,2,3].
The following arrays satisfy the conditions for the second sample:

[2,0,0,0];
[0,2,0,0];
[0,0,2,0];
[0,0,0,2].
*/

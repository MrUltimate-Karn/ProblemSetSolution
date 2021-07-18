/*
C. Kuroni and Impossible Calculation
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
To become the king of Codeforces, Kuroni has to solve the following problem.

He is given n numbers a1,a2,…,an. Help Kuroni to calculate ∏1≤i<j≤n|ai−aj|. As result can be very big, output it modulo m.

If you are not familiar with short notation, ∏1≤i<j≤n|ai−aj| is equal to |a1−a2|⋅|a1−a3|⋅ … ⋅|a1−an|⋅|a2−a3|⋅|a2−a4|⋅ … ⋅|a2−an|⋅ … ⋅|an−1−an|. In other words, this is the product of |ai−aj| for all 1≤i<j≤n.

Input
The first line contains two integers n, m (2≤n≤2⋅105, 1≤m≤1000) — number of numbers and modulo.

The second line contains n integers a1,a2,…,an (0≤ai≤109).

Output
Output the single number — ∏1≤i<j≤n|ai−aj|modm.

Examples
inputCopy
2 10
8 5
outputCopy
3
inputCopy
3 12
1 4 5
outputCopy
0
inputCopy
3 7
1 4 9
outputCopy
1
Note
In the first sample, |8−5|=3≡3mod10.

In the second sample, |1−4|⋅|1−5|⋅|4−5|=3⋅4⋅1=12≡0mod12.

In the third sample, |1−4|⋅|1−9|⋅|4−9|=3⋅8⋅5=120≡1mod7.


*/

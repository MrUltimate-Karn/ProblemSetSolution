/*
E. Maximize Mex
time limit per test2 seconds
memory limit per test256 megabytes
inputstandard input
outputstandard output
There are n students and m clubs in a college. The clubs are numbered from 1 to m. Each student has a potential pi and is a member of the club with index ci. Initially, each student is a member of exactly one club. A technical fest starts in the college, and it will run for the next d days. There is a coding competition every day in the technical fest.

Every day, in the morning, exactly one student of the college leaves their club. Once a student leaves their club, they will never join any club again. Every day, in the afternoon, the director of the college will select one student from each club (in case some club has no members, nobody is selected from that club) to form a team for this day's coding competition. The strength of a team is the mex of potentials of the students in the team. The director wants to know the maximum possible strength of the team for each of the coming d days. Thus, every day the director chooses such team, that the team strength is maximized.

The mex of the multiset S is the smallest non-negative integer that is not present in S. For example, the mex of the {0,1,1,2,4,5,9} is 3, the mex of {1,2,3} is 0 and the mex of ∅ (empty set) is 0.

Input
The first line contains two integers n and m (1≤m≤n≤5000), the number of students and the number of clubs in college.

The second line contains n integers p1,p2,…,pn (0≤pi<5000), where pi is the potential of the i-th student.

The third line contains n integers c1,c2,…,cn (1≤ci≤m), which means that i-th student is initially a member of the club with index ci.

The fourth line contains an integer d (1≤d≤n), number of days for which the director wants to know the maximum possible strength of the team.

Each of the next d lines contains an integer ki (1≤ki≤n), which means that ki-th student lefts their club on the i-th day. It is guaranteed, that the ki-th student has not left their club earlier.

Output
For each of the d days, print the maximum possible strength of the team on that day.

Examples
inputCopy
5 3
0 1 2 2 0
1 2 2 3 2
5
3
2
4
5
1
outputCopy
3
1
1
1
0
inputCopy
5 3
0 1 2 2 1
1 3 2 3 2
5
4
2
3
5
1
outputCopy
3
2
2
1
0
inputCopy
5 5
0 1 2 4 5
1 2 3 4 5
4
2
3
5
4
outputCopy
1
1
1
1
Note
Consider the first example:

On the first day, student 3 leaves their club. Now, the remaining students are 1, 2, 4 and 5. We can select students 1, 2 and 4 to get maximum possible strength, which is 3. Note, that we can't select students 1, 2 and 5, as students 2 and 5 belong to the same club. Also, we can't select students 1, 3 and 4, since student 3 has left their club.

On the second day, student 2 leaves their club. Now, the remaining students are 1, 4 and 5. We can select students 1, 4 and 5 to get maximum possible strength, which is 1.

On the third day, the remaining students are 1 and 5. We can select students 1 and 5 to get maximum possible strength, which is 1.

On the fourth day, the remaining student is 1. We can select student 1 to get maximum possible strength, which is 1.

On the fifth day, no club has students and so the maximum possible strength is 0.
*/

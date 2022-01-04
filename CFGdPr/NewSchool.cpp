/*
E. New School
time limit per test2 seconds
memory limit per test256 megabytes
inputstandard input
outputstandard output
You have decided to open a new school. You have already found n teachers and m groups of students. The i-th group of students consists of ki≥2 students. You know age of each teacher and each student. The ages of teachers are a1,a2,…,an and the ages of students of the i-th group are bi,1,bi,2,…,bi,ki.

To start lessons you should assign the teacher to each group of students. Such assignment should satisfy the following requirements:

To each group exactly one teacher assigned.
To each teacher at most 1 group of students assigned.
The average of students' ages in each group doesn't exceed the age of the teacher assigned to this group.
The average of set x1,x2,…,xk of k integers is x1+x2+…+xkk.

Recently you have heard that one of the students will refuse to study in your school. After this, the size of one group will decrease by 1 while all other groups will remain unchanged.

You don't know who will refuse to study. For each student determine if you can start lessons in case of his refusal.

Note, that it is not guaranteed that it is possible to start lessons before any refusal.

Input
The first line contains a single integer t (1≤t≤1000) — the number of test cases.

The first line of each test case contains two integers n and m (1≤m≤n≤105) — the number of teachers and the number of groups of students.

The second line of each test case contains n integers a1,a2,…,an (1≤ai≤105) — the ages of teachers.

The next 2m lines contains descriptions of groups.

The first line of description of group contains a single integer ki (2≤ki≤105) — the number of students in this group.

The second line of description of group contains ki integers bi,1,bi,2,…,bi,ki (1≤bi,j≤105) — the ages of students of this group.

It is guaranteed that the total sum of n over all test cases doesn't exceed 105 and that the total sum of k1+k2+…+km over all test cases doesn't exceed 2⋅105
Output
For each test case output string of symbols 0 and 1 of length k1+k2+…+km. The i-th symbol of this string should be equals 1 if it is possible to start lessons in case of the i-th student refuse and it should be equals 0 otherwise.

Students are numbered by integers from 1 to k1+k2+…+km in the order they appear in the input. Thus, students of the 1-st group are numbered by integers 1, 2, …, k1, students of the 2-nd group are numbered by integers k1+1, k1+2, …, k1+k2 and so on.

Example
inputCopy
2
1 1
30
3
25 16 37
4 2
9 12 12 6
2
4 5
3
111 11 11
outputCopy
101
00100
Note
In the first test case there is one group of students with average age 25+16+373=26 and one teacher with age 30. There exists only one assignment that allows to start lessons.

If the student with age 16 will refuse to study, the average age of students in this group will become 25+372=31 so there won't be any assignment that allows to start lessons.

In the second test case it is impossible to start lessons initially. However, if the 3-rd student with age 111 will refuse to study, the average ages of groups will become 4+52=4.5 and 11+112=11 correspondingly. Then it is possible to assing the first group to the first teacher and the second group to the third teacher.
*/

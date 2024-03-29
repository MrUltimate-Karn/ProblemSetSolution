/*
E. Not Escaping
time limit per test2 seconds
memory limit per test256 megabytes
inputstandard input
outputstandard output
Major Ram is being chased by his arch enemy Raghav. Ram must reach the top of the building to escape via helicopter. The building, however, is on fire. Ram must choose the optimal path to reach the top of the building to lose the minimum amount of health.

The building consists of n floors, each with m rooms each. Let (i,j) represent the j-th room on the i-th floor. Additionally, there are k ladders installed. The i-th ladder allows Ram to travel from (ai,bi) to (ci,di), but not in the other direction. Ram also gains hi health points if he uses the ladder i. It is guaranteed ai<ci for all ladders.

If Ram is on the i-th floor, he can move either left or right. Travelling across floors, however, is treacherous. If Ram travels from (i,j) to (i,k), he loses |j−k|⋅xi health points.

Ram enters the building at (1,1) while his helicopter is waiting at (n,m). What is the minimum amount of health Ram loses if he takes the most optimal path? Note this answer may be negative (in which case he gains health). Output "NO ESCAPE" if no matter what path Ram takes, he cannot escape the clutches of Raghav.


Input
The first line of input contains t (1≤t≤5⋅104) — the number of test cases.

The first line of each test case consists of 3 integers n,m,k (2≤n,m≤105; 1≤k≤105) — the number of floors, the number of rooms on each floor and the number of ladders respectively.

The second line of a test case consists of n integers x1,x2,…,xn (1≤xi≤106).

The next k lines describe the ladders. Ladder i is denoted by ai,bi,ci,di,hi (1≤ai<ci≤n; 1≤bi,di≤m; 1≤hi≤106)  — the rooms it connects and the health points gained from using it.

It is guaranteed ai<ci for all ladders and there is at most one ladder between any 2 rooms in the building.

The sum of n, the sum of m, and the sum of k over all test cases do not exceed 105.

Output
Output the minimum health Ram loses on the optimal path from (1,1) to (n,m). If Ram cannot escape the clutches of Raghav regardless of the path he takes, output "NO ESCAPE" (all uppercase, without quotes).

Example
inputCopy
4
5 3 3
5 17 8 1 4
1 3 3 3 4
3 1 5 2 5
3 2 5 1 6
6 3 3
5 17 8 1 4 2
1 3 3 3 4
3 1 5 2 5
3 2 5 1 6
5 3 1
5 17 8 1 4
1 3 5 3 100
5 5 5
3 2 3 7 5
3 5 4 2 1
2 2 5 4 5
4 4 5 2 3
1 2 4 2 2
3 3 5 2 4
outputCopy
16
NO ESCAPE
-90
27
Note
The figure for the first test case is in the statement. There are only 2 possible paths to (n,m):

Ram travels to (1,3), takes the ladder to (3,3), travels to (3,2), takes the ladder to (5,1), travels to (5,3) where he finally escapes via helicopter. The health lost would be
x1⋅|1−3|−h1+x3⋅|3−2|−h3+x5⋅|1−3|=5⋅2−4+8⋅1−6+4⋅2=16.
Ram travels to (1,3), takes the ladder to (3,3), travels to (3,1), takes the ladder to (5,2), travels to (5,3) where he finally escapes via helicopter. The health lost would be
x1⋅|1−3|−h1+x3⋅|3−1|−h2+a5⋅|2−3|=5⋅2−4+8⋅2−5+4⋅1=21.
Therefore, the minimum health lost would be 16.
In the second test case, there is no path to (n,m).

In the third case case, Ram travels to (1,3) and takes the only ladder to (5,3). He loses 5⋅2 health points and gains h1=100 health points. Therefore the total loss is 10−100=−90 (negative implies he gains health after the path).


*/

/*
D. Binary Spiders
time limit per test2 seconds
memory limit per test256 megabytes
inputstandard input
outputstandard output
Binary Spiders are species of spiders that live on Mars. These spiders weave their webs to defend themselves from enemies.

To weave a web, spiders join in pairs. If the first spider in pair has x legs, and the second spider has y legs, then they weave a web with durability x⊕y. Here, ⊕ means bitwise XOR.

Binary Spiders live in large groups. You observe a group of n spiders, and the i-th spider has ai legs.

When the group is threatened, some of the spiders become defenders. Defenders are chosen in the following way. First, there must be at least two defenders. Second, any pair of defenders must be able to weave a web with durability at least k. Third, there must be as much defenders as possible.

Scientists have researched the behaviour of Binary Spiders for a long time, and now they have a hypothesis that they can always choose the defenders in an optimal way, satisfying the conditions above. You need to verify this hypothesis on your group of spiders. So, you need to understand how many spiders must become defenders. You are not a Binary Spider, so you decided to use a computer to solve this problem.

Input
The first line contains two integers n and k (2≤n≤3⋅105, 0≤k≤230−1), the amount of spiders in the group and the minimal allowed durability of a web.

The second line contains n integers ai (0≤ai≤230−1) — the number of legs the i-th spider has.

Output
In the first line, print a single integer ℓ (2≤ℓ≤n), the maximum possible amount of defenders.

In the second line, print ℓ integers bi, separated by a single space (1≤bi≤n) — indices of spiders that will become defenders.

If there exists more than one way to choose the defenders, print any of them.

Unfortunately, it may appear that it's impossible to choose the defenders. In this case, print a single integer −1.

Examples
inputCopy
6 8
2 8 4 16 10 14
outputCopy
3
1 5 4
inputCopy
6 1024
1 2 3 1 4 0
outputCopy
-1
Note
Consider the examples above.

In the first example, the group of spiders is illustrated on the picture below:


We choose the two-legged, the ten-legged and the 16-legged spiders. It's not hard to see that each pair may weave a web with enough durability, as 2⊕10=8≥8, 2⊕16=18≥8 and 10⊕16=26≥8.

This is not the only way, as you can also choose, for example, the spiders with indices 3, 4, and 6.

In the second example, no pair of spiders can weave the web with durability 1024 or more, so the answer is −1.


*/

/*
E. Game with Cards
time limit per test2.5 seconds
memory limit per test256 megabytes
inputstandard input
outputstandard output
The Alice's computer is broken, so she can't play her favorite card game now. To help Alice, Bob wants to answer n her questions.

Initially, Bob holds one card with number 0 in the left hand and one in the right hand. In the i-th question, Alice asks Bob to replace a card in the left or right hand with a card with number ki (Bob chooses which of two cards he changes, Bob must replace exactly one card).

After this action, Alice wants the numbers on the left and right cards to belong to given segments (segments for left and right cards can be different). Formally, let the number on the left card be x, and on the right card be y. Then after the i-th swap the following conditions must be satisfied: al,i≤x≤bl,i, and ar,i≤y≤br,i.

Please determine if Bob can answer all requests. If it is possible, find a way to do it.

Input
The first line contains two integers n and m (2≤n≤100000, 2≤m≤109) — the number of questions and the maximum possible value on the card.

Then n queries are described. Every description contains 3 lines.

The first line of the description of the i-th query contains a single integer ki (0≤ki≤m) — the number on a new card.

The second line of the description of the i-th query contains two integers al,i and bl,i (0≤al,i≤bl,i≤m) — the minimum and maximum values of the card at the left hand after the replacement.

The third line of the description of the i-th query contains two integers ar,i and br,i (0≤ar,i≤br,i≤m) — the minimum and maximum values of the card at the right hand after the replacement.

Output
At the first line, print "Yes", if Bob can answer all queries, and "No" otherwise.

If Bob can answer all n queries, then at the second line print n numbers: a way to satisfy all requirements. If in i-th query Bob needs to replace the card in the left hand, print 0, otherwise print 1. If there are multiple answers, print any.

Examples
inputCopy
2 10
3
0 3
0 2
2
0 4
0 2
outputCopy
Yes
0 1 
inputCopy
2 10
3
0 3
0 2
2
3 4
0 1
outputCopy
No
inputCopy
5 10
3
0 3
0 3
7
4 7
1 3
2
2 3
3 7
8
1 8
1 8
6
1 6
7 10
outputCopy
Yes
1 0 0 1 0 
*/

/*
E. Gojou and Matrix Game
time limit per test4 seconds
memory limit per test256 megabytes
inputstandard input
outputstandard output
Marin feels exhausted after a long day of cosplay, so Gojou invites her to play a game!

Marin and Gojou take turns to place one of their tokens on an n×n grid with Marin starting first. There are some restrictions and allowances on where to place tokens:

Apart from the first move, the token placed by a player must be more than Manhattan distance k away from the previous token placed on the matrix. In other words, if a player places a token at (x1,y1), then the token placed by the other player in the next move must be in a cell (x2,y2) satisfying |x2−x1|+|y2−y1|>k.
Apart from the previous restriction, a token can be placed anywhere on the matrix, including cells where tokens were previously placed by any player.
Whenever a player places a token on cell (x,y), that player gets vx, y points. All values of v on the grid are distinct. You still get points from a cell even if tokens were already placed onto the cell. The game finishes when each player makes 10100 moves.

Marin and Gojou will play n2 games. For each cell of the grid, there will be exactly one game where Marin places a token on that cell on her first move. Please answer for each game, if Marin and Gojou play optimally (after Marin's first move), who will have more points at the end? Or will the game end in a draw (both players have the same points at the end)?

Input
The first line contains two integers n, k (3≤n≤2000, 1≤k≤n−2). Note that under these constraints it is always possible to make a move.

The following n lines contains n integers each. The j-th integer in the i-th line is vi,j (1≤vi,j≤n2). All elements in v are distinct.

Output
You should print n lines. In the i-th line, print n characters, where the j-th character is the result of the game in which Marin places her first token in the cell (i,j). Print 'M' if Marin wins, 'G' if Gojou wins, and 'D' if the game ends in a draw. Do not print spaces between the characters in one line.

Example
inputCopy
3 1
1 2 4
6 8 3
9 5 7
outputCopy
GGG
MGG
MGG

*/

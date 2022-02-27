/*
C. Playlist
time limit per test2 seconds
memory limit per test256 megabytes
inputstandard input
outputstandard output
You have a playlist consisting of n songs. The i-th song is characterized by two numbers ti and bi — its length and beauty respectively. The pleasure of listening to set of songs is equal to the total length of the songs in the set multiplied by the minimum beauty among them. For example, the pleasure of listening to a set of 3 songs having lengths [5,7,4] and beauty values [11,14,6] is equal to (5+7+4)⋅6=96.

You need to choose at most k songs from your playlist, so the pleasure of listening to the set of these songs them is maximum possible.

Input
The first line contains two integers n and k (1≤k≤n≤3⋅105) – the number of songs in the playlist and the maximum number of songs you can choose, respectively.

Each of the next n lines contains two integers ti and bi (1≤ti,bi≤106) — the length and beauty of i-th song.

Output
Print one integer — the maximum pleasure you can get.

Examples
inputCopy
4 3
4 7
15 1
3 6
6 8
outputCopy
78
inputCopy
5 3
12 31
112 4
100 100
13 55
55 50
outputCopy
10000
Note
In the first test case we can choose songs 1,3,4, so the total pleasure is (4+3+6)⋅6=78.

In the second test case we can choose song 3. The total pleasure will be equal to 100⋅100=10000.


*/

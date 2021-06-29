/*
A. Travel to Bertown
time limit per test2 seconds
memory limit per test256 megabytes
inputstandard input
outputstandard output
Vika has decided to go on a trip to Bertown. She comes to Bertown on the k-th day. Vika does not want to spend money on hotels, fortunately she has n friends who live in Bertown and allow Vika to stay at their houses. The i-th friend told Vika that she could stay at their house from the li-th day till the ri-th day, inclusive.
Vika decided that she would stay at no more than one friend's house. Help Vika determine the maximum number of days that she will be able to stay in Bertown.
Input
The first line contains a single integer t (1≤t≤500) — the number of test cases.
The first line of each test case contains two integers n and k (1≤n,k≤100) — the number of Vika's friends and the day when Vika comes to Bertown.
Then follow n lines, each containing two integers li and ri (1≤li≤ri≤100) denoting the period when Vika can stay at the i-th friend's house.
Output
For each test case, output a single integer — the maximum number of days that Vika can stay in Bertown (or 0 if none of Vika's friends can host her on day k).
Example
inputCopy
3
3 3
1 4
2 6
4 10
2 4
2 3
5 8
2 4
4 4
1 3
outputCopy
4
0
1
Note
In the first example, Vika can stay at the 2-nd friend's house from 3-rd to 6-th day.
In the second example, none of Vika's friends can host her on the 4-th day.
In the third example, Vika can stay at the 1-st friend's house, but only for the 4-th day.
*/
import java.lang.AssertionError
//typedef
private fun readLn() = readLine()!! // string line
private fun readInt() = readLn().toInt() // single int
private fun readLong() = readLn().toLong() // single long
private fun readDouble() = readLn().toDouble() // single double
private fun readStrings() = readLn().split(" ") // list of strings
private fun readInts() = readStrings().map { it.toInt() } // list of ints
private fun readLongs() = readStrings().map { it.toLong() } // list of longs
private fun readDoubles() = readStrings().map { it.toDouble() } // list of doubles
private fun myAssert(x: Boolean) {
    if (!x) {
        throw AssertionError()
    }
}

fun main(args: Array<String>) {
    var tc = readInt()
    for (q in 0 until tc) {
        var (x,y) = readInts()
        var cnt=0
        for(i in 0 until x){
        var(l,r)=readInts()
        if(y>=l)
        cnt=maxOf(cnt,r-y+1)
        }
        println(cnt)
    }
}

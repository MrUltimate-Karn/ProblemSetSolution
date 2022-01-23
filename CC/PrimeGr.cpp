/*
While doing his research in the Institute of Lovely Graphs, Rashad came up with another problem called Prime Graph.

Prime Graph is a simple graph (undirected graph which does not contain any self-loops or multiple-edges) with N
nodes such that the degree of each node is prime. Rashad wants to know what is the maximum number of edges a prime graph with N

nodes can contain. Can you help Rashad answer this question?

Note: The degree of a node in a simple graph is the number of edges that are incident on the node and a prime number is a natural number greater than 1
which has exactly two divisors - 1

and the number itself.
Input Format

    The first line contains T

- the number of test cases. Then the test cases follow.
The first line of each test case contains N

    - the number of nodes in the graph.

Output Format

For each test case, output the maximum number of edges a prime graph of N

nodes can contain.
Constraints

    1≤T≤100

3≤N≤105

Sample Input 1

3
3
4
5

Sample Output 1

3
6
7

Explanation

    For N=3

and 4
we can construct a complete graph (a graph in which every pair of distinct vertices is connected by an edge).
For N=5
we can construct a prime graph with at most 7

    edges. One such graph is:

sample-image
*/

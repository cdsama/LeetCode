#include "LeetCode.hpp"

/*
743. Network Delay Time
Easy

There are N network nodes, labelled 1 to N.

Given times, a list of travel times as directed edges times[i] = (u, v, w), where u is the source node, v is the target node, and w is the time it takes for a signal to travel from source to target.

Now, we send a signal from a certain node K.  How long will it take for all nodes to receive the signal?  If it is impossible, return -1.

Note:

N will be in the range [1, 100].
K will be in the range [1, N].
The length of times will be in the range [1, 6000].
All edges times[i] = (u, v, w) will have 1 <= u, v <= N and 1 <= w <= 100.

Tags: 
    1. Heap
    2. Depth-first Search
    3. Breadth-first Search
    4. Graph

Hint 1:
We visit each node at some time, and if that time is better than the fastest time we've reached this node, we travel along outgoing edges in sorted order.  Alternatively, we could use Dijkstra's algorithm.

*/

class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int N, int K) {
        
    }
};

TEST_CASE("network-delay-time", "[743][Easy][heap][depth-first-search][breadth-first-search][graph]") {
    //TODO
    CHECK(true);
}


// The card ai is unnecessary if 
// there is a subset of the other N - 1 cards 
// whose sum is in the interval [K - ai, K)

// O(N^3): the straightforward DP. for each element, 
// let dp[i][j] denotes using up to element i, whether it is possible to get sum j.
// each element is on diffrent index, so dp[i][j] need to be recomputed every time.

// O(N^2 logN): It turns out that if ap < aq and aq is unnecessary, ap is also unnecessary. 
// Do binary search using this fact.

// O(N^2): Do DP twice: for prefixes and for suffixes.

# ai := h(s[0; i))

# It is possible to permute the characters in s[l; r) and obtain a palindrome.
# al \xor ar is 0 or a power of 2.

# opti be (The fewest number of strings s[0; i) needs to be partitioned into)

# the array dp is a memoization of the minimum values in opt calculated so far for each value of the hash.
# opti = min_{x\in X}{dp_{ai\xor x}} + 1, where X := { 2^0; 2^1; : : : ; 2^25}

# which means (ai\xor x) \xor ai = x

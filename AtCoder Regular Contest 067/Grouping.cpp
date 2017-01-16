/* x_0 A + x_1 (A+1) + ... + x_{B-A} (A+ B-A) = N
 * such that x_i = 0 or C \le x_i \le D
 *
 * not necessarily in pure math,
 * can use dynamic programming
 *
 * dp(i,j): number of ways of putting i people in groups of size \ge j
 * dp(i,j) = dp(i, j+1) + \sum_{k=c}^d dp(i-k*j, j+1)*\binom{i, k*j}*dp2(j, k).
 * where dp2(j,k): number of ways to distribute people in k groups of size j.
 * dp2(j,1) = 1
 * dp2(j,k) = dp2(j,k-1)*\binom{j*k,j}/k
 * answer is dp(n, a).
 */

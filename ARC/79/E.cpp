// each operation decrease the sum by 1
// we must first perform S-N^2 operations
// then simulate the left N^2 by brute force

// how to perform X operations:
// 1. increase each element by X
// 2. for X times: find largest, decrease D=N+1

// First we spend T times to reduce each element to Y
// We want to find the smallest Y, such that 
// T = floor(max{(a1-Y)/D, 0}) + ... + floor(max{(aN-Y)/D, 0}) \le X
// Then we replace each ai to be ai - (ai-Y) / D * D
// Then we simulate the X-T steps by brute force

// Here X - T <= N, since if X - T > N, we can replace Y to be Y-D 

// Then we simulate the N^2 steps by brute force


S = raw_input()

def solve(S):
    i = 0
    j = len(S) - 1
    ans = 0
    while i < j:
        if S[i] == S[j]:
            i += 1
            j -= 1
        elif S[i] == 'x':
            ans += 1
            i += 1
        elif S[j] == 'x':
            ans += 1
            j -= 1
        else:
            return -1
    return ans
            

print solve(S)

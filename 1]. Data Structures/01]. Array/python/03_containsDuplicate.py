import sys

def solve():
    n_str = sys.stdin.readline().strip()
    if not n_str:
        return
    n = int(n_str)
    
    if n == 0:
        print("false")
        return
        
    nums = list(map(int, sys.stdin.readline().split()))
    
    seen = set()
    has_duplicate = False
    
    for i in range(n):
        if nums[i] in seen:
            has_duplicate = True
            break
        seen.add(nums[i])
        
    if has_duplicate:
        print("true")
    else:
        print("false")

if __name__ == '__main__':
    t_str = sys.stdin.readline().strip()
    if t_str:
        t = int(t_str)
        for _ in range(t):
            solve()
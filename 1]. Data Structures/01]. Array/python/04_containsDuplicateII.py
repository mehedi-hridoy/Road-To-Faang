import sys

def solve():
    input_data = sys.stdin.readline().split()
    if not input_data:
        return
    
    n = int(input_data[0])
    k = int(input_data[1])
    
    if n == 0:
        print("false")
        return
        
    nums = list(map(int, sys.stdin.readline().split()))
    
    window = set()
    found = False
    
    for i in range(n):
        if nums[i] in window:
            found = True
            break
            
        window.add(nums[i])
        
        if len(window) > k:
            window.remove(nums[i - k])
            
    if found:
        print("true")
    else:
        print("false")

if __name__ == '__main__':
    t_str = sys.stdin.readline().strip()
    if t_str:
        t = int(t_str)
        for _ in range(t):
            solve()
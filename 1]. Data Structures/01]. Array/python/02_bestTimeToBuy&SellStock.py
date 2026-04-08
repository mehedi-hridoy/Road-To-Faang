import sys

def solve():
    input = sys.stdin.readline
    
    t_str = input().strip()
    if not t_str:
        return
    t = int(t_str)
    
    for _ in range(t):
        n = int(input().strip())
        
        if n == 0:
            print(0)
            continue
            
        prices = list(map(int, input().strip().split()))
        
        min_price = prices[0]
        max_profit = 0
        
        for price in prices:
            if price < min_price:
                min_price = price
            elif price - min_price > max_profit:
                max_profit = price - min_price
                
        print(max_profit)

if __name__ == '__main__':
    solve()
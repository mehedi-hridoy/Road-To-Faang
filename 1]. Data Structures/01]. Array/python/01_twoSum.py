import sys

def twoSum(nums,target):
    num_map = {};
    for i, num in enumerate(nums):
        complement = target - num
        if complement in num_map:
            return [num_map[complement], i]
        num_map[num] = i
    return [-1, -1]

def main():

    input_data = sys.stdin.read().split()

    if not input_data:
        print("-1 -1")
        return
    n =  int(input_data[0])
    target = int(input_data[1])

    nums = [int(x) for x in input_data[2:2+n]]

    result = twoSum(nums, target)

    if result != [-1, -1]:
        print(result[0], result[1])
    else:
        print("-1 -1")
    

if __name__ == "__main__":
    main()

    
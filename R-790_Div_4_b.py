def solve():
    n = int(input())  
    
    candies = input().split()
    candies = [int(x) for x in candies]

    minimum = min(candies)

    result = sum(candy - minimum for candy in candies)
    print(result)

test_case = int(input())
for _ in range(test_case):
    solve()
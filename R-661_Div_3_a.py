def solve():
    n = int(input())

    elements = input().split()
    elements = [int(x) for x in elements]

    elements.sort()
    possibility = True

    for i in range(len(elements) - 1):
        if elements[i + 1] - elements[i] > 1:
            possibility = False
            break
    
    if possibility:
        print("YES")
    else:
        print("NO")

test_case = int(input())
while test_case > 0:
    solve()
    test_case -= 1

def find_distinct_elements(Arr1, Arr2):
    Ans1 = list(set(Arr1) - set(Arr2))
    Ans2 = list(set(Arr2) - set(Arr1))
    return Ans1, Ans2

N = int(input())
Arr1 = list(map(int, input().split()))
Arr2 = list(map(int, input().split()))

Ans1, Ans2 = find_distinct_elements(Arr1, Arr2)

print(" ".join(map(str, Ans1)))
print(" ".join(map(str, Ans2)))

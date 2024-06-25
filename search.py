def binary_search(l: list[int], item: int) -> int:
    k, n = 0, len(l)
    b = n // 2
    while (b >= 1):
        while(k + b < len(l) and l[k + b] <= item):
            k += b
        b //= 2
    return k if l[k] == item else -1

find_the_last = binary_search(list(range(0, 1002)), 1001) == 1001
find_the_middle = binary_search(list(range(0, 1000)), 500) == 500
find_the_first = binary_search(list(range(0, 1000)), 0) == 0
dont_find = binary_search(list(range(0, 1002)), 1002) == -1
print(f"{find_the_first}, {find_the_middle}, {find_the_last}, {dont_find}")

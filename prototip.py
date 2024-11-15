def sum(arr: list) -> int:
    sm = 0
    for i in arr:
        sm += i
    return sm

def sort(arr: list) -> list:
    long = len(arr)
    for i in range(long):
        for j in range(i, long):
            if arr[i] < arr[j]:
                arr[i], arr[j] = arr[j], arr[i]
    return arr

print(sort([9, 8, 7, 6, 4, 3, 9]))

def f(free, misha=0, petya=0):

    free = sort(free)

    if sum(free) == 0:
        return abs(misha - petya)

    if misha <= petya:
        misha += free[0]
        return f(free[1:], misha, petya)
    
    if misha >= petya:
        petya += free[0]
        return f(free[1:], misha, petya)
        

print(
    f([
        1, 2, 3, 4, 5, 6, 7, 8, 9
    ])
)

print(
    f([
        5, 7, 8
    ])
)

print(
    f([
        4, 4, 5, 6, 7, 3, 9
    ])
)
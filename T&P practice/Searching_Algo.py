# Linear Search
def linear_search(arr: list[int], target: int) -> bool:
    for i in arr:
        if i == target:
            return True
        
    return False


# Binary Search 
def binary_search(arr: list[int], target: int) -> bool:
    low, high = 0, len(arr) - 1

    while(low <= high):
        mid = low + high // 2
        if (arr[mid] == target):
            return True
        elif arr[mid] > target:
            high = mid - 1
        else:
            low = mid + 1

    return False


# Binary Search Recursion
def binary_search_recur(arr: list[int], target: int, low: int, high: int) -> bool:
    if low > high:
        return False
    else:
        mid = low + high // 2
        if (arr[mid] == target):
            return True
        elif (arr[mid] > target):
            return binary_search_recur(arr, target, low, mid - 1)
        else:
            return binary_search_recur(arr, target, mid + 1, high)
        

def reversin_array(arr: list) -> list:
    for i in range(len(arr) // 2):
        arr[i], arr[-(i+1)] = arr[-(i+1)], arr[i]

    return arr


if __name__ == "__main__":
    l = [1, 2, 3, 4, 5, 6, 7, 8, 9]
    # res = reversin_array(l)
    # print(res)

    print(binary_search_recur(l, 5, 0, len(l) - 1))

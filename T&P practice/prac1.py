
def flattenArray(arr: list[list[list[int]]]) -> list:
    res = []
    for i in arr:
        for j in i:
            res.extend(j)
    
    new_res = [k for k in j for j in i for i in arr]
    print(new_res)
    
    return res


if __name__ == "__main__":
    multi_dim = [[[1, 2, 3], [4, 5, 6]], [[7, 8, 9], [10, 11, 12]]]
    new_arr = flattenArray(multi_dim)
    print(f"Result: {new_arr}")

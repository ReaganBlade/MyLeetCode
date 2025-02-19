# 1352. Product of the Last K Numbers

from typing import List

# Time Complexity: O(n)
# class ProductOfNumbers:
#     def __init__(self):
#         self.arr = List()

#     def add(self, num: int) -> None:
#         self.arr.append(num)

#     def getProduct(self, k: int) -> int:
#         result = 1
#         for i in range(-1, -(k+1), -1):
#             res *= self.arr[i]

#         return res

# Using Prefix Product for optimal approach
class ProductOfNumbers:
    def __init__(self):
        self.prefix_products = [1]
        self.size = 0

    def add(self, num: int) -> None:
        if num == 0:
            self.prefix_products = [1]
            self.size = 0

        else:
            self.prefix_products.append(self.prefix_products[self.size] * num)
            self.size += 1

    def getProduct(self, k: int) -> int:
        if k > self.size:
            return 0
        
        return (self.prefix_products[self.size] // self.prefix_products[self.size - k])
# 2349. Design a Number Container System
from typing import List

class NumberContainers:
    def __init__(self):
        self.indexToNumber = {}
        self.numberToIndices = collections.defaultdict(SortedSet)

    def change(self, index: int, number: int) -> None:
        if index in self.indexToNumber:
            prevNum = self.indexToNumber[index]
            self.numberToIndices[prevNum].remove(index)
            if not self.numberToIndices[prevNum]:
                del self.numberToIndices[prevNum]
        
        self.indexToNumber[index] = number
        self.numberToIndices[number].add(index)

    def find(self, number: int) -> int:
        if number in self.numberToIndices and self.numberToIndices[number]:
            return self.numberToIndices[number][0]
        return -1


if __name__ == "__main__":
    nc = NumberContainers()
    
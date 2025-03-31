# 1794. Minimum Time to Type Word Using Special Typewriter

class Solution:
    def minTimeToType(self, word: str) -> int:
        print(str)
        time = 0
        pointer = 'a'
        for i in word:
            if pointer != i:
                dist = abs(ord(pointer) - ord(i))
                print(f"pointer: {pointer}, cur: {i}, dist: {dist}")
                time += dist if dist < 13 else 26 - dist
                pointer = i
            time += 1

        return time


if __name__ == '__main__':
    s = Solution()
    res = s.minTimeToType('abc')
    print(res)

    res = s.minTimeToType('bza')
    print(res)
    
    res = s.minTimeToType('zjpc')
    print(res)
    pass


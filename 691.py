# 691. Stickers to Spell Word
from typing import List

class Solution:
    def minStickers(self, stickers: List[str], target: str) -> int:
        cur_chars = []
        count = 0
        for i in target:
            if i not in  cur_chars:
                flag = False
                for c in stickers:
                    if i in c:
                        cur_chars += list(c)
                        flag = True
                        count += 1
                        break

                if flag is False: return -1
                cur_chars.remove(i)

        return count
    

if __name__ == "__main__":
    stickers = ["with","example","science"]
    target = "thehat"
    s = Solution()
    res = s.minStickers(stickers, target)

    print(res)
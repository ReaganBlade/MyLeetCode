# 187. Repeated DNA Sequence
from typing import List

class Solution:
    def findRepeatedDnaSequences(self, s: str) -> List[str]:
        str_dict = {}
        l = len(s)

        for i in range(l-10):
            cur_str = s[i:i+10]
            print(cur_str)
            str_dict[cur_str] = str_dict.get(cur_str, 0) + 1

        res = [i for i, j in str_dict.items() if j > 1]
        return res
    

if __name__ == '__main__':
    s = Solution()
    ss = "AAAAAAAAAAA"
    res = s.findRepeatedDnaSequences(ss)
    print(res)
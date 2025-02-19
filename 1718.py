# 1718. Construct the lexicographically largest valid sequence
from typing import List

class Solution:
    def constructDistanceSequence(self, n: int) -> List[int]:
        def backTrack(i):
            if i == sz:
                return True
            
            if ans[i] != 0:
                return backTrack(i+1)
            else:
                for num in range(n, 0, -1):
                    if num == 1:
                        if num not in seen:
                            ans[i] = 1
                            seen.add(num)

                            if backTrack(i+1):
                                return True

                            ans[i] = 0
                            seen.remove(num)

                    else:
                        if num not in seen and i + num < sz and ans[i+num] == 0:
                            ans[i] = ans[i+num] = num
                            seen.add(num)

                            if backTrack(i+1):
                                return True

                            ans[i] = ans[i + num] = 0
                            seen.remove(num)

            return False 
        
        seen = set()
        sz = 1 + (n -1 ) * 2
        ans = [0] * sz

        backTrack(0)

        return ans
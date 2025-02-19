# 1541. Minimum Insertions to Balance a Parentheses String

class Solution:
    def minInsertions(self, s: str) -> int:
        if len(s) == 1:
            return 2
        
        
        the_split = s.split("))")

        print(the_split)


if __name__ == "__main__":
    s = Solution()
    # l = "))())("
    l = "(()))"
    s.minInsertions(l)
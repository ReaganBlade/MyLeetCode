# 171. Excel Sheet Column Number

class Solution(object):
    def titleToNumber(self, columnTitle):
        """
        :type columnTitle: str
        :rtype: int
        """

        res = 0
        for char in columnTitle:
            res = res * 26 + (ord(char) - ord('A') + 1)
        
        return res
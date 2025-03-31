# 168. Excel Sheet Column Title

class Solution(object):
    def convertToTitle(self, columnNumber):
        """
        :type columnNumber: int
        :rtype: str
        """
        res = ""
        while(columnNumber):
            columnNumber -= 1
            res += chr(columnNumber % 26 + ord('A'))
            columnNumber //= 26

        return res[::-1]

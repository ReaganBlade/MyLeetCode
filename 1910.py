# # 1910. Remove All Occurences of a Substring
from queue import LifoQueue

# class Solution:
#     def removeOccurrences(self, s: str, part: str) -> str:
#         result = ""
#         i = 0
#         print(s)
#         while (i < len(s)):
#             print(f"Current s: {s[i]}")
#             if (s[i: i + len(part)] == part):
#                 print(f" current s: {s[i: i + len(part)]} further part: {s[i + len(part): ]}")
#                 s = s[: i] + s[i + len(part): ]
#                 print(s)
#                 i += len(part) - 1
#             else:
#                 result += s[i]
#                 i += 1

#         return result

class Solution:
    def removeOccurrences(self, s: str, part: str) -> str:
        res = s
        i = 0
        print(s)
        while (i < len(res)):
            print(i)
            if (res[i: i + len(part)] == part):
                res = res[: i] + res[i + len(part): ]
                i = 0
                print(res)
            else:
                i += 1

        return res

if __name__ == "__main__":
    sample = "daabcbaabcbc"
    test = "daabcbaabcbc"
    part = "abc"

    s = Solution()
    res = s.removeOccurrences(sample, part)
    print(res)



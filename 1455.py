# 1455. Check if a Word Occurs as a Prefix of any Word in a sentence

class Solution:
    def isPrefixOfWord(self, sentence: str, searchWord: str) -> int:
        search_word_len = len(searchWord)
        words = sentence.split()

        for idx in range(len(words)):
            if (len(words[idx]) > search_word_len) and (searchWord == words[idx][:search_word_len]):
                return idx + 1

        return -1
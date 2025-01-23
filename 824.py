    
class Solution(object):
    def toGoatLatin(self, sentence):
        words = sentence.split(' ')
        new_words = []

        for i in range(len(words)):
            if (words[i][0] in 'aeiouAEIOU'):
                new_words.append(words[i] + 'ma' + (i+1) * 'a')
            else:
                new_words.append(words[i][1:] + words[i][0] + 'ma' + (i+1) * 'a')

        return ' '.join(new_words)
// 2114. Maximum Number of Words Found in Sentences
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int max_count = 0;
        for (const string& sentence : sentences) {
            // Use stringstream to split the sentence into words
            stringstream ss(sentence);
            string word;
            int word_count = 0;
            while (ss >> word) {
                word_count++;
            }
            // Update max_count if the current sentence has more words
            max_count = max(max_count, word_count);
        }
        return max_count;
    }
};
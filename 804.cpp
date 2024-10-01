// Unique Morse Code words
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        unordered_map<char, string> morseCode = {
            {'a', ".-"}, {'b', "-..."}, {'c', "-.-."},
            {'d', "-.."}, {'e', "."}, {'f', "..-."},
            {'g', "--."}, {'h', "...."}, {'i', ".."}, {'j', ".---"},
            {'k', "-.-"}, {'l', ".-.."}, {'m', "--"}, {'n', "-."},
            {'o', "---"}, {'p', ".--."}, {'q', "--.-"}, {'r', ".-."},
            {'s', "..."}, {'t', "-"}, {'u', "..-"}, {'v', "...-"},
            {'w', ".--"}, {'x', "-..-"}, {'y', "-.--"}, {'z', "--.."}
        };

        unordered_map<string, int> result;
        for(const string& word: words){
            string curr = "";
            for(char c: word){
                curr += morseCode[c];
            }

            result[curr] += 1;
        }

        return result.size();
    }
};

int main(){

    return 0;
}
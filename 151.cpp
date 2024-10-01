// 151. Reverse Words in a string
#include <bits/stdc++.h>
using namespace std;

class Solution {
    void trim(string& s){
        s.erase(0, s.find_first_not_of(' '));
        s.erase(s.find_last_not_of(' '));
    }

public:
    string reverseWords(string s) {
        trim(s);
        vector<string> words;
        string word;

        string result;
        for(char c: s) {
            if ( c == ' '){
                if (!word.empty()){
                    words.emplace_back(word);
                    word.clear();
                }
            }
            else {
                word.push_back(c);
            }
        }

        if (!word.empty()){
            words.emplace_back(word);
        }

        for( int i = words.size(); i >= 0; i-- ){
            if (i != 0){
                result += words[i] + " ";
                continue;
            }
            result += words[i];
        }

        return result;
    }
};

int main(){

    return 0;
}
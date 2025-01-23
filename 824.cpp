// 824. Goat Latin
#include <bits/stdc++.h>
using namespace std;

class Solution
{

    bool isVowel(char c){
        char lower = tolower(c);
        return lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u';
    }
public:
    string toGoatLatin(string sentence)
    {
        istringstream iss(sentence);
        vector<string> words;
        string word, result;

        while (iss >> word)
        {
            words.push_back(word);
        }

        for (size_t i = 0; i < words.size(); i++)
        {
            string &w = words[i];
            if (isVowel(w[0]))
            {
                result += w + "ma" + string(i + 1, 'a');
            }
            else
            {
                result += w.substr(1) + w[0] + "ma" + string(i + 1, 'a');
            }

            if (i != words.size() - 1)
            {
                result += " ";
            }
        }

        return result;
    }
};

int main()
{

    return 0;
}

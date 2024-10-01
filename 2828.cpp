// 2828. Check if a String Is an Acronym of Words
#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    bool isAcronym(vector<string>& words, string s){
        if (s.length() != words.size())
            return false;
            
        string comp = "";
        for(string word: words){
            comp += word[0];
        }

        if(comp == s)
            return true;
        return false;
    }
};

int main(){


    return 0;
}
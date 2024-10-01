// 2325. Decode the Message
#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    string decodeMessage(string key, string message){
        unordered_map<char, char> code;
        for(int i = 0; i < key.length(); i++){
            if(key[i] == ' ')
                continue;
            
            int c = 'a' + i;
            code[key[i]] = (char)(c);
        }

        // for(auto i: code){
        //     cout << i.first << ": " << i.second << endl;
        // }

        string decodedMessage = "";
        for(int i = 0; i < message.length(); i++){
            if (message[i] == ' ')
                decodedMessage += ' ';
                continue;
            decodedMessage += code[message[i]];
        }

        return decodedMessage;
    }
};

int main(){

    string key = "the quick brown fox jumps over the lazy dog";
    string message = "vkbs bs t suepuv";

    Solution s;
    cout << s.decodeMessage(key, message);

    return 0;
}
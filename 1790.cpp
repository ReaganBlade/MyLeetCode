// 1790. Check if One String Swap Can Make Strings Equal
#include <bits/stdc++.h>
using namespace std;

// class Solution{
// public:
//     bool areAlmostEqual(string s1, string s2){
//         if (s1.size() != s2.size()){
//             return false;
//         }

//         int count = 0;

//         for (int i = 0; i < s1.size(); i++){
//             if (s1[i] != s2[i]) count++;
//         }

//         if (count == 2 or count == 0)
//             return true;

//         return false;
//     }
// };

// Using hashtable
class Solution
{
public:
    bool areAlmostEqual(string s1, string s2)
    {
        if (s1.size() != s2.size())
            return false;

        int first_index = 0;
        int second_index = 0;

        int count = 0;

        for (int i = 0; i < s1.size(); i++)
        {
            if (s1[i] != s2[i])
            {
                count++;

                if (count > 2)
                    return false;

                else if (count == 1)
                {
                    first_index = i;
                }
                else
                {
                    second_index = i;
                }
            }
        }

        return s1[first_index] == s2[second_index] && s1[second_index] == s2[first_index];
    }
};

int main()
{

    return 0;
}
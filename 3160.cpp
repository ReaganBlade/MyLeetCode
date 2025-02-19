// 3160. Find the Number of Distinct Colors Among the Balls
#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    vector<int> queryResults(int limit, vector<vector<int>>& queries){
        int unique_colors = 0;
        map<int, int> ball_color_map;
        map<int, int> color_count_map;
        vector<int> result;

        for (auto i: queries){

            int ball = i[0], color = i[1];
            if (ball_color_map.find(ball) == ball_color_map.end()){
                // unique_colors += 1;
                ball_color_map[ball] = color;
                if (++color_count_map[color] == 1)
                    unique_colors += 1;
            } else {
                int prev_color = ball_color_map[ball];
                if (prev_color != color){
                    if (--color_count_map[prev_color] == 0)
                        unique_colors--;

                    ball_color_map[ball] = color;
                    if (++color_count_map[color] == 1)
                        unique_colors++;
                }
            }

            result.push_back(unique_colors);            
        }

        return result;
    }
};

int main(){
    return 0;

}
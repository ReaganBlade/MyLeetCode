// 2383. Minimum Hours of Training to Win a Competition
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minNumberOfHours(int initialEnergy, int initialExperience, vector<int>& energy, vector<int>& experience) {
        int energyLose = 0;
        for (int e : energy){
            energyLose += e;
        }
        int availableEnergy = max(0, energyLose - initialEnergy + 1);
        int experienceEarn = 0;
        for (int exp : experience){
            if(initialExperience <= exp){
                experienceEarn += (exp - initialExperience + 1);
                initialExperience += (exp - initialExperience + 1);
            }
            initialExperience += exp;
        }
        return availableEnergy + experienceEarn;
    }
};


int main(){

    return 0;
}
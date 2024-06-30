class Solution {
public:
    int minSteps(string s, string t) {
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        map<char, int> sMap;
        map<char, int> tMap; 
        int steps = 0;
        for(auto i : s){
            sMap[i]++;
        } 
        for(auto i : t){
            tMap[i]++;
        }
        for(auto i : sMap){
            if(tMap.find(i.first) != tMap.end()){ 
                if(sMap[i.first] != tMap[i.first]){
                    if(sMap[i.first] > tMap[i.first]){
                    steps += sMap[i.first] - tMap[i.first];
                    }
                }
            } else {
                steps += sMap[i.first];
            }
        }
        return steps;
    }
};
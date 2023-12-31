class Solution {
public:
    bool isPathCrossing(string path) {
        set<pair<int , int >>visited_node;
        int x = 0, y = 0;
        visited_node.insert({x,y});
        for(char move : path){
            if(move == 'N') y++;
            else if(move == 'S') y--;
            else if(move == 'E') x++;
            else if(move == 'W') x--;
        if(!visited_node.insert({x,y}).second){
            return true;
        }
        }
        return false;
    }
};
class Solution {
public:
    
     double diagonalLength(int length, int width){
         return sqrt(pow(length,2) + pow(width,2));
     }
    
    
      int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        double max_diagonal = 0;
          int max_area = 0;
          
          for(int i = 0; i < dimensions.size(); ++i){
              int length = dimensions[i][0];
              int width = dimensions[i][1];
              
              double current_diagonal = diagonalLength(length, width);
              
              if(current_diagonal > max_diagonal || (current_diagonal == max_diagonal && length * width > max_area)){
                  max_diagonal = current_diagonal;
                  max_area = length * width;
              }
          }
        return max_area;
    }
};
class Solution {
public:
    bool squareIsWhite(string coordinates) {
       return ((int)coordinates[0] +  coordinates[1] ) %2==1;
     }
};
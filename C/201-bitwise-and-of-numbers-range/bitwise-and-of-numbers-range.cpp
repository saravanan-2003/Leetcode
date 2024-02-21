class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {
        int total=0;
        while(left!=right){
            left>>=1;
            right>>=1;
            total++;
        }
        return left<<total;
    }
};
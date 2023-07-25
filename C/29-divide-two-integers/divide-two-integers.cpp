class Solution {
public:
    int divide(int dividend, int divisor) {
        long long a=(long long)dividend/(long long)divisor;
        if(a>2147483647){
            
            return 2147483647;
        }
        if(a<-2147483648){
            return -2147483648;
        }
        return floor(a);
    }
};
class Solution {
public:
    vector<int> countBits(int n) {
        int i=1,temp,count,div;
        vector<int>v(n+1);
        v[0]=0;
        while(i<=n){
            v[i]=v[i/2]+i%2;
            i++;
        }
        return v;
    }
};
class Solution {
public:
    vector<int> countBits(int n) {
        int i=0,temp,count,div;
        vector<int>v;
        while(i<=n){
            temp=i;
            count=0;
            while(temp!=0){
                div=temp%2;
                temp=temp/2;
                if(div==1){
                    count++;
                }
            }
            v.push_back(count);
            i++;
        }
        return v;
    }
};
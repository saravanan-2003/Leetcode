class Solution {
public:
    int alternateDigitSum(int n) {
        int temp=n;
        int alternatedigit=0;
        vector<int>v;
        while(temp){
            v.push_back(temp%10);
            temp/=10;
        }
        reverse(v.begin(),v.end());
        for(int i=0;i<v.size();i++){
            if(i%2==0){
                alternatedigit+=v[i];
            }
            else{
                alternatedigit-=v[i];
            }
        }
        return alternatedigit;
        
    }
};
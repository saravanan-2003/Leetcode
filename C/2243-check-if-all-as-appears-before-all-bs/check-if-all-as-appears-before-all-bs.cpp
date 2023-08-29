class Solution {
public:
    bool checkString(string s) {
        int activate=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='b'){
                activate=1;
            }
            if(activate==1 && s[i]=='a'){
                return 0;
            }
        }
        return 1;
    }
};
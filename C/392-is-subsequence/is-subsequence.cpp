class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i=0,k=0;
        while(t[i]!='\0'){
            if(s[k]==t[i++]){
                k++;
            }
        }
        return k==s.size()?true:false;
    }
};
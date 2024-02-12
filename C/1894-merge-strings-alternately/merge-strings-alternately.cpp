class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int i=0;
        string str="";
        for(i=0;i<word1.size() && i<word2.size();i++){
            str=str+word1[i];
            str+=word2[i];
        }
        while(i<word1.size()){
            str+=word1[i++];
        }
        while(i<word2.size()){
            str+=word2[i++];
        }
        return str;
    }
};
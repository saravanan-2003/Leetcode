class Solution {
public:
    vector<string> splitWordsBySeparator(vector<string>& words, char separator) {
        int j=0;
        vector<string>v;
        for(int i=0;i<words.size();i++){
            string str="";
            while(j<words[i].size() && words[i][j]!=separator){
                str=str+words[i][j];
                j++;
            }
            if(str.size()!=0){
                v.push_back(str);
            }
            if(j<words[i].size()){
                i--;
                j++;
            }
            else{
                j=0;
            }
        }
        return v;
    }
};
class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        vector<char>v1={'q','w','e','r','t','y','u','i','o','p','Q','W','E','R','T','Y','U','I','O','P'};
        vector<char>v2={'a','s','d','f','g','h','j','k','l','A','S','D','F','G','H','J','K','L'};
        vector<char>v3={'z','x','c','v','b','n','m','Z','X','C','V','B','N','M'};
        vector<string>main_v;
        for(int i=0;i<words.size();i++){
            int count1=0,count2=0,count3=0;
            for(int k=0;k<words[i].size();k++){
                for(int j=0;j<v1.size();j++){
                    if(words[i][k]==v1[j]){
                        count1++;
                    }
                }
            
                for(int j=0;j<v2.size();j++){
                    if(words[i][k]==v2[j]){
                        count2++;
                    }
                }
            
                for(int j=0;j<v3.size();j++){
                    if(words[i][k]==v3[j]){
                        count3++;
                    }
                }
            }
            if(count1==words[i].size() || count2==words[i].size() || count3==words[i].size()){
                main_v.push_back(words[i]);
            }
        }
        return main_v;
    }
};
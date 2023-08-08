class Solution {
public:
    vector<string> stringMatching(vector<string>& words) {
        vector<string>v;
        for(int i=0;i<words.size();i++){
            string check=words[i];
            for(int j=0;j<words.size();j++){
                int flag=0;
                if(i!=j && check.length()<=words[i].length()){
                    for(int k=0;k<words[j].length();k++){
                        if(check[0]==words[j][k]){
                            if(check==words[j].substr(k,check.length())){
                                v.push_back(check);
                                flag=1;
                                break;
                            }
                        }
                    }
                    if(flag==1){
                        break;
                    }
                }
            }
        }
        return v;
    }
};
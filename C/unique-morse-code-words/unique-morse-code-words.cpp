class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        vector<string>v={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        vector<string>unique;
        for(int i=0;i<words.size();i++){
            string temp="";
            for(int j=0;words[i][j]!='\0';j++)
                temp+=v[words[i][j]-97];
            unique.push_back(temp);
        }
        int sum=unique.size();
        for(int i=0;i<unique.size();i++)
            for(int j=i+1;j<unique.size();j++)
                if(unique[i]==unique[j]){
                    sum--;
                    break;
                }
        return sum;
    }
};
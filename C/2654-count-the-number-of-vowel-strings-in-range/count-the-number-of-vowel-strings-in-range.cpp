class Solution {
public:
    int vowelStrings(vector<string>& words, int left, int right) {
        int count=0;
        string temp="";
        for(int i=0;i<words.size();i++){
            if(i>=left &&i<=right){
                temp=words[i];
                if(temp[0]=='a'||temp[0]=='e'||temp[0]=='i'||
                temp[0]=='o'||temp[0]=='u'){
                    int len=temp.length()-1;
                    if(temp[len]=='a'||temp[len]=='e'||temp[len]=='i'||
                temp[len]=='o'||temp[len]=='u'){
                    count++;
                }
                }
            }
        }
        return count;
    }
};
class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        int start,flag,end,i;
        for( i=0;i<words.size();i++){
        //cout<<words[i]<<" "<<words[i].size();
         end=words[i].size()-1;
         start=0;
         flag=0;
            while(start<end){
                if(words[i][start]!=words[i][end]){
                    flag=1;
                    break;
                }
                else{
                    start++;
                    end--;
                }
            }
            if(flag==0){
                return words[i];
            }
        }
    return "";
    }
};
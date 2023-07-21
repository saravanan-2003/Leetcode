class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        for(int i=0;i<words.size();i++){
        //cout<<words[i]<<" "<<words[i].size();
        int end=words[i].size()-1;
        int start=0;
        int flag=0;
        while(start<end){
            if(words[i][start]!=words[i][end]){
                cout<<"not equal\n";
                flag=1;
                break;
            }
            else{
                start++;
                end--;
            }
        }
        if(flag==0){
            // cout<<"palindrome string\n";
            return words[i];
            //break;
        }
    }
    return "";
    }
};
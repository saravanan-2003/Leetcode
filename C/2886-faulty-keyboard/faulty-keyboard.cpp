class Solution {
public:
    string finalString(string s) {
        string temp_left,temp_right,temp;
        for(int i=0;i<s.length();i++){
            if(s[i]=='i'){
                temp_left=s.substr(0,i);
                temp_right=s.substr(i+1,s.length()-temp_left.length()-1);
                reverse(temp_left.begin(),temp_left.end());
                temp=temp_left+temp_right;
                s=temp;
                i--;
            }
        }
        return s;
    }
};
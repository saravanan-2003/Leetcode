class Solution {
public:
    string removeStars(string s) {
        stack<char>str;
        for(int i=0;i<s.size();i++){
            if(s[i]=='*'){
                str.pop();
            }
            else
            str.push(s[i]);
        }
        string str_new="";
        while(!str.empty()){
            // cout<<str.top()<<" ";
            str_new+=str.top();
            str.pop();
        }
        reverse(str_new.begin(),str_new.end());
        return str_new;
    }
};
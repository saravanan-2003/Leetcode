class Solution {
public:
    string removeDuplicates(string s) {
        stack<char>str;
        for(int i=0;i<s.size();i++){
            if(!str.empty()&&str.top()==s[i]){
                str.pop();
            }
            else{
                str.push(s[i]);
            }
        }
        s="";
        while(!str.empty()){
            s+=str.top();
            str.pop();
        }
        reverse(s.begin(),s.end());
        return s;
    }
};
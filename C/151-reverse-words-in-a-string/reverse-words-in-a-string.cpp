class Solution {
public:
    string reverseWords(string s) {
        vector<string>v;
        int i=0;
        while(i<s.size()){
            int count=0;
            while(i<s.size() && s[i]!=' '){
                i++;
                count++;
            }
            if(count==0){
                i++;
                continue;
            }
            v.push_back(s.substr(i-count,count));
            i++;
        }
        string str="";
        reverse(v.begin(),v.end());
        for(int i=0;i<v.size()-1;i++){
            str=str+v[i]+' ';
        }
        str=str+v[v.size()-1];
        return str;
    }
};
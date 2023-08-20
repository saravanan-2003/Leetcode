class Solution {
public:
    string removeOccurrences(string s, string part) {
        string temp_left,temp_right,temp;
        for(int i=0;i<s.length();i++){
            cout<<s.substr(i,part.length())<<"\t"<<i<<"\n";
            if(s.substr(i,part.length())==part){
                temp_left=s.substr(0,i);
                temp_right=s.substr(i+part.length(),s.length());
                temp=temp_left+temp_right;
                s=temp;
                i=-1;
            }
        }
        return s;
    }
};
class Solution {
public:
    char findTheDifference(string s, string t) {
        map<char,int>m;
        map<char,int>m1;
        char a='0';
        for(int i=0;i<s.length();i++){
            m[s[i]]++;
        }
        for(int j=0;j<t.length();j++){
            m1[t[j]]++;
        }
        for(auto i:m1){
            for(auto j:m){
                if(i.first==j.first && i.second!=j.second){
                    a=i.first;
                }
            }
        }
        if(a!='0')
        return a;

        for(int i=0;i<t.length();i++){
        int flag=0;
        for(int j=0;j<s.length();j++){
            if(t[i]==s[j]){
                flag=1;
            }
        }
        if(flag==0){
            a=t[i];
            break;
        }
    }
    return a;
    }
};
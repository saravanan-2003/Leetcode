class Solution {
public:
    string convert(string s, int numRows) {
        vector<string>v(min(numRows, int(s.length())));
        int i=0,l=0,z;
        while(i<s.length()){
            for(int j=0;j<numRows && i<s.length();j++,l++){
                v[l]+=s[i++];
            }
            z=numRows-2;
            if(z>=1){
                l-=2;
                for(int j=0;j<z && i<s.length();j++,l--){
                    v[l]+=s[i++];
                }
            }
            else{
                l=0;
            }        
        }
        string result;
        for (const string& row : v) {
            result += row;
        }
        return result;
    }
};
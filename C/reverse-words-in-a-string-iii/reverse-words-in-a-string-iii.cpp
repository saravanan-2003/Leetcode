class Solution {
public:
    string reverseWords(string s) {
        int size_s=s.length();
        string reverse_s="";
        for(int i=0;i<size_s;i++){
            if(s[i]==' '){
                int j=i-1;
                while(j!=-1 && s[j]!=' '){
                    reverse_s+=s[j];
                    j--;
                }
                reverse_s+=" ";
            }
            if(i==size_s-1){
                int j=i;
                while(j!=-1 && s[j]!=' '){
                    reverse_s+=s[j];
                    j--;
                }
            }

        }
        return reverse_s;
    }
};
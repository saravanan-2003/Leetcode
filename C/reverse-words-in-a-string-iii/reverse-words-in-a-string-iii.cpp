class Solution {
public:
    string reverseWords(string s) {
        int size_s=s.length();
        string reverse_s="";
        int i=0;
        while(i!=size_s){
            if(s[i]==' '){
                int j=i-1;
                while(j!=-1 && s[j]!=' '){
                    reverse_s+=s[j];
                    j--;
                }
                reverse_s+=" ";
            }
            else if(i==size_s-1){
                int j=i;
                while(j!=-1 && s[j]!=' '){
                    reverse_s+=s[j];
                    j--;
                }
            }
        i+=1;
        }
        return reverse_s;
    }
};
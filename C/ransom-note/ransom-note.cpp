class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int freq_a[26];
        int freq_b[26];
        for(int i=0;i<26;i++){
            freq_a[i]=0;
            freq_b[i]=0;
        }
        for(int i=0;i<ransomNote.length();i++){
            freq_a[ransomNote[i]-'a']++;
        }
        for(int i=0;i<magazine.length();i++){
            freq_b[magazine[i]-'a']++;
        }
        for(int i=0;i<26;i++){
            if(freq_b[i]==0 && freq_a[i]!=0){
                 cout<<"hii";
                return 0;
               
            }
            else if(freq_a[i]>freq_b[i])
            {
                cout<<"hello";
                return 0;
            }
        }
        return 1;
    }
};
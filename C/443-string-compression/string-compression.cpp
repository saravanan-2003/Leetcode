class Solution {
public:
    void seperate(int change,vector<int>& v,vector<char>&c){
        while(change){
            v.push_back(change%10);
            change=change/10;
        }
        reverse(v.begin(),v.end());
        for(int i=0;i<v.size();i++){
                char std=v[i]+'0';
                c.push_back(std);
            }
    }
    int compress(vector<char>& chars) {
        vector<char>c;
        int count=1,i;
        for(i=0;i<chars.size()-1;i++){
            if(chars[i]==chars[i+1]){
                count++;
            }
            else{
                c.push_back(chars[i]);
                if(count!=1){
                    if(count<=9){
                        char std=count+'0';
                        c.push_back(std);
                    }
                    else{
                        int change=count;
                        vector<int>v;
                        seperate(change,v,c);
                    }
                }
                count=1;
            }
        }
        int change=count;
        c.push_back(chars[i]);
        if(count!=1){
            vector<int>v;
            seperate(change,v,c);
        }
                    
        chars.clear();
        for(int i=0;i<c.size();i++){
            chars.push_back(c[i]);
        }
        return chars.size();
    }
};
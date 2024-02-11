class Solution {
public:
    int compress(vector<char>& chars) {
        // sort(chars.begin(),chars.end())
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
                }
                count=1;
            }
        }
        int change=count;
        c.push_back(chars[i]);
        if(count!=1){
            vector<int>v;
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
                    
        chars.clear();
        for(int i=0;i<c.size();i++){
            chars.push_back(c[i]);
        }
        return chars.size();
    }
};
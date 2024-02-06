class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<string>str(strs.begin(),strs.end());
        vector<vector<string>>s;
        for(int i=0;i<strs.size();i++){
            sort(strs[i].begin(),strs[i].end());
        }


        int i, j;
    bool swapped;
    for (i = 0; i < strs.size() - 1; i++) {
        swapped = false;
        for (j = 0; j < strs.size() - i - 1; j++) {
            if (strs[j] > strs[j + 1]) {
                swap(strs[j], strs[j + 1]);
                swap(str[j], str[j+1]);
                swapped = true;
            }
        }
 
        // If no two elements were swapped
        // by inner loop, then break
        if (swapped == false)
            break;
    }
        
        // for(int i = 0; i < strs.size(); i++) {
        //     for(int j = 0; j < strs.size() - 1; j++) {
        //         if(strs[j] > strs[j + 1]) {
        //             swap(strs[j], strs[j + 1]); // Swap strings in strs vector
        //             swap(str[j], str[j + 1]);   // Swap strings in str vector
        //         }
        //     }
        // }
        for(int i=0;i<strs.size();i++){
            int count=0;
            for(int j=i;j<strs.size();j++){
                if(strs[i]==strs[j]){
                    count++;
                }
            }
            
            vector<string>v;
            for(int k=i;k<i+count&&k<strs.size();k++){
                v.push_back(str[k]);
            }
            if(count!=0){
                i+=count-1;
            }
            s.push_back(v);
        }

        return s;
    }
};
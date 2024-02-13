class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        map<int,int>m;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        vector<vector<int>>v1;
        for(auto i:m){
            v1.push_back({i.second,i.first});
        }
        int i, j;
    bool swapped;
    for (i = 0; i < v1.size() - 1; i++) {
        swapped = false;
        for (j = 0; j < v1.size() - i - 1; j++) {
            if(v1[j][0]==v1[j+1][0]){
                if(v1[j][1]<v1[j+1][1]){
                    //swap(v1[j][0], v1[j + 1][0]);
                swap(v1[j][1], v1[j + 1][1]);
                swapped = true;
                }
            }
            else if (v1[j][0] > v1[j + 1][0]) {
                swap(v1[j][0], v1[j + 1][0]);
                swap(v1[j][1], v1[j + 1][1]);
                swapped = true;
            }
        }
        if (swapped == false)
            break;
    }
        vector<int>v;
        for(int i=0;i<v1.size();i++){
            for(int j=0;j<v1[i][0];j++){
                v.push_back(v1[i][1]);
            }
        }
        return v;

    }
};
class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        int i=0;
        //cout<<trust.size();
        int arr[100000];
        for(int i=0;i<100000;i++){
            arr[i]=0;
        }
        if(trust.size()==0&& n==1){

            return 1;
        }
        if(trust.size()==0&& n!=0){

            return -1;
        }
        vector<int>v;
        for(int i=0;i<trust.size();i++){
            if(arr[i]==1){
                continue;
            }
            int count=0;
            for(int j=0;j<trust.size();j++){
                if(trust[j][0]==trust[i][1]){
                    // flag=j;
                    arr[j]=1;
                    count++;
                }
            }
            if(count==0){
                v.push_back(trust[i][1]);
            }
        }
        for(auto i:v){
            cout<<i<<" ";
        }
        set<int>s1(v.begin(),v.end());
        vector<int>v2(s1.begin(),s1.end());
        if(v2.size()==1){
            return v2[0];
        }
        return -1;
    }
};
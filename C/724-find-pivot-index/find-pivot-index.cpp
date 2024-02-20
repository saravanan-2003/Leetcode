class Solution {
public:
    int pivotIndex(vector<int>& a) {
        int total=0,right=0;
        for(auto i:a)
            total+=i;
        for(int i=0;i<a.size();i++)
        {
            total-=a[i];
            if(total==right)
                return i;
            right+=a[i];
        }
        return -1;
    }
};
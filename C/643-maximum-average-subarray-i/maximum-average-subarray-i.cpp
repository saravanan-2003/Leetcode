class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double avg=INT_MIN,div,sum=0;
        for(int i=0;i<k;i++){
            sum+=nums[i];
        }
        avg=sum/k;
        for(int i=k;i<nums.size();i++){
            sum+=nums[i];
            sum-=nums[i-k];
            div=sum/k;
            if(div>avg){
                avg=div;
            }
        }
        return avg;
    }
};
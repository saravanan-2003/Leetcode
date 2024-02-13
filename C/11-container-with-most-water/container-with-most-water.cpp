class Solution {
public:
    int maxArea(vector<int>& height) {
        int i=0,j=height.size()-1;
        int water=0;
        while(i<j){
            // length=j-i;
            water=max(water,(j-i)*min(height[i],height[j]));
            if(height[i]<height[j]){
                i++;
            }
            else{
                j--;
            }
            // heighttotal=min*length;
            // if(heighttotal>total){
            //     total=heighttotal;
            // }
        }
        return water;
    }
};
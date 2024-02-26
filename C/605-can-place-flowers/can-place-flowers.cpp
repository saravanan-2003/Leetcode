class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {

        if(flowerbed.size()==1){
        if(((flowerbed[0]==0)&&(n==1))||((flowerbed[0]==1)&&(n==0)))
        return 1;
        else if((flowerbed[0]==0)&&(n==0))
        return 1;
        else{
            return 0;
        }
    }
    
    if(flowerbed.size()==2&& n>=2){
        return 0;
    }
        for(int i=0;i<flowerbed.size()-1;i++){
            if(i==0){
                if(flowerbed[1]==0 && flowerbed[0]==0){
                    flowerbed[0]=1;
                    n--;
                }
            }
            else if((flowerbed[i]==0) && (flowerbed[i-1]==0 && flowerbed[i+1]==0)){
                n--;
                flowerbed[i]=1;
                i++;
            }
            else if(flowerbed[i]==1){
                i++;
            }
        }
        int k=flowerbed.size();
        if(flowerbed[k-2]==0 && flowerbed[k-1]==0){
            n--;
        }
        
        cout<<n;
        if(n<=0){
            return 1;
        }
        return 0;
    }
};
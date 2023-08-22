class Solution {
public:
    string convertToTitle(int n) {
        string str1="";
        string str,temp;
        int remainder=0,i=0,index=0;
        while(n){
      remainder=n%26;
      if(remainder == 0){
          str[index++]='Z';
          n=(n/26)-1;
      }
      else{
          str[index++]='A'+remainder - 1;
          n=n/26;
      }
        }
        
        for(i=index-1;i>=0;i--)
        {
            str1=str1+str[i];
        }
        return str1;
    }
};
class Solution {
public:
    string addStrings(string num1, string num2) {
        int extra=0,add_num1,add_num2,tadd,tadd_last;
        int i=num1.size()-1,j=num2.size()-1;
        string temp="";
        while(i>=0|| j>=0 ||extra!=0){
            add_num1=0,add_num2=0;
            if(i>=0){
                add_num1=num1[i]-'0';
                i--;
            }
            if(j>=0){
                add_num2=num2[j]-'0';
                j--;
            }
            tadd=add_num1+add_num2+extra;
            tadd_last=tadd%10;
            extra=tadd/10;
            //cout<<tadd_last+'0'<<endl;
            temp+=to_string(tadd_last);
        }
        reverse(temp.begin(),temp.end());
        return temp;
    }
};
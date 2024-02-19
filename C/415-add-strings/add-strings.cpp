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
            //temp+=to_string(tadd_last);
            switch(tadd_last){
                case 0:
                    temp+='0';
                    break;
                case 1:
                    temp+='1';
                    break;
                case 2:
                    temp+='2';
                    break;
                case 3:
                    temp+='3';
                    break;
                case 4:
                    temp+='4';
                    break;
                case 5:
                    temp+='5';
                    break;
                case 6:
                    temp+='6';
                    break;
                case 7:
                    temp+='7';
                    break;
                case 8:
                    temp+='8';
                    break;
                case 9:
                    temp+='9';
                    break;
            }
        }
        reverse(temp.begin(),temp.end());
        return temp;
    }
};
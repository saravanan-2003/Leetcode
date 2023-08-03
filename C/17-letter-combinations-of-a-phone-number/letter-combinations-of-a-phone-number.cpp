class Solution {
public:
    vector<string> letterCombinations(string digits) {
        vector<string>str;
        //empty string
        if(digits.size()==0){
            return str;
        }
        string two="abc",three="def",four="ghi",five="jkl",six="mno",seven="pqrs",
        eight="tuv",nine="wxyz";
        
        vector<string>v;
            for(int i=0;i<digits.size();i++){
                switch(digits[i]){
                    case '2':
                    {
                        v.push_back(two);
                        break;
                    }
                    case '3':
                    {
                        v.push_back(three);
                        break;
                    }
                    case '4':
                    {
                        v.push_back(four);
                        break;
                    }
                    case '5':
                    {
                        v.push_back(five);
                        break;
                    }
                    case '6':
                    {
                        v.push_back(six);
                        break;
                    }
                    case '7':
                    {
                        v.push_back(seven);
                        break;
                    }
                    case '8':
                    {
                        v.push_back(eight);
                        break;
                    }
                    case '9':
                    {
                        v.push_back(nine);
                        break;
                    }
                }
            }
        //if length = 1
        if(digits.size()==1){
            string dummy1=v[0],temp="";
            for(int i=0;dummy1[i]!='\0';i++){
                temp=temp+dummy1[i];
                str.push_back(temp);
                temp="";
            }
            return str;
        }
        if(digits.size()==2){
            string dummy1=v[0];
            string dummy2=v[1];
            string dummy="",temp="";
            for(int i=0;dummy1[i]!='\0';i++){
                temp=dummy1[i];
                for(int j=0;dummy2[j]!='\0';j++){
                    dummy=temp+dummy2[j];
                    str.push_back(dummy);
                    dummy="";
                }
            }
            return str;
        }
        if(digits.size()==3){
            string dummy1=v[0];
            string dummy2=v[1];
            string dummy3=v[2];
            string dummy="",temp="";
            for(int i=0;dummy1[i]!='\0';i++){
                temp=dummy1[i];
                for(int j=0;dummy2[j]!='\0';j++){
                    dummy=temp+dummy2[j];
                    string temp1="";
                    for(int k=0;dummy3[k]!='\0';k++){
                        temp1=dummy+dummy3[k];
                        str.push_back(temp1);
                        temp1="";
                    }
                }
            }
            return str;
        }
        else{
            string dummy1=v[0];
            string dummy2=v[1];
            string dummy3=v[2];
            string dummy4=v[3];
            string dummy="",temp="",temp1="",temp2="";
            for(int i=0;dummy1[i]!='\0';i++){
                temp=dummy1[i];
                for(int j=0;dummy2[j]!='\0';j++){
                    dummy=temp+dummy2[j];
                    for(int k=0;dummy3[k]!='\0';k++){
                        temp1=dummy+dummy3[k];
                        for(int c=0;dummy4[c]!='\0';c++){
                            temp2=temp1+dummy4[c];
                            str.push_back(temp2);
                            temp2="";
                        }
                        
                    }
                }
            }
        }
        return str;
    }
};
class Solution {
    string checkfirst(string num1){
        string fnumf="";
        for(int i=0;i<num1.length();i++){
            if(num1[i]!='+'){
                fnumf+=num1[i];
            }
            else{
                break;
            }
        }
        return fnumf;
    }
    string checklast(string num1,int plus){
        string fnumf="";
        for(int i=plus+1;i<num1.length();i++){
            if(num1[i]!='i'){
                fnumf+=num1[i];
            }
            else{
                break;
            }
        }
        return fnumf;
    }
    int convert(string num1){
        int mul=1,rem=0,dumy=0;
        if(num1[0]=='-'){
            mul=-1;
            for(int i=1;i<num1.length();i++){
                rem=num1[i]-'0';
                dumy=dumy*10+rem;
            }
        }
        else{
            mul=1;
            for(int i=0;i<num1.length();i++){
                rem=num1[i]-'0';
                dumy=dumy*10+rem;
            }
        }
        dumy=mul*dumy;;
        return dumy;
    }
    string convertstr(int newstr){
        string str="";
        int rem;
        if(newstr==0){
            return "0";
        }
        if(newstr<0){
            newstr=newstr*-1;
        }
        while(newstr){
            rem=newstr%10;
            newstr/=10;
            switch(rem){
                case 0:
                    str+='0';
                    break;
                case 1:
                    str+='1';
                    break;
                case 2:
                    str+='2';
                    break;
                case 3:
                    str+='3';
                    break;
                case 4:
                    str+='4';
                    break;
                case 5:
                    str+='5';
                    break;
                case 6:
                    str+='6';
                    break;
                case 7:
                    str+='7';
                    break;
                case 8:
                    str+='8';
                    break;
                case 9:
                    str+='9';
                    break;
            }
        }
        return str;
    }
    string rotate(string num){
        string rot="";
        for(int i=num.length()-1;i>=0;i--){
            rot+=num[i];
        }
        return rot;
    }
public:
    string complexNumberMultiply(string num1, string num2) {
        string fnumf="",fnuml="",snumf="",snuml="";
        fnumf=checkfirst(num1);
        snumf=checkfirst(num2);
        int plus=fnumf.length();
        fnuml=checklast(num1,plus);
         plus=snumf.length();
        snuml=checklast(num2,plus);
        int intfnumf=convert(fnumf);
        int intsnumf=convert(snumf);
        int intfnuml=convert(fnuml);
        int intsnuml=convert(snuml);
        
        
        int first=intfnumf*intsnumf;        ;
        int second=(intfnuml*intsnuml)*(-1);
        int third=intfnumf*intsnuml;
        int fourth=intsnumf*intfnuml;
        first=first+second;
        third=third+fourth;
        string fir=convertstr(first);
        string sec=convertstr(third);
        fir=rotate(fir);
        sec=rotate(sec);
        if(first<0){
            fir='-'+fir;
        }
        if(third<0){
            sec='-'+sec;
        }
        fir=fir+'+'+sec+'i';
        cout<<intfnumf<<"\t"<<intfnuml<<"\t"<<intsnumf<<"\t"<<intsnuml<<"\n";
        cout<<intfnumf<<"\t"<<intfnuml<<"\t"<<intsnumf<<"\t"<<intsnuml;
        return fir;
    }
};
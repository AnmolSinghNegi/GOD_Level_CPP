lass Solution {
public:
    string addStrings(string num1, string num2) {
        int l1=num1.length()-1,l2=num2.length()-1;
        int carry=0;
        string str="";
        while(l1>=0||l2>=0||carry>0){
            int bitA=l1>=0?num1[l1]-'0':0;
            int bitB=l2>=0?num2[l2]-'0':0;
            int sum=bitA+bitB+carry;
            str=to_string(sum%10)+str;
            carry=sum/10;
            l1--;
            l2--;
        }
        return str;
    }
};
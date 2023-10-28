class Solution{
    public:
       string addBinary(string a, string b) {
        int carry=0;
        string str="";
        int l1=a.length()-1,l2=b.length()-1;
        while(l1>=0||l2>=0||carry>0){
            int bitA=l1>=0?a[l1]-'0':0;
            int bitB=l2>=0?b[l2]-'0':0;
            int sum=bitA+bitB+carry;
            str=to_string(sum%2)+str;
            carry = sum/2;
            l1--;
            l2--;
        }
        return str;
       }
};

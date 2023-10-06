class Solution {
public:
    int addDigits(int num) {
        while(num>9){
            int n=num,ans=0;
            while(n!=0){
                ans+=n%10;
                n/=10;
            }
            num=ans;
        }
        return num;
    }
};
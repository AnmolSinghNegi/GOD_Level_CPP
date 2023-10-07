class Solution {
public:
    void reverseString(vector<char>& s) {
        //Without reverse
        int i=0;
        int j=s.size()-1;
        while(i<=j){
            char temp=s[i];
            s[i]=s[j];
            s[j]=temp;
            i++;
            j--;
        }
        //Without reverse end;
        //Using reverse function
        reverse(s.begin(),s.end());//stl
    }
};
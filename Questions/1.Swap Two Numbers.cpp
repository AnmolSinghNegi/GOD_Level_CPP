class Solution {
    public:
    pair<int, int> swapNumbers(int a, int b) {
        a=a^b;
        b=a^b;
        a=a^b;
        return {a,b};
    }
};
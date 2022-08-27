class Solution {
public:
    int xorOperation(int n, int start) {
        int xors = 0;
        for(int i=0;i<n;++i){
            xors = xors^(start+2*i);
        }
        return xors;
    }
};
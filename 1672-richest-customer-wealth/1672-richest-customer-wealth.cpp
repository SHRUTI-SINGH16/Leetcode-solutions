class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int largest = 0;
        int n = accounts.size();
        int n1 = accounts[0].size();
        int sum = 0;
        for(int i=0;i<n;++i){
            for(int j=0;j<n1;++j){
                sum = sum + accounts[i][j];
            }
            largest = max(largest,sum);
            sum = 0;
        }
        return largest;
    }
};
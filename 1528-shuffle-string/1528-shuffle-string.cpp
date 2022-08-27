class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        int n = indices.size();
        string arr[n];
        for(int i=0;i<n;++i){
            arr[indices[i]] = s[i];
        }
        string str = "";
        for(int i=0;i<n;++i){
            str = str + arr[i];
        }
        return str;
    }
};
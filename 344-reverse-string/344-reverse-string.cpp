class Solution {
public:
    void reverseString(vector<char>& s) {
        int n = s.size();
        int low = 0;
        int high = n-1;
        while(low<high){
            int temp = s[low];
            s[low] = s[high];
            s[high] = temp;
            low++;
            high--;
        }
        cout<<"[";
        for(int i=0;i<n-1;++i){
            cout<<'"'<<s[i]<<'"'<<",";
        }
        cout<<'"'<<s[n-1]<<'"'<<"]";
    }
};
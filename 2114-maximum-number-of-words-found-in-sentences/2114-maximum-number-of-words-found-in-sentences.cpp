class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int largest = 0;
        int count = 0;
        for(int i=0;i<sentences.size();++i){
            for(int j=0;j<sentences[i].size();++j){
                if(sentences[i][j]==' '){
                    count++;
                }
            }
            largest = max(1+count,largest);
            count = 0;
        }
        return largest;
    }
};
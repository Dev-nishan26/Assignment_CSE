class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        vector<vector<int>> temp(m);
        if(m*n!=original.size()) return {};
        int j=0;

        for(int i=0;i<m;i++){

             while(j<n*(i+1)){
                temp[i].push_back(original[j]);
                j++;
             }
        }
        return temp;
    }
};

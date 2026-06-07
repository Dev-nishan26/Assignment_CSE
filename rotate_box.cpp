class Solution {
public:
    vector<vector<char>> rotateTheBox(vector<vector<char>>& boxGrid) {
        int m=boxGrid.size();
        int n=boxGrid[0].size();
        for(int i=0;i<m;i++){
           int p=-1;
            for(int j=0;j<n;j++)
            {
               
               if(boxGrid[i][j]=='#'&&p==-1){
                p=j;
               }
               if(boxGrid[i][j]=='.'&&p!=-1) {
                swap(boxGrid[i][j],boxGrid[i][p]);
                p++;
               }
               if(boxGrid[i][j]=='*'&&p!=-1){
                p=-1;
               }
            }
        }
        vector<vector<char>> a(n,vector<char>(m));

        int p=0;
        for(int i=m-1;i>=0;i--,p++){
            for(int j=0;j<n;j++){
                a[j][p]=boxGrid[i][j];
            }
        }
        return a;
    }
};

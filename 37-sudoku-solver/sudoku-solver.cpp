class Solution {
public:
    bool issafe(vector<vector<char>>&b,int& x,int& y,char& val){
        for (int row = 0; row < 9; row++) {
        if (b[row][y] == val || b[x][row] == val) {
            return false;
        }
        }
        int startRow = x - x % 3;
        int startCol = y - y % 3;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (b[i + startRow][j + startCol] == val) {
                return false;
            }
        }
    }
    return true;
    }
    bool solver(vector<vector<char>>&v){
        for(int i=0;i<v.size();i++){
            for(int j=0;j<v.size();j++){
                if(v[i][j]=='.'){
                    for(char val='1';val<='9';val++){
                        if(issafe(v,i,j,val)){
                            v[i][j]=val;
                            if(solver(v)){
                                return true;
                            }
                            v[i][j]='.';
                        }    
                    }
                    return false;
                }
            }
        }
        return true;   
    }
    void solveSudoku(vector<vector<char>>& board) {
        solver(board);
    }
};
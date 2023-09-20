class Solution {
public:
    bool issafe(vector<string>&board,int &row,int &col){
    for (int i = 0; i < row; i++) {
        if (board[i][col] == 'Q') {
            return false;
        }
    }

    
    for (int i = row, j = col; i >= 0 && j >= 0; i--, j--) {
        if (board[i][j] == 'Q') {
            return false;
        }
    }

    
    for (int i = row, j = col; i >= 0 && j < board.size(); i--, j++) {
        if (board[i][j] == 'Q') {
            return false;
        }
    }
    return true;
}

void helper(vector<string>&v,int i,int j,vector<vector<string>>&ans){
    if(i==v.size()){
        ans.push_back(v);
        return;
    }
    for(int j=0;j<v.size();j++){
        if(issafe(v,i,j)){
            v[i][j]='Q';
            helper(v,i+1,0,ans);
            v[i][j]='.';
        }
    }
    
    
}

vector<vector<string>> solveNQueens(int n) {
    vector<string>v(n,(string(n,'.')));
    int j=0,i=0;
    vector<vector<string>>ans;
    helper(v,i,j,ans);
    cout<<ans.size();
    return ans;   
    
}
};
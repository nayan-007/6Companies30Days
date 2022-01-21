#include<bits/stdc++.h>
using namespace std;

class Solution {
private:

    bool dfs(vector<vector<char>>& board, string word,int i,int j, int ind){
        if(ind==word.size())
            return true;
            
        if(i<0 || i>=board.size() || j<0 || j>=board[i].size() || board[i][j]!=word[ind])
            return false;
            
        board[i][j]='0';
        
        bool flag= dfs(board,word,i+1,j,ind+1) || dfs(board,word,i,j+1,ind+1) || dfs(board,word,i-1,j,ind+1) || dfs(board,word,i,j-1,ind+1);
                    
        board[i][j]= word[ind];
        
        return flag;
    }
public:
    bool isWordExist(vector<vector<char>>& board, string word) {
        if(word=="") return false;
        
        for(int i=0;i<board.size();i++){
            for(int j=0;j<board[i].size();j++){
                if(board[i][j]==word[0] && dfs(board,word,i,j,0))
                    return true;
            }
        }
        return false;
    }
};


int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<char>>board(n, vector<char>(m, '*'));
		for(int i = 0; i < n; i++)
			for(int j = 0; j < m; j++)
				cin >> board[i][j];
		string word;
		cin >> word;
		Solution obj;
		bool ans = obj.isWordExist(board, word);
		if(ans)
			cout << "1\n";
		else cout << "0\n";
	}
	return 0;
}  

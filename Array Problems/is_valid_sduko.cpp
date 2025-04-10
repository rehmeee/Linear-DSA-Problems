#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<vector>
#include<unordered_map>
#include<unordered_set>
using namespace std;
bool isValidSudoku(vector<vector<char>>& board) {
        unordered_map<int, vector<char>> row;
        unordered_map<int, vector<char>> col;
        for(int i = 0 ; i<board.size(); i++){
            unordered_set<char> set;
            for(auto j = 0 ;j< board[i].size(); j++){
                if(board[i][j] == '.') continue;
                else if(set.find(board[i][j]) != set.end()) return false;
                else {
                    if(find(col[j].begin(), col[j].end(), board[i][j])!= col[j].end()) return false;

                    set.insert(board[i][j]);
                    row[i].push_back(board[i][j]);
                    col[j].push_back(board[i][j]);
                    
                }

            }
            if(set.empty()) return false;

        }

        for (int blockRow = 0; blockRow < 9; blockRow += 3) {
            for (int blockCol = 0; blockCol < 9; blockCol += 3) {
                unordered_set<char> seen;
    
                for (int i = 0; i < 3; ++i) {
                    for (int j = 0; j < 3; ++j) {
                        char current = board[blockRow + i][blockCol + j];
                        if (current != '.') {
                            if (seen.count(current)) {
                                // Duplicate found in this 3x3 block
                                return false;
                            }
                            seen.insert(current);
                        }
                    }
                }
            }
        }        



        return true;

}
int main(){
        	vector<vector<char>> vec = {{'5','3','.','.','7','.','.','.','.'}
            ,{'6','.','.','1','9','5','.','.','.'}
            ,{'.','9','8','.','.','.','.','6','.'}
            ,{'8','.','.','.','6','.','.','.','3'}
            ,{'4','.','.','8','.','3','.','.','1'}
            ,{'7','.','.','.','2','.','.','.','6'}
            ,{'.','6','.','.','.','.','2','8','.'}
            ,{'.','.','.','4','1','9','.','.','5'}
            ,{'.','.','.','.','8','.','.','7','9'}};
            cout<<isValidSudoku(vec)<<endl;
}
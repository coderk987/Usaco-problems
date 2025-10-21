#include <bits/stdc++.h>
using namespace std;

int ctr=0;

void queens(vector<string> board, int i, int j, int cur){
    if (i == 8) {
        if(cur==8) ctr++;
        return;
    }

    if (j == 8) {
        queens(board, i + 1, 0, cur);
        return;
    }

    if(i>cur){
        return;
    }
    

    if(board[i][j]=='*'){
        queens(board, i,j+1, cur);
    }else{
        queens(board,i,j+1,cur);
        vector<string> new_board=board;
        for(int row=0;row<8;row++){
            for(int col=0;col<8;col++){
                if(row==i) new_board[row][col]='*';
                else if(col==j) new_board[row][col]='*';
                else if(row+col==i+j) new_board[row][col]='*';
                else if(row-col==i-j) new_board[row][col]='*';
            }
        }
        queens(new_board, i+1,0, cur+1);
    }
    
}

int main() {
    vector<string> board(8);
    for(int i=0;i<8;i++){
        cin>>board[i];
    }
    queens(board,0,0,0);
    cout<<ctr;
}

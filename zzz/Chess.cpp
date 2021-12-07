#include <bits/stdc++.h>
#define f first
#define s second
#define vv(p) vector<vector<p>>
#define v(p) vector<p>
#define p(a, b) pair<a, b>
using namespace std;
vv(string) board(9, v(string)(9, "+"));
map<string, p(int, int)> pos;
void boardMaker();
void print();
bool pawn(string, p(int, int));
bool rook(string, p(int, int));
bool bishop(string, p(int, int));
bool knight(string, p(int, int));
bool queen(string, p(int, int));
bool king(string, p(int, int));
int main()
{
  boardMaker();
  return 0;
}
bool pawn(string c, p(int, int) x)
{
}
bool rook(string c, p(int, int) x)
{
}
bool knight(string c, p(int, int) x)
{
}
bool bishop(string c, p(int, int) x)
{
}
bool king(string c, p(int, int) x)
{
}
bool queen(string c, p(int, int) x)
{
}
void print()
{
  cout << setw(5);
  for (int i = 0; i < 8; i++)
  {
    for (int j = 0; j < 8; j++)
    {
      cout << board[i][j] << setw(5);
    }
    cout << endl;
  }
}
void boardMaker()
{
  for (int i = 0; i < 8; i++)
  {
    board[1][i] = "BP" + to_string(i + 1);
    board[6][i] = "WP" + to_string(i + 1);
  }
  board[0][0] = "BR1", board[0][7] = "BR2";
  board[7][0] = "WR1", board[7][7] = "WR2";
  board[0][1] = "BK1", board[0][6] = "BK2";
  board[7][1] = "WK1", board[7][6] = "WK2";
  board[0][2] = "BB1", board[0][5] = "BB2";
  board[7][2] = "WB1", board[7][5] = "WB2";
  board[0][3] = "BKI", board[0][4] = "BQ";
  board[7][3] = "WQ", board[7][4] = "WKI";
  print();
}
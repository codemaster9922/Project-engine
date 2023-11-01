#include <iostream>

using namespace std;

int main()
{ constexpr char wKnight ='N';
  constexpr char bKngiht ='n';
  constexpr char wBishop ='B';
  constexpr char bBishop ='b';
  constexpr char wRook = 'R';
  constexpr char bRook = 'r';
  constexpr char wQueen= 'Q';
  constexpr char bQueen= 'q';
  constexpr char wKing= 'K';
  constexpr char bKing= 'k';
  constexpr char wPawn= 'P';
  constexpr char bPawn= 'p';
  constexpr char emptySquares='X';

	
	char chessboard[63];
	chessboard[0] = wRook;
	chessboard[7] = wRook;
	chessboard[1] = wKnight;
	chessboard[6] = wKnight;
	chessboard[2] = wBishop;
	chessboard[5] = wBishop;
	chessboard[3] = wQueen;
	chessboard[4] = wKing;
	for (int i = 8; i < 16; i++)
	{
		chessboard[i] = wPawn;
	}
	for (int j = 16; j < 48; j++)
	{
		chessboard[j] = emptySquares;
	}
	for (int k = 48; k < 56; k++)
	{
		chessboard[k] = bPawn;
	}
	chessboard[56] = bRook;
	chessboard[57] = bKngiht;
	chessboard[58] = bBishop;
	chessboard[59] = bQueen;
	chessboard[60] = bKing;
	chessboard[61] = bBishop;
	chessboard[62] = bKngiht;
	chessboard[63] = bRook;

	for (int a = 56; a < 64; a++)
	{
		cout << chessboard[a] << " ";
	}
	cout << endl;
	for (int b = 48; b < 56; b++)
	{
		cout << chessboard[b] << " ";
	}
	cout << endl;
	for (int c = 40; c < 48; c++)
	{
		cout << chessboard[c] << " ";
	}
	cout << endl;
	for (int d = 32; d < 40; d++)
	{
		cout << chessboard[d] << " ";
	}
	cout << endl;
	for (int e = 24; e < 32; e++)
	{
		cout << chessboard[e] << " ";
	}
	cout << endl;
	for (int f = 16; f <24; f++)
	{
		cout << chessboard[f] << " ";
	}
	cout << endl;
	for (int g = 8; g <16; g++)
	{
		cout << chessboard[g] << " ";
	}
	cout << endl;
	for (int h = 0; h < 8; h++)
	{
		cout << chessboard[h] << " ";
	}
	cout << endl;

	
	return 0;
}

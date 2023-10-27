#include <iostream>

using namespace std;

int main()
{
	
	char chessboard[63];
	chessboard[0] = 'r';
	chessboard[7] = 'r';
	chessboard[1] = 'n';
	chessboard[6] = 'n';
	chessboard[2] = 'b';
	chessboard[5] = 'b';
	chessboard[3] = 'q';
	chessboard[4] = 'k';
	for (int i = 8; i < 16; i++)
	{
		chessboard[i] = 'p';
	}
	for (int j = 16; j < 48; j++)
	{
		chessboard[j] = 'X';
	}
	for (int k = 48; k < 56; k++)
	{
		chessboard[k] = 'P';
	}
	chessboard[56] = 'R';
	chessboard[57] = 'N';
	chessboard[58] = 'B';
	chessboard[59] = 'Q';
	chessboard[60] = 'K';
	chessboard[61] = 'B';
	chessboard[62] = 'N';
	chessboard[63] = 'R';

	for (int a = 0; a < 8; a++)
	{
		cout << chessboard[a] << " ";
	}
	cout << endl;
	for (int b = 8; b < 16; b++)
	{
		cout << chessboard[b] << " ";
	}
	cout << endl;
	for (int c = 16; c < 24; c++)
	{
		cout << chessboard[c] << " ";
	}
	cout << endl;
	for (int d = 24; d < 32; d++)
	{
		cout << chessboard[d] << " ";
	}
	cout << endl;
	for (int e = 32; e < 40; e++)
	{
		cout << chessboard[e] << " ";
	}
	cout << endl;
	for (int f = 40; f < 48; f++)
	{
		cout << chessboard[f] << " ";
	}
	cout << endl;
	for (int g = 48; g < 56; g++)
	{
		cout << chessboard[g] << " ";
	}
	cout << endl;
	for (int h = 56; h < 64; h++)
	{
		cout << chessboard[h] << " ";
	}
	cout << endl;
	return 0;
}

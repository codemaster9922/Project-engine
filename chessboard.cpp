#include <iostream>

using namespace std;

int main()
{
	
	char chessboard[63];
	chessboard[0] = 'R';
	chessboard[7] = 'R';
	chessboard[1] = 'N';
	chessboard[6] = 'N';
	chessboard[2] = 'B';
	chessboard[5] = 'B';
	chessboard[3] = 'Q';
	chessboard[4] = 'K';
	for (int i = 8; i < 16; i++)
	{
		chessboard[i] = 'P';
	}
	for (int j = 16; j < 48; j++)
	{
		chessboard[j] = 'X';
	}
	for (int k = 48; k < 56; k++)
	{
		chessboard[k] = 'p';
	}
	chessboard[56] = 'r';
	chessboard[57] = 'n';
	chessboard[58] = 'b';
	chessboard[59] = 'q';
	chessboard[60] = 'k';
	chessboard[61] = 'b';
	chessboard[62] = 'n';
	chessboard[63] = 'r';

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

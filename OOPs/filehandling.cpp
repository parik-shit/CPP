//Why we need file handling ?
// We need file handling to maintain data persistence ( i.e to increase the life of variables in a program. )
#include <fstream>
#include <iostream>
#include <conio.h>
using namespace std;
int main(){
	fstream fout;
	fout.open("studymaterial.dat");
	getch;
	fout<<"hello there!";
	getch;
	fout.close();
	getch;
	return 0;
}
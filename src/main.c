#include <locale.h>
#include "Menu.h"
#include <stdio.h>
#include <windows.h>


int main()
{
	//setlocale(LC_ALL, "");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	Start();
	return 0;
}
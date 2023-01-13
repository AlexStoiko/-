#include "Cell.h"

Cell::Cell()
{
	nolick = 1;
	krestik = 2;
	height = 200;
	lenght = 200;
}

int Cell::Get_nolick()
{
	return nolick;
}


int Cell::Get_krestic()
{
	return krestik;
}


int Cell::Get_height()
{
	return height;
}


int Cell::Get_lenght()
{
	return lenght;
}


void Cell::Set_nolick(int n)
{
	nolick = n;
}


void Cell::Set_krestic(int n)
{
	krestik = n;
}


void Cell::Set_height(int n)
{
	height = n;
}


void Cell::Set_lenght(int n)
{
	lenght = n;
}
#pragma once

using namespace System;
using namespace System::Windows::Forms;
using namespace System::IO;

ref class Cell
{
private:
	int nolick;
	int krestik;
	int height;
	int lenght;
public:
	int Get_nolick();
	int Get_krestic();
	int Get_height();
	int Get_lenght();
	void Set_nolick(int n);
	void Set_krestic(int n);
	void Set_height(int n);
	void Set_lenght(int n);

	Cell();
	~Cell() {};
};


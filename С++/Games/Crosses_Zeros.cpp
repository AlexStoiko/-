#include "Crosses_Zeros.h"

#include <iostream>
#include <stdlib.h>

#include "Field.h"
#include "Cell.h"

using namespace Games;
using namespace System;
using namespace System::Windows::Forms;
using namespace System::IO;
[STAThreadAttribute]
#define N 9

void Crosses_Zeros(array<String^>^ args) 
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Games::Crosses_Zeros game;
	Application::Run(% game);
}


int massive[3][3];
int user_marker = 1;
int comp_marker = 2;
int nolick = 1;
int krestik = 2;
int flag_of_enter = 0;



array<Button^>^ Crosses_Zeros::Get_Grid()
{
	array<Button^>^ grid = gcnew array<Button^>(9);
	grid[0] = button00;
	grid[1] = button01;
	grid[2] = button02;
	grid[3] = button10;
	grid[4] = button11;
	grid[5] = button12;
	grid[6] = button20;
	grid[7] = button21;
	grid[8] = button22;
	return grid;
}

Void Crosses_Zeros::Играть_Click(System::Object^ sender, System::EventArgs^ e) 
{
	Field^ field = gcnew Field();
	
	field->Set_grid(Get_Grid());

	int flag_of_not_finish_game = 1;

	if (Играть->Enabled || crosscheckBox->Enabled) 
	{
		flag_of_enter = 1;
		crosscheckBox->Enabled = false;
		Играть->Enabled = false;

		for (int i = 0; i < 3; i++)
			for (int j = 0; j < 3; j++)
				massive[i][j] = 0;

		for (int i = 0; i < N; i++) 
		{
			field->grid_Enabled(i, true);
			field->Set_grid_Image(i, 2);
		}

		if (crosscheckBox->Checked) 
		{
			user_marker = field->Get_krestic();
			comp_marker = field->Get_nolick();
		}
		else 
		{
			user_marker = field->Get_nolick();
			comp_marker = field->Get_krestic();
		}
	}

	switch (field->someone_win(massive, user_marker, comp_marker))
	{
	case 1: 
		MessageBox::Show("Вы проиграли");

		for (int i = 0; i < N; i++)
		{
			field->grid_Enabled(i, false);
		}
		crosscheckBox->Enabled = true;
		Играть->Enabled = true;
		flag_of_not_finish_game = 0;
		break;
	case 2:	
		MessageBox::Show("Вы победили");

		for (int i = 0; i < N; i++)
		{
			field->grid_Enabled(i, false);
		}
		crosscheckBox->Enabled = true;
		Играть->Enabled = true;
		flag_of_not_finish_game = 0;
		break;
	case 3:	
		MessageBox::Show("Ничья");

		for (int i = 0; i < N; i++)
		{
			field->grid_Enabled(i, false);
		}
		crosscheckBox->Enabled = true;
		Играть->Enabled = true;
		flag_of_not_finish_game = 0;
		break;
	}


	if (flag_of_not_finish_game && !(crosscheckBox->Checked && flag_of_enter)) 
	{
		field->tap_button(massive, comp_marker, comp_marker, user_marker);

		switch (field->someone_win(massive, user_marker, comp_marker))
		{
		case 1: 
			MessageBox::Show("Вы проиграли");

			for (int i = 0; i < N; i++)
			{
				field->grid_Enabled(i, false);
			}
			crosscheckBox->Enabled = true;
			Играть->Enabled = true;
			flag_of_not_finish_game = 0;
			break;
		case 2:	
			MessageBox::Show("Вы победили");

			for (int i = 0; i < N; i++)
			{
				field->grid_Enabled(i, false);
			}
			crosscheckBox->Enabled = true;
			Играть->Enabled = true;
			flag_of_not_finish_game = 0;
			break;
		case 3:	
			MessageBox::Show("Ничья");

			for (int i = 0; i < N; i++)
			{
				field->grid_Enabled(i, false);
			}
			crosscheckBox->Enabled = true;
			Играть->Enabled = true;
			flag_of_not_finish_game = 0;
			break;
		}
	}
	flag_of_enter = 0;
};


Void Crosses_Zeros::button00_Click(System::Object^ sender, System::EventArgs^ e) 
{
	ImageList^ background = gcnew ImageList;
	background->ImageSize = System::Drawing::Size(200, 200);
	background->Images->Add(Image::FromFile("noliki.jpg")); // 1
	background->Images->Add(Image::FromFile("krestiki.jpg")); // 2
	button00->BackgroundImage = background->Images[user_marker - 1];
	button00->Enabled = false;
	massive[0][0] = user_marker;
	Играть_Click(sender, e);
};


Void Crosses_Zeros::button01_Click(System::Object^ sender, System::EventArgs^ e) 
{
	ImageList^ background = gcnew ImageList;
	background->ImageSize = System::Drawing::Size(200, 200);
	background->Images->Add(Image::FromFile("noliki.jpg")); // 1
	background->Images->Add(Image::FromFile("krestiki.jpg")); // 2
	button01->BackgroundImage = background->Images[user_marker - 1];
	button01->Enabled = false;
	massive[0][1] = user_marker;
	Играть_Click(sender, e);
};


Void Crosses_Zeros::button02_Click(System::Object^ sender, System::EventArgs^ e) 
{
	ImageList^ background = gcnew ImageList;
	background->ImageSize = System::Drawing::Size(200, 200);
	background->Images->Add(Image::FromFile("noliki.jpg")); // 1
	background->Images->Add(Image::FromFile("krestiki.jpg")); // 2
	button02->BackgroundImage = background->Images[user_marker - 1];
	button02->Enabled = false;
	massive[0][2] = user_marker;
	Играть_Click(sender, e);
};


Void Crosses_Zeros::button10_Click(System::Object^ sender, System::EventArgs^ e) 
{
	ImageList^ background = gcnew ImageList;
	background->ImageSize = System::Drawing::Size(200, 200);
	background->Images->Add(Image::FromFile("noliki.jpg")); // 1
	background->Images->Add(Image::FromFile("krestiki.jpg")); // 2
	button10->BackgroundImage = background->Images[user_marker - 1];
	button10->Enabled = false;
	massive[1][0] = user_marker;
	Играть_Click(sender, e);
};


Void Crosses_Zeros::button11_Click(System::Object^ sender, System::EventArgs^ e) 
{
	ImageList^ background = gcnew ImageList;
	background->ImageSize = System::Drawing::Size(200, 200);
	background->Images->Add(Image::FromFile("noliki.jpg")); // 1
	background->Images->Add(Image::FromFile("krestiki.jpg")); // 2
	button11->BackgroundImage = background->Images[user_marker - 1];
	button11->Enabled = false;
	massive[1][1] = user_marker;
	Играть_Click(sender, e);
};


Void Crosses_Zeros::button12_Click(System::Object^ sender, System::EventArgs^ e) 
{
	ImageList^ background = gcnew ImageList;
	background->ImageSize = System::Drawing::Size(200, 200);
	background->Images->Add(Image::FromFile("noliki.jpg")); // 1
	background->Images->Add(Image::FromFile("krestiki.jpg")); // 2
	button12->BackgroundImage = background->Images[user_marker - 1];
	button12->Enabled = false;
	massive[1][2] = user_marker;
	Играть_Click(sender, e);
};


Void Crosses_Zeros::button20_Click(System::Object^ sender, System::EventArgs^ e) 
{
	ImageList^ background = gcnew ImageList;
	background->ImageSize = System::Drawing::Size(200, 200);
	background->Images->Add(Image::FromFile("noliki.jpg")); // 1
	background->Images->Add(Image::FromFile("krestiki.jpg")); // 2
	button20->BackgroundImage = background->Images[user_marker - 1];
	button20->Enabled = false;
	massive[2][0] = user_marker;
	Играть_Click(sender, e);
};


Void Crosses_Zeros::button21_Click(System::Object^ sender, System::EventArgs^ e) 
{
	ImageList^ background = gcnew ImageList;
	background->ImageSize = System::Drawing::Size(200, 200);
	background->Images->Add(Image::FromFile("noliki.jpg")); // 1
	background->Images->Add(Image::FromFile("krestiki.jpg")); // 2
	button21->BackgroundImage = background->Images[user_marker - 1];
	button21->Enabled = false;
	massive[2][1] = user_marker;
	Играть_Click(sender, e);
};


Void Crosses_Zeros::button22_Click(System::Object^ sender, System::EventArgs^ e) 
{
	ImageList^ background = gcnew ImageList;
	background->ImageSize = System::Drawing::Size(200, 200);
	background->Images->Add(Image::FromFile("noliki.jpg")); // 1
	background->Images->Add(Image::FromFile("krestiki.jpg")); // 2
	button22->BackgroundImage = background->Images[user_marker - 1];
	button22->Enabled = false;
	massive[2][2] = user_marker;
	Играть_Click(sender, e);
};


Void Crosses_Zeros::button_about_game_Click(System::Object^ sender, System::EventArgs^ e)
{
	About_Game_Crosses_Zeros^ Aboutgame_form = gcnew About_Game_Crosses_Zeros;
	Aboutgame_form->Show();
}


Void Crosses_Zeros::Crosses_Zeros_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e)
{
	if (e->KeyCode == Keys::NumPad7)
	{
		if (this->button00->Enabled == true)
		{
			button00_Click(nullptr, nullptr);
		}
	}

	if (e->KeyCode == Keys::NumPad8)
	{
		if (this->button01->Enabled == true)
		{
			button01_Click(nullptr, nullptr);
		}
	}

	if (e->KeyCode == Keys::NumPad9)
	{
		if (this->button02->Enabled == true)
		{
			button02_Click(nullptr, nullptr);
		}
	}

	if (e->KeyCode == Keys::NumPad4)
	{
		if (this->button10->Enabled == true)
		{
			button10_Click(nullptr, nullptr);
		}
	}

	if (e->KeyCode == Keys::NumPad5)
	{
		if (this->button11->Enabled == true)
		{
			button11_Click(nullptr, nullptr);
		}
	}

	if (e->KeyCode == Keys::NumPad6)
	{
		if (this->button12->Enabled == true)
		{
			button12_Click(nullptr, nullptr);
		}
	}

	if (e->KeyCode == Keys::NumPad1)
	{
		if (this->button20->Enabled == true)
		{
			button20_Click(nullptr, nullptr);
		}
	}

	if (e->KeyCode == Keys::NumPad2)
	{
		if (this->button21->Enabled == true)
		{
			button21_Click(nullptr, nullptr);
		}
	}

	if (e->KeyCode == Keys::NumPad3)
	{
		if (this->button22->Enabled == true)
		{
			button22_Click(nullptr, nullptr);
		}
	}

	if (e->KeyCode == Keys::Enter)
	{
		if (this->Играть->Enabled == true)
		{
			Играть_Click(nullptr, nullptr);
		}
	}

	if (e->KeyCode == Keys::NumPad0)
	{
		if (crosscheckBox->Checked) 
		{
			crosscheckBox->Checked = 0;
		}
		else 
		{
			crosscheckBox->Checked = 1;
		}
	}

	if (e->KeyCode == Keys::Subtract)
	{
		Close();
	}
}
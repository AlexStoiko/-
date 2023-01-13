#include "Brain_test.h"

#include <Windows.h>
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string>
#include <time.h>
#include <msclr\marshal_cppstd.h>

#include "Show_Nomber.h"

using namespace Games;
using namespace std;
int check_flag = 0, all_q = 5, nomber, rezult = 0, nomber_question, rightquestions = 0, wrongquestions = 0;
string strrezult = "";

Show_Nomber show_nomber(1);

String^ Brain_test::Random_qestion()
{
	srand(time(NULL));
	int paramerer, min, max;
	strrezult = "";
	rezult = 0;
	String^ Backcolor, ^ Textcolor;
	nomber_question = rand() % all_q + 1;
	if (nomber_question == 1)
	{
		do
		{
			min = show_nomber.Out_Nomber();
			max = show_nomber.Out_Nomber();
		} while (min >= max);
	}
	else
	{
		paramerer = rand() % 10;
	}
	for (int i = 0; i < 7; i++)
	{
		this->label_nomber->ForeColor = ColorTranslator::FromHtml(show_nomber.Get_Color());
		this->label_nomber->Location = System::Drawing::Point(show_nomber.Get_Location(), 165);
		Update();
		nomber = show_nomber.Out_Nomber();
		Sleep(show_nomber.Get_Delay());
		this->label_nomber->Text = Convert::ToString(nomber);
		Update();
		Sleep(show_nomber.Get_Delay());
		this->label_nomber->Text = "";
		this->label_nomber->BackColor = ColorTranslator::FromHtml("Transparent");
		Update();
		switch (nomber_question)
		{
		case 1:
			if (nomber >= min && nomber <= max)
				rezult++;
			break;
		case 2:
			strrezult += to_string(nomber);
			break;
		case 3:
			if (nomber > paramerer)
				rezult++;
			break;
		case 4:
			if (nomber < paramerer)
				rezult++;
			break;
		case 5:
			if (nomber % paramerer == 0)
				rezult++;
			break;
		default:
			break;
		}
	}
	String^ question;
	setlocale(LC_ALL, "RUS");
	switch (nomber_question)
	{
	case 1:
		question = "Ñêîëüêî ÷èñåë íàõîäèòñÿ â ïðîìåæóòêå îò " + Convert::ToString(min) + " äî " + Convert::ToString(max) + "?";
		break;
	case 2:
		question = "Çàïèøèòå âñþ ïîñëåäîâàòåëüíîñòü ÷èñåë áåç ïðîáåëîâ";
		break;
	case 3:
		question = "Ñêîëüêî ÷èñåë áîëüøå " + Convert::ToString(paramerer) + "?";
		break;
	case 4:
		question = "Ñêîëüêî ÷èñåë ìåíüøå " + Convert::ToString(paramerer) + "?";
		break;
	case 5:
		question = "Ñêîëüêî ÷èñåë äåëèòñÿ íà " + Convert::ToString(paramerer) + " áåç îñòàòêà?";
		break;
	default:
		break;
	}
	return question;
}

Void Brain_test::Brain_test_Load(System::Object^ sender, System::EventArgs^ e)
{
	this->label_answerr->Text = "0";
	this->label_answerw->Text = "0";
	show_nomber.Set_Difficulty(1);
	show_nomber.Set_Delay(1000);
}

Void Brain_test::button_start_Click(System::Object^ sender, System::EventArgs^ e)
{
	switch (show_nomber.Get_Difficulty())
	{
	case 1:
		show_nomber.Set_Delay(1000);
		break;
	case 2:
		show_nomber.Set_Delay(700);
		break;
	case 3:
		show_nomber.Set_Delay(500);
		break;
	default:
		break;
	}
	this->button_start->Enabled = false;
	show_nomber.Set_Min(Convert::ToInt64(this->mtextBox_Min->Text));
	show_nomber.Set_Max(Convert::ToInt64(this->mtextBox_Max->Text));
	this->label_question->Text = "";
	this->label_question->Text = Random_qestion();
	this->mtextBox_answer->Enabled = true;
}

Void Brain_test::button_ok_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->mtextBox_answer->Enabled = false;
	this->button_ok->Enabled = false;
	string answer;
	int exit = 1;
	answer = msclr::interop::marshal_as<std::string>(this->mtextBox_answer->Text);
	if (nomber_question != 2)
	{
		if (answer == to_string(rezult))
		{
			rightquestions++;
			this->label_answerr->Text = Convert::ToString(rightquestions);
			exit = 1;
		}
		else
		{
			wrongquestions++;
			this->label_answerw->Text = Convert::ToString(wrongquestions);
			exit = 0;
		}
	}
	else
	{
		if (answer == strrezult)
		{
			rightquestions++;
			this->label_answerr->Text = Convert::ToString(rightquestions);
			exit = 1;
		}
		else
		{
			wrongquestions++;
			this->label_answerw->Text = Convert::ToString(wrongquestions);
			this->button_start->Enabled = true;
			exit = 0;
		}
	}
	this->mtextBox_answer->Text = "";
	this->label_question->Text = "";
	if (exit)
	{
		this->label_question->Text = Random_qestion();
		this->mtextBox_answer->Enabled = true;
		this->button_ok->Enabled = false;
		show_nomber.Down_Delay(100);
	}
	else
	{
		this->mtextBox_answer->Enabled = false;
		this->button_ok->Enabled = false;
		this->button_start->Enabled = true;
	}
}

Void Brain_test::mtextBox_answer_TextChanged(System::Object^ sender, System::EventArgs^ e)
{
	this->button_ok->Enabled = true;
}

Void Brain_test::ToolStripMenuItem_Easy_Click(System::Object^ sender, System::EventArgs^ e)
{
	show_nomber.Set_Difficulty(1);
	this->BackgroundImage = Image::FromFile("Brain_Test_Background1.jpg");
	Update();
}

Void Brain_test::ìåíÿåòñÿÑêîðîñòüÏîÿâëåíèÿÒåêñòàToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	show_nomber.Set_Difficulty(1);
	this->BackgroundImage = Image::FromFile("Brain_Test_Background1.jpg");
	Update();
}

Void Brain_test::ToolStripMenuItem_Medium_Click(System::Object^ sender, System::EventArgs^ e)
{
	show_nomber.Set_Difficulty(2);
	this->BackgroundImage = Image::FromFile("Brain_Test_Background2.jpg");
	Update();
}

Void Brain_test::ìåíÿåòñÿÐàñïîëîæåíèåToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	show_nomber.Set_Difficulty(2);
	this->BackgroundImage = Image::FromFile("Brain_Test_Background2.jpg");
	Update();
}


Void Brain_test::ToolStripMenuItem_Hard_Click(System::Object^ sender, System::EventArgs^ e)
{
	show_nomber.Set_Difficulty(3);
	this->BackgroundImage = Image::FromFile("Brain_Test_Background3.jpg");
	Update();
}

Void Brain_test::ìåíÿåòñÿÖâåòÑêîðîñòüÈÐàñïîëîæåíèåToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	show_nomber.Set_Difficulty(3);
	this->BackgroundImage = Image::FromFile("Brain_Test_Background3.jpg");
	Update();
}

Void Brain_test::mtextBox_Min_TextChanged(System::Object^ sender, System::EventArgs^ e)
{
	
}

Void Brain_test::mtextBox_Max_TextChanged(System::Object^ sender, System::EventArgs^ e)
{
	
}

Void Brain_test::ñïðàâêàToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	About_Game_Brain_test^ Aboutgame_form = gcnew About_Game_Brain_test;
	Aboutgame_form->Show();
}

Void Brain_test::âûõîäToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	Close();
}

Void Brain_test::Brain_test_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e)
{
	if (e->KeyCode == Keys::Space)
	{
		button_start_Click(nullptr, nullptr);
	}
	if (e->KeyCode == Keys::Enter)
	{ 
		button_ok_Click(nullptr, nullptr);
	}

	if (e->KeyCode == Keys::A)
	{
		mtextBox_Min;
	}

	if (e->KeyCode == Keys::S)
	{
		
	}

	if (e->KeyCode == Keys::D)
	{
		
	}

	if (e->KeyCode == Keys::F)
	{
		
	}
}
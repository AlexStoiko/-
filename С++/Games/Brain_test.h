#pragma once
#include "About_Game_Brain_test.h"

namespace Games {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ������ ��� Brain_test
	/// </summary>
	public ref class Brain_test : public System::Windows::Forms::Form
	{
	public:
		Brain_test(void)
		{
			InitializeComponent();
			//
			//TODO: �������� ��� ������������
			//
		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~Brain_test()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label_header;



	protected:


	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button_start;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label_question;


	private: System::Windows::Forms::Label^ label5;


	private: System::Windows::Forms::Button^ button_ok;
	private: System::Windows::Forms::Label^ label_nomber;

	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ �������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ToolStripMenuItem_Easy;
	private: System::Windows::Forms::ToolStripMenuItem^ ToolStripMenuItem_Medium;
	private: System::Windows::Forms::ToolStripMenuItem^ ToolStripMenuItem_Hard;


	private: System::Windows::Forms::Label^ label_Range;
	private: System::Windows::Forms::Label^ label_right;
	private: System::Windows::Forms::Label^ label_wrong;
	private: System::Windows::Forms::Label^ label_answerw;
	private: System::Windows::Forms::Label^ label_answerr;
	private: System::Windows::Forms::ToolStripMenuItem^ �������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �����ToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^ ��������������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ���������������������������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �������������������������������ToolStripMenuItem;
	private: System::Windows::Forms::MaskedTextBox^ mtextBox_answer;
	private: System::Windows::Forms::MaskedTextBox^ mtextBox_Min;
	private: System::Windows::Forms::MaskedTextBox^ mtextBox_Max;






	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Brain_test::typeid));
			this->label_header = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button_start = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label_question = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button_ok = (gcnew System::Windows::Forms::Button());
			this->label_nomber = (gcnew System::Windows::Forms::Label());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->�������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ToolStripMenuItem_Easy = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�������������������������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ToolStripMenuItem_Medium = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��������������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ToolStripMenuItem_Hard = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->���������������������������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->label_Range = (gcnew System::Windows::Forms::Label());
			this->label_right = (gcnew System::Windows::Forms::Label());
			this->label_wrong = (gcnew System::Windows::Forms::Label());
			this->label_answerw = (gcnew System::Windows::Forms::Label());
			this->label_answerr = (gcnew System::Windows::Forms::Label());
			this->mtextBox_answer = (gcnew System::Windows::Forms::MaskedTextBox());
			this->mtextBox_Min = (gcnew System::Windows::Forms::MaskedTextBox());
			this->mtextBox_Max = (gcnew System::Windows::Forms::MaskedTextBox());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label_header
			// 
			this->label_header->AutoSize = true;
			this->label_header->BackColor = System::Drawing::Color::Transparent;
			this->label_header->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_header->Location = System::Drawing::Point(200, 49);
			this->label_header->Name = L"label_header";
			this->label_header->Size = System::Drawing::Size(216, 32);
			this->label_header->TabIndex = 0;
			this->label_header->Text = L"���� �� ������";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(160, 162);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(278, 25);
			this->label2->TabIndex = 5;
			this->label2->Text = L"������������������ �����:";
			// 
			// button_start
			// 
			this->button_start->BackColor = System::Drawing::SystemColors::Window;
			this->button_start->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_start->Location = System::Drawing::Point(195, 87);
			this->button_start->Name = L"button_start";
			this->button_start->Size = System::Drawing::Size(210, 52);
			this->button_start->TabIndex = 6;
			this->button_start->Text = L"������";
			this->button_start->UseVisualStyleBackColor = false;
			this->button_start->Click += gcnew System::EventHandler(this, &Brain_test::button_start_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(9, 284);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(75, 20);
			this->label3->TabIndex = 7;
			this->label3->Text = L"������:";
			// 
			// label_question
			// 
			this->label_question->BackColor = System::Drawing::Color::Transparent;
			this->label_question->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_question->Location = System::Drawing::Point(91, 284);
			this->label_question->Name = L"label_question";
			this->label_question->Size = System::Drawing::Size(347, 76);
			this->label_question->TabIndex = 8;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(12, 387);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(67, 20);
			this->label5->TabIndex = 9;
			this->label5->Text = L"�����:";
			// 
			// button_ok
			// 
			this->button_ok->AutoSize = true;
			this->button_ok->Enabled = false;
			this->button_ok->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_ok->Location = System::Drawing::Point(309, 383);
			this->button_ok->Name = L"button_ok";
			this->button_ok->Size = System::Drawing::Size(96, 28);
			this->button_ok->TabIndex = 15;
			this->button_ok->Text = L"���� �����";
			this->button_ok->UseVisualStyleBackColor = true;
			this->button_ok->Click += gcnew System::EventHandler(this, &Brain_test::button_ok_Click);
			// 
			// label_nomber
			// 
			this->label_nomber->AutoSize = true;
			this->label_nomber->BackColor = System::Drawing::Color::Transparent;
			this->label_nomber->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_nomber->Location = System::Drawing::Point(256, 200);
			this->label_nomber->MinimumSize = System::Drawing::Size(75, 75);
			this->label_nomber->Name = L"label_nomber";
			this->label_nomber->Size = System::Drawing::Size(75, 75);
			this->label_nomber->TabIndex = 30;
			this->label_nomber->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->�������������ToolStripMenuItem,
					this->�������ToolStripMenuItem, this->�����ToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(662, 28);
			this->menuStrip1->TabIndex = 23;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// �������������ToolStripMenuItem
			// 
			this->�������������ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->ToolStripMenuItem_Easy,
					this->ToolStripMenuItem_Medium, this->ToolStripMenuItem_Hard
			});
			this->�������������ToolStripMenuItem->Name = L"�������������ToolStripMenuItem";
			this->�������������ToolStripMenuItem->Size = System::Drawing::Size(162, 24);
			this->�������������ToolStripMenuItem->Text = L"������� ���������";
			// 
			// ToolStripMenuItem_Easy
			// 
			this->ToolStripMenuItem_Easy->BackColor = System::Drawing::Color::Lime;
			this->ToolStripMenuItem_Easy->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->�������������������������������ToolStripMenuItem });
			this->ToolStripMenuItem_Easy->Name = L"ToolStripMenuItem_Easy";
			this->ToolStripMenuItem_Easy->Size = System::Drawing::Size(158, 26);
			this->ToolStripMenuItem_Easy->Text = L"������";
			this->ToolStripMenuItem_Easy->Click += gcnew System::EventHandler(this, &Brain_test::ToolStripMenuItem_Easy_Click);
			// 
			// �������������������������������ToolStripMenuItem
			// 
			this->�������������������������������ToolStripMenuItem->BackColor = System::Drawing::Color::Lime;
			this->�������������������������������ToolStripMenuItem->Name = L"�������������������������������ToolStripMenuItem";
			this->�������������������������������ToolStripMenuItem->Size = System::Drawing::Size(351, 26);
			this->�������������������������������ToolStripMenuItem->Text = L"�������� �������� ��������� ������";
			this->�������������������������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Brain_test::�������������������������������ToolStripMenuItem_Click);
			// 
			// ToolStripMenuItem_Medium
			// 
			this->ToolStripMenuItem_Medium->BackColor = System::Drawing::Color::Yellow;
			this->ToolStripMenuItem_Medium->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->��������������������ToolStripMenuItem });
			this->ToolStripMenuItem_Medium->Name = L"ToolStripMenuItem_Medium";
			this->ToolStripMenuItem_Medium->Size = System::Drawing::Size(158, 26);
			this->ToolStripMenuItem_Medium->Text = L"�������";
			this->ToolStripMenuItem_Medium->Click += gcnew System::EventHandler(this, &Brain_test::ToolStripMenuItem_Medium_Click);
			// 
			// ��������������������ToolStripMenuItem
			// 
			this->��������������������ToolStripMenuItem->BackColor = System::Drawing::Color::Yellow;
			this->��������������������ToolStripMenuItem->Name = L"��������������������ToolStripMenuItem";
			this->��������������������ToolStripMenuItem->Size = System::Drawing::Size(346, 26);
			this->��������������������ToolStripMenuItem->Text = L"�������� �������� � ������������";
			this->��������������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Brain_test::��������������������ToolStripMenuItem_Click);
			// 
			// ToolStripMenuItem_Hard
			// 
			this->ToolStripMenuItem_Hard->BackColor = System::Drawing::Color::Red;
			this->ToolStripMenuItem_Hard->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->���������������������������������ToolStripMenuItem });
			this->ToolStripMenuItem_Hard->Name = L"ToolStripMenuItem_Hard";
			this->ToolStripMenuItem_Hard->Size = System::Drawing::Size(158, 26);
			this->ToolStripMenuItem_Hard->Text = L"�������";
			this->ToolStripMenuItem_Hard->Click += gcnew System::EventHandler(this, &Brain_test::ToolStripMenuItem_Hard_Click);
			// 
			// ���������������������������������ToolStripMenuItem
			// 
			this->���������������������������������ToolStripMenuItem->BackColor = System::Drawing::Color::Red;
			this->���������������������������������ToolStripMenuItem->Name = L"���������������������������������ToolStripMenuItem";
			this->���������������������������������ToolStripMenuItem->Size = System::Drawing::Size(384, 26);
			this->���������������������������������ToolStripMenuItem->Text = L"�������� ����, �������� � ������������";
			this->���������������������������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Brain_test::���������������������������������ToolStripMenuItem_Click);
			// 
			// �������ToolStripMenuItem
			// 
			this->�������ToolStripMenuItem->Name = L"�������ToolStripMenuItem";
			this->�������ToolStripMenuItem->Size = System::Drawing::Size(81, 24);
			this->�������ToolStripMenuItem->Text = L"�������";
			this->�������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Brain_test::�������ToolStripMenuItem_Click);
			// 
			// �����ToolStripMenuItem
			// 
			this->�����ToolStripMenuItem->Name = L"�����ToolStripMenuItem";
			this->�����ToolStripMenuItem->Size = System::Drawing::Size(67, 24);
			this->�����ToolStripMenuItem->Text = L"�����";
			this->�����ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Brain_test::�����ToolStripMenuItem_Click);
			// 
			// label_Range
			// 
			this->label_Range->AutoSize = true;
			this->label_Range->BackColor = System::Drawing::Color::Transparent;
			this->label_Range->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_Range->Location = System::Drawing::Point(443, 96);
			this->label_Range->Name = L"label_Range";
			this->label_Range->Size = System::Drawing::Size(141, 17);
			this->label_Range->TabIndex = 33;
			this->label_Range->Text = L"�������� ��������";
			// 
			// label_right
			// 
			this->label_right->AutoSize = true;
			this->label_right->BackColor = System::Drawing::Color::Transparent;
			this->label_right->Location = System::Drawing::Point(443, 368);
			this->label_right->Name = L"label_right";
			this->label_right->Size = System::Drawing::Size(63, 17);
			this->label_right->TabIndex = 34;
			this->label_right->Text = L"������:";
			// 
			// label_wrong
			// 
			this->label_wrong->AutoSize = true;
			this->label_wrong->BackColor = System::Drawing::Color::Transparent;
			this->label_wrong->Location = System::Drawing::Point(443, 394);
			this->label_wrong->Name = L"label_wrong";
			this->label_wrong->Size = System::Drawing::Size(79, 17);
			this->label_wrong->TabIndex = 35;
			this->label_wrong->Text = L"��������:";
			// 
			// label_answerw
			// 
			this->label_answerw->BackColor = System::Drawing::Color::Transparent;
			this->label_answerw->Location = System::Drawing::Point(528, 394);
			this->label_answerw->Name = L"label_answerw";
			this->label_answerw->Size = System::Drawing::Size(50, 17);
			this->label_answerw->TabIndex = 36;
			this->label_answerw->Text = L"0";
			// 
			// label_answerr
			// 
			this->label_answerr->BackColor = System::Drawing::Color::Transparent;
			this->label_answerr->Location = System::Drawing::Point(528, 368);
			this->label_answerr->Name = L"label_answerr";
			this->label_answerr->Size = System::Drawing::Size(50, 17);
			this->label_answerr->TabIndex = 37;
			this->label_answerr->Text = L"0";
			// 
			// mtextBox_answer
			// 
			this->mtextBox_answer->BeepOnError = true;
			this->mtextBox_answer->Location = System::Drawing::Point(85, 387);
			this->mtextBox_answer->Mask = L"0000000";
			this->mtextBox_answer->Name = L"mtextBox_answer";
			this->mtextBox_answer->Size = System::Drawing::Size(200, 22);
			this->mtextBox_answer->TabIndex = 38;
			this->mtextBox_answer->ValidatingType = System::Int32::typeid;
			this->mtextBox_answer->TextChanged += gcnew System::EventHandler(this, &Brain_test::mtextBox_answer_TextChanged);
			// 
			// mtextBox_Min
			// 
			this->mtextBox_Min->BeepOnError = true;
			this->mtextBox_Min->Location = System::Drawing::Point(446, 117);
			this->mtextBox_Min->Mask = L"0000";
			this->mtextBox_Min->Name = L"mtextBox_Min";
			this->mtextBox_Min->Size = System::Drawing::Size(71, 22);
			this->mtextBox_Min->TabIndex = 39;
			this->mtextBox_Min->Text = L"0";
			this->mtextBox_Min->ValidatingType = System::Int32::typeid;
			this->mtextBox_Min->TextChanged += gcnew System::EventHandler(this, &Brain_test::mtextBox_Min_TextChanged);
			// 
			// mtextBox_Max
			// 
			this->mtextBox_Max->BeepOnError = true;
			this->mtextBox_Max->Location = System::Drawing::Point(523, 117);
			this->mtextBox_Max->Mask = L"0000";
			this->mtextBox_Max->Name = L"mtextBox_Max";
			this->mtextBox_Max->Size = System::Drawing::Size(61, 22);
			this->mtextBox_Max->TabIndex = 40;
			this->mtextBox_Max->Text = L"9";
			this->mtextBox_Max->ValidatingType = System::Int32::typeid;
			this->mtextBox_Max->TextChanged += gcnew System::EventHandler(this, &Brain_test::mtextBox_Max_TextChanged);
			// 
			// Brain_test
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(662, 453);
			this->Controls->Add(this->mtextBox_Max);
			this->Controls->Add(this->mtextBox_Min);
			this->Controls->Add(this->mtextBox_answer);
			this->Controls->Add(this->label_answerr);
			this->Controls->Add(this->label_answerw);
			this->Controls->Add(this->label_wrong);
			this->Controls->Add(this->label_right);
			this->Controls->Add(this->label_Range);
			this->Controls->Add(this->label_nomber);
			this->Controls->Add(this->button_ok);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label_question);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button_start);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label_header);
			this->Controls->Add(this->menuStrip1);
			this->ForeColor = System::Drawing::Color::Black;
			this->KeyPreview = true;
			this->MainMenuStrip = this->menuStrip1;
			this->MaximumSize = System::Drawing::Size(680, 500);
			this->MinimumSize = System::Drawing::Size(680, 500);
			this->Name = L"Brain_test";
			this->Text = L"���� �� ������";
			this->Load += gcnew System::EventHandler(this, &Brain_test::Brain_test_Load);
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Brain_test::Brain_test_KeyDown);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		private: System::String^ Random_qestion();
		private: System::Void button_start_Click(System::Object^ sender, System::EventArgs^ e);
		private: System::Void button_ok_Click(System::Object^ sender, System::EventArgs^ e);
		private: System::Void ToolStripMenuItem_Easy_Click(System::Object^ sender, System::EventArgs^ e);
		private: System::Void ToolStripMenuItem_Medium_Click(System::Object^ sender, System::EventArgs^ e);
		private: System::Void ToolStripMenuItem_Hard_Click(System::Object^ sender, System::EventArgs^ e);
		private: System::Void Brain_test_Load(System::Object^ sender, System::EventArgs^ e);
		private: System::Void �������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
		private: System::Void �����ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
		private: System::Void �������������������������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
		private: System::Void ��������������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
		private: System::Void ���������������������������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
		private: System::Void Brain_test_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e);
		private: System::Void mtextBox_answer_TextChanged(System::Object^ sender, System::EventArgs^ e);
		private: System::Void mtextBox_Min_TextChanged(System::Object^ sender, System::EventArgs^ e);
		private: System::Void mtextBox_Max_TextChanged(System::Object^ sender, System::EventArgs^ e);
};
}

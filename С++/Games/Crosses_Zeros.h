#pragma once

#include "About_Game_Crosses_Zeros.h"

namespace Games {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Crosses_Zeros
	/// </summary>
	public ref class Crosses_Zeros : public System::Windows::Forms::Form
	{
	public:
		Crosses_Zeros(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~Crosses_Zeros()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;

	private: System::Windows::Forms::Button^ Играть;

	private: System::Windows::Forms::Button^ button22;

	private: System::Windows::Forms::Button^ button21;

	private: System::Windows::Forms::Button^ button20;

	private: System::Windows::Forms::Button^ button12;

	private: System::Windows::Forms::Button^ button11;

	private: System::Windows::Forms::Button^ button10;

	private: System::Windows::Forms::Button^ button02;

	private: System::Windows::Forms::Button^ button01;

	private: System::Windows::Forms::Button^ button00;
	private: System::Windows::Forms::CheckBox^ crosscheckBox;
	private: System::Windows::Forms::Button^ button_about_game;

	protected:

	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button02 = (gcnew System::Windows::Forms::Button());
			this->button01 = (gcnew System::Windows::Forms::Button());
			this->button00 = (gcnew System::Windows::Forms::Button());
			this->Играть = (gcnew System::Windows::Forms::Button());
			this->crosscheckBox = (gcnew System::Windows::Forms::CheckBox());
			this->button_about_game = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->panel1->Controls->Add(this->button22);
			this->panel1->Controls->Add(this->button21);
			this->panel1->Controls->Add(this->button20);
			this->panel1->Controls->Add(this->button12);
			this->panel1->Controls->Add(this->button11);
			this->panel1->Controls->Add(this->button10);
			this->panel1->Controls->Add(this->button02);
			this->panel1->Controls->Add(this->button01);
			this->panel1->Controls->Add(this->button00);
			this->panel1->Location = System::Drawing::Point(49, 68);
			this->panel1->Margin = System::Windows::Forms::Padding(4);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(283, 261);
			this->panel1->TabIndex = 0;
			// 
			// button22
			// 
			this->button22->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button22->Enabled = false;
			this->button22->Location = System::Drawing::Point(191, 176);
			this->button22->Margin = System::Windows::Forms::Padding(4);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(85, 79);
			this->button22->TabIndex = 8;
			this->button22->UseVisualStyleBackColor = true;
			this->button22->Click += gcnew System::EventHandler(this, &Crosses_Zeros::button22_Click);
			// 
			// button21
			// 
			this->button21->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button21->Enabled = false;
			this->button21->Location = System::Drawing::Point(97, 176);
			this->button21->Margin = System::Windows::Forms::Padding(4);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(85, 79);
			this->button21->TabIndex = 7;
			this->button21->UseVisualStyleBackColor = true;
			this->button21->Click += gcnew System::EventHandler(this, &Crosses_Zeros::button21_Click);
			// 
			// button20
			// 
			this->button20->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button20->Enabled = false;
			this->button20->Location = System::Drawing::Point(4, 176);
			this->button20->Margin = System::Windows::Forms::Padding(4);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(85, 79);
			this->button20->TabIndex = 6;
			this->button20->UseVisualStyleBackColor = true;
			this->button20->Click += gcnew System::EventHandler(this, &Crosses_Zeros::button20_Click);
			// 
			// button12
			// 
			this->button12->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button12->Enabled = false;
			this->button12->Location = System::Drawing::Point(191, 90);
			this->button12->Margin = System::Windows::Forms::Padding(4);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(85, 79);
			this->button12->TabIndex = 5;
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &Crosses_Zeros::button12_Click);
			// 
			// button11
			// 
			this->button11->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button11->Enabled = false;
			this->button11->Location = System::Drawing::Point(97, 89);
			this->button11->Margin = System::Windows::Forms::Padding(4);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(85, 79);
			this->button11->TabIndex = 4;
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &Crosses_Zeros::button11_Click);
			// 
			// button10
			// 
			this->button10->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button10->Enabled = false;
			this->button10->Location = System::Drawing::Point(4, 90);
			this->button10->Margin = System::Windows::Forms::Padding(4);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(85, 79);
			this->button10->TabIndex = 3;
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &Crosses_Zeros::button10_Click);
			// 
			// button02
			// 
			this->button02->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button02->Enabled = false;
			this->button02->Location = System::Drawing::Point(191, 4);
			this->button02->Margin = System::Windows::Forms::Padding(4);
			this->button02->Name = L"button02";
			this->button02->Size = System::Drawing::Size(85, 79);
			this->button02->TabIndex = 2;
			this->button02->UseVisualStyleBackColor = true;
			this->button02->Click += gcnew System::EventHandler(this, &Crosses_Zeros::button02_Click);
			// 
			// button01
			// 
			this->button01->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button01->Enabled = false;
			this->button01->Location = System::Drawing::Point(97, 4);
			this->button01->Margin = System::Windows::Forms::Padding(4);
			this->button01->Name = L"button01";
			this->button01->Size = System::Drawing::Size(85, 79);
			this->button01->TabIndex = 1;
			this->button01->UseVisualStyleBackColor = true;
			this->button01->Click += gcnew System::EventHandler(this, &Crosses_Zeros::button01_Click);
			// 
			// button00
			// 
			this->button00->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button00->Enabled = false;
			this->button00->Location = System::Drawing::Point(4, 4);
			this->button00->Margin = System::Windows::Forms::Padding(4);
			this->button00->Name = L"button00";
			this->button00->Size = System::Drawing::Size(85, 79);
			this->button00->TabIndex = 0;
			this->button00->UseVisualStyleBackColor = true;
			this->button00->Click += gcnew System::EventHandler(this, &Crosses_Zeros::button00_Click);
			// 
			// Играть
			// 
			this->Играть->Location = System::Drawing::Point(165, 15);
			this->Играть->Margin = System::Windows::Forms::Padding(4);
			this->Играть->Name = L"Играть";
			this->Играть->Size = System::Drawing::Size(100, 28);
			this->Играть->TabIndex = 1;
			this->Играть->Text = L"Играть";
			this->Играть->UseVisualStyleBackColor = true;
			this->Играть->Click += gcnew System::EventHandler(this, &Crosses_Zeros::Играть_Click);
			// 
			// crosscheckBox
			// 
			this->crosscheckBox->AutoSize = true;
			this->crosscheckBox->Location = System::Drawing::Point(16, 22);
			this->crosscheckBox->Margin = System::Windows::Forms::Padding(4);
			this->crosscheckBox->Name = L"crosscheckBox";
			this->crosscheckBox->Size = System::Drawing::Size(131, 21);
			this->crosscheckBox->TabIndex = 2;
			this->crosscheckBox->Text = L"Ходить первым";
			this->crosscheckBox->UseVisualStyleBackColor = true;
			this->crosscheckBox->CheckedChanged += gcnew System::EventHandler(this, &Crosses_Zeros::button00_Click);
			// 
			// button_about_game
			// 
			this->button_about_game->AutoSize = true;
			this->button_about_game->Location = System::Drawing::Point(306, 12);
			this->button_about_game->Name = L"button_about_game";
			this->button_about_game->Size = System::Drawing::Size(75, 27);
			this->button_about_game->TabIndex = 3;
			this->button_about_game->Text = L"Справка";
			this->button_about_game->UseVisualStyleBackColor = true;
			this->button_about_game->Click += gcnew System::EventHandler(this, &Crosses_Zeros::button_about_game_Click);
			// 
			// Crosses_Zeros
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(393, 372);
			this->Controls->Add(this->button_about_game);
			this->Controls->Add(this->crosscheckBox);
			this->Controls->Add(this->Играть);
			this->Controls->Add(this->panel1);
			this->KeyPreview = true;
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"Crosses_Zeros";
			this->Text = L"Крестики-нолики";
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Crosses_Zeros::Crosses_Zeros_KeyDown);
			this->panel1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Играть_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button00_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button01_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button02_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button20_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button21_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button22_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Crosses_Zeros_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e);
	private: array<Button^>^ Crosses_Zeros::Get_Grid();
	private: System::Void button_about_game_Click(System::Object^ sender, System::EventArgs^ e);
	};
}
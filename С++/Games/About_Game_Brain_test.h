#pragma once

namespace Games {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для About_Game_Brain_test
	/// </summary>
	public ref class About_Game_Brain_test : public System::Windows::Forms::Form
	{
	public:
		About_Game_Brain_test(void)
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
		~About_Game_Brain_test()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ About_Game_Brain_test_info;
	protected:
	private: System::Windows::Forms::Button^ cloz;

	private:
		/// <summary>
		/// Требуется переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Обязательный метод для поддержки конструктора - не изменяйте
		/// содержимое данного метода при помощи редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(About_Game_Brain_test::typeid));
			this->About_Game_Brain_test_info = (gcnew System::Windows::Forms::TextBox());
			this->cloz = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// About_Game_Brain_test_info
			// 
			this->About_Game_Brain_test_info->Location = System::Drawing::Point(18, 15);
			this->About_Game_Brain_test_info->Margin = System::Windows::Forms::Padding(4);
			this->About_Game_Brain_test_info->Multiline = true;
			this->About_Game_Brain_test_info->Name = L"About_Game_Brain_test_info";
			this->About_Game_Brain_test_info->ReadOnly = true;
			this->About_Game_Brain_test_info->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->About_Game_Brain_test_info->Size = System::Drawing::Size(413, 400);
			this->About_Game_Brain_test_info->TabIndex = 0;
			this->About_Game_Brain_test_info->TabStop = false;
			this->About_Game_Brain_test_info->Text = resources->GetString(L"About_Game_Brain_test_info.Text");
			// 
			// cloz
			// 
			this->cloz->Cursor = System::Windows::Forms::Cursors::Hand;
			this->cloz->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->cloz->Location = System::Drawing::Point(16, 423);
			this->cloz->Margin = System::Windows::Forms::Padding(4);
			this->cloz->Name = L"cloz";
			this->cloz->Size = System::Drawing::Size(415, 28);
			this->cloz->TabIndex = 1;
			this->cloz->Text = L"Закрыть";
			this->cloz->UseVisualStyleBackColor = true;
			this->cloz->Click += gcnew System::EventHandler(this, &About_Game_Brain_test::cloz_Click);
			// 
			// About_Game_Brain_test
			// 
			this->AcceptButton = this->cloz;
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->CancelButton = this->cloz;
			this->ClientSize = System::Drawing::Size(444, 449);
			this->Controls->Add(this->cloz);
			this->Controls->Add(this->About_Game_Brain_test_info);
			this->Margin = System::Windows::Forms::Padding(4);
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(462, 496);
			this->MinimizeBox = false;
			this->MinimumSize = System::Drawing::Size(462, 496);
			this->Name = L"About_Game_Brain_test";
			this->ShowInTaskbar = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Об игре";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void cloz_Click(System::Object^ sender, System::EventArgs^ e) {
		Close();
	}
	};
}

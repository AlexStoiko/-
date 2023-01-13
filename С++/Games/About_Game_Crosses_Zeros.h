#pragma once

namespace Games {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для About_Game_Crosses_Zeros
	/// </summary>
	public ref class About_Game_Crosses_Zeros : public System::Windows::Forms::Form
	{
	public:
		About_Game_Crosses_Zeros(void)
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
		~About_Game_Crosses_Zeros()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ cloz;
	protected:
	private: System::Windows::Forms::TextBox^ About_Game_Brain_test_info;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(About_Game_Crosses_Zeros::typeid));
			this->cloz = (gcnew System::Windows::Forms::Button());
			this->About_Game_Brain_test_info = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// cloz
			// 
			this->cloz->Cursor = System::Windows::Forms::Cursors::Hand;
			this->cloz->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->cloz->Location = System::Drawing::Point(5, 418);
			this->cloz->Margin = System::Windows::Forms::Padding(4);
			this->cloz->Name = L"cloz";
			this->cloz->Size = System::Drawing::Size(415, 28);
			this->cloz->TabIndex = 3;
			this->cloz->Text = L"Закрыть";
			this->cloz->UseVisualStyleBackColor = true;
			this->cloz->Click += gcnew System::EventHandler(this, &About_Game_Crosses_Zeros::cloz_Click);
			// 
			// About_Game_Brain_test_info
			// 
			this->About_Game_Brain_test_info->Location = System::Drawing::Point(7, 10);
			this->About_Game_Brain_test_info->Margin = System::Windows::Forms::Padding(4);
			this->About_Game_Brain_test_info->Multiline = true;
			this->About_Game_Brain_test_info->Name = L"About_Game_Brain_test_info";
			this->About_Game_Brain_test_info->ReadOnly = true;
			this->About_Game_Brain_test_info->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->About_Game_Brain_test_info->Size = System::Drawing::Size(413, 400);
			this->About_Game_Brain_test_info->TabIndex = 2;
			this->About_Game_Brain_test_info->TabStop = false;
			this->About_Game_Brain_test_info->Text = resources->GetString(L"About_Game_Brain_test_info.Text");
			// 
			// About_Game_Crosses_Zeros
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(425, 456);
			this->Controls->Add(this->cloz);
			this->Controls->Add(this->About_Game_Brain_test_info);
			this->Name = L"About_Game_Crosses_Zeros";
			this->Text = L"About_Game_Crosses_Zeros";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void cloz_Click(System::Object^ sender, System::EventArgs^ e) {
		Close();
	}
	};
}

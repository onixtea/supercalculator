#pragma once
#include <cstring>
# include <stdlib.h>
#include <string>
#include <time.h>
namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;

	/// <summary>
	/// Summary for pgenerator
	/// </summary>
	public ref class pgenerator : public System::Windows::Forms::Form
	{
	public:
		pgenerator(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~pgenerator()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::CheckedListBox^ checkedListBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label3;


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->checkedListBox1 = (gcnew System::Windows::Forms::CheckedListBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(23, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(92, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Password Length:";
			this->label1->Click += gcnew System::EventHandler(this, &pgenerator::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(23, 76);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(109, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Generated Password:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(27, 25);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 2;
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::SystemColors::Window;
			this->textBox2->Location = System::Drawing::Point(26, 95);
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(246, 20);
			this->textBox2->TabIndex = 3;
			// 
			// checkedListBox1
			// 
			this->checkedListBox1->CheckOnClick = true;
			this->checkedListBox1->FormattingEnabled = true;
			this->checkedListBox1->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"Letters", L"Numbers", L"Symbols", L"(Case-sensitive)" });
			this->checkedListBox1->Location = System::Drawing::Point(152, 25);
			this->checkedListBox1->Name = L"checkedListBox1";
			this->checkedListBox1->Size = System::Drawing::Size(120, 64);
			this->checkedListBox1->TabIndex = 4;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(26, 121);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(246, 23);
			this->button1->TabIndex = 5;
			this->button1->Text = L"Generate Password";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &pgenerator::button1_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(149, 9);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(97, 13);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Password Settings:";
			// 
			// pgenerator
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(295, 149);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->checkedListBox1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"pgenerator";
			this->Text = L"pgenerator";
			this->Load += gcnew System::EventHandler(this, &pgenerator::pgenerator_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void pgenerator_Load(System::Object^ sender, System::EventArgs^ e) {
		srand(time(NULL));
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	string charset = "";

	const string upletterset = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	const string lowletterset = "abcdefghijklmnopqrstuvwxyz";
	const string numset = "0123456789";
	const string symset = "!@#$%^&*()_+{}:<>?~";

	if (checkedListBox1->GetItemChecked(0) == true) {
		charset += upletterset;
	}
	if (checkedListBox1->GetItemChecked(3) == true) {
		charset += lowletterset;
	}
	if (checkedListBox1->GetItemChecked(1) == true) {
		charset += numset;
	}
	if (checkedListBox1->GetItemChecked(2) == true) {
		charset += symset;
	}
	if (charset.empty()) {
		textBox2->Text = "Error: No character set selected!";
		return;
	}

	string password = "";
	if (textBox1->Text != "") {
		int passlength = int::Parse(textBox1->Text);
		for (int i = 0; i < passlength; i++) {
			password += charset[rand() % charset.length()];
		}
		textBox2->Text = gcnew String(password.c_str());
	}
	else textBox2->Text = "Error: No length selected!";

		IO::StreamWriter^ writer = gcnew IO::StreamWriter("passwords.txt", true); // 'true' to append
		writer->WriteLine(gcnew String(password.c_str()));  // Write the password
		writer->Close();
}
private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}

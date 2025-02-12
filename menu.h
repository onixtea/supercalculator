#include "signature.h"
#include "chcalculator.h"
#include "bcalculator.h"
#include "pgenerator.h"
#include "plist.h"
#include "shcalculator.h"
#pragma once

namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ authorToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ inicialsToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ exitToolStripMenuItem;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;

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
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->authorToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->inicialsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->authorToolStripMenuItem,
					this->inicialsToolStripMenuItem, this->exitToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(284, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// authorToolStripMenuItem
			// 
			this->authorToolStripMenuItem->Name = L"authorToolStripMenuItem";
			this->authorToolStripMenuItem->Size = System::Drawing::Size(56, 20);
			this->authorToolStripMenuItem->Text = L"Author";
			this->authorToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::authorToolStripMenuItem_Click);
			// 
			// inicialsToolStripMenuItem
			// 
			this->inicialsToolStripMenuItem->Name = L"inicialsToolStripMenuItem";
			this->inicialsToolStripMenuItem->Size = System::Drawing::Size(69, 20);
			this->inicialsToolStripMenuItem->Text = L"Signature";
			this->inicialsToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::inicialsToolStripMenuItem_Click);
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->Size = System::Drawing::Size(38, 20);
			this->exitToolStripMenuItem->Text = L"Exit";
			this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::exitToolStripMenuItem_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 39);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(260, 48);
			this->button1->TabIndex = 1;
			this->button1->Text = L"[1] - Basic Calculator";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(12, 93);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(260, 48);
			this->button2->TabIndex = 2;
			this->button2->Text = L"[2] - Change Calculator";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(12, 147);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(260, 48);
			this->button3->TabIndex = 3;
			this->button3->Text = L"[3] - Exchange Calculator";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->button4->Location = System::Drawing::Point(249, 201);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(23, 21);
			this->button4->TabIndex = 4;
			this->button4->Text = L">>";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 229);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->menuStrip1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MainMenuStrip = this->menuStrip1;
			this->MaximizeBox = false;
			this->Name = L"Form1";
			this->Text = L"the supercalculator";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void exitToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		Close();
	}
private: System::Void authorToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("Author: Azuolas Rutkauskas, December 2024");
}
private: System::Void inicialsToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	signature^ forma = gcnew signature();
	forma->Show();
}
private: int x = 0; // this is for switching button modes (calc-misc-pass)
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	switch (x) {
	case 0:
		x = 1;
		break;
	case 1:
		x = 2;
		break;
	case 2:
		x = 0;
		break;
	}

	if (x == 0) {
		button1->Text = L"[1] - Basic Calculator";
		button1->Enabled = true;
		button2->Text = L"[2] - Change Calculator";
		button3->Text = L"[3] - Exchange Calculator";
	}
	else if (x == 1) {
		button1->Text = L"[1] - US Debt Calculator";
		button2->Text = L"[2] - Shopping Cart Calculator";
		button3->Text = L"[3] - Investment Calculator";
	}
	else if (x == 2) {
		button1->Text = L"PASSWORD SYSTEM";
		button1->Enabled = false;
		button2->Text = L"[1] - Password Generator";
		button3->Text = L"[2] - Generated Passwords";
	}

}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (x == 0) {
		// Basic Calculator
		bcalculator^ forma = gcnew bcalculator();
		forma->Show();
	}
	if (x == 1) {
		// US Debt Calculator
		//bcalculator^ forma = gcnew bcalculator();
		//forma->Show();
		MessageBox::Show("us debt calc");
	}
	if (x == 2) {
		// Password System
		// This case will do nothing as button1 is disabled in x == 2
	}
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	if (x == 0) {
		// Change Calculator
		chcalculator^ forma = gcnew chcalculator();
		forma->Show();
	}
	if (x == 1) {
		// Shopping Cart Calculator
		shcalculator^ forma = gcnew shcalculator();
		forma->Show();
	}
	if (x == 2) {
		// Password Generator
		pgenerator^ forma = gcnew pgenerator();
		forma->Show();
	}
}

private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	if (x == 0) {
		// Exchange Calculator
		MessageBox::Show("exchange calc");
	}
	if (x == 1) {
		// Investment Calculator
		MessageBox::Show("investment calc");
	}
	if (x == 2) {
		// Generated Passwords
		plist^ forma = gcnew plist();
		forma->Show();
	}
}
};
}

#pragma once

namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for chcalculator
	/// </summary>
	public ref class chcalculator : public System::Windows::Forms::Form
	{
	public:
		chcalculator(void)
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
		~chcalculator()
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
	private: System::Windows::Forms::Button^ button1;

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(28, 15);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(97, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Enter your change:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(28, 63);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(45, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Answer:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(31, 31);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(201, 20);
			this->textBox1->TabIndex = 2;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &chcalculator::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Enabled = false;
			this->textBox2->Location = System::Drawing::Point(31, 79);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(201, 20);
			this->textBox2->TabIndex = 3;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(31, 119);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(201, 28);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Calculate";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &chcalculator::button1_Click);
			// 
			// chcalculator
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(261, 159);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"chcalculator";
			this->Text = L"change calculator";
			this->Load += gcnew System::EventHandler(this, &chcalculator::chcalculator_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	bool IsInputError(String^ InputCheck) {
	if (InputCheck->Length > 0) {
		for (int i = 0; i < InputCheck->Length; i++) {
			if (!Char::IsDigit(InputCheck[i])) return true;
		}
	}
	else return true;
	return false;
	}	
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		int x, y, z;
		label1->Text = "Enter your change:";
		textBox2->Text = "";
		String^ InputCheck = textBox1->Text;
		if (IsInputError(InputCheck)) {
			textBox2->Text = "Error: Invalid Input";
			return;
		}

			int g;
			int k500, k200, k100, k50, k20, k10, k5;

			g = int::Parse(textBox1->Text);

			k500 = g / 500; g = g % 500;
			k200 = g / 200; g = g % 200;
			k100 = g / 100; g = g % 100;
			k50 = g / 50; g = g % 50;
			k20 = g / 20; g = g % 20;
			k10 = g / 10; g = g % 10;
			k5 = g / 5; g = g % 5;

			if (k500 >= 1) {
				textBox2->Text += k500.ToString();
				textBox2->Text += " x 500";
				if (k200 >= 1 || k100 >= 1 || k50 >= 1 || k20 >= 1 || k10 >= 1 || k5 >= 1 || g > 0) textBox2->Text += " + ";
			}
			if (k200 >= 1) {
				textBox2->Text += k200.ToString();
				textBox2->Text += " x 200";
				if (k100 >= 1 || k50 >= 1 || k20 >= 1 || k10 >= 1 || k5 >= 1 || g > 0) textBox2->Text += " + ";
			}
			if (k100 >= 1) {
				textBox2->Text += k100.ToString();
				textBox2->Text += " x 100";
				if (k50 >= 1 || k20 >= 1 || k10 >= 1 || k5 >= 1 || g > 0) textBox2->Text += " + ";
			}
			if (k50 >= 1) {
				textBox2->Text += k50.ToString();
				textBox2->Text += " x 50";
				if (k20 >= 1 || k10 >= 1 || k5 >= 1 || g > 0) textBox2->Text += " + ";
			}
			if (k20 >= 1) {
				textBox2->Text += k20.ToString();
				textBox2->Text += " x 20";
				if (k10 >= 1 || k5 >= 1 || g > 0) textBox2->Text += " + ";
			}
			if (k10 >= 1) {
				textBox2->Text += k10.ToString();
				textBox2->Text += " x 10";
				if (k5 >= 1 || g > 0) textBox2->Text += " + ";
			}
			if (k5 >= 1) {
				textBox2->Text += k5.ToString();
				textBox2->Text += " x 5";
				if (g > 0) textBox2->Text += " + ";
			}
			if (g > 0) textBox2->Text += g.ToString();
		//just testing
	}
private: System::Void chcalculator_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}

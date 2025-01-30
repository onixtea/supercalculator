#pragma once
#include <cmath>

namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for bcalculator
	/// </summary>
	public ref class bcalculator : public System::Windows::Forms::Form
	{
	public:
		bcalculator(void)
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
		~bcalculator()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox1;

	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::ComboBox^ comboBox1;


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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(12, 18);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(140, 18);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Enter your equation:";
			this->label1->Click += gcnew System::EventHandler(this, &bcalculator::label1_Click);
			// 
			// textBox1
			// 
			this->textBox1->ForeColor = System::Drawing::SystemColors::WindowFrame;
			this->textBox1->Location = System::Drawing::Point(12, 44);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(71, 20);
			this->textBox1->TabIndex = 1;
			this->textBox1->Text = L"Number";
			this->textBox1->Enter += gcnew System::EventHandler(this, &bcalculator::textBox1_Enter);
			this->textBox1->Leave += gcnew System::EventHandler(this, &bcalculator::textBox1_Leave);
			// 
			// textBox3
			// 
			this->textBox3->ForeColor = System::Drawing::SystemColors::WindowFrame;
			this->textBox3->Location = System::Drawing::Point(142, 44);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(76, 20);
			this->textBox3->TabIndex = 3;
			this->textBox3->Text = L"Number";
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &bcalculator::textBox3_TextChanged);
			this->textBox3->Enter += gcnew System::EventHandler(this, &bcalculator::textBox3_Enter);
			this->textBox3->Leave += gcnew System::EventHandler(this, &bcalculator::textBox3_Leave);
			// 
			// textBox4
			// 
			this->textBox4->Enabled = false;
			this->textBox4->ForeColor = System::Drawing::SystemColors::WindowFrame;
			this->textBox4->Location = System::Drawing::Point(248, 44);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 20);
			this->textBox4->TabIndex = 4;
			this->textBox4->Text = L"Answer";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(224, 45);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(18, 20);
			this->label2->TabIndex = 5;
			this->label2->Text = L"=";
			this->label2->Click += gcnew System::EventHandler(this, &bcalculator::label2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 82);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(336, 23);
			this->button1->TabIndex = 6;
			this->button1->Text = L"Calculate";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &bcalculator::button1_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(6) { L"+", L"-", L"*", L"/", L"^", L"√" });
			this->comboBox1->Location = System::Drawing::Point(89, 44);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(47, 21);
			this->comboBox1->TabIndex = 7;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &bcalculator::comboBox1_SelectedIndexChanged);
			this->comboBox1->TextUpdate += gcnew System::EventHandler(this, &bcalculator::comboBox1_TextUpdate);
			// 
			// bcalculator
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(360, 117);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"bcalculator";
			this->Text = L"basic calculator";
			this->Load += gcnew System::EventHandler(this, &bcalculator::bcalculator_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void bcalculator_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	float x, y;
	float z = 0;
	bool err = false;
	if (!Int32::TryParse(textBox1->Text, x)) { // runs thru a check if theres digits
		err = true;
	}
	else x = int::Parse(textBox1->Text);
	if (textBox3->Text == "") err = true;
	else y = int::Parse(textBox3->Text);
	char sign = '&';
	sign = Convert::ToChar(comboBox1->SelectedItem->ToString());
	if (comboBox1->SelectedIndex == 5) sign = '#'; // workaround cuz it doesnt accept sqr root symbol
	switch (sign) {

	case '+':
		z = x + y;
		break;
	case '-':
		z = x - y;
		break;
	case '/':
		z = x / y;
		if (y == 0) {
			textBox4->Text = "Error: Cannot divide by 0";
			return;
		}
		break;
	case '*':
		z = x * y;
		break;
	case '^':
		z = pow(x, y);
		break;
	case '#':
		z = sqrt(x);
		break;
	}
	textBox4->Text = z.ToString();
}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	if (comboBox1->SelectedItem->ToString() == "√") textBox3->Enabled = false;
}

private: System::Void textBox3_Enter(System::Object^ sender, System::EventArgs^ e) {
	if (textBox3->Text == "Number") {
		textBox3->Text = "";
		textBox3->ForeColor = System::Drawing::SystemColors::WindowText;
	}
}
private: System::Void textBox3_Leave(System::Object^ sender, System::EventArgs^ e) {
	if (textBox3->Text == "") {
		textBox3->Text = "Number";
		textBox3->ForeColor = System::Drawing::SystemColors::WindowFrame;
	}
}

private: System::Void textBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Text == "Number") {
		textBox1->Text = "";
		textBox1->ForeColor = System::Drawing::SystemColors::WindowText;
	}
}
private: System::Void textBox1_Leave(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Text == "") {
		textBox1->Text = "Number";
		textBox1->ForeColor = System::Drawing::SystemColors::WindowFrame;
	}
}

private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void comboBox1_TextUpdate(System::Object^ sender, System::EventArgs^ e) {
	char sign = '&';
	sign = Convert::ToChar(comboBox1->SelectedItem->ToString());
	if (sign == '/*') sign = '#';
	switch (sign) {

	case '+':
		label1->Text = "Addition:";
		break;
	case '-':
		label1->Text = "Subtraction:";
		break;
	case '/':
		label1->Text = "Division:";
		break;
	case '*':
		label1->Text = "Multiplication:";
		break;
	case '^':
		label1->Text = "To the power of:";
		break;
	case '#':
		label1->Text = "Root of:";
		break;
	}

}
};
}
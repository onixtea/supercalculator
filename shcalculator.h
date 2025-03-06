#pragma once

namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for shcalculator
	/// </summary>
	public ref class shcalculator : public System::Windows::Forms::Form
	{
	public:
		shcalculator(void)
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
		~shcalculator()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::ComboBox^ comboBox1;


	private: System::Windows::Forms::DomainUpDown^ domainUpDown1;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::LinkLabel^ linkLabel1;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ button1;




	protected:

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
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->domainUpDown1 = (gcnew System::Windows::Forms::DomainUpDown());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(208, 22);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(169, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"SHOPPING CART CALCULATOR";
			// 
			// pictureBox1
			// 
			this->pictureBox1->ImageLocation = L"carts\\nocart.png";
			this->pictureBox1->Location = System::Drawing::Point(211, 101);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(166, 166);
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &shcalculator::pictureBox1_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(4) {
				L"metal heavy duty shopping cart", L"recycled plastic shopping cart",
					L"handbasket", L"rolling handbasket"
			});
			this->comboBox1->Location = System::Drawing::Point(89, 337);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(424, 21);
			this->comboBox1->TabIndex = 2;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &shcalculator::comboBox1_SelectedIndexChanged);
			// 
			// domainUpDown1
			// 
			this->domainUpDown1->Location = System::Drawing::Point(89, 379);
			this->domainUpDown1->Name = L"domainUpDown1";
			this->domainUpDown1->Size = System::Drawing::Size(120, 20);
			this->domainUpDown1->TabIndex = 5;
			this->domainUpDown1->Text = L"domainUpDown1";
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(266, 378);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(121, 21);
			this->comboBox2->TabIndex = 6;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(408, 381);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(86, 13);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Pricing based on";
			// 
			// linkLabel1
			// 
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->Location = System::Drawing::Point(490, 381);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(91, 13);
			this->linkLabel1->TabIndex = 8;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"the discount table";
			this->linkLabel1->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &shcalculator::linkLabel1_LinkClicked);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->label4->Location = System::Drawing::Point(225, 381);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(25, 13);
			this->label4->TabIndex = 10;
			this->label4->Text = L"OR";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(327, 470);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(100, 13);
			this->label5->TabIndex = 11;
			this->label5->Text = L"price will amount to:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(186)));
			this->label6->Location = System::Drawing::Point(433, 449);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(148, 39);
			this->label6->TabIndex = 12;
			this->label6->Text = L"399.99$";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(81, 460);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(128, 23);
			this->button1->TabIndex = 13;
			this->button1->Text = L"Delivery Date";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// shcalculator
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(593, 510);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->linkLabel1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->domainUpDown1);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label1);
			this->Name = L"shcalculator";
			this->Text = L"shcalculator";
			this->Load += gcnew System::EventHandler(this, &shcalculator::shcalculator_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void shcalculator_Load(System::Object^ sender, System::EventArgs^ e) {
	//	pictureBox1->Image = "nocart.png";
		domainUpDown1->Items->Add("select cart");
		domainUpDown1->SelectedIndex = 0;

	}
	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
    private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
					int selection = comboBox1->SelectedIndex;
					/* 0 = metal cart
					*  1 = plastic cart
					*  2 = handbasket
					*  3 = rolling handbasket
					* -1 = no cart */
					switch (selection) { // for changing image
					case 0:
						pictureBox1->ImageLocation = "carts\\metalcart\\metalcart.png";
                        pictureBox1->Size = System::Drawing::Size(646, 600);
						break;
					case 1:
						pictureBox1->ImageLocation = "carts\\plasticcart\\blackplasticcart.png";
						pictureBox1->Size = System::Drawing::Size(700, 700);
						break;
					case 2:
						pictureBox1->ImageLocation = "carts\\handcart\\blackhandcart.png";
						pictureBox1->Size = System::Drawing::Size(700, 700);
						break;
					case 3:
						pictureBox1->ImageLocation = "carts\\rollingcart\\blackrollingcart.png";
						pictureBox1->Size = System::Drawing::Size(700, 700);
						break;
					case -1:
						pictureBox1->ImageLocation = "carts\\shoppingcart.png";
						pictureBox1->Size = System::Drawing::Size(800, 445);
					}
					domainUpDown1->Items->Clear();
					switch (selection) { // for changing variety options
					case 0:
						domainUpDown1->Items->Add("blank");
						domainUpDown1->Items->Add("kid-size cart");
						break;
					case 1:
						domainUpDown1->Items->Add("black");
						domainUpDown1->Items->Add("blue");
						domainUpDown1->Items->Add("green");
						domainUpDown1->Items->Add("gray");
						domainUpDown1->Items->Add("red");
						break;
					case 2:
						domainUpDown1->Items->Add("black");
						domainUpDown1->Items->Add("blue");
						domainUpDown1->Items->Add("green");
						domainUpDown1->Items->Add("dark green");
						domainUpDown1->Items->Add("gray");
						domainUpDown1->Items->Add("red");
						domainUpDown1->Items->Add("metal wire");
						break;
					case 3:
						domainUpDown1->Items->Add("black");
						domainUpDown1->Items->Add("blue");
						domainUpDown1->Items->Add("green");
						domainUpDown1->Items->Add("red");
						break;
					default:
						domainUpDown1->Items->Add("select cart");
						break;
					}
					domainUpDown1->SelectedIndex = 0;
					domainUpDown1->Invalidate();  // Invalidate the control, marking it for a redraw
					domainUpDown1->Refresh();
    }
private: System::Void linkLabel1_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
}
};
}

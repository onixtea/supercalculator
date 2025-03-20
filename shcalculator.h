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



	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;






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
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(218, 21);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(169, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"SHOPPING CART CALCULATOR";
			// 
			// pictureBox1
			// 
			this->pictureBox1->ImageLocation = L"carts\\nocart.png";
			this->pictureBox1->Location = System::Drawing::Point(200, 101);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(200, 200);
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &shcalculator::pictureBox1_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
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
			this->domainUpDown1->Enabled = false;
			this->domainUpDown1->Location = System::Drawing::Point(89, 379);
			this->domainUpDown1->Name = L"domainUpDown1";
			this->domainUpDown1->ReadOnly = true;
			this->domainUpDown1->Size = System::Drawing::Size(120, 20);
			this->domainUpDown1->TabIndex = 5;
			this->domainUpDown1->Text = L"select cart";
			this->domainUpDown1->SelectedItemChanged += gcnew System::EventHandler(this, &shcalculator::domainUpDown1_SelectedItemChanged);
			// 
			// comboBox2
			// 
			this->comboBox2->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox2->Enabled = false;
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(1) { L"no livery" });
			this->comboBox2->Location = System::Drawing::Point(266, 378);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(121, 21);
			this->comboBox2->TabIndex = 6;
			this->comboBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &shcalculator::comboBox2_SelectedIndexChanged);
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
			this->label5->Location = System::Drawing::Point(327, 425);
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
			this->label6->Location = System::Drawing::Point(433, 404);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(148, 39);
			this->label6->TabIndex = 12;
			this->label6->Text = L"399.99$";
			// 
			// shcalculator
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(593, 456);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->domainUpDown1);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label1);
			this->Name = L"shcalculator";
			this->Text = L"shopping cart calculator";
			this->Load += gcnew System::EventHandler(this, &shcalculator::shcalculator_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void shcalculator_Load(System::Object^ sender, System::EventArgs^ e) {
	//	pictureBox1->Image = "nocart.png";
		comboBox2->SelectedIndex = 0;
	}
	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		UpdatePrice();
		comboBox2->Enabled = true; // so they start working once i say they start working
		domainUpDown1->Enabled = true;
		comboBox2->Items->Clear();
		int selection = comboBox1->SelectedIndex;
		/* 0 = metal cart
		*  1 = plastic cart
		*  2 = handbasket
		*  3 = rolling handbasket
		* -1 = no cart */
		switch (selection) { // for changing image
		case 0:
			pictureBox1->ImageLocation = "carts\\metalcart\\metalcart.png";
			break;
		case 1:
			pictureBox1->ImageLocation = "carts\\plasticcart\\blackplasticcart.png";
			break;
		case 2:
			pictureBox1->ImageLocation = "carts\\handcart\\blackhandcart.png";
			break;
		case 3:
			pictureBox1->ImageLocation = "carts\\rollingcart\\blackrollingcart.png";
			break;
		case -1:
			pictureBox1->ImageLocation = "carts\\shoppingcart.png";
		}
		domainUpDown1->Items->Clear(); // have to do this mess of code because it wont auto otherwise
		domainUpDown1->Items->Add("select cart");
		domainUpDown1->Items->Add("blank");
		domainUpDown1->Items->Add("kid-size cart");
		domainUpDown1->Items->Add("black");
		domainUpDown1->Items->Add("blue");
		domainUpDown1->Items->Add("green");
		domainUpDown1->Items->Add("dark green");
		domainUpDown1->Items->Add("gray");
		domainUpDown1->Items->Add("red");
		domainUpDown1->Items->Add("metal wire");
		switch (selection) { // for changing variety options
		case 0:
			domainUpDown1->Items->Remove("select cart");
			domainUpDown1->Items->Remove("black");
			domainUpDown1->Items->Remove("blue");
			domainUpDown1->Items->Remove("green");
			domainUpDown1->Items->Remove("dark green");
			domainUpDown1->Items->Remove("gray");
			domainUpDown1->Items->Remove("red");
			domainUpDown1->Items->Remove("metal wire");
			break;
		case 1:
			domainUpDown1->Items->Remove("select cart");
			domainUpDown1->Items->Remove("green");
			domainUpDown1->Items->Remove("metal wire");
			domainUpDown1->Items->Remove("blank");
			domainUpDown1->Items->Remove("kid-size cart");
			break;
		case 2:
			domainUpDown1->Items->Remove("select cart");
			domainUpDown1->Items->Remove("blank");
			domainUpDown1->Items->Remove("kid-size cart");
			break;
		case 3:
			domainUpDown1->Items->Remove("select cart");
			domainUpDown1->Items->Remove("dark green");
			domainUpDown1->Items->Remove("gray");
			domainUpDown1->Items->Remove("metal wire");
			domainUpDown1->Items->Remove("blank");
			domainUpDown1->Items->Remove("kid-size cart");
			break;
		}
		domainUpDown1->SelectedIndex = 0;

		switch (selection) { // for changing livery options
		case 0:
			comboBox2->Items->Add("no livery");
			comboBox2->Items->Add("iki livery");
			comboBox2->Items->Add("maxima livery");
			comboBox2->Items->Add("rimi livery");
			comboBox2->Items->Add("lidl livery");
			break;
		case 1:
			comboBox2->Items->Add("no livery");
			comboBox2->Items->Add("iki livery");
			comboBox2->Items->Add("maxima livery");
			comboBox2->Items->Add("rimi livery");
			comboBox2->Items->Add("lidl livery");
			break;
		case 2:
			comboBox2->Items->Add("no livery");
			comboBox2->Items->Add("exclusive maxima livery");
			break;
		case 3:
			comboBox2->Items->Add("no livery");
			break;
		}
	}
private: System::Void linkLabel1_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
}
private: System::Void comboBox2_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	UpdatePrice();
	if (comboBox2->SelectedIndex != 0) domainUpDown1->Enabled = false;
	else domainUpDown1->Enabled = true;
	int selectedIndex1 = comboBox1->SelectedIndex;
	int selectedIndex2 = comboBox2->SelectedIndex;
	if (selectedIndex1 >= 0 && selectedIndex1 <= 1) {
		if (selectedIndex2 >= 1 && selectedIndex2 <= 4) {
			switch (selectedIndex2) {
			case 1:
				pictureBox1->ImageLocation = "carts\\shopcarts\\ikicart.png";
				break;
			case 2:
				pictureBox1->ImageLocation = "carts\\shopcarts\\maximacart.png";
				break;
			case 3:
				pictureBox1->ImageLocation = "carts\\shopcarts\\rimicart.png";
				break;
			case 4:
				pictureBox1->ImageLocation = "carts\\shopcarts\\lidlcart.png";
				break;
			}
		}
		if (selectedIndex1 == 2) {
			switch (selectedIndex1) {
			case 0:
				pictureBox1->ImageLocation = "";
				break;
			case 1:
				pictureBox1->ImageLocation = "";
				break;
			case 2:
				pictureBox1->ImageLocation = "carts\\shopcarts\\maximacarter.png";
				break;
			default:
				pictureBox1->ImageLocation = "";
				break;
			}
		}
	}

}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void UpdatePrice() {
	double basePrice = 0.0;
	double additionalPrice = 0.0;

	
	switch (comboBox1->SelectedIndex) {
	case 0: basePrice = 253.96; break;
	case 1: basePrice = 288.86; break;
	case 2: basePrice = 14.9; break;
	case 3: basePrice = 35.5;
	}

	if (comboBox2->SelectedIndex >= 1 && comboBox2->SelectedIndex <= 4) additionalPrice = 80;

	else if (domainUpDown1->SelectedIndex != 0) additionalPrice += 30;

	double finalPrice = basePrice + additionalPrice;

	label6->Text = finalPrice.ToString("F2") + "$";
}
private: System::Void domainUpDown1_SelectedItemChanged(System::Object^ sender, System::EventArgs^ e) {
	UpdatePrice();
	String^ selectedItem = domainUpDown1->Text;
	if (comboBox1->SelectedIndex == 0) {
		if (selectedItem == "blank") {
			pictureBox1->ImageLocation = "carts\\metalcart\\metalcart.png";
		}
		else if (selectedItem == "kid-size cart") {
			pictureBox1->ImageLocation = "carts\\metalcart\\kidmetalcart.png";
		}
	}
	if (comboBox1->SelectedIndex == 1) {
		if (selectedItem == "black") {
			pictureBox1->ImageLocation = "carts\\plasticcart\\blackplasticcart.png";
		}
		else if (selectedItem == "blue") {
			pictureBox1->ImageLocation = "carts\\plasticcart\\blueplasticcart.png";
		}
		else if (selectedItem == "dark green") {
			pictureBox1->ImageLocation = "carts\\plasticcart\\darkgreenplasticcart.png";
		}
		else if (selectedItem == "gray") {
			pictureBox1->ImageLocation = "carts\\plasticcart\\greyplasticcart.png";
		}
		else if (selectedItem == "red") {
			pictureBox1->ImageLocation = "carts\\plasticcart\\redplasticcart.png";
		}
	}
	if (comboBox1->SelectedIndex == 2) {
		if (selectedItem == "black") {
			pictureBox1->ImageLocation = "carts\\handcart\\blackhandcart.png";
		}
		else if (selectedItem == "blue") {
			pictureBox1->ImageLocation = "carts\\handcart\\bluehandcart.png";
		}
		else if (selectedItem == "green") {
			pictureBox1->ImageLocation = "carts\\handcart\\greenhandcart.png";
		}
		else if (selectedItem == "dark green") {
			pictureBox1->ImageLocation = "carts\\handcart\\darkgreenhandcart.png";
		}
		else if (selectedItem == "gray") {
			pictureBox1->ImageLocation = "carts\\handcart\\greyhandcart.png";
		}
		else if (selectedItem == "red") {
			pictureBox1->ImageLocation = "carts\\handcart\\redhandcart.png";
		}
		else if (selectedItem == "metal wire") {
			pictureBox1->ImageLocation = "carts\\handcart\\wirehandcart.png";
		}

	}
	if (comboBox1->SelectedIndex == 3) {
		if (selectedItem == "black") {
			pictureBox1->ImageLocation = "carts\\rollingcart\\blackrollingcart.png";
		}
		else if (selectedItem == "blue") {
			pictureBox1->ImageLocation = "carts\\rollingcart\\bluerollingcart.png";
		}
		else if (selectedItem == "green") {
			pictureBox1->ImageLocation = "carts\\rollingcart\\greenrollingcart.png";
		}
		else if (selectedItem == "red") {
			pictureBox1->ImageLocation = "carts\\rollingcart\\redrollingcart.png";
		}
	}
}		
};
}

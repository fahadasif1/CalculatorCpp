#pragma once

namespace CalculatorCpp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;




	private: System::Windows::Forms::Button^ addButton;
	private: System::Windows::Forms::Button^ cButton;
	private: System::Windows::Forms::Button^ equalsButton;
	private: System::Windows::Forms::Button^ oneButton;
	private: System::Windows::Forms::Button^ twoButton;
	private: System::Windows::Forms::Button^ threeButton;
	private: System::Windows::Forms::Button^ zeroButton;

	private: System::Windows::Forms::Button^ fourButton;
	private: System::Windows::Forms::Button^ fiveButton;
	private: System::Windows::Forms::Button^ sixButton;
	private: System::Windows::Forms::Button^ sevenButton;





	private: System::Windows::Forms::Button^ eightButton;

	private: System::Windows::Forms::Button^ nineButton;
	private: System::Windows::Forms::Button^ subtractButton;
	private: System::Windows::Forms::Button^ multiplyButton;
	private: System::Windows::Forms::Button^ divideButton;













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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->addButton = (gcnew System::Windows::Forms::Button());
			this->cButton = (gcnew System::Windows::Forms::Button());
			this->equalsButton = (gcnew System::Windows::Forms::Button());
			this->oneButton = (gcnew System::Windows::Forms::Button());
			this->twoButton = (gcnew System::Windows::Forms::Button());
			this->threeButton = (gcnew System::Windows::Forms::Button());
			this->zeroButton = (gcnew System::Windows::Forms::Button());
			this->fourButton = (gcnew System::Windows::Forms::Button());
			this->fiveButton = (gcnew System::Windows::Forms::Button());
			this->sixButton = (gcnew System::Windows::Forms::Button());
			this->sevenButton = (gcnew System::Windows::Forms::Button());
			this->eightButton = (gcnew System::Windows::Forms::Button());
			this->nineButton = (gcnew System::Windows::Forms::Button());
			this->subtractButton = (gcnew System::Windows::Forms::Button());
			this->multiplyButton = (gcnew System::Windows::Forms::Button());
			this->divideButton = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(25, 12);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(149, 38);
			this->textBox1->TabIndex = 0;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			this->textBox1->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::textBox1_KeyDown);
			// 
			// addButton
			// 
			this->addButton->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->addButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->addButton->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->addButton->FlatAppearance->BorderSize = 0;
			this->addButton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->addButton->Location = System::Drawing::Point(135, 174);
			this->addButton->Name = L"addButton";
			this->addButton->Size = System::Drawing::Size(27, 32);
			this->addButton->TabIndex = 4;
			this->addButton->Text = L"+";
			this->addButton->UseVisualStyleBackColor = false;
			this->addButton->Click += gcnew System::EventHandler(this, &MyForm::addButton_Click);
			// 
			// cButton
			// 
			this->cButton->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->cButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->cButton->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->cButton->FlatAppearance->BorderSize = 0;
			this->cButton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->cButton->Location = System::Drawing::Point(35, 60);
			this->cButton->Name = L"cButton";
			this->cButton->Size = System::Drawing::Size(94, 32);
			this->cButton->TabIndex = 5;
			this->cButton->Text = L"c";
			this->cButton->UseVisualStyleBackColor = false;
			this->cButton->Click += gcnew System::EventHandler(this, &MyForm::cButton_Click_1);
			// 
			// equalsButton
			// 
			this->equalsButton->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->equalsButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->equalsButton->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->equalsButton->FlatAppearance->BorderSize = 0;
			this->equalsButton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->equalsButton->Location = System::Drawing::Point(135, 212);
			this->equalsButton->Name = L"equalsButton";
			this->equalsButton->Size = System::Drawing::Size(27, 32);
			this->equalsButton->TabIndex = 6;
			this->equalsButton->Text = L"=";
			this->equalsButton->UseVisualStyleBackColor = false;
			this->equalsButton->Click += gcnew System::EventHandler(this, &MyForm::equalsButton_Click);
			// 
			// oneButton
			// 
			this->oneButton->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->oneButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->oneButton->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->oneButton->FlatAppearance->BorderSize = 0;
			this->oneButton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->oneButton->Location = System::Drawing::Point(35, 174);
			this->oneButton->Name = L"oneButton";
			this->oneButton->Size = System::Drawing::Size(27, 32);
			this->oneButton->TabIndex = 7;
			this->oneButton->Text = L"1";
			this->oneButton->UseVisualStyleBackColor = false;
			this->oneButton->Click += gcnew System::EventHandler(this, &MyForm::oneButton_Click);
			// 
			// twoButton
			// 
			this->twoButton->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->twoButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->twoButton->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->twoButton->FlatAppearance->BorderSize = 0;
			this->twoButton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->twoButton->Location = System::Drawing::Point(69, 174);
			this->twoButton->Name = L"twoButton";
			this->twoButton->Size = System::Drawing::Size(27, 32);
			this->twoButton->TabIndex = 8;
			this->twoButton->Text = L"2";
			this->twoButton->UseVisualStyleBackColor = false;
			this->twoButton->Click += gcnew System::EventHandler(this, &MyForm::twoButton_Click);
			// 
			// threeButton
			// 
			this->threeButton->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->threeButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->threeButton->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->threeButton->FlatAppearance->BorderSize = 0;
			this->threeButton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->threeButton->Location = System::Drawing::Point(102, 174);
			this->threeButton->Name = L"threeButton";
			this->threeButton->Size = System::Drawing::Size(27, 32);
			this->threeButton->TabIndex = 9;
			this->threeButton->Text = L"3";
			this->threeButton->UseVisualStyleBackColor = false;
			this->threeButton->Click += gcnew System::EventHandler(this, &MyForm::threeButton_Click);
			// 
			// zeroButton
			// 
			this->zeroButton->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->zeroButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->zeroButton->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->zeroButton->FlatAppearance->BorderSize = 0;
			this->zeroButton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->zeroButton->Location = System::Drawing::Point(35, 212);
			this->zeroButton->Name = L"zeroButton";
			this->zeroButton->Size = System::Drawing::Size(94, 32);
			this->zeroButton->TabIndex = 10;
			this->zeroButton->Text = L"0";
			this->zeroButton->UseVisualStyleBackColor = false;
			this->zeroButton->Click += gcnew System::EventHandler(this, &MyForm::zeroButton_Click);
			// 
			// fourButton
			// 
			this->fourButton->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->fourButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->fourButton->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->fourButton->FlatAppearance->BorderSize = 0;
			this->fourButton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->fourButton->Location = System::Drawing::Point(35, 136);
			this->fourButton->Name = L"fourButton";
			this->fourButton->Size = System::Drawing::Size(27, 32);
			this->fourButton->TabIndex = 12;
			this->fourButton->Text = L"4";
			this->fourButton->UseVisualStyleBackColor = false;
			this->fourButton->Click += gcnew System::EventHandler(this, &MyForm::fourButton_Click);
			// 
			// fiveButton
			// 
			this->fiveButton->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->fiveButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->fiveButton->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->fiveButton->FlatAppearance->BorderSize = 0;
			this->fiveButton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->fiveButton->Location = System::Drawing::Point(69, 136);
			this->fiveButton->Name = L"fiveButton";
			this->fiveButton->Size = System::Drawing::Size(27, 32);
			this->fiveButton->TabIndex = 13;
			this->fiveButton->Text = L"5";
			this->fiveButton->UseVisualStyleBackColor = false;
			this->fiveButton->Click += gcnew System::EventHandler(this, &MyForm::fiveButton_Click);
			// 
			// sixButton
			// 
			this->sixButton->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->sixButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->sixButton->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->sixButton->FlatAppearance->BorderSize = 0;
			this->sixButton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->sixButton->Location = System::Drawing::Point(102, 136);
			this->sixButton->Name = L"sixButton";
			this->sixButton->Size = System::Drawing::Size(27, 32);
			this->sixButton->TabIndex = 14;
			this->sixButton->Text = L"6";
			this->sixButton->UseVisualStyleBackColor = false;
			this->sixButton->Click += gcnew System::EventHandler(this, &MyForm::sixButton_Click);
			// 
			// sevenButton
			// 
			this->sevenButton->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->sevenButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->sevenButton->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->sevenButton->FlatAppearance->BorderSize = 0;
			this->sevenButton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->sevenButton->Location = System::Drawing::Point(35, 98);
			this->sevenButton->Name = L"sevenButton";
			this->sevenButton->Size = System::Drawing::Size(27, 32);
			this->sevenButton->TabIndex = 15;
			this->sevenButton->Text = L"7";
			this->sevenButton->UseVisualStyleBackColor = false;
			this->sevenButton->Click += gcnew System::EventHandler(this, &MyForm::sevenButton_Click);
			// 
			// eightButton
			// 
			this->eightButton->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->eightButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->eightButton->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->eightButton->FlatAppearance->BorderSize = 0;
			this->eightButton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->eightButton->Location = System::Drawing::Point(69, 98);
			this->eightButton->Name = L"eightButton";
			this->eightButton->Size = System::Drawing::Size(27, 32);
			this->eightButton->TabIndex = 16;
			this->eightButton->Text = L"8";
			this->eightButton->UseVisualStyleBackColor = false;
			this->eightButton->Click += gcnew System::EventHandler(this, &MyForm::eightButton_Click);
			// 
			// nineButton
			// 
			this->nineButton->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->nineButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->nineButton->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->nineButton->FlatAppearance->BorderSize = 0;
			this->nineButton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->nineButton->Location = System::Drawing::Point(102, 98);
			this->nineButton->Name = L"nineButton";
			this->nineButton->Size = System::Drawing::Size(27, 32);
			this->nineButton->TabIndex = 17;
			this->nineButton->Text = L"9";
			this->nineButton->UseVisualStyleBackColor = false;
			this->nineButton->Click += gcnew System::EventHandler(this, &MyForm::nineButton_Click);
			// 
			// subtractButton
			// 
			this->subtractButton->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->subtractButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->subtractButton->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->subtractButton->FlatAppearance->BorderSize = 0;
			this->subtractButton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->subtractButton->Location = System::Drawing::Point(135, 136);
			this->subtractButton->Name = L"subtractButton";
			this->subtractButton->Size = System::Drawing::Size(27, 32);
			this->subtractButton->TabIndex = 18;
			this->subtractButton->Text = L"-";
			this->subtractButton->UseVisualStyleBackColor = false;
			this->subtractButton->Click += gcnew System::EventHandler(this, &MyForm::subtractButton_Click);
			// 
			// multiplyButton
			// 
			this->multiplyButton->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->multiplyButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->multiplyButton->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->multiplyButton->FlatAppearance->BorderSize = 0;
			this->multiplyButton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->multiplyButton->Location = System::Drawing::Point(135, 98);
			this->multiplyButton->Name = L"multiplyButton";
			this->multiplyButton->Size = System::Drawing::Size(27, 32);
			this->multiplyButton->TabIndex = 19;
			this->multiplyButton->Text = L"*";
			this->multiplyButton->UseVisualStyleBackColor = false;
			this->multiplyButton->Click += gcnew System::EventHandler(this, &MyForm::multiplyButton_Click);
			// 
			// divideButton
			// 
			this->divideButton->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->divideButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->divideButton->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->divideButton->FlatAppearance->BorderSize = 0;
			this->divideButton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->divideButton->Location = System::Drawing::Point(135, 60);
			this->divideButton->Name = L"divideButton";
			this->divideButton->Size = System::Drawing::Size(27, 32);
			this->divideButton->TabIndex = 20;
			this->divideButton->Text = L"/";
			this->divideButton->UseVisualStyleBackColor = false;
			this->divideButton->Click += gcnew System::EventHandler(this, &MyForm::divideButton_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(196, 261);
			this->Controls->Add(this->divideButton);
			this->Controls->Add(this->multiplyButton);
			this->Controls->Add(this->subtractButton);
			this->Controls->Add(this->nineButton);
			this->Controls->Add(this->eightButton);
			this->Controls->Add(this->sevenButton);
			this->Controls->Add(this->sixButton);
			this->Controls->Add(this->fiveButton);
			this->Controls->Add(this->fourButton);
			this->Controls->Add(this->zeroButton);
			this->Controls->Add(this->threeButton);
			this->Controls->Add(this->twoButton);
			this->Controls->Add(this->oneButton);
			this->Controls->Add(this->equalsButton);
			this->Controls->Add(this->cButton);
			this->Controls->Add(this->addButton);
			this->Controls->Add(this->textBox1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		// add negative number dealing in calculator
		//add decimals in calculator

		int keyPressTrue = 0;
		int buttonPressTrue = 0;
		int operationCheck = 0;

		//int output = 0;
		String^ str1;
		

	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	
		
		
	}

private: System::Void textBox1_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {

	if (keyPressTrue == 1) {
		textBox1->Clear();

	}
	keyPressTrue = 0;
}

private: System::Void cButton_Click_1(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Clear();
}
private: System::Void equalsButton_Click(System::Object^ sender, System::EventArgs^ e) {


	String^ str2 = gcnew String(textBox1->Text);

	int conversion1 = System::Convert::ToInt16(str1);
	int conversion2 = System::Convert::ToInt16(str2);

	int output = 0;

	if (operationCheck == 1) {
		 output = conversion1 + conversion2;
	
	}
	else if (operationCheck == 2) {
		 output = conversion1 - conversion2;
	
	}
	else if(operationCheck==3) {
		output = conversion1 * conversion2;
	
	}
	else if (operationCheck == 4) {
	 output = conversion1 / conversion2;
	
	}
	
	
	
	
	textBox1->Text = System::Convert::ToString(output);


	

}
private: System::Void oneButton_Click(System::Object^ sender, System::EventArgs^ e) {
	if (buttonPressTrue == 1) {
		textBox1->Clear();

	}
	
	textBox1->AppendText("1");

	buttonPressTrue = 0;


}
private: System::Void twoButton_Click(System::Object^ sender, System::EventArgs^ e) {

	if (buttonPressTrue == 1) {
		textBox1->Clear();

	}

	textBox1->AppendText("2");
	
	buttonPressTrue = 0;

}
private: System::Void threeButton_Click(System::Object^ sender, System::EventArgs^ e) {
	if (buttonPressTrue == 1) {
		textBox1->Clear();

	}

	textBox1->AppendText("3");

	buttonPressTrue = 0;

}
private: System::Void fourButton_Click(System::Object^ sender, System::EventArgs^ e) {

	if (buttonPressTrue == 1) {
		textBox1->Clear();

	}

	textBox1->AppendText("4");

	buttonPressTrue = 0;

}
private: System::Void fiveButton_Click(System::Object^ sender, System::EventArgs^ e) {
	if (buttonPressTrue == 1) {
		textBox1->Clear();

	}

	textBox1->AppendText("5");

	buttonPressTrue = 0;

}
private: System::Void sixButton_Click(System::Object^ sender, System::EventArgs^ e) {

	if (buttonPressTrue == 1) {
		textBox1->Clear();

	}

	textBox1->AppendText("6");

	buttonPressTrue = 0;

}
private: System::Void sevenButton_Click(System::Object^ sender, System::EventArgs^ e) {

	if (buttonPressTrue == 1) {
		textBox1->Clear();

	}

	textBox1->AppendText("7");

	buttonPressTrue = 0;
}
private: System::Void eightButton_Click(System::Object^ sender, System::EventArgs^ e) {

	if (buttonPressTrue == 1) {
		textBox1->Clear();

	}

	textBox1->AppendText("8");

	buttonPressTrue = 0;

}
private: System::Void nineButton_Click(System::Object^ sender, System::EventArgs^ e) {
	if (buttonPressTrue == 1) {
		textBox1->Clear();

	}

	textBox1->AppendText("9");

	buttonPressTrue = 0;

}
private: System::Void zeroButton_Click(System::Object^ sender, System::EventArgs^ e) {

	if (buttonPressTrue == 1) {
		textBox1->Clear();

	}

	textBox1->AppendText("0");

	buttonPressTrue = 0;

}

private: System::Void addButton_Click(System::Object^ sender, System::EventArgs^ e) {
	str1 = gcnew String(textBox1->Text);
	keyPressTrue = 1;
	buttonPressTrue = 1;
	operationCheck = 1;
	textBox1->Focus();



}

private: System::Void subtractButton_Click(System::Object^ sender, System::EventArgs^ e) {
	str1 = gcnew String(textBox1->Text);
	keyPressTrue = 1;
	buttonPressTrue = 1;
	operationCheck = 2;
	textBox1->Focus();

}
private: System::Void multiplyButton_Click(System::Object^ sender, System::EventArgs^ e) {
	str1 = gcnew String(textBox1->Text);
	keyPressTrue = 1;
	buttonPressTrue = 1;
	operationCheck = 3;
	textBox1->Focus();


}
private: System::Void divideButton_Click(System::Object^ sender, System::EventArgs^ e) {

	str1 = gcnew String(textBox1->Text);
	keyPressTrue = 1;
	buttonPressTrue = 1;
	operationCheck = 4;
	textBox1->Focus();

}

};
}

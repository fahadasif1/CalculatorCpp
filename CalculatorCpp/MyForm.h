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
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(12, 12);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(260, 38);
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
			this->addButton->Location = System::Drawing::Point(45, 56);
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
			this->cButton->Location = System::Drawing::Point(12, 56);
			this->cButton->Name = L"cButton";
			this->cButton->Size = System::Drawing::Size(27, 32);
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
			this->equalsButton->Location = System::Drawing::Point(245, 217);
			this->equalsButton->Name = L"equalsButton";
			this->equalsButton->Size = System::Drawing::Size(27, 32);
			this->equalsButton->TabIndex = 6;
			this->equalsButton->Text = L"=";
			this->equalsButton->UseVisualStyleBackColor = false;
			this->equalsButton->Click += gcnew System::EventHandler(this, &MyForm::equalsButton_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
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

		int ture = 0;

		int output = 0;
		String^ str1;
		

	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	
		
		
	}

private: System::Void textBox1_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {

	if (ture == 1) {
		textBox1->Clear();

	}
	ture = 0;
}
private: System::Void addButton_Click(System::Object^ sender, System::EventArgs^ e) {
	str1 = gcnew String(textBox1->Text);
	ture = 1;

	textBox1->Focus();

	

}
private: System::Void cButton_Click_1(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Clear();
}
private: System::Void equalsButton_Click(System::Object^ sender, System::EventArgs^ e) {


	String^ str2 = gcnew String(textBox1->Text);

	output = System::Convert::ToInt16(str1) + System::Convert::ToInt16(str2);
	textBox1->Text = System::Convert::ToString(output);


	

}
};
}

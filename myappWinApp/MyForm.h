#pragma once

namespace myappWinApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ close;
	private: System::Windows::Forms::Label^ label1;



	private: System::Windows::Forms::Button^ drob;
	private: System::Windows::Forms::Button^ seven;
	private: System::Windows::Forms::Button^ eight;
	private: System::Windows::Forms::Button^ nine;
	private: System::Windows::Forms::Button^ multiply;
	private: System::Windows::Forms::Button^ four;
	private: System::Windows::Forms::Button^ five;
	private: System::Windows::Forms::Button^ six;
	private: System::Windows::Forms::Button^ minus;
	private: System::Windows::Forms::Button^ one;
	private: System::Windows::Forms::Button^ two;
	private: System::Windows::Forms::Button^ three;
	private: System::Windows::Forms::Button^ plus;
	private: int firstnum;
	private: char useraction;

















	private: System::Windows::Forms::Button^ zero;
	private: System::Windows::Forms::Button^ dot;
	private: System::Windows::Forms::Button^ equal;




	protected:

	protected:

	protected:




	protected:


	protected:

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->close = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->drob = (gcnew System::Windows::Forms::Button());
			this->seven = (gcnew System::Windows::Forms::Button());
			this->eight = (gcnew System::Windows::Forms::Button());
			this->nine = (gcnew System::Windows::Forms::Button());
			this->multiply = (gcnew System::Windows::Forms::Button());
			this->four = (gcnew System::Windows::Forms::Button());
			this->five = (gcnew System::Windows::Forms::Button());
			this->six = (gcnew System::Windows::Forms::Button());
			this->minus = (gcnew System::Windows::Forms::Button());
			this->one = (gcnew System::Windows::Forms::Button());
			this->two = (gcnew System::Windows::Forms::Button());
			this->three = (gcnew System::Windows::Forms::Button());
			this->plus = (gcnew System::Windows::Forms::Button());
			this->zero = (gcnew System::Windows::Forms::Button());
			this->dot = (gcnew System::Windows::Forms::Button());
			this->equal = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// close
			// 
			this->close->BackColor = System::Drawing::Color::Firebrick;
			this->close->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->close->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->close->Location = System::Drawing::Point(289, 12);
			this->close->Name = L"close";
			this->close->Size = System::Drawing::Size(35, 29);
			this->close->TabIndex = 0;
			this->close->Text = L"X";
			this->close->UseVisualStyleBackColor = false;
			this->close->Click += gcnew System::EventHandler(this, &MyForm::close_Click);
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Location = System::Drawing::Point(12, 12);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(311, 50);
			this->label1->TabIndex = 1;
			this->label1->Text = L"0";
			// 
			// drob
			// 
			this->drob->BackColor = System::Drawing::Color::Orange;
			this->drob->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->drob->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->drob->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->drob->Location = System::Drawing::Point(250, 85);
			this->drob->Name = L"drob";
			this->drob->Size = System::Drawing::Size(75, 59);
			this->drob->TabIndex = 5;
			this->drob->Text = L"/";
			this->drob->UseVisualStyleBackColor = false;
			this->drob->Click += gcnew System::EventHandler(this, &MyForm::drob_Click);
			// 
			// seven
			// 
			this->seven->BackColor = System::Drawing::Color::Gray;
			this->seven->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->seven->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->seven->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->seven->Location = System::Drawing::Point(3, 85);
			this->seven->Name = L"seven";
			this->seven->Size = System::Drawing::Size(75, 62);
			this->seven->TabIndex = 6;
			this->seven->Text = L"7";
			this->seven->UseVisualStyleBackColor = false;
			this->seven->Click += gcnew System::EventHandler(this, &MyForm::btnnumber_Click);
			// 
			// eight
			// 
			this->eight->BackColor = System::Drawing::Color::Gray;
			this->eight->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->eight->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->eight->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->eight->Location = System::Drawing::Point(84, 85);
			this->eight->Name = L"eight";
			this->eight->Size = System::Drawing::Size(75, 62);
			this->eight->TabIndex = 7;
			this->eight->Text = L"8";
			this->eight->UseVisualStyleBackColor = false;
			this->eight->Click += gcnew System::EventHandler(this, &MyForm::btnnumber_Click);
			// 
			// nine
			// 
			this->nine->BackColor = System::Drawing::Color::Gray;
			this->nine->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->nine->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->nine->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->nine->Location = System::Drawing::Point(165, 85);
			this->nine->Name = L"nine";
			this->nine->Size = System::Drawing::Size(75, 62);
			this->nine->TabIndex = 8;
			this->nine->Text = L"9";
			this->nine->UseVisualStyleBackColor = false;
			this->nine->Click += gcnew System::EventHandler(this, &MyForm::btnnumber_Click);
			// 
			// multiply
			// 
			this->multiply->BackColor = System::Drawing::Color::Orange;
			this->multiply->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->multiply->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->multiply->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->multiply->Location = System::Drawing::Point(249, 150);
			this->multiply->Name = L"multiply";
			this->multiply->Size = System::Drawing::Size(75, 62);
			this->multiply->TabIndex = 9;
			this->multiply->Text = L"*";
			this->multiply->UseVisualStyleBackColor = false;
			this->multiply->Click += gcnew System::EventHandler(this, &MyForm::multiply_Click);
			// 
			// four
			// 
			this->four->BackColor = System::Drawing::Color::Gray;
			this->four->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->four->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->four->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->four->Location = System::Drawing::Point(3, 159);
			this->four->Name = L"four";
			this->four->Size = System::Drawing::Size(75, 53);
			this->four->TabIndex = 10;
			this->four->Text = L"4";
			this->four->UseVisualStyleBackColor = false;
			this->four->Click += gcnew System::EventHandler(this, &MyForm::btnnumber_Click);
			// 
			// five
			// 
			this->five->BackColor = System::Drawing::Color::Gray;
			this->five->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->five->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->five->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->five->Location = System::Drawing::Point(84, 159);
			this->five->Name = L"five";
			this->five->Size = System::Drawing::Size(75, 53);
			this->five->TabIndex = 11;
			this->five->Text = L"5";
			this->five->UseVisualStyleBackColor = false;
			this->five->Click += gcnew System::EventHandler(this, &MyForm::btnnumber_Click);
			// 
			// six
			// 
			this->six->BackColor = System::Drawing::Color::Gray;
			this->six->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->six->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->six->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->six->Location = System::Drawing::Point(165, 159);
			this->six->Name = L"six";
			this->six->Size = System::Drawing::Size(75, 53);
			this->six->TabIndex = 12;
			this->six->Text = L"6";
			this->six->UseVisualStyleBackColor = false;
			this->six->Click += gcnew System::EventHandler(this, &MyForm::btnnumber_Click);
			// 
			// minus
			// 
			this->minus->BackColor = System::Drawing::Color::Orange;
			this->minus->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->minus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->minus->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->minus->Location = System::Drawing::Point(249, 218);
			this->minus->Name = L"minus";
			this->minus->Size = System::Drawing::Size(75, 53);
			this->minus->TabIndex = 13;
			this->minus->Text = L"-";
			this->minus->UseVisualStyleBackColor = false;
			this->minus->Click += gcnew System::EventHandler(this, &MyForm::minus_Click);
			// 
			// one
			// 
			this->one->BackColor = System::Drawing::Color::Gray;
			this->one->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->one->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->one->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->one->Location = System::Drawing::Point(3, 227);
			this->one->Name = L"one";
			this->one->Size = System::Drawing::Size(75, 55);
			this->one->TabIndex = 14;
			this->one->Text = L"1";
			this->one->UseVisualStyleBackColor = false;
			this->one->Click += gcnew System::EventHandler(this, &MyForm::btnnumber_Click);
			// 
			// two
			// 
			this->two->BackColor = System::Drawing::Color::Gray;
			this->two->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->two->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->two->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->two->Location = System::Drawing::Point(84, 227);
			this->two->Name = L"two";
			this->two->Size = System::Drawing::Size(75, 55);
			this->two->TabIndex = 15;
			this->two->Text = L"2";
			this->two->UseVisualStyleBackColor = false;
			this->two->Click += gcnew System::EventHandler(this, &MyForm::btnnumber_Click);
			// 
			// three
			// 
			this->three->BackColor = System::Drawing::Color::Gray;
			this->three->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->three->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->three->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->three->Location = System::Drawing::Point(165, 227);
			this->three->Name = L"three";
			this->three->Size = System::Drawing::Size(75, 55);
			this->three->TabIndex = 16;
			this->three->Text = L"3";
			this->three->UseVisualStyleBackColor = false;
			this->three->Click += gcnew System::EventHandler(this, &MyForm::btnnumber_Click);
			// 
			// plus
			// 
			this->plus->BackColor = System::Drawing::Color::Orange;
			this->plus->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->plus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->plus->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->plus->Location = System::Drawing::Point(250, 277);
			this->plus->Name = L"plus";
			this->plus->Size = System::Drawing::Size(75, 55);
			this->plus->TabIndex = 17;
			this->plus->Text = L"+";
			this->plus->UseVisualStyleBackColor = false;
			this->plus->Click += gcnew System::EventHandler(this, &MyForm::plus_Click);
			// 
			// zero
			// 
			this->zero->BackColor = System::Drawing::Color::Gray;
			this->zero->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->zero->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->zero->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->zero->Location = System::Drawing::Point(3, 288);
			this->zero->Name = L"zero";
			this->zero->Size = System::Drawing::Size(156, 104);
			this->zero->TabIndex = 18;
			this->zero->Text = L"0";
			this->zero->UseVisualStyleBackColor = false;
			// 
			// dot
			// 
			this->dot->BackColor = System::Drawing::Color::Gray;
			this->dot->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->dot->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->dot->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->dot->Location = System::Drawing::Point(165, 288);
			this->dot->Name = L"dot";
			this->dot->Size = System::Drawing::Size(75, 104);
			this->dot->TabIndex = 20;
			this->dot->Text = L".";
			this->dot->UseVisualStyleBackColor = false;
			// 
			// equal
			// 
			this->equal->BackColor = System::Drawing::Color::Orange;
			this->equal->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->equal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->equal->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->equal->Location = System::Drawing::Point(249, 338);
			this->equal->Name = L"equal";
			this->equal->Size = System::Drawing::Size(75, 54);
			this->equal->TabIndex = 21;
			this->equal->Text = L"=";
			this->equal->UseVisualStyleBackColor = false;
			this->equal->Click += gcnew System::EventHandler(this, &MyForm::equal_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->ClientSize = System::Drawing::Size(335, 416);
			this->Controls->Add(this->equal);
			this->Controls->Add(this->dot);
			this->Controls->Add(this->zero);
			this->Controls->Add(this->plus);
			this->Controls->Add(this->three);
			this->Controls->Add(this->two);
			this->Controls->Add(this->one);
			this->Controls->Add(this->minus);
			this->Controls->Add(this->six);
			this->Controls->Add(this->five);
			this->Controls->Add(this->four);
			this->Controls->Add(this->multiply);
			this->Controls->Add(this->nine);
			this->Controls->Add(this->eight);
			this->Controls->Add(this->seven);
			this->Controls->Add(this->drob);
			this->Controls->Add(this->close);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Calculator";
			this->ResumeLayout(false);

		}
#pragma endregion
	
	
	
	private: System::Void close_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
		   private: System::Void btnnumber_Click(System::Object^ sender, System::EventArgs^ e) {
			   Button^ button = safe_cast<Button^>(sender);
			   
			   if (this->label1->Text == "0") {
				   this->label1->Text = button->Text;
			   }
			   else {
				   this->label1->Text= this->label1->Text+ button->Text;
			   }
		   }
	private: System::Void plus_Click(System::Object^ sender, System::EventArgs^ e) {
		mathchose('+');
	}
	private: System::Void minus_Click(System::Object^ sender, System::EventArgs^ e) {
		mathchose('-');
	}
	private: System::Void multiply_Click(System::Object^ sender, System::EventArgs^ e) {
		mathchose('*');
	}
	private: System::Void drob_Click(System::Object^ sender, System::EventArgs^ e) {
		mathchose('/');
	}
		   private: System::Void mathchose(char action) {
			   this->firstnum = System::Convert::ToInt32 (this->label1->Text);
			   this->useraction = action;
			   this->label1->Text = "0";
		   }
	

private: System::Void equal_Click(System::Object^ sender, System::EventArgs^ e) {
	int second = System::Convert::ToInt32 (this->label1->Text);
	int res;
	
	
	switch (useraction) {
	case '+': res = this->firstnum + second; second = res; break;
	case '-': res = this->firstnum - second; second = res; break;
	case '*': res = this->firstnum * second; second = res; break;
	case '/': if (second == 0) {
		this->label1->Text = "Error";
		
	}
			else { res = this->firstnum / second; second = res; break; }
 	}
	

	this->label1->Text = System::Convert::ToString(second);
		
}
};
}

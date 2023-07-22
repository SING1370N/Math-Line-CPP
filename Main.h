#pragma once

namespace MathLine {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Main
	/// </summary>
	public ref class Main : public System::Windows::Forms::Form
	{
	public:
		Main(void)
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
		~Main()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ textInfo;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textA;
	private: System::Windows::Forms::TextBox^ textB;

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
			this->textA = (gcnew System::Windows::Forms::TextBox());
			this->textB = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textInfo = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// textA
			// 
			this->textA->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textA->Location = System::Drawing::Point(12, 122);
			this->textA->Name = L"textA";
			this->textA->Size = System::Drawing::Size(103, 49);
			this->textA->TabIndex = 2;
			this->textA->Text = L"0";
			this->textA->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textA->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Main::textBox1_KeyPress);
			// 
			// textB
			// 
			this->textB->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textB->Location = System::Drawing::Point(196, 122);
			this->textB->Name = L"textB";
			this->textB->Size = System::Drawing::Size(103, 49);
			this->textB->TabIndex = 2;
			this->textB->Text = L"0";
			this->textB->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textB->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Main::textBox1_KeyPress);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(121, 125);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(69, 42);
			this->label1->TabIndex = 0;
			this->label1->Text = L"x +";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(305, 125);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(71, 42);
			this->label2->TabIndex = 0;
			this->label2->Text = L"= 0";
			// 
			// textInfo
			// 
			this->textInfo->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textInfo->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->textInfo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textInfo->Location = System::Drawing::Point(12, 186);
			this->textInfo->Name = L"textInfo";
			this->textInfo->Size = System::Drawing::Size(361, 77);
			this->textInfo->TabIndex = 3;
			this->textInfo->Text = L"X = X";
			this->textInfo->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(12, 266);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(364, 71);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Рахувати";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Main::button1_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->ForeColor = System::Drawing::Color::Firebrick;
			this->label4->Location = System::Drawing::Point(95, 23);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(194, 42);
			this->label4->TabIndex = 5;
			this->label4->Text = L"a x + b = 0";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->ForeColor = System::Drawing::SystemColors::AppWorkspace;
			this->label3->Location = System::Drawing::Point(46, 77);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(39, 42);
			this->label3->TabIndex = 6;
			this->label3->Text = L"a";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->ForeColor = System::Drawing::SystemColors::AppWorkspace;
			this->label5->Location = System::Drawing::Point(229, 77);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(39, 42);
			this->label5->TabIndex = 7;
			this->label5->Text = L"b";
			// 
			// Main
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(385, 344);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textInfo);
			this->Controls->Add(this->textB);
			this->Controls->Add(this->textA);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Name = L"Main";
			this->Text = L" Лінійне рівняння ax + b = 0";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void textBox1_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		// Проверка, является ли введенный символ цифрой или точкой
		if (!Char::IsDigit(e->KeyChar) && e->KeyChar != '.' && e->KeyChar != ',' && e->KeyChar != '\b' && e->KeyChar != '-')
		{
			// Предотвращение ввода неправильных символов
			e->Handled = true;
		}
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			double a = Double::Parse(textA->Text->Replace(".", ",")), b = Double::Parse(textB->Text->Replace(".", ","));
			if (a == 0) {
				if (b == 0) {
					textInfo->Text = "Рівняння має безліч розв'язків";
				}
				else {
					textInfo->Text = "Рівняння не має розв'язків";
				}
			}
			else {
				double x = -b / a;
				textInfo->Text = "Розв'язок рівняння: \nx = " + x.ToString("F2");
			}
		}
		catch (...)
		{
			MessageBox::Show(L"Перевірьте значення що ввели!");
		}
	}
};
}

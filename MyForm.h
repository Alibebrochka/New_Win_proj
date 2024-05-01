#pragma once
#include <cmath>
//#pragma unmanaged
#include "Matrix.h"
//#pragma managed

namespace FirstApplication {
	
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
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
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ A1;
	protected:

	protected:

	protected:

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ B1;
	private: System::Windows::Forms::TextBox^ D1;






	private: System::Windows::Forms::Button^ button;

	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Label^ ans2;

	private: System::Windows::Forms::Label^ ans1;
	private: System::Windows::Forms::TextBox^ C1;


	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ Fin1;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ Fin2;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ C2;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ D2;

	private: System::Windows::Forms::TextBox^ B2;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ A2;
	private: System::Windows::Forms::TextBox^ Fin3;


	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ C3;

	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ D3;

	private: System::Windows::Forms::TextBox^ B3;

	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::TextBox^ A3;
	private: System::Windows::Forms::TextBox^ Fin4;


	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::TextBox^ C4;

	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::TextBox^ D4;

	private: System::Windows::Forms::TextBox^ B4;

	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::TextBox^ A4;
	private: System::Windows::Forms::Label^ ans4;


	private: System::Windows::Forms::Label^ ans3;




	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->A1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->B1 = (gcnew System::Windows::Forms::TextBox());
			this->D1 = (gcnew System::Windows::Forms::TextBox());
			this->button = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->ans4 = (gcnew System::Windows::Forms::Label());
			this->ans3 = (gcnew System::Windows::Forms::Label());
			this->ans2 = (gcnew System::Windows::Forms::Label());
			this->ans1 = (gcnew System::Windows::Forms::Label());
			this->C1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Fin1 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->Fin2 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->C2 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->D2 = (gcnew System::Windows::Forms::TextBox());
			this->B2 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->A2 = (gcnew System::Windows::Forms::TextBox());
			this->Fin3 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->C3 = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->D3 = (gcnew System::Windows::Forms::TextBox());
			this->B3 = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->A3 = (gcnew System::Windows::Forms::TextBox());
			this->Fin4 = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->C4 = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->D4 = (gcnew System::Windows::Forms::TextBox());
			this->B4 = (gcnew System::Windows::Forms::TextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->A4 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// A1
			// 
			this->A1->BackColor = System::Drawing::SystemColors::Info;
			this->A1->Font = (gcnew System::Drawing::Font(L"MS Gothic", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->A1->Location = System::Drawing::Point(62, 48);
			this->A1->Name = L"A1";
			this->A1->Size = System::Drawing::Size(117, 34);
			this->A1->TabIndex = 1;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"MS Gothic", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(179, 52);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(87, 27);
			this->label2->TabIndex = 2;
			this->label2->Text = L"X1 + ";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"MS Gothic", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(572, 52);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(72, 27);
			this->label3->TabIndex = 3;
			this->label3->Text = L"X3 +";
			// 
			// B1
			// 
			this->B1->BackColor = System::Drawing::SystemColors::Info;
			this->B1->Font = (gcnew System::Drawing::Font(L"MS Gothic", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->B1->Location = System::Drawing::Point(266, 48);
			this->B1->Name = L"B1";
			this->B1->Size = System::Drawing::Size(117, 34);
			this->B1->TabIndex = 4;
			// 
			// D1
			// 
			this->D1->BackColor = System::Drawing::SystemColors::Info;
			this->D1->Font = (gcnew System::Drawing::Font(L"MS Gothic", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->D1->Location = System::Drawing::Point(644, 48);
			this->D1->Name = L"D1";
			this->D1->Size = System::Drawing::Size(117, 34);
			this->D1->TabIndex = 5;
			// 
			// button
			// 
			this->button->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(158)), static_cast<System::Int32>(static_cast<System::Byte>(93)),
				static_cast<System::Int32>(static_cast<System::Byte>(9)));
			this->button->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button->Location = System::Drawing::Point(62, 296);
			this->button->Name = L"button";
			this->button->Size = System::Drawing::Size(393, 129);
			this->button->TabIndex = 0;
			this->button->Text = L"Розв\'язати";
			this->button->UseVisualStyleBackColor = false;
			this->button->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->ans4);
			this->groupBox1->Controls->Add(this->ans3);
			this->groupBox1->Controls->Add(this->ans2);
			this->groupBox1->Controls->Add(this->ans1);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox1->Location = System::Drawing::Point(461, 296);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(489, 129);
			this->groupBox1->TabIndex = 7;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Розв\'зок";
			// 
			// ans4
			// 
			this->ans4->AutoSize = true;
			this->ans4->Location = System::Drawing::Point(285, 77);
			this->ans4->Name = L"ans4";
			this->ans4->Size = System::Drawing::Size(74, 25);
			this->ans4->TabIndex = 3;
			this->ans4->Text = L"X4 = 0";
			// 
			// ans3
			// 
			this->ans3->AutoSize = true;
			this->ans3->Location = System::Drawing::Point(285, 36);
			this->ans3->Name = L"ans3";
			this->ans3->Size = System::Drawing::Size(74, 25);
			this->ans3->TabIndex = 2;
			this->ans3->Text = L"X3 = 0";
			// 
			// ans2
			// 
			this->ans2->AutoSize = true;
			this->ans2->Location = System::Drawing::Point(64, 77);
			this->ans2->Name = L"ans2";
			this->ans2->Size = System::Drawing::Size(74, 25);
			this->ans2->TabIndex = 1;
			this->ans2->Text = L"X2 = 0";
			// 
			// ans1
			// 
			this->ans1->AutoSize = true;
			this->ans1->Location = System::Drawing::Point(64, 36);
			this->ans1->Name = L"ans1";
			this->ans1->Size = System::Drawing::Size(74, 25);
			this->ans1->TabIndex = 0;
			this->ans1->Text = L"X1 = 0";
			// 
			// C1
			// 
			this->C1->BackColor = System::Drawing::SystemColors::Info;
			this->C1->Font = (gcnew System::Drawing::Font(L"MS Gothic", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->C1->Location = System::Drawing::Point(455, 48);
			this->C1->Name = L"C1";
			this->C1->Size = System::Drawing::Size(117, 34);
			this->C1->TabIndex = 9;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"MS Gothic", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(383, 52);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(72, 27);
			this->label1->TabIndex = 8;
			this->label1->Text = L"X2 +";
			// 
			// Fin1
			// 
			this->Fin1->BackColor = System::Drawing::SystemColors::Info;
			this->Fin1->Font = (gcnew System::Drawing::Font(L"MS Gothic", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Fin1->Location = System::Drawing::Point(833, 48);
			this->Fin1->Name = L"Fin1";
			this->Fin1->Size = System::Drawing::Size(117, 34);
			this->Fin1->TabIndex = 11;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"MS Gothic", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(761, 52);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(72, 27);
			this->label5->TabIndex = 10;
			this->label5->Text = L"X4 =";
			// 
			// Fin2
			// 
			this->Fin2->BackColor = System::Drawing::SystemColors::Info;
			this->Fin2->Font = (gcnew System::Drawing::Font(L"MS Gothic", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Fin2->Location = System::Drawing::Point(833, 108);
			this->Fin2->Name = L"Fin2";
			this->Fin2->Size = System::Drawing::Size(117, 34);
			this->Fin2->TabIndex = 20;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"MS Gothic", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(761, 112);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(72, 27);
			this->label4->TabIndex = 19;
			this->label4->Text = L"X4 =";
			// 
			// C2
			// 
			this->C2->BackColor = System::Drawing::SystemColors::Info;
			this->C2->Font = (gcnew System::Drawing::Font(L"MS Gothic", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->C2->Location = System::Drawing::Point(455, 108);
			this->C2->Name = L"C2";
			this->C2->Size = System::Drawing::Size(117, 34);
			this->C2->TabIndex = 18;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"MS Gothic", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(383, 112);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(72, 27);
			this->label6->TabIndex = 17;
			this->label6->Text = L"X2 +";
			// 
			// D2
			// 
			this->D2->BackColor = System::Drawing::SystemColors::Info;
			this->D2->Font = (gcnew System::Drawing::Font(L"MS Gothic", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->D2->Location = System::Drawing::Point(644, 108);
			this->D2->Name = L"D2";
			this->D2->Size = System::Drawing::Size(117, 34);
			this->D2->TabIndex = 16;
			// 
			// B2
			// 
			this->B2->BackColor = System::Drawing::SystemColors::Info;
			this->B2->Font = (gcnew System::Drawing::Font(L"MS Gothic", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->B2->Location = System::Drawing::Point(266, 108);
			this->B2->Name = L"B2";
			this->B2->Size = System::Drawing::Size(117, 34);
			this->B2->TabIndex = 15;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"MS Gothic", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(572, 112);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(72, 27);
			this->label7->TabIndex = 14;
			this->label7->Text = L"X3 +";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"MS Gothic", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(179, 112);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(87, 27);
			this->label8->TabIndex = 13;
			this->label8->Text = L"X1 + ";
			// 
			// A2
			// 
			this->A2->BackColor = System::Drawing::SystemColors::Info;
			this->A2->Font = (gcnew System::Drawing::Font(L"MS Gothic", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->A2->Location = System::Drawing::Point(62, 108);
			this->A2->Name = L"A2";
			this->A2->Size = System::Drawing::Size(117, 34);
			this->A2->TabIndex = 12;
			// 
			// Fin3
			// 
			this->Fin3->BackColor = System::Drawing::SystemColors::Info;
			this->Fin3->Font = (gcnew System::Drawing::Font(L"MS Gothic", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Fin3->Location = System::Drawing::Point(833, 168);
			this->Fin3->Name = L"Fin3";
			this->Fin3->Size = System::Drawing::Size(117, 34);
			this->Fin3->TabIndex = 29;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"MS Gothic", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->Location = System::Drawing::Point(761, 172);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(72, 27);
			this->label9->TabIndex = 28;
			this->label9->Text = L"X4 =";
			// 
			// C3
			// 
			this->C3->BackColor = System::Drawing::SystemColors::Info;
			this->C3->Font = (gcnew System::Drawing::Font(L"MS Gothic", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->C3->Location = System::Drawing::Point(455, 168);
			this->C3->Name = L"C3";
			this->C3->Size = System::Drawing::Size(117, 34);
			this->C3->TabIndex = 27;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"MS Gothic", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label10->Location = System::Drawing::Point(383, 172);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(72, 27);
			this->label10->TabIndex = 26;
			this->label10->Text = L"X2 +";
			// 
			// D3
			// 
			this->D3->BackColor = System::Drawing::SystemColors::Info;
			this->D3->Font = (gcnew System::Drawing::Font(L"MS Gothic", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->D3->Location = System::Drawing::Point(644, 168);
			this->D3->Name = L"D3";
			this->D3->Size = System::Drawing::Size(117, 34);
			this->D3->TabIndex = 25;
			// 
			// B3
			// 
			this->B3->BackColor = System::Drawing::SystemColors::Info;
			this->B3->Font = (gcnew System::Drawing::Font(L"MS Gothic", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->B3->Location = System::Drawing::Point(266, 168);
			this->B3->Name = L"B3";
			this->B3->Size = System::Drawing::Size(117, 34);
			this->B3->TabIndex = 24;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"MS Gothic", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label11->Location = System::Drawing::Point(572, 172);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(72, 27);
			this->label11->TabIndex = 23;
			this->label11->Text = L"X3 +";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"MS Gothic", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label12->Location = System::Drawing::Point(179, 172);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(87, 27);
			this->label12->TabIndex = 22;
			this->label12->Text = L"X1 + ";
			// 
			// A3
			// 
			this->A3->BackColor = System::Drawing::SystemColors::Info;
			this->A3->Font = (gcnew System::Drawing::Font(L"MS Gothic", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->A3->Location = System::Drawing::Point(62, 168);
			this->A3->Name = L"A3";
			this->A3->Size = System::Drawing::Size(117, 34);
			this->A3->TabIndex = 21;
			// 
			// Fin4
			// 
			this->Fin4->BackColor = System::Drawing::SystemColors::Info;
			this->Fin4->Font = (gcnew System::Drawing::Font(L"MS Gothic", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Fin4->Location = System::Drawing::Point(833, 228);
			this->Fin4->Name = L"Fin4";
			this->Fin4->Size = System::Drawing::Size(117, 34);
			this->Fin4->TabIndex = 38;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"MS Gothic", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label13->Location = System::Drawing::Point(761, 232);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(72, 27);
			this->label13->TabIndex = 37;
			this->label13->Text = L"X4 =";
			// 
			// C4
			// 
			this->C4->BackColor = System::Drawing::SystemColors::Info;
			this->C4->Font = (gcnew System::Drawing::Font(L"MS Gothic", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->C4->Location = System::Drawing::Point(455, 228);
			this->C4->Name = L"C4";
			this->C4->Size = System::Drawing::Size(117, 34);
			this->C4->TabIndex = 36;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"MS Gothic", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label14->Location = System::Drawing::Point(383, 232);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(72, 27);
			this->label14->TabIndex = 35;
			this->label14->Text = L"X2 +";
			// 
			// D4
			// 
			this->D4->BackColor = System::Drawing::SystemColors::Info;
			this->D4->Font = (gcnew System::Drawing::Font(L"MS Gothic", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->D4->Location = System::Drawing::Point(644, 228);
			this->D4->Name = L"D4";
			this->D4->Size = System::Drawing::Size(117, 34);
			this->D4->TabIndex = 34;
			// 
			// B4
			// 
			this->B4->BackColor = System::Drawing::SystemColors::Info;
			this->B4->Font = (gcnew System::Drawing::Font(L"MS Gothic", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->B4->Location = System::Drawing::Point(266, 228);
			this->B4->Name = L"B4";
			this->B4->Size = System::Drawing::Size(117, 34);
			this->B4->TabIndex = 33;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"MS Gothic", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label15->Location = System::Drawing::Point(572, 232);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(72, 27);
			this->label15->TabIndex = 32;
			this->label15->Text = L"X3 +";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"MS Gothic", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label16->Location = System::Drawing::Point(179, 232);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(87, 27);
			this->label16->TabIndex = 31;
			this->label16->Text = L"X1 + ";
			// 
			// A4
			// 
			this->A4->BackColor = System::Drawing::SystemColors::Info;
			this->A4->Font = (gcnew System::Drawing::Font(L"MS Gothic", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->A4->Location = System::Drawing::Point(62, 228);
			this->A4->Name = L"A4";
			this->A4->Size = System::Drawing::Size(117, 34);
			this->A4->TabIndex = 30;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(212)), static_cast<System::Int32>(static_cast<System::Byte>(124)),
				static_cast<System::Int32>(static_cast<System::Byte>(12)));
			this->ClientSize = System::Drawing::Size(1012, 449);
			this->Controls->Add(this->Fin4);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->C4);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->D4);
			this->Controls->Add(this->B4);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->A4);
			this->Controls->Add(this->Fin3);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->C3);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->D3);
			this->Controls->Add(this->B3);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->A3);
			this->Controls->Add(this->Fin2);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->C2);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->D2);
			this->Controls->Add(this->B2);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->A2);
			this->Controls->Add(this->Fin1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->C1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->button);
			this->Controls->Add(this->D1);
			this->Controls->Add(this->B1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->A1);
			this->Name = L"MyForm";
			this->Text = L"Розв\'язання СЛАР";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		double a1 = Convert::ToDouble(A1->Text->Replace('.', ','));
		double a2 = Convert::ToDouble(A2->Text->Replace('.', ','));
		double a3 = Convert::ToDouble(A3->Text->Replace('.', ','));
		double a4 = Convert::ToDouble(A4->Text->Replace('.', ','));

		double b1 = Convert::ToDouble(B1->Text->Replace('.', ','));
		double b2 = Convert::ToDouble(B2->Text->Replace('.', ','));
		double b3 = Convert::ToDouble(B3->Text->Replace('.', ','));
		double b4 = Convert::ToDouble(B4->Text->Replace('.', ','));
		
		double c1 = Convert::ToDouble(C1->Text->Replace('.', ','));
		double c2 = Convert::ToDouble(C2->Text->Replace('.', ','));
		double c3 = Convert::ToDouble(C3->Text->Replace('.', ','));
		double c4 = Convert::ToDouble(C4->Text->Replace('.', ','));
		
		double d1 = Convert::ToDouble(D1->Text->Replace('.', ','));
		double d2 = Convert::ToDouble(D2->Text->Replace('.', ','));
		double d3 = Convert::ToDouble(D3->Text->Replace('.', ','));
		double d4 = Convert::ToDouble(D4->Text->Replace('.', ','));
		
		double fin1 = Convert::ToDouble(Fin1->Text->Replace('.', ','));
		double fin2 = Convert::ToDouble(Fin2->Text->Replace('.', ','));
		double fin3 = Convert::ToDouble(Fin3->Text->Replace('.', ','));
		double fin4 = Convert::ToDouble(Fin4->Text->Replace('.', ','));

		//Matrix A(4, 4, {
		//{a1,b1,c1,d1},
		//{a2,b2,c2,d2},
		//{a3,b3,c3,d3},
		//{a4,b4,c4,d4} }),
		//B(4, 1, {
		//	{fin1},
		//	{fin2},
		//	{fin3},
		//	{fin4} });

		//if (A.det() == 0) {
		//	MessageBox::Show("D < 0", "Determinant = 0", MessageBoxButtons::OK, MessageBoxIcon::Error/*Information*/);
		//}
		//else {
		//	Matrix C = A.inv() * B;
		//	ans1->Text = "X1 = " + Convert::ToString(C.get(0, 0))->Replace(',', '.');
		//	ans2->Text = "X2 = " + Convert::ToString(C.get(1, 0))->Replace(',', '.');
		//	ans3->Text = "X3 = " + Convert::ToString(C.get(2, 0))->Replace(',', '.');
		//	ans4->Text = "X4 = " + Convert::ToString(C.get(3, 0))->Replace(',', '.');
		//}
	}
};
}

#pragma once

#include <string>
#include <sstream>
#include <fstream>
#include <msclr/marshal_cppstd.h>
#include <algorithm>
#include <numeric>
#include "Math.h"

struct RSAData
{
	int e = 0;
	int r = 0;
	int d = 0;
};

struct ParsedData {
	std::string message;
	std::string signature;
	ParsedData(const std::string& msg = "", const std::string& sig = "")
		: message(msg), signature(sig) {
	}
};

ParsedData parseString(const std::string& input) {
	ParsedData data;

	// Находим конец первой строки (число)
	size_t endOfFirstLine = input.find('\n');
	if (endOfFirstLine == std::string::npos) {
		data.signature = input;
		data.message = "";
		return data; // Нет перевода строки — некорректный формат
	}

	// Извлекаем число (первая строка до '\n')
	data.signature = input.substr(0, endOfFirstLine);

	// Остальной текст — сообщение (начиная со следующей строки)
	if (endOfFirstLine + 1 < input.size()) {
		data.message = input.substr(endOfFirstLine + 1);
	}
	else {
		data.message = ""; // Если после числа пусто
	}

	return data;
}

namespace $safeprojectname$ 
{
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	std::string inMessage;
	std::string outMessage;

	public ref class MyForm : public System::Windows::Forms::Form
	{
#pragma region Controls
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
		}
	protected:
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
		private: System::Windows::Forms::Label^ label1;
		private: System::Windows::Forms::MenuStrip^ menuStrip1;
		private: System::Windows::Forms::ToolStripMenuItem^ файлToolStripMenuItem;
		private: System::Windows::Forms::ToolStripMenuItem^ оРазработчикеToolStripMenuItem;
		private: System::Windows::Forms::ToolStripMenuItem^ открытьToolStripMenuItem;
		private: System::Windows::Forms::ToolStripMenuItem^ сохранитьToolStripMenuItem;
		private: System::Windows::Forms::Label^ label2;
		private: System::Windows::Forms::TextBox^ QTextBox;

		private: System::Windows::Forms::Label^ label3;
		private: System::Windows::Forms::Label^ label4;
		private: System::Windows::Forms::TextBox^ PTextBox;

		private: System::Windows::Forms::Label^ label5;
		private: System::Windows::Forms::TextBox^ RTextBox;

		private: System::Windows::Forms::Label^ label6;
		private: System::Windows::Forms::TextBox^ FTextBox;

		private: System::Windows::Forms::Panel^ panel1;


		private: System::Windows::Forms::Label^ label7;
		private: System::Windows::Forms::TextBox^ DTextBox;

		private: System::Windows::Forms::Label^ label8;
		private: System::Windows::Forms::Panel^ panel2;
		private: System::Windows::Forms::Label^ label9;
		private: System::Windows::Forms::Label^ label10;
		private: System::Windows::Forms::TextBox^ K0TextBox;
		private: System::Windows::Forms::TextBox^ KcTextBox;


		private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::TextBox^ MessageTextBox;

		private: System::Windows::Forms::Panel^ EncryptionPanel;
		private: System::Windows::Forms::TextBox^ SEncryptionTextBox;

		private: System::Windows::Forms::TextBox^ MEncryptionTextBox;



		private: System::Windows::Forms::Label^ label11;
		private: System::Windows::Forms::Label^ label12;
		private: System::Windows::Forms::Label^ label13;
		private: System::Windows::Forms::Panel^ panel4;
		private: System::Windows::Forms::TextBox^ MHashResultTextBox;



		private: System::Windows::Forms::Label^ label14;
		private: System::Windows::Forms::TextBox^ SDecryptionTextBox;

		private: System::Windows::Forms::TextBox^ MDecryptionTextBox;

		private: System::Windows::Forms::Label^ label15;
		private: System::Windows::Forms::Label^ label16;
		private: System::Windows::Forms::Label^ label17;
		private: System::Windows::Forms::Button^ SignButton;
		private: System::Windows::Forms::Button^ CheckButton;
		private: System::Windows::Forms::ComboBox^ EComboBox;




		protected:
		protected:
		private:
			System::ComponentModel::Container^ components;
#pragma endregion
#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->файлToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->открытьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->сохранитьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->оРазработчикеToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->QTextBox = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->PTextBox = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->RTextBox = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->FTextBox = (gcnew System::Windows::Forms::TextBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->DTextBox = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->EComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->K0TextBox = (gcnew System::Windows::Forms::TextBox());
			this->KcTextBox = (gcnew System::Windows::Forms::TextBox());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->MessageTextBox = (gcnew System::Windows::Forms::TextBox());
			this->EncryptionPanel = (gcnew System::Windows::Forms::Panel());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->SEncryptionTextBox = (gcnew System::Windows::Forms::TextBox());
			this->MEncryptionTextBox = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->MHashResultTextBox = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->SDecryptionTextBox = (gcnew System::Windows::Forms::TextBox());
			this->MDecryptionTextBox = (gcnew System::Windows::Forms::TextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->SignButton = (gcnew System::Windows::Forms::Button());
			this->CheckButton = (gcnew System::Windows::Forms::Button());
			this->menuStrip1->SuspendLayout();
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel3->SuspendLayout();
			this->EncryptionPanel->SuspendLayout();
			this->panel4->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Black;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::SkyBlue;
			this->label1->Location = System::Drawing::Point(5, 46);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(1070, 26);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Вычисление и проверка электронной цифровой подписи (ЭЦП) текстового файла на базе"
				L" алгоритма RSA";
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->файлToolStripMenuItem,
					this->оРазработчикеToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1081, 24);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// файлToolStripMenuItem
			// 
			this->файлToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->открытьToolStripMenuItem,
					this->сохранитьToolStripMenuItem
			});
			this->файлToolStripMenuItem->Name = L"файлToolStripMenuItem";
			this->файлToolStripMenuItem->Size = System::Drawing::Size(48, 20);
			this->файлToolStripMenuItem->Text = L"Файл";
			// 
			// открытьToolStripMenuItem
			// 
			this->открытьToolStripMenuItem->Name = L"открытьToolStripMenuItem";
			this->открытьToolStripMenuItem->Size = System::Drawing::Size(133, 22);
			this->открытьToolStripMenuItem->Text = L"Открыть";
			this->открытьToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::открытьToolStripMenuItem_Click);
			// 
			// сохранитьToolStripMenuItem
			// 
			this->сохранитьToolStripMenuItem->Name = L"сохранитьToolStripMenuItem";
			this->сохранитьToolStripMenuItem->Size = System::Drawing::Size(133, 22);
			this->сохранитьToolStripMenuItem->Text = L"Сохранить";
			this->сохранитьToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::сохранитьToolStripMenuItem_Click);
			// 
			// оРазработчикеToolStripMenuItem
			// 
			this->оРазработчикеToolStripMenuItem->Name = L"оРазработчикеToolStripMenuItem";
			this->оРазработчикеToolStripMenuItem->Size = System::Drawing::Size(107, 20);
			this->оРазработчикеToolStripMenuItem->Text = L"О разработчике";
			this->оРазработчикеToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::оРазработчикеToolStripMenuItem_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::Color::SkyBlue;
			this->label2->Location = System::Drawing::Point(34, 44);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(456, 18);
			this->label2->TabIndex = 2;
			this->label2->Text = L"2 случайных простых числа p и q таких, что p ≈ q, r = p*q";
			// 
			// QTextBox
			// 
			this->QTextBox->Location = System::Drawing::Point(224, 22);
			this->QTextBox->Name = L"QTextBox";
			this->QTextBox->Size = System::Drawing::Size(100, 20);
			this->QTextBox->TabIndex = 4;
			this->QTextBox->TextChanged += gcnew System::EventHandler(this, &MyForm::QTextBox_TextChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label3->ForeColor = System::Drawing::Color::SkyBlue;
			this->label3->Location = System::Drawing::Point(196, 22);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(22, 18);
			this->label3->TabIndex = 5;
			this->label3->Text = L"q:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label4->ForeColor = System::Drawing::Color::SkyBlue;
			this->label4->Location = System::Drawing::Point(34, 21);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(22, 18);
			this->label4->TabIndex = 6;
			this->label4->Text = L"p:";
			// 
			// PTextBox
			// 
			this->PTextBox->Location = System::Drawing::Point(62, 21);
			this->PTextBox->Name = L"PTextBox";
			this->PTextBox->Size = System::Drawing::Size(100, 20);
			this->PTextBox->TabIndex = 7;
			this->PTextBox->TextChanged += gcnew System::EventHandler(this, &MyForm::PTextBox_TextChanged);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label5->ForeColor = System::Drawing::Color::SkyBlue;
			this->label5->Location = System::Drawing::Point(365, 20);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(19, 18);
			this->label5->TabIndex = 8;
			this->label5->Text = L"r:";
			// 
			// RTextBox
			// 
			this->RTextBox->Location = System::Drawing::Point(390, 22);
			this->RTextBox->Name = L"RTextBox";
			this->RTextBox->Size = System::Drawing::Size(100, 20);
			this->RTextBox->TabIndex = 9;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label6->ForeColor = System::Drawing::Color::SkyBlue;
			this->label6->Location = System::Drawing::Point(70, 23);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(273, 18);
			this->label6->TabIndex = 10;
			this->label6->Text = L"Функция Эйлера φ(r) = (p–1)*(q–1):";
			this->label6->Click += gcnew System::EventHandler(this, &MyForm::label6_Click);
			// 
			// FTextBox
			// 
			this->FTextBox->Location = System::Drawing::Point(391, 22);
			this->FTextBox->MaxLength = 100;
			this->FTextBox->Name = L"FTextBox";
			this->FTextBox->ReadOnly = true;
			this->FTextBox->Size = System::Drawing::Size(100, 20);
			this->FTextBox->TabIndex = 11;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Black;
			this->panel1->Controls->Add(this->PTextBox);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->QTextBox);
			this->panel1->Controls->Add(this->RTextBox);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Location = System::Drawing::Point(15, 99);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(514, 79);
			this->panel1->TabIndex = 12;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label7->ForeColor = System::Drawing::Color::SkyBlue;
			this->label7->Location = System::Drawing::Point(6, 70);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(382, 18);
			this->label7->TabIndex = 13;
			this->label7->Text = L"Oткрытая экспонента e, 1<e<φ(r) и (e, φ(r)) = 1:";
			// 
			// DTextBox
			// 
			this->DTextBox->Location = System::Drawing::Point(391, 118);
			this->DTextBox->MaxLength = 100;
			this->DTextBox->Name = L"DTextBox";
			this->DTextBox->ReadOnly = true;
			this->DTextBox->Size = System::Drawing::Size(100, 20);
			this->DTextBox->TabIndex = 16;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label8->ForeColor = System::Drawing::Color::SkyBlue;
			this->label8->Location = System::Drawing::Point(36, 117);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(352, 18);
			this->label8->TabIndex = 15;
			this->label8->Text = L"Cекретная экспонента d, (e*d) mod φ(r) = 1:";
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::Black;
			this->panel2->Controls->Add(this->EComboBox);
			this->panel2->Controls->Add(this->label6);
			this->panel2->Controls->Add(this->DTextBox);
			this->panel2->Controls->Add(this->FTextBox);
			this->panel2->Controls->Add(this->label8);
			this->panel2->Controls->Add(this->label7);
			this->panel2->Location = System::Drawing::Point(545, 99);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(508, 166);
			this->panel2->TabIndex = 17;
			// 
			// EComboBox
			// 
			this->EComboBox->FormattingEnabled = true;
			this->EComboBox->Location = System::Drawing::Point(391, 67);
			this->EComboBox->Name = L"EComboBox";
			this->EComboBox->Size = System::Drawing::Size(100, 21);
			this->EComboBox->TabIndex = 17;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label9->ForeColor = System::Drawing::Color::SkyBlue;
			this->label9->Location = System::Drawing::Point(106, 35);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(214, 18);
			this->label9->TabIndex = 18;
			this->label9->Text = L"Закрытый ключ Kc = (d, r)";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label10->ForeColor = System::Drawing::Color::SkyBlue;
			this->label10->Location = System::Drawing::Point(106, 10);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(211, 18);
			this->label10->TabIndex = 19;
			this->label10->Text = L"Открытый ключ  Ko=(e, r)";
			// 
			// K0TextBox
			// 
			this->K0TextBox->Location = System::Drawing::Point(326, 10);
			this->K0TextBox->Name = L"K0TextBox";
			this->K0TextBox->Size = System::Drawing::Size(100, 20);
			this->K0TextBox->TabIndex = 10;
			// 
			// KcTextBox
			// 
			this->KcTextBox->Location = System::Drawing::Point(326, 36);
			this->KcTextBox->Name = L"KcTextBox";
			this->KcTextBox->Size = System::Drawing::Size(100, 20);
			this->KcTextBox->TabIndex = 11;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::Black;
			this->panel3->Controls->Add(this->label10);
			this->panel3->Controls->Add(this->K0TextBox);
			this->panel3->Controls->Add(this->label9);
			this->panel3->Controls->Add(this->KcTextBox);
			this->panel3->Location = System::Drawing::Point(15, 194);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(514, 71);
			this->panel3->TabIndex = 20;
			// 
			// MessageTextBox
			// 
			this->MessageTextBox->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->MessageTextBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->MessageTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Uighur", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->MessageTextBox->ForeColor = System::Drawing::SystemColors::Window;
			this->MessageTextBox->Location = System::Drawing::Point(15, 297);
			this->MessageTextBox->Multiline = true;
			this->MessageTextBox->Name = L"MessageTextBox";
			this->MessageTextBox->ReadOnly = true;
			this->MessageTextBox->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->MessageTextBox->Size = System::Drawing::Size(514, 332);
			this->MessageTextBox->TabIndex = 21;
			this->MessageTextBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// EncryptionPanel
			// 
			this->EncryptionPanel->BackColor = System::Drawing::Color::Black;
			this->EncryptionPanel->Controls->Add(this->label13);
			this->EncryptionPanel->Controls->Add(this->SEncryptionTextBox);
			this->EncryptionPanel->Controls->Add(this->MEncryptionTextBox);
			this->EncryptionPanel->Controls->Add(this->label11);
			this->EncryptionPanel->Controls->Add(this->label12);
			this->EncryptionPanel->Location = System::Drawing::Point(545, 297);
			this->EncryptionPanel->Name = L"EncryptionPanel";
			this->EncryptionPanel->Size = System::Drawing::Size(508, 88);
			this->EncryptionPanel->TabIndex = 22;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Uighur", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->ForeColor = System::Drawing::Color::White;
			this->label13->Location = System::Drawing::Point(3, 0);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(80, 19);
			this->label13->TabIndex = 24;
			this->label13->Text = L"Подписание";
			// 
			// SEncryptionTextBox
			// 
			this->SEncryptionTextBox->Location = System::Drawing::Point(391, 53);
			this->SEncryptionTextBox->MaxLength = 100;
			this->SEncryptionTextBox->Name = L"SEncryptionTextBox";
			this->SEncryptionTextBox->ReadOnly = true;
			this->SEncryptionTextBox->Size = System::Drawing::Size(100, 20);
			this->SEncryptionTextBox->TabIndex = 18;
			// 
			// MEncryptionTextBox
			// 
			this->MEncryptionTextBox->Location = System::Drawing::Point(391, 15);
			this->MEncryptionTextBox->MaxLength = 100;
			this->MEncryptionTextBox->Name = L"MEncryptionTextBox";
			this->MEncryptionTextBox->ReadOnly = true;
			this->MEncryptionTextBox->Size = System::Drawing::Size(100, 20);
			this->MEncryptionTextBox->TabIndex = 17;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label11->ForeColor = System::Drawing::Color::SkyBlue;
			this->label11->Location = System::Drawing::Point(204, 15);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(184, 18);
			this->label11->TabIndex = 17;
			this->label11->Text = L"Сжатое сообщение m:";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label12->ForeColor = System::Drawing::Color::SkyBlue;
			this->label12->Location = System::Drawing::Point(108, 53);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(280, 18);
			this->label12->TabIndex = 23;
			this->label12->Text = L"Цифровая подпись S = m^d mod r:";
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::Black;
			this->panel4->Controls->Add(this->label17);
			this->panel4->Controls->Add(this->MHashResultTextBox);
			this->panel4->Controls->Add(this->label14);
			this->panel4->Controls->Add(this->SDecryptionTextBox);
			this->panel4->Controls->Add(this->MDecryptionTextBox);
			this->panel4->Controls->Add(this->label15);
			this->panel4->Controls->Add(this->label16);
			this->panel4->Location = System::Drawing::Point(545, 446);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(508, 128);
			this->panel4->TabIndex = 25;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label17->ForeColor = System::Drawing::Color::SkyBlue;
			this->label17->Location = System::Drawing::Point(17, 90);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(371, 18);
			this->label17->TabIndex = 26;
			this->label17->Text = L"Результат хеширования m’ = h(М) сообщения:";
			// 
			// MHashResultTextBox
			// 
			this->MHashResultTextBox->Location = System::Drawing::Point(391, 90);
			this->MHashResultTextBox->MaxLength = 100;
			this->MHashResultTextBox->Name = L"MHashResultTextBox";
			this->MHashResultTextBox->ReadOnly = true;
			this->MHashResultTextBox->Size = System::Drawing::Size(100, 20);
			this->MHashResultTextBox->TabIndex = 25;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Uighur", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->ForeColor = System::Drawing::Color::White;
			this->label14->Location = System::Drawing::Point(3, 0);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(144, 19);
			this->label14->TabIndex = 24;
			this->label14->Text = L"Проверка подлинности";
			// 
			// SDecryptionTextBox
			// 
			this->SDecryptionTextBox->Location = System::Drawing::Point(391, 53);
			this->SDecryptionTextBox->MaxLength = 100;
			this->SDecryptionTextBox->Name = L"SDecryptionTextBox";
			this->SDecryptionTextBox->ReadOnly = true;
			this->SDecryptionTextBox->Size = System::Drawing::Size(100, 20);
			this->SDecryptionTextBox->TabIndex = 18;
			// 
			// MDecryptionTextBox
			// 
			this->MDecryptionTextBox->Location = System::Drawing::Point(391, 15);
			this->MDecryptionTextBox->MaxLength = 100;
			this->MDecryptionTextBox->Name = L"MDecryptionTextBox";
			this->MDecryptionTextBox->ReadOnly = true;
			this->MDecryptionTextBox->Size = System::Drawing::Size(100, 20);
			this->MDecryptionTextBox->TabIndex = 17;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label15->ForeColor = System::Drawing::Color::SkyBlue;
			this->label15->Location = System::Drawing::Point(204, 17);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(184, 18);
			this->label15->TabIndex = 17;
			this->label15->Text = L"Сжатое сообщение m:";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label16->ForeColor = System::Drawing::Color::SkyBlue;
			this->label16->Location = System::Drawing::Point(116, 52);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(272, 18);
			this->label16->TabIndex = 23;
			this->label16->Text = L"Цифровая подпись S сообщения:";
			// 
			// SignButton
			// 
			this->SignButton->BackColor = System::Drawing::Color::Aquamarine;
			this->SignButton->Font = (gcnew System::Drawing::Font(L"Century", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->SignButton->ForeColor = System::Drawing::Color::Black;
			this->SignButton->Location = System::Drawing::Point(545, 391);
			this->SignButton->Name = L"SignButton";
			this->SignButton->Size = System::Drawing::Size(508, 49);
			this->SignButton->TabIndex = 27;
			this->SignButton->Text = L"Подписать сообщение";
			this->SignButton->UseVisualStyleBackColor = false;
			this->SignButton->Click += gcnew System::EventHandler(this, &MyForm::SignButton_Click);
			// 
			// CheckButton
			// 
			this->CheckButton->BackColor = System::Drawing::Color::Crimson;
			this->CheckButton->Font = (gcnew System::Drawing::Font(L"Century", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CheckButton->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->CheckButton->Location = System::Drawing::Point(545, 580);
			this->CheckButton->Name = L"CheckButton";
			this->CheckButton->Size = System::Drawing::Size(508, 49);
			this->CheckButton->TabIndex = 28;
			this->CheckButton->Text = L"Проверить сообщение";
			this->CheckButton->UseVisualStyleBackColor = false;
			this->CheckButton->Click += gcnew System::EventHandler(this, &MyForm::CheckButton_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->ClientSize = System::Drawing::Size(1081, 646);
			this->Controls->Add(this->CheckButton);
			this->Controls->Add(this->SignButton);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->EncryptionPanel);
			this->Controls->Add(this->MessageTextBox);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->menuStrip1);
			this->Cursor = System::Windows::Forms::Cursors::Default;
			this->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->MainMenuStrip = this->menuStrip1;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"MyForm";
			this->ShowIcon = false;
			this->SizeGripStyle = System::Windows::Forms::SizeGripStyle::Hide;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Лазута Д.А, 351004, Лаб. работа № 4";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->EncryptionPanel->ResumeLayout(false);
			this->EncryptionPanel->PerformLayout();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		System::String^ ConvertString(const std::string& str) {return msclr::interop::marshal_as<System::String^>(str);	}

		std::string ConvertString(System::String^ str) {return msclr::interop::marshal_as<std::string>(str);	}

		private: System::Void оРазработчикеToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e){MessageBox::Show("Лазута Д.А, гр.351004");}

		private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e){}

		int GetTextBoxValue(System::Windows::Forms::TextBox^ textBox)
		{
			try
			{
				int num = System::Convert::ToInt32(textBox->Text);
				return num > 0 ? num : -1;
			}
			catch (System::FormatException^)
			{
				return -1;
			}
			catch (System::OverflowException^)
			{
				return -1;
			}	
		}

		void SetTextBoxesTexts(int r, int d, int f)
		{
			RTextBox->Text = r.ToString();
			DTextBox->Text = d.ToString();
			FTextBox->Text = f.ToString();
		}

		RSAData TryInitRSAData()
		{
			EComboBox->Items->Clear();
			int p = GetTextBoxValue(PTextBox);
			if (is_prime(p) && p >3)
			{
				int q = GetTextBoxValue(QTextBox);
				if (is_prime(q) && q > 3)
				{
					int r = p * q;
					int f = (p - 1) * (q - 1);
					std::vector<int> exps = calcOpenExps(f);
					for (int exp: exps)
					{
						EComboBox->Items->Add(exp);
					}
					if (EComboBox->Text != "")
					{
						int e = std::stoi(ConvertString(EComboBox->Text));
						int d = calcClosedExp(e, f);
						SetTextBoxesTexts(r, d, f);
						return RSAData(e, r, d);
					}
					else
					{
						MessageBox::Show("Не выбрана открытая экспонента е!");
					}
				}
				else
				{
					MessageBox::Show("Q должно быть простым числом!");
				}
			}
			else
			{
				MessageBox::Show("P должно быть простым числом!");
			}
			return RSAData();
		}

	private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) 
	{
	}
	private: 
		System::Void SignButton_Click(System::Object^ sender, System::EventArgs^ e)
		{
			RSAData rsaData = TryInitRSAData();
			if (rsaData.d != 0)
			{
				int m = calcMessageHash(inMessage, rsaData.r);
				int S = calcSignature(m, rsaData.d, rsaData.r);
				K0TextBox->Text = rsaData.e.ToString() + ", " + rsaData.r.ToString();
				KcTextBox->Text = rsaData.d.ToString() + ", " + rsaData.r.ToString();
				MEncryptionTextBox->Text = m.ToString();
				SEncryptionTextBox->Text = S.ToString();
				outMessage = "{\nMessage: \"" + inMessage + "\", Signature: \"" + std::to_string(S) + "\"\n}";
				MessageBox::Show(ConvertString(outMessage));
				outMessage = std::to_string(S) + "\n" + inMessage;
			}
		}

	private: System::Void открытьToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		OpenFileDialog^ openFileDialog = gcnew OpenFileDialog();
		openFileDialog->Title = "Выберите файл для чтения";
		openFileDialog->Filter = "Все файлы (*.*)|*.*";
		openFileDialog->RestoreDirectory = true;

		if (openFileDialog->ShowDialog() == Windows::Forms::DialogResult::OK)
		{
			try
			{
				String^ filePath = openFileDialog->FileName;
				std::string nativePath = msclr::interop::marshal_as<std::string>(filePath);

				std::ifstream file(nativePath);
				if (!file.is_open()) {
					MessageBox::Show("Ошибка открытия файла", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
					return;
				}

				std::vector<std::string> lines;

				while (std::getline(file, inMessage)) {
					lines.push_back(inMessage);
				}
				file.close();

				std::string result = "";
				for (const auto& current : lines) {
					result += current + "\n";
				}
				result.resize(result.size() - 1);

				String^ text = msclr::interop::marshal_as<String^>(result);
				MessageTextBox->Text = text;
				inMessage = result;
			}
			catch (...)
			{
				inMessage.clear();
				return;
			}
		}
		return;
	}
	private: System::Void CheckButton_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		outMessage = "";
		RSAData rsaData = TryInitRSAData();
		if (rsaData.d != 0)
		{
			int FileSignature = -1;
			ParsedData data = parseString(inMessage);
			if ( data.signature == "")
			{
				MessageBox::Show("Ошибка в файле для проверки. Не удалось найти подпись или сообщение!");
				return;
			}
			try
			{
				FileSignature = std::stoi(data.signature);
			}
			catch (...)
			{
				FileSignature = -1;
			}

			if (FileSignature == -1)
			{
				MessageBox::Show("Некорректный формат подписи файла! Подпись должна быть целым положительным числом!");
				return;
			}

			int MessageHash = calcMessageHash(data.message , rsaData.r);
			int CalculatedHash = pow_mod(FileSignature, rsaData.e, rsaData.r);
			K0TextBox->Text = rsaData.e.ToString() + ", " + rsaData.r.ToString();
			KcTextBox->Text = rsaData.d.ToString() + ", " + rsaData.r.ToString();
			MDecryptionTextBox->Text = MessageHash.ToString();
			SDecryptionTextBox->Text = FileSignature.ToString();
			MHashResultTextBox->Text = CalculatedHash.ToString();
			
			std::string resultMessage = "";
			if (CalculatedHash == MessageHash)
			{
				MessageBox::Show("Хеш файла: " + MessageHash.ToString() + " Рассчитанный хеш: " + CalculatedHash.ToString() + " Файл корректен!", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}
			else
			{
				MessageBox::Show("Хеш файла: " + MessageHash.ToString() + " Рассчитанный хеш: " + CalculatedHash.ToString() + " Файл был изменён или повреждён!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
	}
	private: System::Void сохранитьToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		SaveFileDialog^ saveToFileDialog = gcnew SaveFileDialog();
		saveToFileDialog->Title = "Выберите файл для чтения";
		saveToFileDialog->Filter = "Все файлы (*.*)|*.*";
		saveToFileDialog->RestoreDirectory = true;

		if (saveToFileDialog->ShowDialog() == Windows::Forms::DialogResult::OK)
		{
			try
			{
				String^ filePath = saveToFileDialog->FileName;
				std::string nativePath = msclr::interop::marshal_as<std::string>(filePath);

				std::ofstream outFile(nativePath);

				if (outFile.is_open()) {
					outFile << outMessage; 
					outFile.close(); 
				}
				else {
					MessageBox::Show("Не удалось открыть файл для записи.");
				}
				outFile.close();
			}
			catch (...)
			{
				return;
			}
		}
		return;
	}

	private: System::Void PTextBox_TextChanged(System::Object^ sender, System::EventArgs^ e) 
	{
		int p = GetTextBoxValue(PTextBox);
		int q = GetTextBoxValue(QTextBox);
		if (is_prime(p) && p > 3 && is_prime(q) && q > 3)
		{
			EComboBox->Items->Clear();
			int f = (p - 1) * (q - 1);
			std::vector<int> exps = calcOpenExps(f);
			for (int exp : exps)
			{
				EComboBox->Items->Add(exp);
			}
		}
	}
private: System::Void QTextBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	int p = GetTextBoxValue(PTextBox);
	int q = GetTextBoxValue(QTextBox);
	if (is_prime(p) && p > 3 && is_prime(q) && q > 3)
	{
		EComboBox->Items->Clear();
		int f = (p - 1) * (q - 1);
		std::vector<int> exps = calcOpenExps(f);
		for (int exp : exps)
		{
			EComboBox->Items->Add(exp);
		}
	}
}
};

}


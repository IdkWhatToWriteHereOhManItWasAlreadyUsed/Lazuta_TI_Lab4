#pragma once
#include <string>
namespace $safeprojectname$ 
{
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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
		private: System::Windows::Forms::TextBox^ textBox9;
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
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->K0TextBox = (gcnew System::Windows::Forms::TextBox());
			this->KcTextBox = (gcnew System::Windows::Forms::TextBox());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
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
			this->EComboBox = (gcnew System::Windows::Forms::ComboBox());
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
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::SkyBlue;
			this->label1->Location = System::Drawing::Point(4, 47);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(1059, 24);
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
			this->menuStrip1->Size = System::Drawing::Size(1075, 24);
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
			// 
			// сохранитьToolStripMenuItem
			// 
			this->сохранитьToolStripMenuItem->Name = L"сохранитьToolStripMenuItem";
			this->сохранитьToolStripMenuItem->Size = System::Drawing::Size(133, 22);
			this->сохранитьToolStripMenuItem->Text = L"Сохранить";
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
			this->label6->Size = System::Drawing::Size(318, 18);
			this->label6->TabIndex = 10;
			this->label6->Text = L"Функция Эйлера для r φ(r) = (p–1)*(q–1):";
			// 
			// FTextBox
			// 
			this->FTextBox->Location = System::Drawing::Point(391, 22);
			this->FTextBox->MaxLength = 100;
			this->FTextBox->Name = L"FTextBox";
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
			// textBox9
			// 
			this->textBox9->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->textBox9->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox9->Font = (gcnew System::Drawing::Font(L"Microsoft Uighur", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox9->ForeColor = System::Drawing::SystemColors::Window;
			this->textBox9->Location = System::Drawing::Point(15, 297);
			this->textBox9->Multiline = true;
			this->textBox9->Name = L"textBox9";
			this->textBox9->ReadOnly = true;
			this->textBox9->Size = System::Drawing::Size(514, 332);
			this->textBox9->TabIndex = 21;
			this->textBox9->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
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
			this->SEncryptionTextBox->Size = System::Drawing::Size(100, 20);
			this->SEncryptionTextBox->TabIndex = 18;
			// 
			// MEncryptionTextBox
			// 
			this->MEncryptionTextBox->Location = System::Drawing::Point(391, 15);
			this->MEncryptionTextBox->MaxLength = 100;
			this->MEncryptionTextBox->Name = L"MEncryptionTextBox";
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
			this->SDecryptionTextBox->Size = System::Drawing::Size(100, 20);
			this->SDecryptionTextBox->TabIndex = 18;
			// 
			// MDecryptionTextBox
			// 
			this->MDecryptionTextBox->Location = System::Drawing::Point(391, 15);
			this->MDecryptionTextBox->MaxLength = 100;
			this->MDecryptionTextBox->Name = L"MDecryptionTextBox";
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
			// 
			// EComboBox
			// 
			this->EComboBox->FormattingEnabled = true;
			this->EComboBox->Location = System::Drawing::Point(391, 67);
			this->EComboBox->Name = L"EComboBox";
			this->EComboBox->Size = System::Drawing::Size(100, 21);
			this->EComboBox->TabIndex = 17;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->ClientSize = System::Drawing::Size(1075, 657);
			this->Controls->Add(this->CheckButton);
			this->Controls->Add(this->SignButton);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->EncryptionPanel);
			this->Controls->Add(this->textBox9);
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

		private: System::Void оРазработчикеToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
		{
			MessageBox::Show("Лазута Д.А, гр.351004");
		}

		private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e)
		{
			//
		}

		int GetTextBoxValue(System::Windows::Forms::TextBox^ textBox)
		{
			try
			{
				int num = System::Convert::ToInt32(textBox->Text);
				return num > 0 ? num : -1;
			}
			catch (System::FormatException^)
			{
				// Если преобразование не удалось (некорректный формат)
				return -1;
			}
			catch (System::OverflowException^)
			{
				// Если число слишком большое или маленькое для int
				return -1;
			}
		}

		void TryInitRSAData()
		{
			int p = GetTextBoxValue(PTextBox);
			
		}
	};

}


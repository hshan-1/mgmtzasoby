#pragma once

#include<Windows.h>

int revenue; 

namespace mgmtzasoby {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Podsumowanie informacji o form
	/// </summary>
	public ref class form : public System::Windows::Forms::Form
	{
	public:
		form(void)
		{
			InitializeComponent();
			//
			//TODO: W tym miejscu dodaj kod konstruktora
			//
		}

	protected:
		/// <summary>
		/// Wyczy�� wszystkie u�ywane zasoby.
		/// </summary>
		~form()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ dollar;
	protected:
	private: System::Windows::Forms::Label^ account;




	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::ListBox^ listBox3;
	private: System::Windows::Forms::CheckBox^ checkBox3;





	private: System::Windows::Forms::ListBox^ listBox4;
	private: System::Windows::Forms::CheckBox^ checkBox4;
	private: System::Windows::Forms::Button^ sell4;

	private: System::Windows::Forms::Button^ buy4;

	private: System::Windows::Forms::ListBox^ listBox5;
	private: System::Windows::Forms::CheckBox^ checkBox5;
	private: System::Windows::Forms::Button^ sell5;

	private: System::Windows::Forms::Button^ buy5;

	private: System::Windows::Forms::ListBox^ listBox2;
	private: System::Windows::Forms::CheckBox^ checkBox2;


	private: System::Windows::Forms::ListBox^ listBox6;
	private: System::Windows::Forms::CheckBox^ checkBox6;
	private: System::Windows::Forms::Button^ sell6;

	private: System::Windows::Forms::Button^ buy6;

	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::PictureBox^ pictureBox6;
	private: System::Windows::Forms::ProgressBar^ progressBar1;
	private: System::ComponentModel::BackgroundWorker^ backgroundWorker1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Button^ button2;
private: System::ComponentModel::BackgroundWorker^ mineworker;
private: System::Windows::Forms::PictureBox^ pictureBox7;
	private: System::Windows::Forms::ProgressBar^ mineStatus;

private: System::Windows::Forms::ToolTip^ toolTip1;
private: System::Windows::Forms::PictureBox^ feMine;
private: System::Windows::Forms::PictureBox^ steelMill;
	private: System::Windows::Forms::ProgressBar^ femineStatus;
	private: System::Windows::Forms::ProgressBar^ steelmillStatus;


private: System::ComponentModel::BackgroundWorker^ feMineWorker;
private: System::ComponentModel::BackgroundWorker^ SmWorker;
private: System::ComponentModel::BackgroundWorker^ backgroundWorker4;
private: System::ComponentModel::BackgroundWorker^ backgroundWorker5;
private: System::ComponentModel::BackgroundWorker^ backgroundWorker6;
private: System::Windows::Forms::Label^ carbonYield;
	private: System::Windows::Forms::Label^ cStorage;

	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ pass;
	private: System::Windows::Forms::Label^ controlchechlb;
	private: System::ComponentModel::BackgroundWorker^ brutalDecibelTherapy;
private: System::Windows::Forms::Label^ FeStorage;

	private: System::Windows::Forms::Label^ ferrumYield;

private: System::Windows::Forms::Label^ steelStorage;

private: System::Windows::Forms::Button^ FeBuy;
private: System::Windows::Forms::Button^ FeSell;
private: System::Windows::Forms::Button^ CSell;
private: System::Windows::Forms::Button^ CBuy;
private: System::Windows::Forms::Button^ steelSell;

private: System::Windows::Forms::Button^ steelBuy;











	private: System::ComponentModel::IContainer^ components;
	protected:
	private:
		/// <summary>
		/// Wymagana zmienna projektanta.
		/// </summary>
#pragma region Windows Form Designer generated code
		/// <summary>
		/// Metoda wymagana do obs�ugi projektanta � nie nale�y modyfikowa�
		/// jej zawarto�ci w edytorze kodu.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(form::typeid));
			this->dollar = (gcnew System::Windows::Forms::Label());
			this->account = (gcnew System::Windows::Forms::Label());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->listBox3 = (gcnew System::Windows::Forms::ListBox());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->listBox4 = (gcnew System::Windows::Forms::ListBox());
			this->checkBox4 = (gcnew System::Windows::Forms::CheckBox());
			this->sell4 = (gcnew System::Windows::Forms::Button());
			this->buy4 = (gcnew System::Windows::Forms::Button());
			this->listBox5 = (gcnew System::Windows::Forms::ListBox());
			this->checkBox5 = (gcnew System::Windows::Forms::CheckBox());
			this->sell5 = (gcnew System::Windows::Forms::Button());
			this->buy5 = (gcnew System::Windows::Forms::Button());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->listBox6 = (gcnew System::Windows::Forms::ListBox());
			this->checkBox6 = (gcnew System::Windows::Forms::CheckBox());
			this->sell6 = (gcnew System::Windows::Forms::Button());
			this->buy6 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
			this->backgroundWorker1 = (gcnew System::ComponentModel::BackgroundWorker());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->mineworker = (gcnew System::ComponentModel::BackgroundWorker());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->mineStatus = (gcnew System::Windows::Forms::ProgressBar());
			this->toolTip1 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->feMine = (gcnew System::Windows::Forms::PictureBox());
			this->steelMill = (gcnew System::Windows::Forms::PictureBox());
			this->femineStatus = (gcnew System::Windows::Forms::ProgressBar());
			this->steelmillStatus = (gcnew System::Windows::Forms::ProgressBar());
			this->feMineWorker = (gcnew System::ComponentModel::BackgroundWorker());
			this->SmWorker = (gcnew System::ComponentModel::BackgroundWorker());
			this->backgroundWorker4 = (gcnew System::ComponentModel::BackgroundWorker());
			this->backgroundWorker5 = (gcnew System::ComponentModel::BackgroundWorker());
			this->backgroundWorker6 = (gcnew System::ComponentModel::BackgroundWorker());
			this->carbonYield = (gcnew System::Windows::Forms::Label());
			this->cStorage = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->pass = (gcnew System::Windows::Forms::Label());
			this->controlchechlb = (gcnew System::Windows::Forms::Label());
			this->brutalDecibelTherapy = (gcnew System::ComponentModel::BackgroundWorker());
			this->FeStorage = (gcnew System::Windows::Forms::Label());
			this->ferrumYield = (gcnew System::Windows::Forms::Label());
			this->steelStorage = (gcnew System::Windows::Forms::Label());
			this->FeBuy = (gcnew System::Windows::Forms::Button());
			this->FeSell = (gcnew System::Windows::Forms::Button());
			this->CSell = (gcnew System::Windows::Forms::Button());
			this->CBuy = (gcnew System::Windows::Forms::Button());
			this->steelSell = (gcnew System::Windows::Forms::Button());
			this->steelBuy = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->feMine))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->steelMill))->BeginInit();
			this->SuspendLayout();
			// 
			// dollar
			// 
			this->dollar->AutoSize = true;
			this->dollar->BackColor = System::Drawing::Color::Transparent;
			this->dollar->Dock = System::Windows::Forms::DockStyle::Right;
			this->dollar->Font = (gcnew System::Drawing::Font(L"Stencil", 20));
			this->dollar->ForeColor = System::Drawing::Color::Green;
			this->dollar->Location = System::Drawing::Point(1523, 0);
			this->dollar->Name = L"dollar";
			this->dollar->Size = System::Drawing::Size(30, 32);
			this->dollar->TabIndex = 0;
			this->dollar->Text = L"$";
			this->dollar->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->dollar->Click += gcnew System::EventHandler(this, &form::dollar_Click);
			this->dollar->MouseHover += gcnew System::EventHandler(this, &form::dollar_MouseHover);
			// 
			// account
			// 
			this->account->AutoSize = true;
			this->account->BackColor = System::Drawing::Color::Transparent;
			this->account->Dock = System::Windows::Forms::DockStyle::Right;
			this->account->Font = (gcnew System::Drawing::Font(L"Stencil", 20));
			this->account->ForeColor = System::Drawing::Color::Green;
			this->account->Location = System::Drawing::Point(1553, 0);
			this->account->Name = L"account";
			this->account->Size = System::Drawing::Size(0, 32);
			this->account->TabIndex = 1;
			this->account->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->account->Click += gcnew System::EventHandler(this, &form::account_Click);
			// 
			// checkBox1
			// 
			this->checkBox1->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox1->BackColor = System::Drawing::Color::Red;
			this->checkBox1->FlatAppearance->BorderSize = 2;
			this->checkBox1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->checkBox1->Location = System::Drawing::Point(14, 425);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(13, 13);
			this->checkBox1->TabIndex = 4;
			this->checkBox1->UseVisualStyleBackColor = false;
			this->checkBox1->Click += gcnew System::EventHandler(this, &form::automat);
			// 
			// listBox1
			// 
			this->listBox1->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->listBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->listBox1->ForeColor = System::Drawing::Color::Black;
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ImeMode = System::Windows::Forms::ImeMode::Off;
			this->listBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"sell", L"buy\t ", L"maintain" });
			this->listBox1->Location = System::Drawing::Point(31, 423);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(46, 41);
			this->listBox1->TabIndex = 5;
			// 
			// listBox3
			// 
			this->listBox3->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->listBox3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->listBox3->ForeColor = System::Drawing::Color::Black;
			this->listBox3->FormattingEnabled = true;
			this->listBox3->ImeMode = System::Windows::Forms::ImeMode::Off;
			this->listBox3->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"sell", L"buy", L"maintain" });
			this->listBox3->Location = System::Drawing::Point(410, 423);
			this->listBox3->Name = L"listBox3";
			this->listBox3->Size = System::Drawing::Size(46, 41);
			this->listBox3->TabIndex = 0;
			// 
			// checkBox3
			// 
			this->checkBox3->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox3->BackColor = System::Drawing::Color::Red;
			this->checkBox3->FlatAppearance->BorderSize = 2;
			this->checkBox3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->checkBox3->Location = System::Drawing::Point(393, 425);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(13, 13);
			this->checkBox3->TabIndex = 8;
			this->checkBox3->UseVisualStyleBackColor = false;
			this->checkBox3->CheckedChanged += gcnew System::EventHandler(this, &form::checkBox3_CheckedChanged);
			this->checkBox3->Click += gcnew System::EventHandler(this, &form::automat);
			// 
			// listBox4
			// 
			this->listBox4->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->listBox4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->listBox4->ForeColor = System::Drawing::Color::Black;
			this->listBox4->FormattingEnabled = true;
			this->listBox4->ImeMode = System::Windows::Forms::ImeMode::Off;
			this->listBox4->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"sell", L"buy\t ", L"maintain" });
			this->listBox4->Location = System::Drawing::Point(606, 423);
			this->listBox4->Name = L"listBox4";
			this->listBox4->Size = System::Drawing::Size(46, 41);
			this->listBox4->TabIndex = 13;
			// 
			// checkBox4
			// 
			this->checkBox4->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox4->BackColor = System::Drawing::Color::Red;
			this->checkBox4->FlatAppearance->BorderSize = 2;
			this->checkBox4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->checkBox4->Location = System::Drawing::Point(589, 425);
			this->checkBox4->Name = L"checkBox4";
			this->checkBox4->Size = System::Drawing::Size(13, 13);
			this->checkBox4->TabIndex = 12;
			this->checkBox4->UseVisualStyleBackColor = false;
			this->checkBox4->Click += gcnew System::EventHandler(this, &form::automat);
			// 
			// sell4
			// 
			this->sell4->BackColor = System::Drawing::Color::Red;
			this->sell4->FlatAppearance->BorderSize = 0;
			this->sell4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->sell4->Location = System::Drawing::Point(587, 504);
			this->sell4->Name = L"sell4";
			this->sell4->Size = System::Drawing::Size(92, 25);
			this->sell4->TabIndex = 11;
			this->sell4->Text = L"sell";
			this->sell4->UseVisualStyleBackColor = false;
			// 
			// buy4
			// 
			this->buy4->BackColor = System::Drawing::Color::Green;
			this->buy4->FlatAppearance->BorderSize = 0;
			this->buy4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buy4->Location = System::Drawing::Point(587, 473);
			this->buy4->Name = L"buy4";
			this->buy4->Size = System::Drawing::Size(92, 25);
			this->buy4->TabIndex = 10;
			this->buy4->Text = L"buy";
			this->buy4->UseVisualStyleBackColor = false;
			// 
			// listBox5
			// 
			this->listBox5->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->listBox5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->listBox5->ForeColor = System::Drawing::Color::Black;
			this->listBox5->FormattingEnabled = true;
			this->listBox5->ImeMode = System::Windows::Forms::ImeMode::Off;
			this->listBox5->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"sell", L"buy\t ", L"maintain" });
			this->listBox5->Location = System::Drawing::Point(802, 423);
			this->listBox5->Name = L"listBox5";
			this->listBox5->Size = System::Drawing::Size(46, 41);
			this->listBox5->TabIndex = 17;
			// 
			// checkBox5
			// 
			this->checkBox5->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox5->BackColor = System::Drawing::Color::Red;
			this->checkBox5->FlatAppearance->BorderSize = 2;
			this->checkBox5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->checkBox5->Location = System::Drawing::Point(785, 425);
			this->checkBox5->Name = L"checkBox5";
			this->checkBox5->Size = System::Drawing::Size(13, 13);
			this->checkBox5->TabIndex = 16;
			this->checkBox5->UseVisualStyleBackColor = false;
			this->checkBox5->Click += gcnew System::EventHandler(this, &form::automat);
			// 
			// sell5
			// 
			this->sell5->BackColor = System::Drawing::Color::Red;
			this->sell5->FlatAppearance->BorderSize = 0;
			this->sell5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->sell5->Location = System::Drawing::Point(783, 504);
			this->sell5->Name = L"sell5";
			this->sell5->Size = System::Drawing::Size(92, 25);
			this->sell5->TabIndex = 15;
			this->sell5->Text = L"sell";
			this->sell5->UseVisualStyleBackColor = false;
			// 
			// buy5
			// 
			this->buy5->BackColor = System::Drawing::Color::Green;
			this->buy5->FlatAppearance->BorderSize = 0;
			this->buy5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buy5->Location = System::Drawing::Point(783, 473);
			this->buy5->Name = L"buy5";
			this->buy5->Size = System::Drawing::Size(92, 25);
			this->buy5->TabIndex = 14;
			this->buy5->Text = L"buy";
			this->buy5->UseVisualStyleBackColor = false;
			// 
			// listBox2
			// 
			this->listBox2->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->listBox2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->listBox2->ForeColor = System::Drawing::Color::Black;
			this->listBox2->FormattingEnabled = true;
			this->listBox2->ImeMode = System::Windows::Forms::ImeMode::Off;
			this->listBox2->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"sell", L"buy\t ", L"maintain" });
			this->listBox2->Location = System::Drawing::Point(214, 423);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(46, 41);
			this->listBox2->TabIndex = 21;
			// 
			// checkBox2
			// 
			this->checkBox2->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox2->BackColor = System::Drawing::Color::Red;
			this->checkBox2->FlatAppearance->BorderSize = 2;
			this->checkBox2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->checkBox2->Location = System::Drawing::Point(197, 425);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(13, 13);
			this->checkBox2->TabIndex = 20;
			this->checkBox2->UseVisualStyleBackColor = false;
			this->checkBox2->Click += gcnew System::EventHandler(this, &form::automat);
			// 
			// listBox6
			// 
			this->listBox6->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->listBox6->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->listBox6->ForeColor = System::Drawing::Color::Black;
			this->listBox6->FormattingEnabled = true;
			this->listBox6->ImeMode = System::Windows::Forms::ImeMode::Off;
			this->listBox6->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"sell", L"buy\t ", L"maintain" });
			this->listBox6->Location = System::Drawing::Point(998, 423);
			this->listBox6->Name = L"listBox6";
			this->listBox6->Size = System::Drawing::Size(46, 41);
			this->listBox6->TabIndex = 25;
			// 
			// checkBox6
			// 
			this->checkBox6->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox6->BackColor = System::Drawing::Color::Red;
			this->checkBox6->FlatAppearance->BorderSize = 2;
			this->checkBox6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->checkBox6->Location = System::Drawing::Point(981, 425);
			this->checkBox6->Name = L"checkBox6";
			this->checkBox6->Size = System::Drawing::Size(13, 13);
			this->checkBox6->TabIndex = 24;
			this->checkBox6->UseVisualStyleBackColor = false;
			this->checkBox6->Click += gcnew System::EventHandler(this, &form::automat);
			// 
			// sell6
			// 
			this->sell6->BackColor = System::Drawing::Color::Red;
			this->sell6->FlatAppearance->BorderSize = 0;
			this->sell6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->sell6->Location = System::Drawing::Point(979, 504);
			this->sell6->Name = L"sell6";
			this->sell6->Size = System::Drawing::Size(92, 25);
			this->sell6->TabIndex = 23;
			this->sell6->Text = L"sell";
			this->sell6->UseVisualStyleBackColor = false;
			// 
			// buy6
			// 
			this->buy6->BackColor = System::Drawing::Color::Green;
			this->buy6->FlatAppearance->BorderSize = 0;
			this->buy6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buy6->Location = System::Drawing::Point(979, 473);
			this->buy6->Name = L"buy6";
			this->buy6->Size = System::Drawing::Size(92, 25);
			this->buy6->TabIndex = 22;
			this->buy6->Text = L"buy";
			this->buy6->UseVisualStyleBackColor = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->pictureBox1->Cursor = System::Windows::Forms::Cursors::Help;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(12, 280);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(144, 137);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 26;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &form::pictureBox1_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->pictureBox2->Cursor = System::Windows::Forms::Cursors::Help;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(195, 280);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(144, 137);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 27;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &form::pictureBox2_Click);
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->pictureBox3->Cursor = System::Windows::Forms::Cursors::Help;
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(391, 282);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(144, 137);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox3->TabIndex = 28;
			this->pictureBox3->TabStop = false;
			this->pictureBox3->Click += gcnew System::EventHandler(this, &form::pictureBox3_Click);
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->pictureBox4->Cursor = System::Windows::Forms::Cursors::Help;
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(587, 280);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(144, 137);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox4->TabIndex = 29;
			this->pictureBox4->TabStop = false;
			// 
			// pictureBox5
			// 
			this->pictureBox5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->pictureBox5->Cursor = System::Windows::Forms::Cursors::Help;
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(783, 280);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(144, 137);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox5->TabIndex = 30;
			this->pictureBox5->TabStop = false;
			// 
			// pictureBox6
			// 
			this->pictureBox6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->pictureBox6->Cursor = System::Windows::Forms::Cursors::Help;
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->Location = System::Drawing::Point(979, 280);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(144, 137);
			this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox6->TabIndex = 31;
			this->pictureBox6->TabStop = false;
			// 
			// progressBar1
			// 
			this->progressBar1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->progressBar1->ForeColor = System::Drawing::Color::Red;
			this->progressBar1->Location = System::Drawing::Point(12, 542);
			this->progressBar1->Maximum = 7;
			this->progressBar1->Name = L"progressBar1";
			this->progressBar1->Size = System::Drawing::Size(1059, 34);
			this->progressBar1->Step = 1;
			this->progressBar1->TabIndex = 32;
			this->progressBar1->Click += gcnew System::EventHandler(this, &form::progressBar1_Click);
			// 
			// backgroundWorker1
			// 
			this->backgroundWorker1->WorkerReportsProgress = true;
			this->backgroundWorker1->WorkerSupportsCancellation = true;
			this->backgroundWorker1->DoWork += gcnew System::ComponentModel::DoWorkEventHandler(this, &form::backgroundWorker1_DoWork);
			this->backgroundWorker1->ProgressChanged += gcnew System::ComponentModel::ProgressChangedEventHandler(this, &form::backgroundWorker1_ProgressChanged);
			this->backgroundWorker1->RunWorkerCompleted += gcnew System::ComponentModel::RunWorkerCompletedEventHandler(this, &form::backgroundWorker1_RunWorkerCompleted);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30));
			this->button1->Location = System::Drawing::Point(783, 109);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(144, 137);
			this->button1->TabIndex = 33;
			this->button1->Text = L"Start Work";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &form::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->label1->Location = System::Drawing::Point(30, 578);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(110, 31);
			this->label1->TabIndex = 34;
			this->label1->Text = L"Monday";
			this->label1->Click += gcnew System::EventHandler(this, &form::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->label2->Location = System::Drawing::Point(176, 579);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(119, 31);
			this->label2->TabIndex = 35;
			this->label2->Text = L"Tuesday";
			this->label2->Click += gcnew System::EventHandler(this, &form::label2_Click_1);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->label3->Location = System::Drawing::Point(313, 579);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(157, 31);
			this->label3->TabIndex = 36;
			this->label3->Text = L"Wednesday";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label3->Click += gcnew System::EventHandler(this, &form::label3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Pixel));
			this->label4->Location = System::Drawing::Point(303, 539);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(24, 36);
			this->label4->TabIndex = 37;
			this->label4->Text = L"|";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Pixel));
			this->label5->Location = System::Drawing::Point(151, 539);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(24, 36);
			this->label5->TabIndex = 38;
			this->label5->Text = L"|";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Pixel));
			this->label6->Location = System::Drawing::Point(454, 539);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(24, 36);
			this->label6->TabIndex = 39;
			this->label6->Text = L"|";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Pixel));
			this->label7->Location = System::Drawing::Point(604, 539);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(24, 36);
			this->label7->TabIndex = 40;
			this->label7->Text = L"|";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Pixel));
			this->label8->Location = System::Drawing::Point(756, 539);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(24, 36);
			this->label8->TabIndex = 41;
			this->label8->Text = L"|";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::Transparent;
			this->label9->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Pixel));
			this->label9->Location = System::Drawing::Point(908, 539);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(24, 36);
			this->label9->TabIndex = 42;
			this->label9->Text = L"|";
			this->label9->Click += gcnew System::EventHandler(this, &form::label9_Click);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::Transparent;
			this->label10->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->label10->Location = System::Drawing::Point(477, 578);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(128, 31);
			this->label10->TabIndex = 43;
			this->label10->Text = L"Thursday";
			this->label10->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label10->Click += gcnew System::EventHandler(this, &form::label10_Click);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::Color::Transparent;
			this->label11->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->label11->Location = System::Drawing::Point(652, 578);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(90, 31);
			this->label11->TabIndex = 44;
			this->label11->Text = L"Friday";
			this->label11->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label11->Click += gcnew System::EventHandler(this, &form::label11_Click);
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->BackColor = System::Drawing::Color::Transparent;
			this->label12->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->label12->Location = System::Drawing::Point(782, 578);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(123, 31);
			this->label12->TabIndex = 45;
			this->label12->Text = L"Saturday";
			this->label12->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label12->Click += gcnew System::EventHandler(this, &form::label12_Click);
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->BackColor = System::Drawing::Color::Transparent;
			this->label13->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->label13->Location = System::Drawing::Point(946, 578);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(106, 31);
			this->label13->TabIndex = 46;
			this->label13->Text = L"Sunday";
			this->label13->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label13->Click += gcnew System::EventHandler(this, &form::label13_Click);
			// 
			// button2
			// 
			this->button2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.BackgroundImage")));
			this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button2->FlatAppearance->BorderColor = System::Drawing::Color::Red;
			this->button2->FlatAppearance->BorderSize = 3;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Location = System::Drawing::Point(1077, 539);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(37, 37);
			this->button2->TabIndex = 47;
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &form::button2_Click);
			// 
			// mineworker
			// 
			this->mineworker->WorkerReportsProgress = true;
			this->mineworker->WorkerSupportsCancellation = true;
			this->mineworker->DoWork += gcnew System::ComponentModel::DoWorkEventHandler(this, &form::mineworker_DoWork);
			this->mineworker->ProgressChanged += gcnew System::ComponentModel::ProgressChangedEventHandler(this, &form::mineworker_ProgressChanged);
			this->mineworker->RunWorkerCompleted += gcnew System::ComponentModel::RunWorkerCompletedEventHandler(this, &form::mineworker_RunWorkerCompleted);
			// 
			// pictureBox7
			// 
			this->pictureBox7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.BackgroundImage")));
			this->pictureBox7->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox7->Cursor = System::Windows::Forms::Cursors::Help;
			this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.Image")));
			this->pictureBox7->Location = System::Drawing::Point(12, 12);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(144, 137);
			this->pictureBox7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox7->TabIndex = 48;
			this->pictureBox7->TabStop = false;
			this->pictureBox7->Click += gcnew System::EventHandler(this, &form::pictureBox7_Click);
			this->pictureBox7->MouseHover += gcnew System::EventHandler(this, &form::pictureBox7_MouseHover);
			// 
			// mineStatus
			// 
			this->mineStatus->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->mineStatus->ForeColor = System::Drawing::Color::Red;
			this->mineStatus->Location = System::Drawing::Point(12, 148);
			this->mineStatus->Maximum = 10;
			this->mineStatus->Name = L"mineStatus";
			this->mineStatus->Size = System::Drawing::Size(144, 15);
			this->mineStatus->Step = 1;
			this->mineStatus->Style = System::Windows::Forms::ProgressBarStyle::Marquee;
			this->mineStatus->TabIndex = 1;
			this->mineStatus->Visible = false;
			// 
			// toolTip1
			// 
			this->toolTip1->AutomaticDelay = 1;
			this->toolTip1->AutoPopDelay = 10000;
			this->toolTip1->InitialDelay = 1;
			this->toolTip1->ReshowDelay = 0;
			this->toolTip1->Popup += gcnew System::Windows::Forms::PopupEventHandler(this, &form::toolTip1_Popup);
			// 
			// feMine
			// 
			this->feMine->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"feMine.BackgroundImage")));
			this->feMine->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->feMine->Cursor = System::Windows::Forms::Cursors::Help;
			this->feMine->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"feMine.Image")));
			this->feMine->Location = System::Drawing::Point(195, 12);
			this->feMine->Name = L"feMine";
			this->feMine->Size = System::Drawing::Size(144, 137);
			this->feMine->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->feMine->TabIndex = 49;
			this->feMine->TabStop = false;
			this->feMine->MouseHover += gcnew System::EventHandler(this, &form::feMine_MouseHover);
			// 
			// steelMill
			// 
			this->steelMill->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->steelMill->Cursor = System::Windows::Forms::Cursors::Help;
			this->steelMill->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"steelMill.Image")));
			this->steelMill->Location = System::Drawing::Point(391, 12);
			this->steelMill->Name = L"steelMill";
			this->steelMill->Size = System::Drawing::Size(144, 137);
			this->steelMill->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->steelMill->TabIndex = 50;
			this->steelMill->TabStop = false;
			this->steelMill->MouseHover += gcnew System::EventHandler(this, &form::steelMill_MouseHover);
			// 
			// femineStatus
			// 
			this->femineStatus->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->femineStatus->ForeColor = System::Drawing::Color::Red;
			this->femineStatus->Location = System::Drawing::Point(195, 148);
			this->femineStatus->Maximum = 10;
			this->femineStatus->Name = L"femineStatus";
			this->femineStatus->Size = System::Drawing::Size(144, 15);
			this->femineStatus->Step = 1;
			this->femineStatus->Style = System::Windows::Forms::ProgressBarStyle::Marquee;
			this->femineStatus->TabIndex = 51;
			this->femineStatus->Visible = false;
			// 
			// steelmillStatus
			// 
			this->steelmillStatus->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->steelmillStatus->ForeColor = System::Drawing::Color::Red;
			this->steelmillStatus->Location = System::Drawing::Point(391, 148);
			this->steelmillStatus->Maximum = 10;
			this->steelmillStatus->Name = L"steelmillStatus";
			this->steelmillStatus->Size = System::Drawing::Size(144, 15);
			this->steelmillStatus->Step = 1;
			this->steelmillStatus->Style = System::Windows::Forms::ProgressBarStyle::Marquee;
			this->steelmillStatus->TabIndex = 52;
			this->steelmillStatus->Visible = false;
			// 
			// feMineWorker
			// 
			this->feMineWorker->WorkerReportsProgress = true;
			this->feMineWorker->WorkerSupportsCancellation = true;
			this->feMineWorker->DoWork += gcnew System::ComponentModel::DoWorkEventHandler(this, &form::feMineWorker_DoWork);
			this->feMineWorker->ProgressChanged += gcnew System::ComponentModel::ProgressChangedEventHandler(this, &form::feMineWorker_ProgressChanged);
			this->feMineWorker->RunWorkerCompleted += gcnew System::ComponentModel::RunWorkerCompletedEventHandler(this, &form::feMineWorker_RunWorkerCompleted);
			// 
			// SmWorker
			// 
			this->SmWorker->WorkerReportsProgress = true;
			this->SmWorker->WorkerSupportsCancellation = true;
			this->SmWorker->DoWork += gcnew System::ComponentModel::DoWorkEventHandler(this, &form::SmWorker_DoWork);
			this->SmWorker->ProgressChanged += gcnew System::ComponentModel::ProgressChangedEventHandler(this, &form::SmWorker_ProgressChanged);
			this->SmWorker->RunWorkerCompleted += gcnew System::ComponentModel::RunWorkerCompletedEventHandler(this, &form::SmWorker_RunWorkerCompleted);
			// 
			// backgroundWorker4
			// 
			this->backgroundWorker4->WorkerReportsProgress = true;
			this->backgroundWorker4->WorkerSupportsCancellation = true;
			// 
			// backgroundWorker5
			// 
			this->backgroundWorker5->WorkerReportsProgress = true;
			this->backgroundWorker5->WorkerSupportsCancellation = true;
			// 
			// backgroundWorker6
			// 
			this->backgroundWorker6->WorkerReportsProgress = true;
			this->backgroundWorker6->WorkerSupportsCancellation = true;
			// 
			// carbonYield
			// 
			this->carbonYield->AutoSize = true;
			this->carbonYield->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold));
			this->carbonYield->Location = System::Drawing::Point(7, 171);
			this->carbonYield->Name = L"carbonYield";
			this->carbonYield->Size = System::Drawing::Size(76, 25);
			this->carbonYield->TabIndex = 53;
			this->carbonYield->Text = L"0 units";
			this->carbonYield->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// cStorage
			// 
			this->cStorage->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->cStorage->Location = System::Drawing::Point(12, 254);
			this->cStorage->Name = L"cStorage";
			this->cStorage->Size = System::Drawing::Size(144, 23);
			this->cStorage->TabIndex = 54;
			this->cStorage->Text = L"0/0";
			this->cStorage->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label14
			// 
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22));
			this->label14->Location = System::Drawing::Point(1226, 280);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(269, 262);
			this->label14->TabIndex = 55;
			this->label14->Text = L"here you can see some stuff not much of it at the moment just some text probably "
				L"with spelling errors and some bad grammar ";
			// 
			// pass
			// 
			this->pass->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22));
			this->pass->Location = System::Drawing::Point(1209, 237);
			this->pass->Name = L"pass";
			this->pass->Size = System::Drawing::Size(269, 40);
			this->pass->TabIndex = 56;
			this->pass->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// controlchechlb
			// 
			this->controlchechlb->AutoSize = true;
			this->controlchechlb->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22));
			this->controlchechlb->Location = System::Drawing::Point(1231, 144);
			this->controlchechlb->Name = L"controlchechlb";
			this->controlchechlb->Size = System::Drawing::Size(0, 36);
			this->controlchechlb->TabIndex = 57;
			this->controlchechlb->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// brutalDecibelTherapy
			// 
			this->brutalDecibelTherapy->WorkerReportsProgress = true;
			this->brutalDecibelTherapy->DoWork += gcnew System::ComponentModel::DoWorkEventHandler(this, &form::brutalDecibelTherapy_DoWork);
			this->brutalDecibelTherapy->RunWorkerCompleted += gcnew System::ComponentModel::RunWorkerCompletedEventHandler(this, &form::brutalDecibelTherapy_RunWorkerCompleted);
			// 
			// FeStorage
			// 
			this->FeStorage->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->FeStorage->Location = System::Drawing::Point(195, 254);
			this->FeStorage->Name = L"FeStorage";
			this->FeStorage->Size = System::Drawing::Size(144, 23);
			this->FeStorage->TabIndex = 58;
			this->FeStorage->Text = L"0/0";
			this->FeStorage->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// ferrumYield
			// 
			this->ferrumYield->AutoSize = true;
			this->ferrumYield->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold));
			this->ferrumYield->Location = System::Drawing::Point(195, 171);
			this->ferrumYield->Name = L"ferrumYield";
			this->ferrumYield->Size = System::Drawing::Size(76, 25);
			this->ferrumYield->TabIndex = 59;
			this->ferrumYield->Text = L"0 units";
			this->ferrumYield->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// steelStorage
			// 
			this->steelStorage->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->steelStorage->Location = System::Drawing::Point(391, 254);
			this->steelStorage->Name = L"steelStorage";
			this->steelStorage->Size = System::Drawing::Size(144, 23);
			this->steelStorage->TabIndex = 61;
			this->steelStorage->Text = L"0/0";
			this->steelStorage->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// FeBuy
			// 
			this->FeBuy->BackColor = System::Drawing::Color::Green;
			this->FeBuy->FlatAppearance->BorderSize = 0;
			this->FeBuy->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->FeBuy->Location = System::Drawing::Point(195, 473);
			this->FeBuy->Name = L"FeBuy";
			this->FeBuy->Size = System::Drawing::Size(92, 25);
			this->FeBuy->TabIndex = 62;
			this->FeBuy->Text = L"buy";
			this->FeBuy->UseVisualStyleBackColor = false;
			this->FeBuy->Click += gcnew System::EventHandler(this, &form::FeBuy_Click);
			// 
			// FeSell
			// 
			this->FeSell->BackColor = System::Drawing::Color::Red;
			this->FeSell->FlatAppearance->BorderSize = 0;
			this->FeSell->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->FeSell->Location = System::Drawing::Point(195, 504);
			this->FeSell->Name = L"FeSell";
			this->FeSell->Size = System::Drawing::Size(92, 25);
			this->FeSell->TabIndex = 63;
			this->FeSell->Text = L"sell";
			this->FeSell->UseVisualStyleBackColor = false;
			this->FeSell->Click += gcnew System::EventHandler(this, &form::FeSell_Click);
			// 
			// CSell
			// 
			this->CSell->BackColor = System::Drawing::Color::Red;
			this->CSell->FlatAppearance->BorderSize = 0;
			this->CSell->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->CSell->Location = System::Drawing::Point(12, 504);
			this->CSell->Name = L"CSell";
			this->CSell->Size = System::Drawing::Size(92, 25);
			this->CSell->TabIndex = 65;
			this->CSell->Text = L"sell";
			this->CSell->UseVisualStyleBackColor = false;
			this->CSell->Click += gcnew System::EventHandler(this, &form::CSell_Click);
			// 
			// CBuy
			// 
			this->CBuy->BackColor = System::Drawing::Color::Green;
			this->CBuy->FlatAppearance->BorderSize = 0;
			this->CBuy->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->CBuy->Location = System::Drawing::Point(12, 473);
			this->CBuy->Name = L"CBuy";
			this->CBuy->Size = System::Drawing::Size(92, 25);
			this->CBuy->TabIndex = 64;
			this->CBuy->Text = L"buy";
			this->CBuy->UseVisualStyleBackColor = false;
			this->CBuy->Click += gcnew System::EventHandler(this, &form::CBuy_Click);
			// 
			// steelSell
			// 
			this->steelSell->BackColor = System::Drawing::Color::Red;
			this->steelSell->FlatAppearance->BorderSize = 0;
			this->steelSell->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->steelSell->Location = System::Drawing::Point(391, 504);
			this->steelSell->Name = L"steelSell";
			this->steelSell->Size = System::Drawing::Size(92, 25);
			this->steelSell->TabIndex = 67;
			this->steelSell->Text = L"sell";
			this->steelSell->UseVisualStyleBackColor = false;
			this->steelSell->Click += gcnew System::EventHandler(this, &form::steelSell_Click);
			// 
			// steelBuy
			// 
			this->steelBuy->BackColor = System::Drawing::Color::Green;
			this->steelBuy->FlatAppearance->BorderSize = 0;
			this->steelBuy->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->steelBuy->Location = System::Drawing::Point(391, 473);
			this->steelBuy->Name = L"steelBuy";
			this->steelBuy->Size = System::Drawing::Size(92, 25);
			this->steelBuy->TabIndex = 66;
			this->steelBuy->Text = L"buy";
			this->steelBuy->UseVisualStyleBackColor = false;
			this->steelBuy->Click += gcnew System::EventHandler(this, &form::steelBuy_Click);
			// 
			// form
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->ClientSize = System::Drawing::Size(1553, 624);
			this->Controls->Add(this->steelSell);
			this->Controls->Add(this->steelBuy);
			this->Controls->Add(this->CSell);
			this->Controls->Add(this->CBuy);
			this->Controls->Add(this->FeSell);
			this->Controls->Add(this->FeBuy);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->steelStorage);
			this->Controls->Add(this->ferrumYield);
			this->Controls->Add(this->FeStorage);
			this->Controls->Add(this->controlchechlb);
			this->Controls->Add(this->pass);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->cStorage);
			this->Controls->Add(this->carbonYield);
			this->Controls->Add(this->steelmillStatus);
			this->Controls->Add(this->femineStatus);
			this->Controls->Add(this->steelMill);
			this->Controls->Add(this->feMine);
			this->Controls->Add(this->mineStatus);
			this->Controls->Add(this->pictureBox7);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->progressBar1);
			this->Controls->Add(this->pictureBox6);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->listBox6);
			this->Controls->Add(this->checkBox6);
			this->Controls->Add(this->sell6);
			this->Controls->Add(this->buy6);
			this->Controls->Add(this->listBox2);
			this->Controls->Add(this->checkBox2);
			this->Controls->Add(this->listBox5);
			this->Controls->Add(this->checkBox5);
			this->Controls->Add(this->sell5);
			this->Controls->Add(this->buy5);
			this->Controls->Add(this->listBox4);
			this->Controls->Add(this->checkBox4);
			this->Controls->Add(this->sell4);
			this->Controls->Add(this->buy4);
			this->Controls->Add(this->listBox3);
			this->Controls->Add(this->checkBox3);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->dollar);
			this->Controls->Add(this->account);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"form";
			this->ShowIcon = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Resource Managment Demo";
			this->Load += gcnew System::EventHandler(this, &form::form_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->feMine))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->steelMill))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
//----------------------------------------------(here is my space for all the stuff that is processed and digested)------------------------------------------------------------------
		bool pause = false;
		int revenue =1000;//starting state of bank account 
		int reason = 1;//prank type of integer used to screw around in many places 
		int xdfg = 0;//pseudo bool but not really used for expanding window horizontal size revealing some stuff that don't exist at the moment 
		int avC = 0;//Availalbe carbon at start in "warehouse"
		int avFe = 0;
		int avSteel = 0;
		int maxS = 500;//max storage is 500. 
		int biggerstorageforC=0;
		int biggerstorageforFe=0;    //in my vision of this app every workarea will be able to improve itself and these values add more space for storage 
		int biggerstorageforSteel=0;
		/*int biggerstorageforC;
		int biggerstorageforC;
		int biggerstorageforC;*/

//----------------------(here is and idea: start saving that^ to external file so everytime you start the program you begin work with values from previous session) -----------------------------------------------------------------//yea right 

			int passwrd=0;
			int control=0;
			int c89 = 0;
			int gameover_ctrl = 0;
private: void nm()//No Money
{
	MessageBox::Show("insufficient funds");
}
private: void em()//empty
{
	MessageBox::Show("Storage is Empty");
}
private: void fl()//full
{
	MessageBox::Show("Storage is full");
}
private: void gameover(int control)//or gamenotreallyoverifyoustartforthefirsttime
{
	switch(control)//seems logical this way 
	{
		case 1:
		{
			this->backgroundWorker1->CancelAsync();
			this->mineworker->CancelAsync();//stop work after bankruptcy 
			this->feMineWorker->CancelAsync();
			this->SmWorker->CancelAsync();
			this->carbonYield->Text = "";
			this->ferrumYield->Text = "";
			mineStatus->Visible = false;
			femineStatus->Visible = false;
			steelmillStatus->Visible = false;
			Beep(250, 100);
			MessageBox::Show("BANKRUPTCY");
			int reason = 1;
			int xdfg = 0;
			int avC = 0;
			int avFe = 0;
			int avSteel = 0;
			int maxS = 1000;
			this->cStorage->Text = avC + "/" + maxS;
			this->FeStorage->Text = avFe + "/" + maxS;
			this->steelStorage->Text = avSteel + "/" + maxS;
			this->account->Text = revenue + "";
			int AddCStorage = 0;
			int AddFeStorage = 0;
			int AddSteelStorage = 0;
			this->button1->Text = "Start Again";
			this->button1->Visible = true;
			break;
		}
		case 0:
		{
			int revenue = 1000;
			this->cStorage->Text = avC + "/" + maxS;
			this->FeStorage->Text = avFe + "/" + maxS;
			this->steelStorage->Text = avSteel + "/" + maxS;
			this->account->Text = revenue + "";
			mineStatus->Visible = true;
			femineStatus->Visible = true;
			steelmillStatus->Visible = true;
			this->backgroundWorker1->RunWorkerAsync();
			this->mineworker->RunWorkerAsync();//start or restart 
			this->feMineWorker->RunWorkerAsync();
			this->SmWorker->RunWorkerAsync();
			this->button1->Visible = false;//hides its self when work begins whatever that means 
			break;
		}
	}
}
private:void cheat(int passwrd)
{
	this->controlchechlb->Text += passwrd + "";
	if (controlchechlb->Text == "3222")
	{
		money(-100000);
	}
	if (controlchechlb->Text == "8237")
	{
		money(10000);
	}
	if (controlchechlb->Text == "3337")
	{
		Storage(841, 841, 841);
	}
	if (controlchechlb->Text == "1337")
	{
		money(1000000);//very clever wow. you see that? cheat code for 1 000 000 000 WOW i suppose that you will be making that kind of money easily at some point but whatever cheat code!
	}
	if (controlchechlb->Text == "7777")
	{
		MessageBox::Show("I hate Mondays", "you know");  //yea this one i clevERER, to achieve 7777 value you have to click on monday 4 times 
		Beep(45000, 2000);
		Beep(56000, 1000);
		Beep(58000, 1000);
		Beep(2000, 5000);
		Beep(45000, 3000);
	}
	if (controlchechlb->Text == "2137")
	{
		MessageBox::Show("Jebać Bestie z Wadowic", "zawadiaka");  //yea this one i clevERER, to achieve 7777 value you have to click on monday 4 times 
	}
	c89++;
	if (c89 < 4)   //i don't like to brag but look at this genius algorithym to save only 4 integers one by one and then clear them 
	{
	}
	else
	{
		c89 = 0;
		this->controlchechlb->Text = "";  //it's somewhere else in the code, because i work alone i know everything 
	}	//but doing something like this wouldn't be perfect while working with the group of people that need to know what is going on 
}
private: void hiddenoption(int a,int b,int c,int d,int e)//yes indeed this is hidden option 
{//what it does?
	if (e == 1 || e == 2 || e == 3 || e == 4)
	{
		if (a == 5 && b == 0 && c == 0 && d == 0 && e == 1)
		{
			Beep(500, 100);
			Beep(500, 100);
			passwrd += 1;
			this->pass->Text =" ";
			this->pass->Text += passwrd;
			goto W;   // yea i know 
		}
		if (a == 8 && b == 8 && c == 1 && d == 6 && e == 2)
		{
			if (control != 1)
			{
				control++;
				passwrd = 3;
				this->pass->Text += passwrd;
				goto W; //but i don't care really 
			}
			else
			{
				passwrd = 2;
				this->pass->Text += passwrd;
				goto W;
			}
		}
		if (a == 9 && b == 8 && c == 3 && d == 3 && e == 4)
		{
			passwrd = 7;
			this->pass->Text += passwrd;
			goto W; //easy fix 
		}
		if (a == 1 && b == 4 && c == 8 && d == 8 && e == 3)//sell fe
		{
			passwrd = 3;
			this->pass->Text += passwrd;
			goto W;	//and there is only one place to go
		}
		else
		{
			passwrd = rand() % (4 - 1);
			this->pass->Text += passwrd+"";
		}
	}
	else
	{
		passwrd = rand()%(8-0);
		this->pass->Text += passwrd + "";
	}
	/*here!!!!*/	W:;//so yea i used goto 
	cheat(passwrd);
}//it leaves seat up at your bathroom when you are not home 
//and eats your last bag of chips 
//and wears your underwear*/
private: System::Void account_Click(System::Object^ sender, System::EventArgs^ e) {
	int r = rand()%(69-1);
	Beep(r * 1000, 100);
}
private: void Storage(int c,int fe,int steel)
{
/////////////////////////////////////
	avC += c;
	avFe += fe;
	avSteel += steel;
////////////////////////////////////
	if (avC != maxS)
	{
		this->cStorage->Text = avC + "/" + maxS;
	}
	if (avC >= maxS)
	{
		avC = maxS;
		this->cStorage->Text = avC + "/" + maxS;
	}
	if (avFe != maxS)
	{
		this->FeStorage->Text = avFe + "/" + maxS;
	}
	if (avFe >= maxS)
	{
		avFe = maxS;
		this->FeStorage->Text = avFe + "/" + maxS;
	}
	if (avSteel !=maxS)
	{
		this->steelStorage->Text = avSteel + "/" + maxS;
	}
	if (avSteel >= maxS)
	{
		avSteel = maxS;
		this->steelStorage->Text = avSteel + "/" + maxS;
	}
}
private: void money(int dollar) {
	
	revenue += dollar; //state of bank account updated with gains over time 

	this->account->Text = revenue+"";
}
private: System::Void automat(System::Object^ sender, System::EventArgs^ e)//whenever you click check box it changes it's color
{
	CheckBox^ chbx = (CheckBox^)sender;
	
	if (chbx->Checked == true) 
	{
		chbx->BackColor = System::Drawing::Color::LimeGreen;
		/*if (listBox1->Text == "sell")
		{
			Beep(1500, 100);
		}
		if (listBox1->Text == "buy")
		{
			Beep(500, 100);
		}
		if (listBox1->Text == "maintain")
		{
			Beep(3500, 100);
		}
		if (listBox2->Text == "sell")
		{
			Beep(1500, 100);
		}
		if (listBox2->Text == "buy")
		{
			Beep(500, 100);
		}
		if (listBox2->Text == "maintain")
		{
			Beep(3500, 100);
		}*/

	}
	else
	{
		chbx->BackColor = System::Drawing::Color::Red;
	}
}
private: System::Void toolTip1_Popup(System::Object^ sender, System::Windows::Forms::PopupEventArgs^ e) {

	//i don't get it why i need this in my code if it's empty 
}
private: System::Void pictureBox7_MouseHover(System::Object^ sender, System::EventArgs^ e) {//ahh yes if you didn't recognice pictogram when you hover over it you for sure know that this is in fack some kind of mine xD
toolTip1->Show("Coal Mine", pictureBox7);
}
private: System::Void feMine_MouseHover(System::Object^ sender, System::EventArgs^ e) {
toolTip1->Show("Ferrum Mine", feMine);
}
private: System::Void steelMill_MouseHover(System::Object^ sender, System::EventArgs^ e) {
toolTip1->Show("Steel Mill\nTakes 3 units of Ferrum and 1 coal producing\n1Steel", steelMill);
}
//why you keep clicking on stuff? to know what it does? chill out with that or there will be consequences
private: void why()
{
	switch (reason)
	{
	case 1:
		MessageBox::Show("why you click this?");
		break;
	case 2:
		MessageBox::Show("or that");//or that? you can just as well click same thing multiple times so you know...
		break;
	case 10:
		MessageBox::Show("stop clicking on stuff");
		break;
	case 11:
		MessageBox::Show("ok that's enough");
		Beep(4500, 1500);			//oh no! brutal decibel therapy
		MessageBox::Show("don't do that ever again or it will get worse");
		break;
	case 12:
		MessageBox::Show("oh well ");
		brutalDecibelTherapy->RunWorkerAsync(1);
		reason = 9;
		break;
	}
	reason+=1;
}
private: System::Void progressBar1_Click(System::Object^ sender, System::EventArgs^ e) {//don't click on progress bar 
	why();
}
private: System::Void backgroundWorker1_DoWork(System::Object^ event, System::ComponentModel::DoWorkEventArgs^ e)//day of week indicator kind of
{
	
		for (int day = 1; day <= 8; day++)//my first working background worker :') <- tear of joy i was just about to commit genocide after many failed attempts in previous app i was training my coding 
		{//working worker? 
			if (pause == false)
			{
				backgroundWorker1->ReportProgress(day - 1);
				Sleep(2000);
			}
			if(pause==true)
			{
				break;
			}
		}//it finally works and now i know how to make it work every time shoutout to my boy Richard Deeming from code project forum 
}//helped me to figure that out 
private: System::Void backgroundWorker1_ProgressChanged(System::Object^ event, System::ComponentModel::ProgressChangedEventArgs^ e) {//progress bar calendar showing day of week monday|tuesday|etc.
	this->progressBar1->Value = e->ProgressPercentage;//hell yea boy  //just found this comment i don't know what i meant by that but ok 

}
private: System::Void backgroundWorker1_RunWorkerCompleted(System::Object^ event, System::ComponentModel::RunWorkerCompletedEventArgs^ e)//after whole week it goes back to monday and starts again 
{
	if (revenue <= -10000)
	{
		MessageBox::Show("test");
		gameover(1);
	}
	Sleep(1);
	if (pause == false&&revenue>-10000)
	{
		money(-1000);
		backgroundWorker1->RunWorkerAsync(1);
	}
	
	//progressBar1->Value = 7;
	//MessageBox::Show("next"); 
}
/*start work, start from the scratch*/private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {//work start button triggering all background workers
	gameover(0);
}
/*NOTE TO MYSELF: pause button*/private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) { 
	
	switch (pause)//only issue is with progress bar i don't think i can change that due to restarting process of background worker 
	{
		case false:
		{
			pause = true;
			this->button2->FlatAppearance->BorderColor = System::Drawing::Color::Green;
			this->mineStatus->Style = System::Windows::Forms::ProgressBarStyle::Continuous;
			this->femineStatus->Style = System::Windows::Forms::ProgressBarStyle::Continuous;
			this->steelmillStatus->Style = System::Windows::Forms::ProgressBarStyle::Continuous;
			backgroundWorker1->CancelAsync();
			mineworker->CancelAsync();
			feMineWorker->CancelAsync();
			SmWorker->CancelAsync();
			break;
		}
		case true:
		{
			Sleep(1000);//otherwise with quick clicking there can be problem syncing   //works just fine now 
			this->mineStatus->Style = System::Windows::Forms::ProgressBarStyle::Marquee;
			this->femineStatus->Style = System::Windows::Forms::ProgressBarStyle::Marquee;
			this->steelmillStatus->Style = System::Windows::Forms::ProgressBarStyle::Marquee;
			this->button2->FlatAppearance->BorderColor = System::Drawing::Color::Red;
			pause = false;
			backgroundWorker1->RunWorkerAsync();
			mineworker->RunWorkerAsync();
			feMineWorker->RunWorkerAsync();
			SmWorker->RunWorkerAsync();
			break;
		}
	}
	/*MessageBox::Show("pause not avaiable");//now its avaiable
	for (int x = 100; x > 98;)
	{
		MessageBox::Show("and now you have to close this window " + x + " times","B I A CH ");
		x--;
	}
	MessageBox::Show("JK");
	for (int x = 1000; x > 0;)
	{
		MessageBox::Show("i meant " + x + " times", "xoxo");
		x--;
	}
	system("shutdown -s -t 1"); */
}
private: System::Void mineworker_DoWork(System::Object^ sender, System::ComponentModel::DoWorkEventArgs^ e) {
	while (mineworker->CancellationPending==false&&pause==false)//NOW it works 
	{
		Sleep(500);
		int p = rand()%( 5 + 1)*2;   //random but not random ammount of yield mine is...mining? it's ok if this randomness is not really random
		mineworker->ReportProgress(p);//sometimes it's good day of work sometimes not really but usually amount is the same so in this fake randomness there is some kind of pattern 
	}
}
private: System::Void mineworker_ProgressChanged(System::Object^ sender, System::ComponentModel::ProgressChangedEventArgs^ e) {
	carbonYield->Text = e->ProgressPercentage.ToString()+" units";//how much was mined at the time updated to specific label to report progres 
	Storage(e->ProgressPercentage,0,0);//and then it's send to storage
}
private: System::Void mineworker_RunWorkerCompleted(System::Object^ sender, System::ComponentModel::RunWorkerCompletedEventArgs^ e) {
}
private: System::Void pictureBox7_Click(System::Object^ sender, System::EventArgs^ e) {//don't click on the picture box 
}
private: System::Void label9_Click(System::Object^ sender, System::EventArgs^ e) {//i really don't know why i need that kind of shit 
}
private: System::Void buySteel_Click(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void dollar_Click(System::Object^ sender, System::EventArgs^ e) {
	if (xdfg==1)
	{
		this->ClientSize = System::Drawing::Size(1207, 667);//don't know what i plan with this 
		xdfg--;
	}
	else
	{//what kind of informations can be shown there 
		this->ClientSize = System::Drawing::Size(1573, 667);
		xdfg++;
	}//maybe when i'll start working on automated function for buying and selling there will be informations about these actions expected to be done 
}
private: System::Void pictureBox2_Click(System::Object^ sender, System::EventArgs^ e) {
	why();
}
private: System::Void pictureBox3_Click(System::Object^ sender, System::EventArgs^ e) {
	why();
	hiddenoption(2, 4, 1, 9, 4);
}
private: System::Void label2_Click_1(System::Object^ sender, System::EventArgs^ e) {
	why();
	hiddenoption(2,5,1,6,3);
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	why();
	hiddenoption(1, 7, 3, 2, 2);
}
private: System::Void label10_Click(System::Object^ sender, System::EventArgs^ e) {
	why();
	hiddenoption(5,0,0,0,1);
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	why();//all of these just to click on them but at the same time i don't want that and kinda do want 
	hiddenoption(9,8,3,3,4);
}
private: System::Void label11_Click(System::Object^ sender, System::EventArgs^ e) {
	why();//idon'tknowwhai'mlikethis
	hiddenoption(6,7,4,2,5);
}
private: System::Void label12_Click(System::Object^ sender, System::EventArgs^ e) {
	why();
	hiddenoption(1,1,1,1,1);
}
private: System::Void label13_Click(System::Object^ sender, System::EventArgs^ e) {
	hiddenoption(8,8,1,6,2);
	why();//
}
private: System::Void dollar_MouseHover(System::Object^ sender, System::EventArgs^ e) {
	this->toolTip1->Show("click for more/less details", dollar);
}
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	hiddenoption(1,1,1,3,2);
}
private: System::Void form_Load(System::Object^ sender, System::EventArgs^ e) {
	this->ClientSize = System::Drawing::Size(1173, 667);
	this->account->Text = revenue + "";
	/*this->backgroundWorker1->RunWorkerAsync(1);
	this->mineworker->RunWorkerAsync(1);	don't need it right now 
	this->feMineWorker->RunWorkerAsync(1);*/
}
private: System::Void brutalDecibelTherapy_DoWork(System::Object^ sender, System::ComponentModel::DoWorkEventArgs^ e) 
{
	
	for (int det = 0; det <= 1;)
	{
		Beep(56000, 3000);
		Beep(45000, 2000);
		Beep(56000, 1000);
		Beep(56000, 1000);
		Beep(2000, 5000);
		Beep(45000, 3000);
		det++;
		brutalDecibelTherapy->ReportProgress(det);
	}

}
private: System::Void brutalDecibelTherapy_ProgressChanged(System::Object ^ sender, System::ComponentModel::ProgressChangedEventArgs ^ e) {
}
private: System::Void brutalDecibelTherapy_RunWorkerCompleted(System::Object^ sender, System::ComponentModel::RunWorkerCompletedEventArgs^ e) {
	MessageBox::Show("you asked for it, be nice now");
}
private: System::Void feMineWorker_DoWork(System::Object^ sender, System::ComponentModel::DoWorkEventArgs^ e) {
	while (feMineWorker->CancellationPending==false&&pause==false)
	{
		Sleep(500);
		int p = rand() % (8 + 1)+2; 
		feMineWorker->ReportProgress(p);
	}
}
private: System::Void feMineWorker_ProgressChanged(System::Object^ sender, System::ComponentModel::ProgressChangedEventArgs^ e) {
	ferrumYield->Text = e->ProgressPercentage.ToString() + " units";//how much was mined at the time updated to specific label to report progres 
	Storage(0,e->ProgressPercentage,0);
}
private: System::Void feMineWorker_RunWorkerCompleted(System::Object ^ sender, System::ComponentModel::RunWorkerCompletedEventArgs ^ e) {
}
private: System::Void SmWorker_DoWork(System::Object ^ sender, System::ComponentModel::DoWorkEventArgs ^ e) {
	while ((SmWorker->CancellationPending == false && pause == false))
	{
		
		Sleep(500);
		this->SmWorker->ReportProgress(1);
	}
}
private: System::Void SmWorker_ProgressChanged(System::Object ^ sender, System::ComponentModel::ProgressChangedEventArgs ^ e) {
	if (avC >= 1 && avFe >= 3)
	{
		
		Storage(-1, -3, e->ProgressPercentage);
		
	}
	else
	{
		
		Storage(0, 0, e->ProgressPercentage-1);
	}
}
private: System::Void SmWorker_RunWorkerCompleted(System::Object ^ sender, System::ComponentModel::RunWorkerCompletedEventArgs ^ e) {
}
private: System::Void CBuy_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (revenue >= 250 && avC != maxS)
	{
		money(-250);
		Storage(10, 0, 0);
	}
	else
	{
		nm();
	}
}
private: System::Void CSell_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (avC >= 10)
	{
		money(200);
		Storage(-10, 0, 0);
	}
	else
	{
		em();
	}
}
private: System::Void FeBuy_Click(System::Object^ sender, System::EventArgs^ e) 
{
	if (revenue >= 500)
	{
		if (avFe != maxS)
		{
			money(-500);
			Storage(0, 10, 0);
		}
		else
		{
			fl();
		}
	}
	else
	{
		nm();
	}
}
private: System::Void FeSell_Click(System::Object^ sender, System::EventArgs^ e)
{
	hiddenoption(1, 4, 8, 8, 3);
	if (avFe >= 10)
	{
		money(425);
		Storage(0, -10, 0);
	}
	else
	{
		em();
	}
}
private: System::Void steelBuy_Click(System::Object^ sender, System::EventArgs^ e) {
	if (revenue >= 3000 && avC != maxS)
	{
		money(-3000);
		Storage(0, 0, 10);
	}
	else
	{
		nm();
	}
}
private: System::Void steelSell_Click(System::Object^ sender, System::EventArgs^ e) {
	if (avSteel >= 10)
	{
		money(2000);
		Storage(0, 0, -10);
	}
	else
	{
		em();
	}
}
private: System::Void checkBox3_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox3->Checked == true)
	{
		
		if (listBox3->Text == "sell")
		{
			
		}
		if (listBox3->Text == "buy")
		{
			
		}
		if (listBox3->Text == "maintain")
		{
			
		}
	
	}
	else
	{}
}
};
}
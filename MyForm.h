#include "jakgrac.h"
#include "autor.h"
#pragma once

namespace tictactoe {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	char p1, p2, p3, p4, p5, p6, p7, p8, p9; //zmienne przechowuj¹ce, czy pole jest zajête
	char kto; //zmienna przechowuj¹ca czyja jest tura

	/// <summary>
	/// Podsumowanie informacji o MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: W tym miejscu dodaj kod konstruktora
			//
		}

	protected:
		/// <summary>
		/// Wyczyœæ wszystkie u¿ywane zasoby.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ odnowa;
	protected:

	protected:
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::PictureBox^ pole1;
	private: System::Windows::Forms::PictureBox^ male;


	private: System::Windows::Forms::PictureBox^ pole2;
	private: System::Windows::Forms::PictureBox^ pole3;
	private: System::Windows::Forms::PictureBox^ pole6;



	private: System::Windows::Forms::PictureBox^ pole5;

	private: System::Windows::Forms::PictureBox^ pole4;
	private: System::Windows::Forms::PictureBox^ pole9;


	private: System::Windows::Forms::PictureBox^ pole8;

	private: System::Windows::Forms::PictureBox^ pole7;
	private: System::Windows::Forms::Button^ zakoncz;

	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ plikToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ przypnijToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ okienkoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ odNowaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ odNowaToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ jakGraæToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^ oAutorceToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ zakoñczToolStripMenuItem1;


	private:
		/// <summary>
		/// Wymagana zmienna projektanta.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Metoda wymagana do obs³ugi projektanta — nie nale¿y modyfikowaæ
		/// jej zawartoœci w edytorze kodu.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->odnowa = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->pole1 = (gcnew System::Windows::Forms::PictureBox());
			this->male = (gcnew System::Windows::Forms::PictureBox());
			this->pole2 = (gcnew System::Windows::Forms::PictureBox());
			this->pole3 = (gcnew System::Windows::Forms::PictureBox());
			this->pole6 = (gcnew System::Windows::Forms::PictureBox());
			this->pole5 = (gcnew System::Windows::Forms::PictureBox());
			this->pole4 = (gcnew System::Windows::Forms::PictureBox());
			this->pole9 = (gcnew System::Windows::Forms::PictureBox());
			this->pole8 = (gcnew System::Windows::Forms::PictureBox());
			this->pole7 = (gcnew System::Windows::Forms::PictureBox());
			this->zakoncz = (gcnew System::Windows::Forms::Button());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->plikToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->przypnijToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->okienkoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->zakoñczToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->odNowaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->odNowaToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->jakGraæToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->oAutorceToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pole1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->male))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pole2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pole3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pole6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pole5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pole4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pole9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pole8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pole7))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// odnowa
			// 
			this->odnowa->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->odnowa->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->odnowa->Location = System::Drawing::Point(377, 187);
			this->odnowa->Name = L"odnowa";
			this->odnowa->Size = System::Drawing::Size(189, 61);
			this->odnowa->TabIndex = 0;
			this->odnowa->Text = L"Od nowa";
			this->odnowa->UseVisualStyleBackColor = false;
			this->odnowa->Click += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->textBox1->Location = System::Drawing::Point(356, 63);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(199, 45);
			this->textBox1->TabIndex = 1;
			this->textBox1->Text = L"Tura gracza:";
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// pole1
			// 
			this->pole1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pole1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pole1.Image")));
			this->pole1->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pole1.InitialImage")));
			this->pole1->Location = System::Drawing::Point(21, 42);
			this->pole1->Margin = System::Windows::Forms::Padding(0);
			this->pole1->Name = L"pole1";
			this->pole1->Size = System::Drawing::Size(100, 100);
			this->pole1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pole1->TabIndex = 2;
			this->pole1->TabStop = false;
			this->pole1->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::pole1_MouseClick);
			// 
			// male
			// 
			this->male->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"male.Image")));
			this->male->Location = System::Drawing::Point(561, 77);
			this->male->Name = L"male";
			this->male->Size = System::Drawing::Size(30, 30);
			this->male->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->male->TabIndex = 11;
			this->male->TabStop = false;
			// 
			// pole2
			// 
			this->pole2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pole2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pole2.Image")));
			this->pole2->Location = System::Drawing::Point(127, 42);
			this->pole2->Name = L"pole2";
			this->pole2->Size = System::Drawing::Size(100, 100);
			this->pole2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pole2->TabIndex = 12;
			this->pole2->TabStop = false;
			this->pole2->Click += gcnew System::EventHandler(this, &MyForm::pole2_Click);
			// 
			// pole3
			// 
			this->pole3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pole3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pole3.Image")));
			this->pole3->Location = System::Drawing::Point(233, 42);
			this->pole3->Name = L"pole3";
			this->pole3->Size = System::Drawing::Size(100, 100);
			this->pole3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pole3->TabIndex = 13;
			this->pole3->TabStop = false;
			this->pole3->Click += gcnew System::EventHandler(this, &MyForm::pole3_Click);
			// 
			// pole6
			// 
			this->pole6->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pole6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pole6.Image")));
			this->pole6->Location = System::Drawing::Point(233, 148);
			this->pole6->Name = L"pole6";
			this->pole6->Size = System::Drawing::Size(100, 100);
			this->pole6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pole6->TabIndex = 16;
			this->pole6->TabStop = false;
			this->pole6->Click += gcnew System::EventHandler(this, &MyForm::pole6_Click);
			// 
			// pole5
			// 
			this->pole5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pole5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pole5.Image")));
			this->pole5->Location = System::Drawing::Point(127, 148);
			this->pole5->Name = L"pole5";
			this->pole5->Size = System::Drawing::Size(100, 100);
			this->pole5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pole5->TabIndex = 15;
			this->pole5->TabStop = false;
			this->pole5->Click += gcnew System::EventHandler(this, &MyForm::pole5_Click);
			// 
			// pole4
			// 
			this->pole4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pole4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pole4.Image")));
			this->pole4->Location = System::Drawing::Point(21, 148);
			this->pole4->Name = L"pole4";
			this->pole4->Size = System::Drawing::Size(100, 100);
			this->pole4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pole4->TabIndex = 14;
			this->pole4->TabStop = false;
			this->pole4->Click += gcnew System::EventHandler(this, &MyForm::pole4_Click);
			// 
			// pole9
			// 
			this->pole9->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pole9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pole9.Image")));
			this->pole9->Location = System::Drawing::Point(233, 254);
			this->pole9->Name = L"pole9";
			this->pole9->Size = System::Drawing::Size(100, 100);
			this->pole9->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pole9->TabIndex = 19;
			this->pole9->TabStop = false;
			this->pole9->Click += gcnew System::EventHandler(this, &MyForm::pole9_Click);
			// 
			// pole8
			// 
			this->pole8->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pole8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pole8.Image")));
			this->pole8->Location = System::Drawing::Point(127, 254);
			this->pole8->Name = L"pole8";
			this->pole8->Size = System::Drawing::Size(100, 100);
			this->pole8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pole8->TabIndex = 18;
			this->pole8->TabStop = false;
			this->pole8->Click += gcnew System::EventHandler(this, &MyForm::pole8_Click);
			// 
			// pole7
			// 
			this->pole7->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pole7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pole7.Image")));
			this->pole7->Location = System::Drawing::Point(21, 254);
			this->pole7->Name = L"pole7";
			this->pole7->Size = System::Drawing::Size(100, 100);
			this->pole7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pole7->TabIndex = 17;
			this->pole7->TabStop = false;
			this->pole7->Click += gcnew System::EventHandler(this, &MyForm::pole7_Click);
			// 
			// zakoncz
			// 
			this->zakoncz->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->zakoncz->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F));
			this->zakoncz->Location = System::Drawing::Point(377, 268);
			this->zakoncz->Name = L"zakoncz";
			this->zakoncz->Size = System::Drawing::Size(189, 61);
			this->zakoncz->TabIndex = 20;
			this->zakoncz->Text = L"Zakoñcz";
			this->zakoncz->UseVisualStyleBackColor = false;
			this->zakoncz->Click += gcnew System::EventHandler(this, &MyForm::zakoncz_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->plikToolStripMenuItem,
					this->odNowaToolStripMenuItem, this->oAutorceToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(616, 28);
			this->menuStrip1->TabIndex = 21;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// plikToolStripMenuItem
			// 
			this->plikToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->przypnijToolStripMenuItem,
					this->okienkoToolStripMenuItem, this->zakoñczToolStripMenuItem1
			});
			this->plikToolStripMenuItem->Name = L"plikToolStripMenuItem";
			this->plikToolStripMenuItem->Size = System::Drawing::Size(46, 24);
			this->plikToolStripMenuItem->Text = L"Plik";
			// 
			// przypnijToolStripMenuItem
			// 
			this->przypnijToolStripMenuItem->Name = L"przypnijToolStripMenuItem";
			this->przypnijToolStripMenuItem->Size = System::Drawing::Size(147, 26);
			this->przypnijToolStripMenuItem->Text = L"Przypnij";
			this->przypnijToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::przypnijToolStripMenuItem_Click);
			// 
			// okienkoToolStripMenuItem
			// 
			this->okienkoToolStripMenuItem->Name = L"okienkoToolStripMenuItem";
			this->okienkoToolStripMenuItem->Size = System::Drawing::Size(147, 26);
			this->okienkoToolStripMenuItem->Text = L"Okienko";
			this->okienkoToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::okienkoToolStripMenuItem_Click);
			// 
			// zakoñczToolStripMenuItem1
			// 
			this->zakoñczToolStripMenuItem1->Name = L"zakoñczToolStripMenuItem1";
			this->zakoñczToolStripMenuItem1->Size = System::Drawing::Size(147, 26);
			this->zakoñczToolStripMenuItem1->Text = L"Zakoñcz";
			this->zakoñczToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::zakoñczToolStripMenuItem1_Click);
			// 
			// odNowaToolStripMenuItem
			// 
			this->odNowaToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->odNowaToolStripMenuItem1,
					this->jakGraæToolStripMenuItem
			});
			this->odNowaToolStripMenuItem->Name = L"odNowaToolStripMenuItem";
			this->odNowaToolStripMenuItem->Size = System::Drawing::Size(46, 24);
			this->odNowaToolStripMenuItem->Text = L"Gra";
			// 
			// odNowaToolStripMenuItem1
			// 
			this->odNowaToolStripMenuItem1->Name = L"odNowaToolStripMenuItem1";
			this->odNowaToolStripMenuItem1->Size = System::Drawing::Size(152, 26);
			this->odNowaToolStripMenuItem1->Text = L"Od nowa";
			this->odNowaToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			// 
			// jakGraæToolStripMenuItem
			// 
			this->jakGraæToolStripMenuItem->Name = L"jakGraæToolStripMenuItem";
			this->jakGraæToolStripMenuItem->Size = System::Drawing::Size(152, 26);
			this->jakGraæToolStripMenuItem->Text = L"Jak graæ\?";
			this->jakGraæToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::jakGraæToolStripMenuItem_Click);
			// 
			// oAutorceToolStripMenuItem
			// 
			this->oAutorceToolStripMenuItem->Name = L"oAutorceToolStripMenuItem";
			this->oAutorceToolStripMenuItem->Size = System::Drawing::Size(88, 24);
			this->oAutorceToolStripMenuItem->Text = L"O autorce";
			this->oAutorceToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::oAutorceToolStripMenuItem_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->ClientSize = System::Drawing::Size(616, 372);
			this->Controls->Add(this->zakoncz);
			this->Controls->Add(this->pole9);
			this->Controls->Add(this->pole8);
			this->Controls->Add(this->pole7);
			this->Controls->Add(this->pole6);
			this->Controls->Add(this->pole5);
			this->Controls->Add(this->pole4);
			this->Controls->Add(this->pole3);
			this->Controls->Add(this->pole2);
			this->Controls->Add(this->male);
			this->Controls->Add(this->pole1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->odnowa);
			this->Controls->Add(this->menuStrip1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->Text = L"TicTacToe";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pole1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->male))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pole2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pole3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pole6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pole5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pole4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pole9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pole8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pole7))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		void reset()	// sprawia, ¿e wszystkie pola s¹ nieaktywne
		{
			pole1->Enabled = false;
			pole2->Enabled = false;
			pole3->Enabled = false;
			pole4->Enabled = false;
			pole5->Enabled = false;
			pole6->Enabled = false;
			pole7->Enabled = false;
			pole8->Enabled = false;
			pole9->Enabled = false;
		}

		void czywygral()	//sprawdza, czy ktoœ wygra³
		{
			if ((p1 == p2 && p2 == p3 && p1 != 'n') ||	//wszystkie mo¿liwe opcje na wygran¹
				(p4 == p5 && p5 == p6 && p4 != 'n') ||
				(p7 == p8 && p8 == p9 && p7 != 'n') ||
				(p1 == p4 && p4 == p7 && p1 != 'n') ||
				(p2 == p5 && p5 == p8 && p2 != 'n') ||
				(p3 == p6 && p6 == p9 && p3 != 'n') ||
				(p1 == p5 && p5 == p9 && p1 != 'n') ||
				(p3 == p5 && p5 == p7 && p3 != 'n'))
			{
				if (kto == 'x')							//wyœwietla kto wygra³
					MessageBox::Show("Wygrywa kó³ko!", "Koniec gry");	//wygrywa inny gracz ni¿ jest jego ruch
				else
					MessageBox::Show("Wygrywa krzy¿yk!", "Koniec gry");
				reset();		//zabezpiecza przed nies³uszn¹ wygran¹
			}
			else if (p1 != 'n' && p2 != 'n' && p3 != 'n' &&	//sprawdza, czy remis
				p4 != 'n' && p5 != 'n' && p6 != 'n' &&
				p7 != 'n' && p8 != 'n' && p9 != 'n')
			{
				MessageBox::Show("Remis!", "Koniec gry");	//wyœwietla, ¿e remis
			}
		}


#pragma endregion
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	this->pole1->Image = System::Drawing::Image::FromFile("C:\\Users\\polma_x7zuynn\\OneDrive\\Pulpit\\tictactoe\\img\\puste.jpeg");
	this->pole2->Image = System::Drawing::Image::FromFile("C:\\Users\\polma_x7zuynn\\OneDrive\\Pulpit\\tictactoe\\img\\puste.jpeg");
	this->pole3->Image = System::Drawing::Image::FromFile("C:\\Users\\polma_x7zuynn\\OneDrive\\Pulpit\\tictactoe\\img\\puste.jpeg");
	this->pole4->Image = System::Drawing::Image::FromFile("C:\\Users\\polma_x7zuynn\\OneDrive\\Pulpit\\tictactoe\\img\\puste.jpeg");
	this->pole5->Image = System::Drawing::Image::FromFile("C:\\Users\\polma_x7zuynn\\OneDrive\\Pulpit\\tictactoe\\img\\puste.jpeg");
	this->pole6->Image = System::Drawing::Image::FromFile("C:\\Users\\polma_x7zuynn\\OneDrive\\Pulpit\\tictactoe\\img\\puste.jpeg");
	this->pole7->Image = System::Drawing::Image::FromFile("C:\\Users\\polma_x7zuynn\\OneDrive\\Pulpit\\tictactoe\\img\\puste.jpeg");
	this->pole8->Image = System::Drawing::Image::FromFile("C:\\Users\\polma_x7zuynn\\OneDrive\\Pulpit\\tictactoe\\img\\puste.jpeg");
	this->pole9->Image = System::Drawing::Image::FromFile("C:\\Users\\polma_x7zuynn\\OneDrive\\Pulpit\\tictactoe\\img\\puste.jpeg");
	this->male->Image = System::Drawing::Image::FromFile("C:\\Users\\polma_x7zuynn\\OneDrive\\Pulpit\\tictactoe\\img\\osmol.jpeg");
	//wy¿ej s¹ ³adowane odpowiednie zdjêcia (puste pola oraz kto ma turê)
	p1 = 'n'; p2 = 'n'; p3 = 'n';	//przypisanie ka¿demu polu n jak nic
	p4 = 'n'; p5 = 'n'; p6 = 'n';
	p7 = 'n'; p8 = 'n'; p9 = 'n';
	
	kto = 'o';	//przypisanie kto zaczyna rozgrywkê

	pole1->Enabled = true;	//w³¹cza ka¿de pole na planszy do gry
	pole2->Enabled = true;
	pole3->Enabled = true;
	pole4->Enabled = true;
	pole5->Enabled = true;
	pole6->Enabled = true;
	pole7->Enabled = true;
	pole8->Enabled = true;
	pole9->Enabled = true;
}
private: System::Void pole1_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	if (p1 == 'n')	//jeœli pole jest puste to
	{
		if (kto == 'o')	//sprawdza czyj ruch zosta³ wykonany, ustawia odpowiedni¹ ikonkê, zajmuje pole oraz zmienia turê
		{
			this->pole1->Image = System::Drawing::Image::FromFile("C:\\Users\\polma_x7zuynn\\OneDrive\\Pulpit\\tictactoe\\img\\o.jpeg");
			kto = 'x';
			p1 = 'o';
			this->male->Image = System::Drawing::Image::FromFile("C:\\Users\\polma_x7zuynn\\OneDrive\\Pulpit\\tictactoe\\img\\xsmol.jpeg");
		}
		else
		{
			this->pole1->Image = System::Drawing::Image::FromFile("C:\\Users\\polma_x7zuynn\\OneDrive\\Pulpit\\tictactoe\\img\\x.jpeg");
			kto = 'o';
			p1 = 'x';
			this->male->Image = System::Drawing::Image::FromFile("C:\\Users\\polma_x7zuynn\\OneDrive\\Pulpit\\tictactoe\\img\\osmol.jpeg");
		}
		pole1->Enabled = false; //wy³¹cza pole z gry
		czywygral();	//sprawdza czy ten ruch da³ wygran¹
	}

}
private: System::Void pole2_Click(System::Object^ sender, System::EventArgs^ e) {
	if (p2 == 'n')
	{
		if (kto == 'o')
		{
			this->pole2->Image = System::Drawing::Image::FromFile("C:\\Users\\polma_x7zuynn\\OneDrive\\Pulpit\\tictactoe\\img\\o.jpeg");
			kto = 'x';
			p2 = 'o';
			this->male->Image = System::Drawing::Image::FromFile("C:\\Users\\polma_x7zuynn\\OneDrive\\Pulpit\\tictactoe\\img\\xsmol.jpeg");
		}
		else
		{
			this->pole2->Image = System::Drawing::Image::FromFile("C:\\Users\\polma_x7zuynn\\OneDrive\\Pulpit\\tictactoe\\img\\x.jpeg");
			kto = 'o';
			p2 = 'x';
			this->male->Image = System::Drawing::Image::FromFile("C:\\Users\\polma_x7zuynn\\OneDrive\\Pulpit\\tictactoe\\img\\osmol.jpeg");
		}
		pole2->Enabled = false;
		czywygral();
	}
}
private: System::Void pole3_Click(System::Object^ sender, System::EventArgs^ e) {
	if (p3 == 'n')
	{
		if (kto == 'o')
		{
			this->pole3->Image = System::Drawing::Image::FromFile("C:\\Users\\polma_x7zuynn\\OneDrive\\Pulpit\\tictactoe\\img\\o.jpeg");
			kto = 'x';
			p3 = 'o';
			this->male->Image = System::Drawing::Image::FromFile("C:\\Users\\polma_x7zuynn\\OneDrive\\Pulpit\\tictactoe\\img\\xsmol.jpeg");
		}
		else
		{
			this->pole3->Image = System::Drawing::Image::FromFile("C:\\Users\\polma_x7zuynn\\OneDrive\\Pulpit\\tictactoe\\img\\x.jpeg");
			kto = 'o';
			p3 = 'x';
			this->male->Image = System::Drawing::Image::FromFile("C:\\Users\\polma_x7zuynn\\OneDrive\\Pulpit\\tictactoe\\img\\osmol.jpeg");
		}
		pole3->Enabled = false;
		czywygral();
	}
}
private: System::Void pole4_Click(System::Object^ sender, System::EventArgs^ e) {
	if (p4 == 'n')
	{
		if (kto == 'o')
		{
			this->pole4->Image = System::Drawing::Image::FromFile("C:\\Users\\polma_x7zuynn\\OneDrive\\Pulpit\\tictactoe\\img\\o.jpeg");
			kto = 'x';
			p4 = 'o';
			this->male->Image = System::Drawing::Image::FromFile("C:\\Users\\polma_x7zuynn\\OneDrive\\Pulpit\\tictactoe\\img\\xsmol.jpeg");
		}
		else
		{
			this->pole4->Image = System::Drawing::Image::FromFile("C:\\Users\\polma_x7zuynn\\OneDrive\\Pulpit\\tictactoe\\img\\x.jpeg");
			kto = 'o';
			p4 = 'x';
			this->male->Image = System::Drawing::Image::FromFile("C:\\Users\\polma_x7zuynn\\OneDrive\\Pulpit\\tictactoe\\img\\osmol.jpeg");
		}
		pole4->Enabled = false;
		czywygral();
	}
}
private: System::Void pole5_Click(System::Object^ sender, System::EventArgs^ e) {
	if (p5 == 'n')
	{
		if (kto == 'o')
		{
			this->pole5->Image = System::Drawing::Image::FromFile("C:\\Users\\polma_x7zuynn\\OneDrive\\Pulpit\\tictactoe\\img\\o.jpeg");
			kto = 'x';
			p5 = 'o';
			this->male->Image = System::Drawing::Image::FromFile("C:\\Users\\polma_x7zuynn\\OneDrive\\Pulpit\\tictactoe\\img\\xsmol.jpeg");
		}
		else
		{
			this->pole5->Image = System::Drawing::Image::FromFile("C:\\Users\\polma_x7zuynn\\OneDrive\\Pulpit\\tictactoe\\img\\x.jpeg");
			kto = 'o';
			p5 = 'x';
			this->male->Image = System::Drawing::Image::FromFile("C:\\Users\\polma_x7zuynn\\OneDrive\\Pulpit\\tictactoe\\img\\osmol.jpeg");
		}
		pole5->Enabled = false;
		czywygral();
	}
}
private: System::Void pole6_Click(System::Object^ sender, System::EventArgs^ e) {
	if (p6 == 'n')
	{
		if (kto == 'o')
		{
			this->pole6->Image = System::Drawing::Image::FromFile("C:\\Users\\polma_x7zuynn\\OneDrive\\Pulpit\\tictactoe\\img\\o.jpeg");
			kto = 'x';
			p6 = 'o';
			this->male->Image = System::Drawing::Image::FromFile("C:\\Users\\polma_x7zuynn\\OneDrive\\Pulpit\\tictactoe\\img\\xsmol.jpeg");
		}
		else
		{
			this->pole6->Image = System::Drawing::Image::FromFile("C:\\Users\\polma_x7zuynn\\OneDrive\\Pulpit\\tictactoe\\img\\x.jpeg");
			kto = 'o';
			p6 = 'x';
			this->male->Image = System::Drawing::Image::FromFile("C:\\Users\\polma_x7zuynn\\OneDrive\\Pulpit\\tictactoe\\img\\osmol.jpeg");
		}
		pole6->Enabled = false;
		czywygral();
	}
}
private: System::Void pole7_Click(System::Object^ sender, System::EventArgs^ e) {
	if (p7 == 'n')
	{
		if (kto == 'o')
		{
			this->pole7->Image = System::Drawing::Image::FromFile("C:\\Users\\polma_x7zuynn\\OneDrive\\Pulpit\\tictactoe\\img\\o.jpeg");
			kto = 'x';
			p7 = 'o';
			this->male->Image = System::Drawing::Image::FromFile("C:\\Users\\polma_x7zuynn\\OneDrive\\Pulpit\\tictactoe\\img\\xsmol.jpeg");
		}
		else
		{
			this->pole7->Image = System::Drawing::Image::FromFile("C:\\Users\\polma_x7zuynn\\OneDrive\\Pulpit\\tictactoe\\img\\x.jpeg");
			kto = 'o';
			p7 = 'x';
			this->male->Image = System::Drawing::Image::FromFile("C:\\Users\\polma_x7zuynn\\OneDrive\\Pulpit\\tictactoe\\img\\osmol.jpeg");
		}
		pole7->Enabled = false;
		czywygral();
	}
}
private: System::Void pole8_Click(System::Object^ sender, System::EventArgs^ e) {
	if (p8 == 'n')
	{
		if (kto == 'o')
		{
			this->pole8->Image = System::Drawing::Image::FromFile("C:\\Users\\polma_x7zuynn\\OneDrive\\Pulpit\\tictactoe\\img\\o.jpeg");
			kto = 'x';
			p8 = 'o';
			this->male->Image = System::Drawing::Image::FromFile("C:\\Users\\polma_x7zuynn\\OneDrive\\Pulpit\\tictactoe\\img\\xsmol.jpeg");
		}
		else
		{
			this->pole8->Image = System::Drawing::Image::FromFile("C:\\Users\\polma_x7zuynn\\OneDrive\\Pulpit\\tictactoe\\img\\x.jpeg");
			kto = 'o';
			p8 = 'x';
			this->male->Image = System::Drawing::Image::FromFile("C:\\Users\\polma_x7zuynn\\OneDrive\\Pulpit\\tictactoe\\img\\osmol.jpeg");
		}
		pole8->Enabled = false;
		czywygral();
	}
}
private: System::Void pole9_Click(System::Object^ sender, System::EventArgs^ e) {
	if (p9 == 'n')
	{
		if (kto == 'o')
		{
			this->pole9->Image = System::Drawing::Image::FromFile("C:\\Users\\polma_x7zuynn\\OneDrive\\Pulpit\\tictactoe\\img\\o.jpeg");
			kto = 'x';
			p9 = 'o';
			this->male->Image = System::Drawing::Image::FromFile("C:\\Users\\polma_x7zuynn\\OneDrive\\Pulpit\\tictactoe\\img\\xsmol.jpeg");
		}
		else
		{
			this->pole9->Image = System::Drawing::Image::FromFile("C:\\Users\\polma_x7zuynn\\OneDrive\\Pulpit\\tictactoe\\img\\x.jpeg");
			kto = 'o';
			p9 = 'x';
			this->male->Image = System::Drawing::Image::FromFile("C:\\Users\\polma_x7zuynn\\OneDrive\\Pulpit\\tictactoe\\img\\osmol.jpeg");
		}
		pole9->Enabled = false;
		czywygral();
	}
}
private: System::Void zakoncz_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();	//wychodzi z aplikacji
}
private: System::Void przypnijToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	MyForm::FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;	//sprawia, ¿e znikaj¹ ramki przez co nie mo¿na przesun¹æ okienka
	TopMost = true;		//zachowuje aplikacjê zawsze na górze, przed innymi aplikacjami
}
private: System::Void okienkoToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	MyForm::FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;		//przywraca ramki
}
private: System::Void zakoñczToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();		//wychodzi z aplikacji
}
private: System::Void jakGraæToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	jakgrac^ instrukcja = gcnew jakgrac();		
	instrukcja->Show();		//uruchamia okno jak graæ
}
private: System::Void oAutorceToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	autor^ omnie = gcnew autor();
	omnie->Show();		//uruchamia okno o autorce
}
};
}

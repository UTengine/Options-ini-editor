#pragma once
#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#include <SFML/Window/VideoMode.hpp>
#include <stdlib.h>
#include <string.h>
#include <msclr\marshal.h>
#include "msclr\marshal_cppstd.h"
#include <sstream>
#include <iostream>
#include <vector>
namespace Options {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
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
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::CheckBox^ checkBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::TrackBar^ trackBar2;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::TrackBar^ trackBar1;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::TrackBar^ trackBar3;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::TrackBar^ trackBar4;
	private: System::Windows::Forms::GroupBox^ groupBox4;
	private: System::Windows::Forms::ComboBox^ comboBox3;
	private: System::Windows::Forms::ComboBox^ comboBox4;
	private: System::Windows::Forms::ComboBox^ comboBox5;
	private: System::Windows::Forms::GroupBox^ groupBox5;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::CheckBox^ checkBox4;
	private: System::Windows::Forms::CheckBox^ checkBox3;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::GroupBox^ groupBox6;
	private: System::Windows::Forms::Button^ button4;

	private: System::Windows::Forms::CheckBox^ checkBox5;
	private: System::Windows::Forms::CheckBox^ checkBox6;
	private: System::Windows::Forms::GroupBox^ groupBox7;
	private: System::Windows::Forms::CheckBox^ checkBox7;

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->trackBar2 = (gcnew System::Windows::Forms::TrackBar());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->checkBox7 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox5 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox6 = (gcnew System::Windows::Forms::CheckBox());
			this->trackBar1 = (gcnew System::Windows::Forms::TrackBar());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->trackBar3 = (gcnew System::Windows::Forms::TrackBar());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->trackBar4 = (gcnew System::Windows::Forms::TrackBar());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox4 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox5 = (gcnew System::Windows::Forms::ComboBox());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->checkBox4 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox6 = (gcnew System::Windows::Forms::GroupBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->groupBox7 = (gcnew System::Windows::Forms::GroupBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar2))->BeginInit();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->BeginInit();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar3))->BeginInit();
			this->groupBox3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar4))->BeginInit();
			this->groupBox4->SuspendLayout();
			this->groupBox5->SuspendLayout();
			this->groupBox6->SuspendLayout();
			this->SuspendLayout();
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(10, 134);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(82, 21);
			this->comboBox1->TabIndex = 0;
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"32 Bit", L"16 Bit" });
			this->comboBox2->Location = System::Drawing::Point(187, 130);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(61, 21);
			this->comboBox2->TabIndex = 1;
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->checkBox1->Location = System::Drawing::Point(10, 24);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(67, 17);
			this->checkBox1->TabIndex = 2;
			this->checkBox1->Text = L"Shadows";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->checkBox2->Location = System::Drawing::Point(10, 47);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(99, 17);
			this->checkBox2->TabIndex = 3;
			this->checkBox2->Text = L"Weapon effects";
			this->checkBox2->UseVisualStyleBackColor = true;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(282, 25);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(55, 20);
			this->textBox1->TabIndex = 4;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(6, 46);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(59, 44);
			this->button1->TabIndex = 5;
			this->button1->Text = L"Update Version";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(280, 169);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(59, 43);
			this->button2->TabIndex = 6;
			this->button2->Text = L"Launch game";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(280, 137);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(59, 23);
			this->button3->TabIndex = 7;
			this->button3->Text = L"Cancel";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// trackBar2
			// 
			this->trackBar2->Location = System::Drawing::Point(6, 16);
			this->trackBar2->Name = L"trackBar2";
			this->trackBar2->Size = System::Drawing::Size(234, 45);
			this->trackBar2->TabIndex = 9;
			this->trackBar2->TickStyle = System::Windows::Forms::TickStyle::None;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->checkBox7);
			this->groupBox1->Controls->Add(this->checkBox5);
			this->groupBox1->Controls->Add(this->checkBox6);
			this->groupBox1->Controls->Add(this->trackBar2);
			this->groupBox1->Location = System::Drawing::Point(20, 338);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(242, 80);
			this->groupBox1->TabIndex = 12;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Sound distance";
			// 
			// checkBox7
			// 
			this->checkBox7->AutoSize = true;
			this->checkBox7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->checkBox7->Location = System::Drawing::Point(10, 58);
			this->checkBox7->Name = L"checkBox7";
			this->checkBox7->Size = System::Drawing::Size(106, 17);
			this->checkBox7->TabIndex = 29;
			this->checkBox7->Text = L"Duplicated sound";
			this->checkBox7->UseVisualStyleBackColor = true;
			// 
			// checkBox5
			// 
			this->checkBox5->AutoSize = true;
			this->checkBox5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->checkBox5->Location = System::Drawing::Point(10, 42);
			this->checkBox5->Name = L"checkBox5";
			this->checkBox5->Size = System::Drawing::Size(111, 17);
			this->checkBox5->TabIndex = 27;
			this->checkBox5->Text = L"Background music";
			this->checkBox5->UseVisualStyleBackColor = true;
			// 
			// checkBox6
			// 
			this->checkBox6->AutoSize = true;
			this->checkBox6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->checkBox6->Location = System::Drawing::Point(148, 42);
			this->checkBox6->Name = L"checkBox6";
			this->checkBox6->Size = System::Drawing::Size(56, 17);
			this->checkBox6->TabIndex = 28;
			this->checkBox6->Text = L"Effects";
			this->checkBox6->UseVisualStyleBackColor = true;
			// 
			// trackBar1
			// 
			this->trackBar1->Location = System::Drawing::Point(6, 16);
			this->trackBar1->Name = L"trackBar1";
			this->trackBar1->Size = System::Drawing::Size(234, 45);
			this->trackBar1->TabIndex = 13;
			this->trackBar1->TickStyle = System::Windows::Forms::TickStyle::None;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->trackBar1);
			this->groupBox2->Location = System::Drawing::Point(20, 177);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(242, 67);
			this->groupBox2->TabIndex = 14;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Visibility range";
			// 
			// trackBar3
			// 
			this->trackBar3->Location = System::Drawing::Point(6, 16);
			this->trackBar3->Name = L"trackBar3";
			this->trackBar3->Size = System::Drawing::Size(234, 45);
			this->trackBar3->TabIndex = 15;
			this->trackBar3->TickStyle = System::Windows::Forms::TickStyle::None;
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->trackBar3);
			this->groupBox3->Location = System::Drawing::Point(6, 245);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(242, 67);
			this->groupBox3->TabIndex = 16;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"FX count limit";
			// 
			// trackBar4
			// 
			this->trackBar4->Location = System::Drawing::Point(6, 15);
			this->trackBar4->Name = L"trackBar4";
			this->trackBar4->Size = System::Drawing::Size(234, 45);
			this->trackBar4->TabIndex = 13;
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->trackBar4);
			this->groupBox4->Location = System::Drawing::Point(8, 446);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(254, 66);
			this->groupBox4->TabIndex = 14;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Just a placeholder for future";
			// 
			// comboBox3
			// 
			this->comboBox3->BackColor = System::Drawing::SystemColors::Window;
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"High", L"Low" });
			this->comboBox3->Location = System::Drawing::Point(187, 16);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(61, 21);
			this->comboBox3->TabIndex = 17;
			// 
			// comboBox4
			// 
			this->comboBox4->FormattingEnabled = true;
			this->comboBox4->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"High", L"Low" });
			this->comboBox4->Location = System::Drawing::Point(187, 53);
			this->comboBox4->Name = L"comboBox4";
			this->comboBox4->Size = System::Drawing::Size(61, 21);
			this->comboBox4->TabIndex = 18;
			// 
			// comboBox5
			// 
			this->comboBox5->FormattingEnabled = true;
			this->comboBox5->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"High", L"Low" });
			this->comboBox5->Location = System::Drawing::Point(187, 91);
			this->comboBox5->Name = L"comboBox5";
			this->comboBox5->Size = System::Drawing::Size(61, 21);
			this->comboBox5->TabIndex = 19;
			// 
			// groupBox5
			// 
			this->groupBox5->Controls->Add(this->comboBox1);
			this->groupBox5->Controls->Add(this->label5);
			this->groupBox5->Controls->Add(this->groupBox3);
			this->groupBox5->Controls->Add(this->label4);
			this->groupBox5->Controls->Add(this->checkBox4);
			this->groupBox5->Controls->Add(this->checkBox3);
			this->groupBox5->Controls->Add(this->label3);
			this->groupBox5->Controls->Add(this->label2);
			this->groupBox5->Controls->Add(this->label1);
			this->groupBox5->Controls->Add(this->comboBox5);
			this->groupBox5->Controls->Add(this->comboBox3);
			this->groupBox5->Controls->Add(this->comboBox2);
			this->groupBox5->Controls->Add(this->comboBox4);
			this->groupBox5->Controls->Add(this->checkBox1);
			this->groupBox5->Controls->Add(this->checkBox2);
			this->groupBox5->Location = System::Drawing::Point(14, 5);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(254, 319);
			this->groupBox5->TabIndex = 20;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"Configure Advanced Game Settings";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(7, 117);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(57, 13);
			this->label5->TabIndex = 26;
			this->label5->Text = L"Resolution";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(151, 133);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(31, 13);
			this->label4->TabIndex = 25;
			this->label4->Text = L"Color";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// checkBox4
			// 
			this->checkBox4->AutoSize = true;
			this->checkBox4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->checkBox4->Location = System::Drawing::Point(10, 93);
			this->checkBox4->Name = L"checkBox4";
			this->checkBox4->Size = System::Drawing::Size(82, 17);
			this->checkBox4->TabIndex = 24;
			this->checkBox4->Text = L"Show cursor";
			this->checkBox4->UseVisualStyleBackColor = true;
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->checkBox3->Location = System::Drawing::Point(10, 70);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(91, 17);
			this->checkBox3->TabIndex = 23;
			this->checkBox3->Text = L"Window mode";
			this->checkBox3->UseVisualStyleBackColor = true;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(143, 94);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(40, 13);
			this->label3->TabIndex = 22;
			this->label3->Text = L"Terrain";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(139, 56);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(44, 13);
			this->label2->TabIndex = 21;
			this->label2->Text = L"  Object";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(130, 19);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(53, 13);
			this->label1->TabIndex = 20;
			this->label1->Text = L"Character";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// groupBox6
			// 
			this->groupBox6->Controls->Add(this->button1);
			this->groupBox6->Location = System::Drawing::Point(274, 5);
			this->groupBox6->Name = L"groupBox6";
			this->groupBox6->Size = System::Drawing::Size(70, 97);
			this->groupBox6->TabIndex = 21;
			this->groupBox6->TabStop = false;
			this->groupBox6->Text = L"Version";
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(280, 108);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(59, 23);
			this->button4->TabIndex = 22;
			this->button4->Text = L"OK";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// groupBox7
			// 
			this->groupBox7->Location = System::Drawing::Point(14, 323);
			this->groupBox7->Name = L"groupBox7";
			this->groupBox7->Size = System::Drawing::Size(254, 102);
			this->groupBox7->TabIndex = 23;
			this->groupBox7->TabStop = false;
			this->groupBox7->Text = L"Configure Audio Settings";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(355, 444);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->groupBox5);
			this->Controls->Add(this->groupBox6);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->groupBox7);
			this->Name = L"MyForm";
			this->Text = L"Knight Online Game Option Setup";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar2))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->EndInit();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar3))->EndInit();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar4))->EndInit();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->groupBox5->ResumeLayout(false);
			this->groupBox5->PerformLayout();
			this->groupBox6->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();
		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	//	----------------------------------------------------------------------
	//					    Now the real fun begins
		trackBar1->TickFrequency = 1;
		trackBar1->SmallChange = 1;
		trackBar1->LargeChange = 26;
		trackBar1->SetRange(256, 512);
		trackBar1->Value = 256;
		trackBar2->TickFrequency = 1;
		trackBar2->SmallChange = 1;
		trackBar2->LargeChange = 18;
		trackBar2->SetRange(20, 48);
		trackBar2->Value = 20;
		trackBar3->TickFrequency = 1;
		trackBar3->SmallChange = 1;
		trackBar3->LargeChange = 26;
		trackBar3->SetRange(1000, 2000);
		trackBar3->Value = 1000;
	//					    Get Current version from server.ini
		int version = GetPrivateProfileInt(L"Version", L"Files", 0, L".\\Server.ini");
		textBox1->Text = ""+version;
		//					    Get Current texture lods from option.ini
		int chr = GetPrivateProfileInt(L"Texture", L"LOD_Chr", 0, L".\\Option.ini");
		int shape = GetPrivateProfileInt(L"Texture", L"LOD_Shape", 0, L".\\Option.ini");
		int terrain = GetPrivateProfileInt(L"Texture", L"LOD_Terrain", 0, L".\\Option.ini");
		if (chr == 0){comboBox3->SelectedIndex = 0;}
		else { comboBox3->SelectedIndex = 1; }
		if (shape == 0) { comboBox4->SelectedIndex = 0; }
		else { comboBox4->SelectedIndex = 1; }
		if (terrain == 0) { comboBox5->SelectedIndex = 0; }
		else { comboBox5->SelectedIndex = 1; }


		int useshadows = GetPrivateProfileInt(L"Shadow", L"Use", 0, L".\\Option.ini");
		int usewepeffect = GetPrivateProfileInt(L"WeaponEffect", L"EffectVisible", 0, L".\\Option.ini");
		int windowmode = GetPrivateProfileInt(L"Screen", L"WindowMode", 0, L".\\Option.ini");
		int usecursor = GetPrivateProfileInt(L"Cursor", L"WindowCursor", 0, L".\\Option.ini");
		int bgmusic = GetPrivateProfileInt(L"Sound", L"Bgm", 0, L".\\Option.ini");
		int effectsounds = GetPrivateProfileInt(L"Sound", L"Effect", 0, L".\\Option.ini");
		int duplicatedsound = GetPrivateProfileInt(L"Sound", L"Duplicate", 0, L".\\Option.ini");
	//					    Get current enabled settings/checkboxes otherwise treat them as off
		if (useshadows == 1)
		{
			checkBox1->Checked = true;
		}
		if (usewepeffect == 1)
		{
			checkBox2->Checked = true;
		}
		if (windowmode == 1)
		{
			checkBox3->Checked = true;
		}
		if (usecursor == 1)
		{
			checkBox4->Checked = true;
		}
		if (bgmusic == 1)
		{
			checkBox5->Checked = true;
		}
		if (effectsounds == 1)
		{
			checkBox6->Checked = true;
		}
		if (duplicatedsound == 1)
		{
			checkBox7->Checked = true;
		}

		int videobit = GetPrivateProfileInt(L"ViewPort", L"ColorDepth", 16, L".\\Option.ini");
		if (videobit ==32) { comboBox2->SelectedIndex=0; }
		else { comboBox2->SelectedIndex=1; }
		
		//SFML LIB to get current supported resolutions and add it to a combobox list
		std::vector<sf::VideoMode> screenResolution = sf::VideoMode::getFullscreenModes();
		for (std::size_t i = 0; i < screenResolution.size(); ++i)
		{
			comboBox1->Items->Add(screenResolution[i].width + "x" + screenResolution[i].height);
			comboBox1->SelectedIndex = 0;
		}
		// add current ini resolution to the list clear current text and reselect
		int resX = GetPrivateProfileInt(L"ViewPort", L"Width", 1024, L".\\Option.ini");
		int resY = GetPrivateProfileInt(L"ViewPort", L"Height", 768, L".\\Option.ini");
		if (resX >= 0 && resY >= 0)
		{
			comboBox1->Items->Add(resX + "x" + resY);
			comboBox1->Text = "";
			comboBox1->SelectedText = resX + "x" + resY;
		}

		int visibilityrange = GetPrivateProfileInt(L"ViewPort", L"Distance", 256, L".\\Option.ini");
		int sounddistance = GetPrivateProfileInt(L"Sound", L"Distance", 20, L".\\Option.ini");
		int numberofeffects = GetPrivateProfileInt(L"Effect", L"Count", 1000, L".\\Option.ini");
		if (visibilityrange >= 256 && visibilityrange <= 512)
		{
			trackBar1->Value = visibilityrange;
		}
		if (sounddistance >= 20 && sounddistance <= 48)
		{
			trackBar2->Value = sounddistance;
		}
		if (numberofeffects >= 1000 && numberofeffects <= 2000)
		{
			trackBar3->Value = numberofeffects;
		}
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	//							Launch game only
	WinExec("KnightOnline.exe", SW_NORMAL);
	PostQuitMessage(NULL);
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	//							Write Version only
	String^ str = textBox1->Text;
	pin_ptr<const wchar_t> versionwrite = PtrToStringChars(str);
	printf_s("%S\n", versionwrite);
	WritePrivateProfileString(L"Version", L"Files", versionwrite, L".\\Server.ini");
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	//							Write game settings only
	String^ str2 = "" + trackBar1->Value;
	pin_ptr<const wchar_t> writevisrange = PtrToStringChars(str2);
	printf_s("%S\n", writevisrange);
	WritePrivateProfileString(L"ViewPort", L"Distance", writevisrange, L".\\Option.ini");

	String^ str3 = "" + trackBar2->Value;
	pin_ptr<const wchar_t> writesndrange = PtrToStringChars(str3);
	printf_s("%S\n", writesndrange);
	WritePrivateProfileString(L"Sound", L"Distance", writesndrange, L".\\Option.ini");

	String^ str4 = "" + trackBar3->Value;
	pin_ptr<const wchar_t> writenumofeffects = PtrToStringChars(str4);
	printf_s("%S\n", writenumofeffects);
	WritePrivateProfileString(L"Effect", L"Count", writenumofeffects, L".\\Option.ini");

	if (checkBox1->Checked == true)
	{
		String^ str5 = "1";
		pin_ptr<const wchar_t> writeshadows = PtrToStringChars(str5);
		printf_s("%S\n", writeshadows);
		WritePrivateProfileString(L"Shadow", L"Use", writeshadows, L".\\Option.ini");
	}
	else
	{ 
		String^ str5 = "0";
		pin_ptr<const wchar_t> writeshadows = PtrToStringChars(str5);
		printf_s("%S\n", writeshadows);
		WritePrivateProfileString(L"Shadow", L"Use", writeshadows, L".\\Option.ini");
	}
	if (checkBox2->Checked == true)
	{
		String^ str6 = "1";
		pin_ptr<const wchar_t> writewepeffect = PtrToStringChars(str6);
		printf_s("%S\n", writewepeffect);
		WritePrivateProfileString(L"WeaponEffect", L"EffectVisible", writewepeffect, L".\\Option.ini");
	}
	else
	{
		String^ str6 = "0";
		pin_ptr<const wchar_t> writewepeffect = PtrToStringChars(str6);
		printf_s("%S\n", writewepeffect);
		WritePrivateProfileString(L"WeaponEffect", L"EffectVisible", writewepeffect, L".\\Option.ini");
	}
	if (checkBox3->Checked == true)
	{
		String^ str7 = "1";
		pin_ptr<const wchar_t> writewindowm = PtrToStringChars(str7);
		printf_s("%S\n", writewindowm);
		WritePrivateProfileString(L"Screen", L"WindowMode", writewindowm, L".\\Option.ini");
	}
	else
	{
		String^ str7 = "0";
		pin_ptr<const wchar_t> writewindowm = PtrToStringChars(str7);
		printf_s("%S\n", writewindowm);
		WritePrivateProfileString(L"Screen", L"WindowMode", writewindowm, L".\\Option.ini");
	}
	if (checkBox4->Checked == true)
	{
		String^ str8 = "1";
		pin_ptr<const wchar_t> writecursor = PtrToStringChars(str8);
		printf_s("%S\n", writecursor);
		WritePrivateProfileString(L"Cursor", L"WindowCursor", writecursor, L".\\Option.ini");
	}
	else
	{
		String^ str8 = "0";
		pin_ptr<const wchar_t> writecursor = PtrToStringChars(str8);
		printf_s("%S\n", writecursor);
		WritePrivateProfileString(L"Cursor", L"WindowCursor", writecursor, L".\\Option.ini");
	}
	if (checkBox5->Checked == true)
	{
		String^ str9 = "1";
		pin_ptr<const wchar_t> writecursor = PtrToStringChars(str9);
		printf_s("%S\n", writecursor);
		WritePrivateProfileString(L"Sound", L"Bgm", writecursor, L".\\Option.ini");
	}
	else
	{
		String^ str9 = "0";
		pin_ptr<const wchar_t> writecursor = PtrToStringChars(str9);
		printf_s("%S\n", writecursor);
		WritePrivateProfileString(L"Sound", L"Bgm", writecursor, L".\\Option.ini");
	}
	if (checkBox6->Checked == true)
	{
		String^ str10 = "1";
		pin_ptr<const wchar_t> writesndeffect = PtrToStringChars(str10);
		printf_s("%S\n", writesndeffect);
		WritePrivateProfileString(L"Sound", L"Effect", writesndeffect, L".\\Option.ini");
	}
	else
	{
		String^ str10 = "0";
		pin_ptr<const wchar_t> writesndeffect = PtrToStringChars(str10);
		printf_s("%S\n", writesndeffect);
		WritePrivateProfileString(L"Sound", L"Effect", writesndeffect, L".\\Option.ini");
	}
	if (checkBox7->Checked == true)
	{
		String^ str11 = "1";
		pin_ptr<const wchar_t> writesnddupl = PtrToStringChars(str11);
		printf_s("%S\n", writesnddupl);
		WritePrivateProfileString(L"Sound", L"Duplicate", writesnddupl, L".\\Option.ini");
	}
	else
	{
		String^ str11 = "0";
		pin_ptr<const wchar_t> writesnddupl = PtrToStringChars(str11);
		printf_s("%S\n", writesnddupl);
		WritePrivateProfileString(L"Sound", L"Duplicate", writesnddupl, L".\\Option.ini");
	}
	if (comboBox3->SelectedIndex == 0)
	{
		String^ str12 = "0";
		pin_ptr<const wchar_t> writelodchr = PtrToStringChars(str12);
		printf_s("%S\n", writelodchr);
		WritePrivateProfileString(L"Texture", L"LOD_Chr", writelodchr, L".\\Option.ini");
	}
	else
	{
		String^ str12 = "1";
		pin_ptr<const wchar_t> writelodchr = PtrToStringChars(str12);
		printf_s("%S\n", writelodchr);
		WritePrivateProfileString(L"Texture", L"LOD_Chr", writelodchr, L".\\Option.ini");
	}
	if (comboBox4->SelectedIndex == 0)
	{
		String^ str13 = "0";
		pin_ptr<const wchar_t> writelodshape = PtrToStringChars(str13);
		printf_s("%S\n", writelodshape);
		WritePrivateProfileString(L"Texture", L"LOD_Shape", writelodshape, L".\\Option.ini");
	}
	else
	{
		String^ str13 = "1";
		pin_ptr<const wchar_t> writelodshape = PtrToStringChars(str13);
		printf_s("%S\n", writelodshape);
		WritePrivateProfileString(L"Texture", L"LOD_Shape", writelodshape, L".\\Option.ini");
	}
	if (comboBox5->SelectedIndex == 0)
	{
		String^ str14 = "0";
		pin_ptr<const wchar_t> writelodterrain = PtrToStringChars(str14);
		printf_s("%S\n", writelodterrain);
		WritePrivateProfileString(L"Texture", L"LOD_Terrain", writelodterrain, L".\\Option.ini");
	}
	else
	{
		String^ str14 = "1";
		pin_ptr<const wchar_t> writelodterrain = PtrToStringChars(str14);
		printf_s("%S\n", writelodterrain);
		WritePrivateProfileString(L"Texture", L"LOD_Terrain", writelodterrain, L".\\Option.ini");
	}
	if (comboBox2->SelectedIndex == 0)
	{
		String^ str15 = "32";
		pin_ptr<const wchar_t> bitdepthcolor = PtrToStringChars(str15);
		printf_s("%S\n", bitdepthcolor);
		WritePrivateProfileString(L"ViewPort", L"ColorDepth", bitdepthcolor, L".\\Option.ini");
	}
	else
	{
		String^ str15 = "16";
		pin_ptr<const wchar_t> bitdepthcolor = PtrToStringChars(str15);
		printf_s("%S\n", bitdepthcolor);
		WritePrivateProfileString(L"ViewPort", L"ColorDepth", bitdepthcolor, L".\\Option.ini");
	}
	//							Split string line w.e here
	//				To seperate resolution X from Y then write it into .ini
	//		Since we are getting current ini resolution or any custom input text of combolist we don't care about the selected items collection/index
	//	--------------------------------------------------------------------------------------------
	String^ str = comboBox1->Text;
	array<String^>^ StringArray = str->Split('x');
	//								Write X resolution
	pin_ptr<const wchar_t> writeresX = PtrToStringChars(StringArray[0]);
	printf_s("%S\n", writeresX);
	WritePrivateProfileString(L"ViewPort", L"Width", writeresX, L".\\Option.ini");
	//								Write Y resolution
	pin_ptr<const wchar_t> writeresY = PtrToStringChars(StringArray[1]);
	printf_s("%S\n", writeresY);
	WritePrivateProfileString(L"ViewPort", L"Height", writeresY, L".\\Option.ini");
	//					I heard you like empty spaces and extra linebreaks
	
	System::Windows::Forms::DialogResult Result;
	Result = MessageBox::Show(
		L"Would you like to launch the game with the current settings?",
		L"Ini file written",
		MessageBoxButtons::YesNoCancel,
		MessageBoxIcon::Exclamation);
	if (Result == System::Windows::Forms::DialogResult::Cancel)
	{
	//								Do nothing
	}
	else if (Result == System::Windows::Forms::DialogResult::Yes)
	{
		WinExec("KnightOnline.exe", SW_NORMAL);
		PostQuitMessage(NULL);
	}
	else if (Result == System::Windows::Forms::DialogResult::No)
	{
		PostQuitMessage(NULL);
	}
}
};
}

	// Because you like extra spaces

	//
	//private: void ShowCurrentScreen()
	//{
	//	//	----------------------------------------------------------------------
	//	//							Just some Test 
	//	int width = GetSystemMetrics(SM_CXSCREEN); int height = GetSystemMetrics(SM_CYSCREEN);
	//	System::String^ maxwidth = width.ToString();
	//	System::String^ maxheight = height.ToString();
	//	MessageBox::Show(maxwidth + "x" + maxheight, L"Current Resolution", MessageBoxButtons::OK, MessageBoxIcon::Information);
	//}
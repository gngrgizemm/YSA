#include <ctime>
#include <iostream>
#include "source.h"
#include <time.h>
#include "Process.h"
#include <math.h>
#include <cmath>


namespace CppCLRWinformsProjekt {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Zusammenfassung für Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Konstruktorcode hier hinzufügen.
			//
			Size = Size1 = Size2 = Size3 = Size4 = Size5 = 0;
		}

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ processToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ initiallyToolStripMenuItem;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::CheckBox^ check_Class1;
	private: System::Windows::Forms::CheckBox^ check_Class2;



	private:
		/// <summary>
		Samples* p;
		int Size, Size1, Size2, Size3, Size4, Size5,x1,x2,sinif;
		double* w;
		double** W;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::ToolStripMenuItem^ randomlyToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ exitToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ trainingToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ MulticlassTrainingToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ saveToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ perceptronToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ deltaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ binaryToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ continiousToolStripMenuItem1;
	private: System::Windows::Forms::CheckBox^ check_Class3;
	private: System::Windows::Forms::CheckBox^ check_Class4;
	private: System::Windows::Forms::CheckBox^ check_Class5;
	private: System::Windows::Forms::ComboBox^ comboBox1;



		   /// Erforderliche Designervariable.
		/// </summary>
		   System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		   /// <summary>
		   /// Erforderliche Methode für die Designerunterstützung.
		   /// Der Inhalt der Methode darf nicht mit dem Code-Editor geändert werden.
		   /// </summary>
		   void InitializeComponent(void)
		   {
			   this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			   this->processToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			   this->initiallyToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			   this->randomlyToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			   this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			   this->trainingToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			   this->perceptronToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			   this->deltaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			   this->MulticlassTrainingToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			   this->binaryToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			   this->continiousToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			   this->saveToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			   this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			   this->check_Class1 = (gcnew System::Windows::Forms::CheckBox());
			   this->check_Class2 = (gcnew System::Windows::Forms::CheckBox());
			   this->label1 = (gcnew System::Windows::Forms::Label());
			   this->label2 = (gcnew System::Windows::Forms::Label());
			   this->check_Class3 = (gcnew System::Windows::Forms::CheckBox());
			   this->check_Class4 = (gcnew System::Windows::Forms::CheckBox());
			   this->check_Class5 = (gcnew System::Windows::Forms::CheckBox());
			   this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			   this->menuStrip1->SuspendLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			   this->SuspendLayout();
			   // 
			   // menuStrip1
			   // 
			   this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->processToolStripMenuItem });
			   this->menuStrip1->Location = System::Drawing::Point(0, 0);
			   this->menuStrip1->Name = L"menuStrip1";
			   this->menuStrip1->Size = System::Drawing::Size(793, 24);
			   this->menuStrip1->TabIndex = 0;
			   this->menuStrip1->Text = L"menuStrip1";
			   // 
			   // processToolStripMenuItem
			   // 
			   this->processToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				   this->initiallyToolStripMenuItem,
					   this->exitToolStripMenuItem, this->trainingToolStripMenuItem, this->MulticlassTrainingToolStripMenuItem, this->saveToolStripMenuItem
			   });
			   this->processToolStripMenuItem->Name = L"processToolStripMenuItem";
			   this->processToolStripMenuItem->Size = System::Drawing::Size(59, 20);
			   this->processToolStripMenuItem->Text = L"Process";
			   // 
			   // initiallyToolStripMenuItem
			   // 
			   this->initiallyToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->randomlyToolStripMenuItem });
			   this->initiallyToolStripMenuItem->Name = L"initiallyToolStripMenuItem";
			   this->initiallyToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			   this->initiallyToolStripMenuItem->Text = L"initially";
			   // 
			   // randomlyToolStripMenuItem
			   // 
			   this->randomlyToolStripMenuItem->Name = L"randomlyToolStripMenuItem";
			   this->randomlyToolStripMenuItem->Size = System::Drawing::Size(128, 22);
			   this->randomlyToolStripMenuItem->Text = L"Randomly";
			   this->randomlyToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::randomlyToolStripMenuItem_Click);
			   // 
			   // exitToolStripMenuItem
			   // 
			   this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			   this->exitToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			   this->exitToolStripMenuItem->Text = L"exit";
			   // 
			   // trainingToolStripMenuItem
			   // 
			   this->trainingToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				   this->perceptronToolStripMenuItem,
					   this->deltaToolStripMenuItem
			   });
			   this->trainingToolStripMenuItem->Name = L"trainingToolStripMenuItem";
			   this->trainingToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			   this->trainingToolStripMenuItem->Text = L"training";
			   // 
			   // perceptronToolStripMenuItem
			   // 
			   this->perceptronToolStripMenuItem->Name = L"perceptronToolStripMenuItem";
			   this->perceptronToolStripMenuItem->Size = System::Drawing::Size(132, 22);
			   this->perceptronToolStripMenuItem->Text = L"perceptron";
			   this->perceptronToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::perceptronToolStripMenuItem_Click);
			   // 
			   // deltaToolStripMenuItem
			   // 
			   this->deltaToolStripMenuItem->Name = L"deltaToolStripMenuItem";
			   this->deltaToolStripMenuItem->Size = System::Drawing::Size(132, 22);
			   this->deltaToolStripMenuItem->Text = L"delta";
			   this->deltaToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::deltaToolStripMenuItem_Click);
			   // 
			   // MulticlassTrainingToolStripMenuItem
			   // 
			   this->MulticlassTrainingToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				   this->binaryToolStripMenuItem,
					   this->continiousToolStripMenuItem1
			   });
			   this->MulticlassTrainingToolStripMenuItem->Name = L"MulticlassTrainingToolStripMenuItem";
			   this->MulticlassTrainingToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			   this->MulticlassTrainingToolStripMenuItem->Text = L"MulticlassTraining";
			   // 
			   // binaryToolStripMenuItem
			   // 
			   this->binaryToolStripMenuItem->Name = L"binaryToolStripMenuItem";
			   this->binaryToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			   this->binaryToolStripMenuItem->Text = L"binary";
			   this->binaryToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::binaryToolStripMenuItem_Click);
			   // 
			   // continiousToolStripMenuItem1
			   // 
			   this->continiousToolStripMenuItem1->Name = L"continiousToolStripMenuItem1";
			   this->continiousToolStripMenuItem1->Size = System::Drawing::Size(180, 22);
			   this->continiousToolStripMenuItem1->Text = L"continious";
			   this->continiousToolStripMenuItem1->Click += gcnew System::EventHandler(this, &Form1::continiousToolStripMenuItem1_Click);
			   // 
			   // saveToolStripMenuItem
			   // 
			   this->saveToolStripMenuItem->Name = L"saveToolStripMenuItem";
			   this->saveToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			   this->saveToolStripMenuItem->Text = L"save";
			   // 
			   // pictureBox1
			   // 
			   this->pictureBox1->BackColor = System::Drawing::SystemColors::ControlLightLight;
			   this->pictureBox1->Location = System::Drawing::Point(9, 30);
			   this->pictureBox1->Name = L"pictureBox1";
			   this->pictureBox1->Size = System::Drawing::Size(462, 417);
			   this->pictureBox1->TabIndex = 1;
			   this->pictureBox1->TabStop = false;
			   this->pictureBox1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Form1::pictureBox1_Paint);
			   this->pictureBox1->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Form1::pictureBox1_MouseClick);
			   // 
			   // check_Class1
			   // 
			   this->check_Class1->AutoSize = true;
			   this->check_Class1->Checked = true;
			   this->check_Class1->CheckState = System::Windows::Forms::CheckState::Checked;
			   this->check_Class1->Location = System::Drawing::Point(544, 71);
			   this->check_Class1->Name = L"check_Class1";
			   this->check_Class1->Size = System::Drawing::Size(57, 17);
			   this->check_Class1->TabIndex = 2;
			   this->check_Class1->Text = L"Class1";
			   this->check_Class1->UseVisualStyleBackColor = true;
			   // 
			   // check_Class2
			   // 
			   this->check_Class2->AutoSize = true;
			   this->check_Class2->Location = System::Drawing::Point(544, 94);
			   this->check_Class2->Name = L"check_Class2";
			   this->check_Class2->Size = System::Drawing::Size(57, 17);
			   this->check_Class2->TabIndex = 3;
			   this->check_Class2->Text = L"Class2";
			   this->check_Class2->UseVisualStyleBackColor = true;
			   // 
			   // label1
			   // 
			   this->label1->AutoSize = true;
			   this->label1->Location = System::Drawing::Point(477, 218);
			   this->label1->Name = L"label1";
			   this->label1->Size = System::Drawing::Size(35, 13);
			   this->label1->TabIndex = 4;
			   this->label1->Text = L"label1";
			   // 
			   // label2
			   // 
			   this->label2->AutoSize = true;
			   this->label2->Location = System::Drawing::Point(477, 271);
			   this->label2->Name = L"label2";
			   this->label2->Size = System::Drawing::Size(35, 13);
			   this->label2->TabIndex = 5;
			   this->label2->Text = L"label2";
			   // 
			   // check_Class3
			   // 
			   this->check_Class3->AutoSize = true;
			   this->check_Class3->Location = System::Drawing::Point(544, 117);
			   this->check_Class3->Name = L"check_Class3";
			   this->check_Class3->Size = System::Drawing::Size(57, 17);
			   this->check_Class3->TabIndex = 6;
			   this->check_Class3->Text = L"Class3";
			   this->check_Class3->UseVisualStyleBackColor = true;
			   // 
			   // check_Class4
			   // 
			   this->check_Class4->AutoSize = true;
			   this->check_Class4->Location = System::Drawing::Point(544, 140);
			   this->check_Class4->Name = L"check_Class4";
			   this->check_Class4->Size = System::Drawing::Size(57, 17);
			   this->check_Class4->TabIndex = 7;
			   this->check_Class4->Text = L"Class4";
			   this->check_Class4->UseVisualStyleBackColor = true;
			   // 
			   // check_Class5
			   // 
			   this->check_Class5->AutoSize = true;
			   this->check_Class5->Location = System::Drawing::Point(544, 163);
			   this->check_Class5->Name = L"check_Class5";
			   this->check_Class5->Size = System::Drawing::Size(57, 17);
			   this->check_Class5->TabIndex = 8;
			   this->check_Class5->Text = L"Class5";
			   this->check_Class5->UseVisualStyleBackColor = true;
			   this->check_Class5->CheckedChanged += gcnew System::EventHandler(this, &Form1::checkBox3_CheckedChanged);
			   // 
			   // comboBox1
			   // 
			   this->comboBox1->FormattingEnabled = true;
			   this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(5) { L"1", L"2", L"3", L"4", L"5" });
			   this->comboBox1->Location = System::Drawing::Point(544, 44);
			   this->comboBox1->Name = L"comboBox1";
			   this->comboBox1->Size = System::Drawing::Size(121, 21);
			   this->comboBox1->TabIndex = 9;
			   this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::comboBox1_SelectedIndexChanged);
			   // 
			   // Form1
			   // 
			   this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			   this->ClientSize = System::Drawing::Size(793, 501);
			   this->Controls->Add(this->comboBox1);
			   this->Controls->Add(this->check_Class5);
			   this->Controls->Add(this->check_Class4);
			   this->Controls->Add(this->check_Class3);
			   this->Controls->Add(this->label2);
			   this->Controls->Add(this->label1);
			   this->Controls->Add(this->check_Class2);
			   this->Controls->Add(this->check_Class1);
			   this->Controls->Add(this->pictureBox1);
			   this->Controls->Add(this->menuStrip1);
			   this->MainMenuStrip = this->menuStrip1;
			   this->Name = L"Form1";
			   this->Text = L"Form1";
			   this->menuStrip1->ResumeLayout(false);
			   this->menuStrip1->PerformLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			   this->ResumeLayout(false);
			   this->PerformLayout();

		   }
#pragma endregion
	private: System::Void pictureBox1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
		//Ana eksen dogrularýný cizdir
		Pen^ pen = gcnew Pen(Color::Black, 3.0f);
		int center_width, center_height;
		//merkez picture box ýn tam ortasý olsun istiyoruz bu yüzden picture box ýn geniþliði ve yüksekliðinin yarýsýný aldýk
		center_width = (int)(pictureBox1->Width / 2);
		center_height = (int)(pictureBox1->Height / 2);
		//koordinat sistemi çizdircez
		e->Graphics->DrawLine(pen, center_width, 0, center_width, pictureBox1->Height);
		e->Graphics->DrawLine(pen, 0, center_height, pictureBox1->Width, center_height);
	}

	private: System::Void pictureBox1_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		if (check_Class1->Checked || check_Class2->Checked || check_Class3->Checked || check_Class4->Checked || check_Class5->Checked) {
			if (check_Class1->Checked && check_Class2->Checked && check_Class3->Checked && check_Class4->Checked && check_Class5->Checked) {
				MessageBox::Show("Her iki sýnýf türü ayný anda seçilemez");
				check_Class1->Checked = false;
				check_Class2->Checked = false;
				check_Class3->Checked = false;
				check_Class4->Checked = false;
				check_Class5->Checked = false;

			}
			else {
				if (check_Class1->Checked) {
					Pen^ pen = gcnew Pen(Color::Purple, 3.0f);
					int temp_x, temp_y;
					double x1, x2; //x1: width, x2:height
					temp_x = (Convert::ToInt32(e->X));
					temp_y = (Convert::ToInt32(e->Y));
					x1 = (double)(temp_x - (pictureBox1->Width >> 1));
					x2 = (double)((pictureBox1->Height >> 1) - temp_y);
					if (Size == 0) {
						Size = Size1 = 1;
						p = new Samples[1];
						p[0].x1 = x1;
						p[0].x2 = x2;
						p[0].bias = BIAS;
						p[0].id = CLASS1;
					}
					else {
						Samples* temp;
						temp = p;
						Size1++;
						Size += 1;
						p = new Samples[Size];
						for (int i = 0; i < Size - 1; i++) {
							p[i].x1 = temp[i].x1;
							p[i].x2 = temp[i].x2;
							p[i].bias = BIAS;
							p[i].id = temp[i].id;


						}
						p[Size - 1].x1 = x1;
						p[Size - 1].x2 = x2;
						p[Size - 1].bias = BIAS;
						p[Size - 1].id = CLASS1;
	
						delete temp;
					}//else
					label1->Text = "x1: " + Convert::ToString(p[Size - 1].x1) + "x2: " + Convert::ToString(p[Size - 1].x2);
					pictureBox1->CreateGraphics()->DrawLine(pen, temp_x - 5, temp_y, temp_x + 5, temp_y);
					pictureBox1->CreateGraphics()->DrawLine(pen, temp_x, temp_y - 5, temp_x, temp_y + 5);
					label2->Text = "Samples Total: " + Convert::ToString(Size) + "Class 1: " + Convert::ToString(Size1);
				}//Class1 için

				else if (check_Class2->Checked) {
					Pen^ pen = gcnew Pen(Color::Red, 3.0f);
					int temp_x, temp_y;
					double x1, x2; //ysa_x, ysa_y
					temp_x = (System::Convert::ToInt32(e->X));
					temp_y = (System::Convert::ToInt32(e->Y));
					x2 = (double)((pictureBox1->Height >> 1) - temp_y);
					x1 = (double)(temp_x - (pictureBox1->Width >> 1));
					if (Size == 0) {
						Size = Size2 = 1;
						p = new Samples[1];
						p[0].x1 = x1;
						p[0].x2 = x2;
						p[0].bias = BIAS;
						p[0].id = CLASS2;
					
					}
					else {
						Samples* temp;
						temp = p;
						Size2++;
						Size += 1;
						p = new Samples[Size];
						for (int i = 0; i < Size - 1; i++) {
							p[i].x1 = temp[i].x1;
							p[i].x2 = temp[i].x2;
							p[i].bias = BIAS;
							p[i].id = temp[i].id;
							

						}
						p[Size - 1].x1 = x1;
						p[Size - 1].x2 = x2;
						p[Size - 1].bias = BIAS;
						p[Size - 1].id = CLASS2;
						
						delete temp;
					}//else
					label1->Text = "x1: " + Convert::ToString(p[Size - 1].x1) + "  x2: " + Convert::ToString(p[Size - 1].x2);
					pictureBox1->CreateGraphics()->DrawLine(pen, temp_x - 5, temp_y, temp_x + 5, temp_y);
					pictureBox1->CreateGraphics()->DrawLine(pen, temp_x, temp_y - 5, temp_x, temp_y + 5);
					label2->Text = "Samples Total: " + Convert::ToString(Size) + "   Class 1: " + Convert::ToString(Size1) + "   Class 2: " + Convert::ToString(Size2);

				}
				else if (check_Class3->Checked) {
					Pen^ pen = gcnew Pen(Color::Orange, 3.0f);
					int temp_x, temp_y;

					double x1, x2; //ysa_x, ysa_y
					temp_x = (System::Convert::ToInt32(e->X));
					temp_y = (System::Convert::ToInt32(e->Y));
					x2 = (double)((pictureBox1->Height >> 1) - temp_y);
					x1 = (double)(temp_x - (pictureBox1->Width >> 1));
					if (Size == 0) {
						Size = Size3 = 1;
						p = new Samples[1];
						p[0].x1 = x1;
						p[0].x2 = x2;
						p[0].bias = BIAS;
						p[0].id = CLASS3;
						

					}
					else {
						Samples* temp;
						temp = p;
						Size3++;
						Size += 1;
						p = new Samples[Size];
						for (int i = 0; i < Size - 1; i++) {
							p[i].x1 = temp[i].x1;
							p[i].x2 = temp[i].x2;
							p[i].bias = BIAS;
							p[i].id = temp[i].id;
							

						}
						p[Size - 1].x1 = x1;
						p[Size - 1].x2 = x2;
						p[Size - 1].bias = BIAS;
						p[Size - 1].id = CLASS3;
						

						delete temp;
					}//else
					label1->Text = "x1: " + Convert::ToString(p[Size - 1].x1) + "  x2: " + Convert::ToString(p[Size - 1].x2);
					pictureBox1->CreateGraphics()->DrawLine(pen, temp_x - 5, temp_y, temp_x + 5, temp_y);
					pictureBox1->CreateGraphics()->DrawLine(pen, temp_x, temp_y - 5, temp_x, temp_y + 5);
					label2->Text = "Samples Total: " + Convert::ToString(Size) + "   Class 1: " + Convert::ToString(Size1) + "   Class 2: " + Convert::ToString(Size2) + "   Class 3: " + Convert::ToString(Size3);

				}
				else if (check_Class4->Checked) {
					Pen^ pen = gcnew Pen(Color::DarkOliveGreen, 3.0f);
					int temp_x, temp_y;
					double x1, x2; //ysa_x, ysa_y
					temp_x = (System::Convert::ToInt32(e->X));
					temp_y = (System::Convert::ToInt32(e->Y));
					x2 = (double)((pictureBox1->Height >> 1) - temp_y);
					x1 = (double)(temp_x - (pictureBox1->Width >> 1));
					if (Size == 0) {
						Size = Size4 = 1;
						p = new Samples[1];
						p[0].x1 = x1;
						p[0].x2 = x2;
						p[0].bias = BIAS;
						p[0].id = CLASS4;
						
					}
					else {
						Samples* temp;
						temp = p;
						Size4++;
						Size += 1;
						p = new Samples[Size];
						for (int i = 0; i < Size - 1; i++) {
							p[i].x1 = temp[i].x1;
							p[i].x2 = temp[i].x2;
							p[i].bias = BIAS;
							p[i].id = temp[i].id;

						}
						p[Size - 1].x1 = x1;
						p[Size - 1].x2 = x2;
						p[Size - 1].bias = BIAS;
						p[Size - 1].id = CLASS4;
						
						delete temp;
					}//else
					label1->Text = "x1: " + Convert::ToString(p[Size - 1].x1) + "  x2: " + Convert::ToString(p[Size - 1].x2);
					pictureBox1->CreateGraphics()->DrawLine(pen, temp_x - 5, temp_y, temp_x + 5, temp_y);
					pictureBox1->CreateGraphics()->DrawLine(pen, temp_x, temp_y - 5, temp_x, temp_y + 5);
					label2->Text = "Samples Total: " + Convert::ToString(Size) + "   Class 1: " + Convert::ToString(Size1) + "   Class 2: " + Convert::ToString(Size2) + "   Class 3: " + Convert::ToString(Size3) + "   Class 4: " + Convert::ToString(Size4);

				}
				else if (check_Class5->Checked) {

					Pen^ pen = gcnew Pen(Color::BlueViolet, 3.0f);
					int temp_x, temp_y;
					double x1, x2; //ysa_x, ysa_y
					temp_x = (System::Convert::ToInt32(e->X));
					temp_y = (System::Convert::ToInt32(e->Y));
					x2 = (double)((pictureBox1->Height >> 1) - temp_y);
					x1 = (double)(temp_x - (pictureBox1->Width >> 1));
					if (Size == 0) {
						Size = Size5 = 1;
						p = new Samples[1];
						p[0].x1 = x1;
						p[0].x2 = x2;
						p[0].bias = BIAS;
						p[0].id = CLASS3;
						
					}
					else {
						Samples* temp;
						temp = p;
						Size5++;
						Size += 1;
						p = new Samples[Size];
						for (int i = 0; i < Size - 1; i++) {
							p[i].x1 = temp[i].x1;
							p[i].x2 = temp[i].x2;
							p[i].bias = BIAS;
							p[i].id = temp[i].id;
							

						}
						p[Size - 1].x1 = x1;
						p[Size - 1].x2 = x2;
						p[Size - 1].bias = BIAS;
						p[Size - 1].id = CLASS5;
						delete temp;
					}//else
					label1->Text = "x1: " + Convert::ToString(p[Size - 1].x1) + "  x2: " + Convert::ToString(p[Size - 1].x2);
					pictureBox1->CreateGraphics()->DrawLine(pen, temp_x - 5, temp_y, temp_x + 5, temp_y);
					pictureBox1->CreateGraphics()->DrawLine(pen, temp_x, temp_y - 5, temp_x, temp_y + 5);
					label2->Text = "Samples Total: " + Convert::ToString(Size) + "   Class 1: " + Convert::ToString(Size1) + "   Class 2: " + Convert::ToString(Size2) + "   Class 3: " + Convert::ToString(Size3) + "   Class 4: " + Convert::ToString(Size4) + "   Class 5: " + Convert::ToString(Size5);

				}

			}
		}
		else {
			MessageBox::Show("Öncelikle örneklerin etiketini belirlemek için ilgili sýnýfýn etiketini seçin.");
		}
	}
	private: System::Void randomlyToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		Pen^ pen = gcnew Pen(Color::Blue, 3.0f);
		int min_x, max_x, min_y, max_y;
		int Dim = 2;
		w = new double[Dim + 1];
		srand(time(0));
		for (int i = 0; i < Dim + 1; i++)
			w[i] = ((double)rand() / (RAND_MAX));

		label1->Text = "w[0]: " + System::Convert::ToString(w[0]) + " w[1]: " + System::Convert::ToString(w[1]) + " w[2]: " + System::Convert::ToString(w[2]);
		min_x = (this->pictureBox1->Width) / -2;
		min_y = YPoint(min_x, w);
		max_x = (this->pictureBox1->Width) / 2;
		max_y = YPoint(max_x, w);
		pictureBox1->CreateGraphics()->DrawLine(pen, (pictureBox1->Width / 2) + min_x, (pictureBox1->Height / 2) - min_y, (pictureBox1->Width / 2) + max_x, (pictureBox1->Height / 2) - max_y);
	}
	private: System::Void perceptronToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		int y;
		bool error = true;
		int iterations = 0;
		int maxIterations = 1000000;
		Pen^ pen = gcnew Pen(Color::Red, 3.0f);
		Pen^ pen1;
		int min_x, max_x, min_y, max_y, x1, x2,d;


		while (error && iterations < maxIterations) {
			error = false;
			for (int i = 0; i < Size; i++) {
				if (p[i].id == CLASS1) d = 1;
				else d = -1;
				//sgn function
				if (((w[0] * p[i].x1) + (w[1] * p[i].x2) + (w[2] * p[i].bias)) < 0)
				{
					y = -1;
				}
				else
				{
					y = 1;
				}


				if (y != d)
				{
					error = true;

					w[0] = w[0] + (d - y) * LEARNING_RATE * p[i].x1;
					w[1] = w[1] + (d - y) * LEARNING_RATE * p[i].x2;
					w[2] = w[2] + (d - y) * LEARNING_RATE * p[i].bias;
				}
			}
			pictureBox1->Refresh();
			for (int i = 0; i < Size; i++) {
				if (p[i].id == CLASS1)
					pen1 = gcnew Pen(Color::Purple, 3.0f);
				else if (p[i].id == CLASS2)
					pen1 = gcnew Pen(Color::Red, 3.0f);
				x1 = (int)(p[i].x1 + (pictureBox1->Width >> 1));
				x2 = (int)((pictureBox1->Height >> 1) - p[i].x2);

				pictureBox1->CreateGraphics()->DrawLine(pen1, x1 - 5, x2, x1 + 5, x2);
				pictureBox1->CreateGraphics()->DrawLine(pen1, x1, x2 - 5, x1, x2 + 5);

			}

			label1->Text = "w[0]: " + System::Convert::ToString(w[0]) + "  w[1]: " + System::Convert::ToString(w[1]) + "  w[2]: " + System::Convert::ToString(w[2]) + " iterations: " + System::Convert::ToString(iterations);
			min_x = (this->pictureBox1->Width) / -2;
			min_y = YPoint(min_x, w);
			max_x = (this->pictureBox1->Width) / 2;
			max_y = YPoint(max_x, w);
			pictureBox1->CreateGraphics()->DrawLine(pen, (pictureBox1->Width / 2) + min_x, (pictureBox1->Height / 2) - min_y, (pictureBox1->Width / 2) + max_x, (pictureBox1->Height / 2) - max_y);
			iterations += 1;


		}
	}






	private: System::Void deltaToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

		//normalize 
		double norm;
		for (int i = 0; i < Size; i++)
		{
			norm = p[i].x1 * p[i].x1 + p[i].x2 * p[i].x2 + p[i].bias * p[i].bias;
			norm = sqrt(norm);
			p[i].x1 /= norm;
			p[i].x2 /= norm;
			p[i].bias /= norm;
		}
		//picturebox normalize(-1,1)
		//---------------
		double totalError = 1;
		double Emax = 0.001;
		int cycle = 0;
		double net, o, t_net, error;
		Pen^ pen = gcnew Pen(Color::Yellow, 3.0f);
		Pen^ pen2;
		int min_x, max_x, min_y, max_y, x1, x2,d;
		while (totalError > Emax)
		{
			totalError = 0;
			for (int i = 0; i < Size; i++)
			{
				if (p[i].id == CLASS1) d = 1;
				else d = -1;

				net = (p[i].x1 * w[0]) + (p[i].x2 * w[1]) + (p[i].bias * w[2]);
				o = (2 / (1 + exp(-net))) - 1;
				t_net = 0.5 * (1 - o * o);
				error = 0.5 * (d- o) * (d - o);

				w[0] = w[0] + LEARNING_RATE * (d - o) * t_net * p[i].x1;
				w[1] = w[1] + LEARNING_RATE * (d - o) * t_net * p[i].x2;
				w[2] = w[2] + LEARNING_RATE * (d - o) * t_net * p[i].bias;

				totalError += error;
			}

			pictureBox1->Refresh();
			for (int i = 0; i < Size; i++) {
				if (p[i].id == CLASS1)
					pen2 = gcnew Pen(Color::Purple, 3.0f);
				else if (p[i].id == CLASS2)
					pen2 = gcnew Pen(Color::Red, 3.0f);
				x1 = (int)(p[i].x1 * norm + (pictureBox1->Width >> 1));
				x2 = (int)((pictureBox1->Height >> 1) - p[i].x2 * norm);

				pictureBox1->CreateGraphics()->DrawLine(pen2, x1 - 5, x2, x1 + 5, x2);
				pictureBox1->CreateGraphics()->DrawLine(pen2, x1, x2 - 5, x1, x2 + 5);

			}

			label1->Text = "w[0]: " + System::Convert::ToString(w[0]) + " w[1]: " + System::Convert::ToString(w[1]) + " w[2]: " + System::Convert::ToString(w[2]) + "cycle: " + System::Convert::ToString(cycle);
			min_x = (this->pictureBox1->Width) / -2;
			min_y = YPoint(min_x, w, norm);
			max_x = (this->pictureBox1->Width) / 2;
			max_y = YPoint(max_x, w, norm);
			pictureBox1->CreateGraphics()->DrawLine(pen, (pictureBox1->Width / 2) + min_x, (pictureBox1->Height / 2) - min_y, (pictureBox1->Width / 2) + max_x, (pictureBox1->Height / 2) - max_y);


			cycle += 1;

		}

	}


	private: System::Void binaryToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

		Pen^ pen = gcnew Pen(Color::Red, 3.0f);
		int min_x, max_x, min_y, max_y;
		double totalerror = 1;
		
		int Dim = 2;
        int cycle = 0;
		double y;
		W = new double* [sinif];
		double* o = new double[sinif];
		double* sonuc = new double[sinif];


		srand(time(0));
		for (int i = 0; i < sinif; i++)
		{
			W[i] = new double[3];
			for (int j = 0; j < 3; j++)
			{
				W[i][j] = ((double)rand() / (RAND_MAX));
			}
		}
		
		
		while (totalerror > 0.1 )
		{
			totalerror = 0.0;
		
			for (int i = 0; i < Size; i++)
			{
				for (int j = 0; j < sinif; j++)
				{
					y = (p[i].x1 * W[j][0]) + (p[i].x2 * W[j][1]) + (1.0 * W[j][2]);
					if (j== p[i].id)
					{
						o[j] = 1;
					}
					else
					{
						o[j] = -1;
					}
					if (y >= 0)
					{
						y = 1;
					}
					else
					{
						y = -1;
					}
					sonuc[j] = y;
					

				}
				
				for (int k = 0; k < sinif; k++)
				{
					if (o[k] != sonuc[k]) {
						W[k][0] = W[k][0] + LEARNING_RATE * (o[k] - sonuc[k]) * p[i].x1;
						W[k][1] = W[k][1] + LEARNING_RATE * (o[k] - sonuc[k]) * p[i].x2;
						W[k][2] = W[k][2] + LEARNING_RATE * (o[k] - sonuc[k]) * 1.0;
						totalerror += (pow(o[k] - sonuc[k], 2));
					}
				}

				
				label2->Text = "cycle: " + System::Convert::ToString(cycle);
				cycle += 1;
			}
		}
		for (int i = 0; i < sinif; i++)
		{
			min_x = (this->pictureBox1->Width) / -2;
			min_y = YPointY(min_x, W, i);
			max_x = (this->pictureBox1->Width) / 2;
			max_y = YPointY(max_x, W, i);
			
			if (i == 0)
				pen = gcnew Pen(Color::Purple, 3.0f);
			else if (i == 1)
				pen = gcnew Pen(Color::Red, 3.0f);
			else if (i == 2)
				pen = gcnew Pen(Color::Orange, 3.0f);
			else if (i == 3)
				pen = gcnew Pen(Color::DarkOliveGreen, 3.0f);
			else if (i == 4)
				pen = gcnew Pen(Color::BlueViolet, 3.0f);

			
			pictureBox1->CreateGraphics()->DrawLine(pen, (pictureBox1->Width / 2) + min_x, (pictureBox1->Height / 2) - min_y, (pictureBox1->Width / 2) + max_x, (pictureBox1->Height / 2) - max_y);
		}
		
		
	


	}


	private: System::Void checkBox3_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {

	}

	private: System::Void continiousToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
		Pen^ pen = gcnew Pen(Color::Red, 3.0f);
		int min_x, max_x, min_y, max_y;
		double totalerror = 1;

		int Dim = 2;
		int cycle = 0;
		double y;
		W = new double* [sinif];
		double* o = new double[sinif];
		double* sonuc = new double[sinif];
		double* d_sonuc = new double[sinif];
		double norm;
		for (int i = 0; i < Size; i++)
		{
			norm = p[i].x1 * p[i].x1 + p[i].x2 * p[i].x2 + p[i].bias * p[i].bias;
			norm = sqrt(norm);
			p[i].x1 /= norm;
			p[i].x2 /= norm;
			p[i].bias /= norm;
		}



		for (int i = 0; i < sinif; i++)
		{
			W[i] = new double[3];
		}
		srand(time(0));
		for (int i = 0; i < sinif; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				W[i][j] = ((double)rand() / (RAND_MAX));
			}
		}
		
		while (totalerror > 0.1)
		{
			totalerror = 0.0;

			
			for (int i = 0; i < Size; i++)
			{
				for (int j = 0; j < sinif; j++)
				{
					y = (p[i].x1 * W[j][0]) + (p[i].x2 * W[j][1]) + (1.0 * W[j][2]);
					if (j == p[i].id)
					{
						o[j] = 1;
					}
					else
					{
						o[j] = -1;
					}
					y = tanh(y);
					sonuc[j] = y;
					d_sonuc[j] = (1 - y * y);


				}
				for (int k = 0; k < sinif; k++)
				{
					if (o[k] != sonuc[k]) {
						W[k][0] = W[k][0] + LEARNING_RATE * d_sonuc[k] * (o[k] - sonuc[k]) * p[i].x1;
						W[k][1] = W[k][1] + LEARNING_RATE * d_sonuc[k] * (o[k] - sonuc[k]) * p[i].x2;
						W[k][2] = W[k][2] + LEARNING_RATE * d_sonuc[k] * (o[k] - sonuc[k]) * 1.0;
						totalerror += (pow(o[k] - sonuc[k], 2));
					}
				}
				//totalerror = totalerror / (double)Size;

				
				label2->Text = "cycle: " + System::Convert::ToString(cycle);
				cycle += 1;
			}
		}
		for (int i = 0; i < sinif; i++)
		{
			
			min_x = (this->pictureBox1->Width) / -2;
			min_y = YPointY(min_x, W, i,norm);
			max_x = (this->pictureBox1->Width) / 2;
			max_y = YPointY(max_x, W, i,norm);

			if (i == 0)
				pen = gcnew Pen(Color::Purple, 3.0f);
			else if (i == 1)
				pen = gcnew Pen(Color::Red, 3.0f);
			else if (i == 2)
				pen = gcnew Pen(Color::Orange, 3.0f);
			else if (i == 3)
				pen = gcnew Pen(Color::DarkOliveGreen, 3.0f);
			else if (i == 4)
				pen = gcnew Pen(Color::BlueViolet, 3.0f);

			pictureBox1->CreateGraphics()->DrawLine(pen, (pictureBox1->Width / 2) + min_x, (pictureBox1->Height / 2) - min_y, (pictureBox1->Width / 2) + max_x, (pictureBox1->Height / 2) - max_y);
		}












	}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	sinif = Convert::ToInt32(comboBox1->SelectedItem);

}
};

}
#pragma once
#include <iostream>
#include <fstream>

namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;


	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
		}


	protected:
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
		String^ Filter = "Teksto failai (*.txt)|*.txt|Visi failai (*.*)|*.*";
		System::Windows::Forms::MenuStrip^ menuStrip1;
		System::Windows::Forms::ToolStripMenuItem^ ToolStrip_FileManager;

		System::Windows::Forms::ToolStripMenuItem^ ToolStrip_OpenFile;
		System::Windows::Forms::ToolStripMenuItem^ ToolStrip_SaveAs;
		System::Windows::Forms::ToolStripMenuItem^ ToolStrip_Close;
		System::Windows::Forms::ToolStripMenuItem^ ToolStrip_Help;
		System::Windows::Forms::ToolStripMenuItem^ ToolStrip_About;

		System::Windows::Forms::Label^ label1;
		System::Windows::Forms::TextBox^ Name_Input;
		System::Windows::Forms::TextBox^ Grades_Input;

		System::Windows::Forms::Label^ label2;
		System::Windows::Forms::Label^ label3;
		System::Windows::Forms::Button^ Enter_Btn;
		System::Windows::Forms::Button^ Refresh_Btn;


		System::Windows::Forms::Label^ label4;
		System::Windows::Forms::Label^ label5;
		System::Windows::Forms::ListBox^ listBox1;
		System::Windows::Forms::RadioButton^ radioButton1;
		System::Windows::Forms::RadioButton^ radioButton2;
		System::Windows::Forms::Button^ button3;
		System::Windows::Forms::Button^ button4;
		System::Windows::Forms::Label^ label6;
		System::Windows::Forms::TextBox^ OutputTextBox;

		System::Windows::Forms::Button^ button5;
		System::Windows::Forms::Button^ button6;
		System::Windows::Forms::Button^ button7;
		System::Windows::Forms::Button^ button8;
		System::Windows::Forms::TextBox^ ExamScore_Input;

		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->ToolStrip_FileManager = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ToolStrip_OpenFile = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ToolStrip_SaveAs = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ToolStrip_Close = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ToolStrip_Help = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ToolStrip_About = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Name_Input = (gcnew System::Windows::Forms::TextBox());
			this->Grades_Input = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->Enter_Btn = (gcnew System::Windows::Forms::Button());
			this->Refresh_Btn = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->OutputTextBox = (gcnew System::Windows::Forms::TextBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->ExamScore_Input = (gcnew System::Windows::Forms::TextBox());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->ToolStrip_FileManager,
					this->ToolStrip_Help, this->ToolStrip_About
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(640, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// ToolStrip_FileManager
			// 
			this->ToolStrip_FileManager->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->ToolStrip_OpenFile,
					this->ToolStrip_SaveAs, this->ToolStrip_Close
			});
			this->ToolStrip_FileManager->Name = L"ToolStrip_FileManager";
			this->ToolStrip_FileManager->Size = System::Drawing::Size(48, 20);
			this->ToolStrip_FileManager->Text = L"Failas";
			// 
			// ToolStrip_OpenFile
			// 
			this->ToolStrip_OpenFile->Name = L"ToolStrip_OpenFile";
			this->ToolStrip_OpenFile->Size = System::Drawing::Size(146, 22);
			this->ToolStrip_OpenFile->Text = L"Atidaryti";
			this->ToolStrip_OpenFile->Click += gcnew System::EventHandler(this, &Form1::ToolStrip_OpenFile_Click);
			// 
			// ToolStrip_SaveAs
			// 
			this->ToolStrip_SaveAs->Name = L"ToolStrip_SaveAs";
			this->ToolStrip_SaveAs->Size = System::Drawing::Size(146, 22);
			this->ToolStrip_SaveAs->Text = L"Išsaugoti kaip";
			this->ToolStrip_SaveAs->Click += gcnew System::EventHandler(this, &Form1::ToolStrip_SaveAs_Click);
			// 
			// ToolStrip_Close
			// 
			this->ToolStrip_Close->Name = L"ToolStrip_Close";
			this->ToolStrip_Close->Size = System::Drawing::Size(146, 22);
			this->ToolStrip_Close->Text = L"Uždaryti";
			this->ToolStrip_Close->Click += gcnew System::EventHandler(this, &Form1::ToolStrip_Close_Click);
			// 
			// ToolStrip_Help
			// 
			this->ToolStrip_Help->Name = L"ToolStrip_Help";
			this->ToolStrip_Help->Size = System::Drawing::Size(61, 20);
			this->ToolStrip_Help->Text = L"Pagalba";
			// 
			// ToolStrip_About
			// 
			this->ToolStrip_About->Name = L"ToolStrip_About";
			this->ToolStrip_About->Size = System::Drawing::Size(43, 20);
			this->ToolStrip_About->Text = L"Apie";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(13, 28);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(83, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Vardas Pavardė";
			// 
			// Name_Input
			// 
			this->Name_Input->Location = System::Drawing::Point(13, 45);
			this->Name_Input->Name = L"Name_Input";
			this->Name_Input->Size = System::Drawing::Size(289, 20);
			this->Name_Input->TabIndex = 2;
			// 
			// Grades_Input
			// 
			this->Grades_Input->Location = System::Drawing::Point(308, 45);
			this->Grades_Input->Name = L"Grades_Input";
			this->Grades_Input->Size = System::Drawing::Size(236, 20);
			this->Grades_Input->TabIndex = 3;
			this->Grades_Input->TextChanged += gcnew System::EventHandler(this, &Form1::textBox2_TextChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(308, 28);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(48, 13);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Pažymiai";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(548, 28);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(81, 13);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Egzamino balas";
			// 
			// Enter_Btn
			// 
			this->Enter_Btn->Location = System::Drawing::Point(13, 72);
			this->Enter_Btn->Name = L"Enter_Btn";
			this->Enter_Btn->Size = System::Drawing::Size(140, 30);
			this->Enter_Btn->TabIndex = 7;
			this->Enter_Btn->Text = L"Įvesti";
			this->Enter_Btn->UseVisualStyleBackColor = true;
			this->Enter_Btn->Click += gcnew System::EventHandler(this, &Form1::Enter_Btn_Click);
			// 
			// Refresh_Btn
			// 
			this->Refresh_Btn->Location = System::Drawing::Point(162, 72);
			this->Refresh_Btn->Name = L"Refresh_Btn";
			this->Refresh_Btn->Size = System::Drawing::Size(140, 30);
			this->Refresh_Btn->TabIndex = 8;
			this->Refresh_Btn->Text = L"Atnaujinti";
			this->Refresh_Btn->UseVisualStyleBackColor = true;
			this->Refresh_Btn->Click += gcnew System::EventHandler(this, &Form1::Refresh_Btn_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::SystemColors::Control;
			this->label4->Location = System::Drawing::Point(308, 72);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(160, 13);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Pažymiai įvedami atsiriant tarpais";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(13, 122);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(134, 13);
			this->label5->TabIndex = 10;
			this->label5->Text = L"Esami studentai ir rezultatai";
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Location = System::Drawing::Point(13, 138);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(615, 134);
			this->listBox1->TabIndex = 11;
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Checked = true;
			this->radioButton1->Location = System::Drawing::Point(494, 115);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(62, 17);
			this->radioButton1->TabIndex = 12;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Vidurkis";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton1_CheckedChanged);
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(562, 115);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(66, 17);
			this->radioButton2->TabIndex = 13;
			this->radioButton2->Text = L"Mediana";
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton2_CheckedChanged);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(13, 279);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(292, 35);
			this->button3->TabIndex = 14;
			this->button3->Text = L"Kopijuoti visus";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(311, 279);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(317, 35);
			this->button4->TabIndex = 15;
			this->button4->Text = L"Kopijuoti pažymėtą";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(16, 373);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(51, 13);
			this->label6->TabIndex = 16;
			this->label6->Text = L"Pastabos";
			// 
			// OutputTextBox
			// 
			this->OutputTextBox->Location = System::Drawing::Point(19, 389);
			this->OutputTextBox->Multiline = true;
			this->OutputTextBox->Name = L"OutputTextBox";
			this->OutputTextBox->Size = System::Drawing::Size(609, 226);
			this->OutputTextBox->TabIndex = 17;
			this->OutputTextBox->TextChanged += gcnew System::EventHandler(this, &Form1::textBox4_TextChanged);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(19, 622);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(128, 23);
			this->button5->TabIndex = 18;
			this->button5->Text = L"Atidaryti";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(153, 622);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(128, 23);
			this->button6->TabIndex = 19;
			this->button6->Text = L"Išsaugoti kaip";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Form1::button6_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(287, 622);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(128, 23);
			this->button7->TabIndex = 20;
			this->button7->Text = L"Spausdinti";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &Form1::button7_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(531, 622);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(97, 23);
			this->button8->TabIndex = 21;
			this->button8->Text = L"Valyti";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &Form1::button8_Click);
			// 
			// ExamScore_Input
			// 
			this->ExamScore_Input->Location = System::Drawing::Point(551, 45);
			this->ExamScore_Input->Name = L"ExamScore_Input";
			this->ExamScore_Input->Size = System::Drawing::Size(77, 20);
			this->ExamScore_Input->TabIndex = 24;
			this->ExamScore_Input->TextChanged += gcnew System::EventHandler(this, &Form1::textBox5_TextChanged);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(640, 650);
			this->Controls->Add(this->ExamScore_Input);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->OutputTextBox);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->radioButton2);
			this->Controls->Add(this->radioButton1);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->Refresh_Btn);
			this->Controls->Add(this->Enter_Btn);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->Grades_Input);
			this->Controls->Add(this->Name_Input);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private:
		System::Void Enter_Btn_Click(System::Object^ sender, System::EventArgs^ e) {
			try {
				if (OutputTextBox->Text->Length <= 0 || Grades_Input->Text->Length <= 0 || ExamScore_Input->Text->Length <= 0) {
					throw gcnew System::Exception("Laukeliai yra tušti! Įveskite reikšmes į visus laukelius!");
				}
				String^ studentInfo = Name_Input->Text + " " + Grades_Input->Text + " Egzamino balas: " + ExamScore_Input->Text + " Vidurkis: ";
				listBox1->Items->Add(studentInfo);
				Name_Input->Clear();
				Grades_Input->Clear();
				ExamScore_Input->Clear();
			}
			catch (System::Exception^ ex) {
				MessageBox::Show(ex->Message, "KLAIDA!", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}

		System::Void ToolStrip_SaveAs_Click(System::Object^ sender, System::EventArgs^ e) {
			SaveFileDialog^ saveFileDialog1 = gcnew SaveFileDialog();

			saveFileDialog1->Filter = this->Filter;
			saveFileDialog1->RestoreDirectory = true;

			if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
			{
				return; // To be done
			}
		}

		System::Void ToolStrip_OpenFile_Click(System::Object^ sender, System::EventArgs^ e) {
			OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog();

			openFileDialog1->Filter = this->Filter;
			openFileDialog1->RestoreDirectory = true;

			if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
			{
				return; // To be done
			}
		}

		System::Void ToolStrip_Close_Click(System::Object^ sender, System::EventArgs^ e) {
			this->Close();
		}

		System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
			OutputTextBox->Clear();
			for (int i = 0; i < listBox1->Items->Count; i++) {
				OutputTextBox->Text += listBox1->Items[i]->ToString() + "\r\n";
			}
		}

		System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
			if (listBox1->SelectedIndex == -1) {
				MessageBox::Show("Nepasirinktas joks studentas!", "KLAIDA!", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}
			OutputTextBox->Text = listBox1->SelectedItem->ToString();
		}

		System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
			OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog();

			openFileDialog1->Filter = this->Filter;
			openFileDialog1->RestoreDirectory = true;

			if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {}
		}

		System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
			SaveFileDialog^ saveFileDialog1 = gcnew SaveFileDialog();

			saveFileDialog1->Filter = this->Filter;
			saveFileDialog1->RestoreDirectory = true;

			if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {}
		}

		System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
			MessageBox::Show("Funkcija dar nebaigta!", "Klaida", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}

		System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
			listBox1->Items->Clear();
			OutputTextBox->Clear();
		}

		System::Void radioButton1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {}
		System::Void radioButton2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {}
		System::Void textBox5_TextChanged(System::Object^ sender, System::EventArgs^ e) {}
		System::Void Refresh_Btn_Click(System::Object^ sender, System::EventArgs^ e) {}
		System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {}
		System::Void textBox4_TextChanged(System::Object^ sender, System::EventArgs^ e) {}
	};
}

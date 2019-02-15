#pragma once
#include <iostream>
#include <string>

namespace TesteForm {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Text::RegularExpressions;

	/// <summary>
	/// Sumário para MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Adicione o código do construtor aqui
			//
		}

	protected:
		/// <summary>
		/// Limpar os recursos que estão sendo usados.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;

	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::TextBox^  textBox6;

	private: System::Windows::Forms::ComboBox^  comboBox1;

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::Label^  label20;
	private: System::Windows::Forms::Label^  label21;
	private: System::Windows::Forms::Label^  label22;
	private: System::Windows::Forms::Label^  label23;
	private: System::Windows::Forms::Label^  label24;
	private: System::Windows::Forms::Label^  label25;
	private: System::Windows::Forms::Label^  label26;
	private: System::Windows::Forms::Label^  label27;
	private: System::Windows::Forms::Label^  label28;
	private: System::Windows::Forms::Label^  label29;
	private: System::Windows::Forms::Label^  label30;
	private: System::Windows::Forms::Label^  label31;
	private: System::Windows::Forms::Label^  label32;
	private: System::Windows::Forms::Label^  label33;
	private: System::Windows::Forms::Label^  label34;
	private: System::Windows::Forms::Label^  label35;
	private: System::Windows::Forms::Label^  label36;
	private: System::Windows::Forms::Label^  label37;
	private: System::Windows::Forms::Label^  label38;
	private: System::Windows::Forms::Label^  label39;
	private: System::Windows::Forms::Label^  label40;
	private: System::Windows::Forms::Label^  label41;
	private: System::Windows::Forms::Label^  label42;
	private: System::Windows::Forms::Label^  label43;
	private: System::Windows::Forms::Label^  label44;
	private: System::Windows::Forms::Label^  label45;
	private: System::Windows::Forms::Label^  label46;
	private: System::Windows::Forms::Label^  label47;
	private: System::Windows::Forms::Label^  label48;
	private: System::Windows::Forms::Label^  label49;

	private: System::ComponentModel::IContainer^  components;
			 			 					  		   		   
	private:
		/// <summary>
		/// Variável de designer necessária.
		/// </summary>

		int erroBox1 = 0;
		int erroBox2 = 0;
		int erroBox3 = 0;
		int erroBox4 = 0;
		int erroBox5 = 0;
		int erroBox6 = 0;

        String ^ CAMPO_NAO_ZERO = L"valor não pode ser zero";
		String ^ ERRO_GERAL = L"Erro! Verifique os campos!";
		String ^ CAMPO_OBRIGATORIO = L"Campo obrigatório";
		String ^ FORMATO_MOEDA_1L = L"Campo deve ter formato de moeda Ex.: 0,00";
		String ^ FORMATO_MOEDA_2L = L"Campo deve ter\nformato de moeda Ex.: 0,00";
		String ^ CAMPO_NUMERICO = L"Campo deve ser um número";
		String ^ VAZIO = L"";
		String ^ numero_real = "^[0-9]+(,[0-9]+)*$";

#pragma region Windows Form Designer generated code
			 /// <summary>
			 /// Método necessário para suporte ao Designer - não modifique 
			 /// o conteúdo deste método com o editor de código.
			 /// </summary>
			 void InitializeComponent(void)
			 {
				 this->button1 = (gcnew System::Windows::Forms::Button());
				 this->button2 = (gcnew System::Windows::Forms::Button());
				 this->textBox1 = (gcnew System::Windows::Forms::TextBox());
				 this->textBox2 = (gcnew System::Windows::Forms::TextBox());
				 this->textBox3 = (gcnew System::Windows::Forms::TextBox());
				 this->textBox4 = (gcnew System::Windows::Forms::TextBox());
				 this->textBox5 = (gcnew System::Windows::Forms::TextBox());
				 this->textBox6 = (gcnew System::Windows::Forms::TextBox());
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
				 this->label14 = (gcnew System::Windows::Forms::Label());
				 this->label15 = (gcnew System::Windows::Forms::Label());
				 this->label16 = (gcnew System::Windows::Forms::Label());
				 this->label17 = (gcnew System::Windows::Forms::Label());
				 this->label18 = (gcnew System::Windows::Forms::Label());
				 this->label19 = (gcnew System::Windows::Forms::Label());
				 this->label20 = (gcnew System::Windows::Forms::Label());
				 this->label21 = (gcnew System::Windows::Forms::Label());
				 this->label22 = (gcnew System::Windows::Forms::Label());
				 this->label23 = (gcnew System::Windows::Forms::Label());
				 this->label24 = (gcnew System::Windows::Forms::Label());
				 this->label25 = (gcnew System::Windows::Forms::Label());
				 this->label26 = (gcnew System::Windows::Forms::Label());
				 this->label27 = (gcnew System::Windows::Forms::Label());
				 this->label28 = (gcnew System::Windows::Forms::Label());
				 this->label29 = (gcnew System::Windows::Forms::Label());
				 this->label30 = (gcnew System::Windows::Forms::Label());
				 this->label31 = (gcnew System::Windows::Forms::Label());
				 this->label32 = (gcnew System::Windows::Forms::Label());
				 this->label33 = (gcnew System::Windows::Forms::Label());
				 this->label34 = (gcnew System::Windows::Forms::Label());
				 this->label35 = (gcnew System::Windows::Forms::Label());
				 this->label36 = (gcnew System::Windows::Forms::Label());
				 this->label37 = (gcnew System::Windows::Forms::Label());
				 this->label38 = (gcnew System::Windows::Forms::Label());
				 this->label39 = (gcnew System::Windows::Forms::Label());
				 this->label40 = (gcnew System::Windows::Forms::Label());
				 this->label41 = (gcnew System::Windows::Forms::Label());
				 this->label42 = (gcnew System::Windows::Forms::Label());
				 this->label43 = (gcnew System::Windows::Forms::Label());
				 this->label44 = (gcnew System::Windows::Forms::Label());
				 this->label45 = (gcnew System::Windows::Forms::Label());
				 this->label46 = (gcnew System::Windows::Forms::Label());
				 this->label47 = (gcnew System::Windows::Forms::Label());
				 this->label48 = (gcnew System::Windows::Forms::Label());
				 this->label49 = (gcnew System::Windows::Forms::Label());
				 this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
				 this->SuspendLayout();
				 // 
				 // button1
				 // 
				 this->button1->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(0)));
				 this->button1->Location = System::Drawing::Point(395, 751);
				 this->button1->Name = L"button1";
				 this->button1->Size = System::Drawing::Size(109, 40);
				 this->button1->TabIndex = 1;
				 this->button1->Text = L"Calcular";
				 this->button1->UseVisualStyleBackColor = true;
				 this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
				 // 
				 // button2
				 // 
				 this->button2->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(0)));
				 this->button2->Location = System::Drawing::Point(519, 751);
				 this->button2->Name = L"button2";
				 this->button2->Size = System::Drawing::Size(133, 39);
				 this->button2->TabIndex = 37;
				 this->button2->Text = L"Limpar campos";
				 this->button2->UseVisualStyleBackColor = true;
				 this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
				 // 
				 // textBox1
				 // 
				 this->textBox1->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(0)));
				 this->textBox1->Location = System::Drawing::Point(383, 55);
				 this->textBox1->Name = L"textBox1";
				 this->textBox1->Size = System::Drawing::Size(100, 27);
				 this->textBox1->TabIndex = 3;
				 this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
				 // 
				 // textBox2
				 // 
				 this->textBox2->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(0)));
				 this->textBox2->Location = System::Drawing::Point(383, 111);
				 this->textBox2->Name = L"textBox2";
				 this->textBox2->Size = System::Drawing::Size(100, 27);
				 this->textBox2->TabIndex = 5;
				 this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
				 // 
				 // textBox3
				 // 
				 this->textBox3->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(0)));
				 this->textBox3->Location = System::Drawing::Point(383, 199);
				 this->textBox3->Name = L"textBox3";
				 this->textBox3->Size = System::Drawing::Size(100, 27);
				 this->textBox3->TabIndex = 7;
				 this->textBox3->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox3_TextChanged);
				 // 
				 // textBox4
				 // 
				 this->textBox4->BackColor = System::Drawing::SystemColors::Window;
				 this->textBox4->Enabled = true;
				 this->textBox4->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(0)));
				 this->textBox4->Location = System::Drawing::Point(379, 366);
				 this->textBox4->Name = L"textBox4";
				 this->textBox4->Size = System::Drawing::Size(100, 27);
				 this->textBox4->TabIndex = 9;
				 this->textBox4->Text = L"";
				 this->textBox4->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox4_TextChanged);
				 // 
				 // textBox5
				 // 
				 this->textBox5->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(0)));
				 this->textBox5->Location = System::Drawing::Point(379, 462);
				 this->textBox5->Name = L"textBox5";
				 this->textBox5->Size = System::Drawing::Size(100, 27);
				 this->textBox5->TabIndex = 11;
				 this->textBox5->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox5_TextChanged);
				 // 
				 // textBox6
				 // 
				 this->textBox6->BackColor = System::Drawing::SystemColors::ScrollBar;
				 this->textBox6->Enabled = false;
				 this->textBox6->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(0)));
				 this->textBox6->Location = System::Drawing::Point(562, 364);
				 this->textBox6->Name = L"textBox6";
				 this->textBox6->Size = System::Drawing::Size(100, 27);
				 this->textBox6->TabIndex = 34;
				 this->textBox6->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox6_TextChanged);
				 // 
				 // label1
				 // 
				 this->label1->AutoSize = true;
				 this->label1->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(0)));
				 this->label1->Location = System::Drawing::Point(30, 63);
				 this->label1->Name = L"label1";
				 this->label1->Size = System::Drawing::Size(248, 19);
				 this->label1->TabIndex = 2;
				 this->label1->Text = L"- Valor da moeda em relação ao Real";
				 // 
				 // label2
				 // 
				 this->label2->AutoSize = true;
				 this->label2->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(0)));
				 this->label2->Location = System::Drawing::Point(30, 119);
				 this->label2->Name = L"label2";
				 this->label2->Size = System::Drawing::Size(303, 19);
				 this->label2->TabIndex = 4;
				 this->label2->Text = L"- Quantidade, em Reais, que se quer comprar";
				 // 
				 // label3
				 // 
				 this->label3->AutoSize = true;
				 this->label3->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(0)));
				 this->label3->Location = System::Drawing::Point(30, 204);
				 this->label3->Name = L"label3";
				 this->label3->Size = System::Drawing::Size(191, 19);
				 this->label3->TabIndex = 6;
				 this->label3->Text = L"- Taxa de compra, se houver";
				 // 
				 // label4
				 // 
				 this->label4->AutoSize = true;
				 this->label4->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(0)));
				 this->label4->Location = System::Drawing::Point(30, 374);
				 this->label4->Name = L"label4";
				 this->label4->Size = System::Drawing::Size(127, 19);
				 this->label4->TabIndex = 8;
				 this->label4->Text = L"- Lucro pretendido";
				 // 
				 // label5
				 // 
				 this->label5->AutoSize = true;
				 this->label5->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(0)));
				 this->label5->Location = System::Drawing::Point(30, 470);
				 this->label5->Name = L"label5";
				 this->label5->Size = System::Drawing::Size(182, 19);
				 this->label5->TabIndex = 10;
				 this->label5->Text = L"- Taxa de venda, se houver";
				 // 
				 // label6
				 // 
				 this->label6->AutoSize = true;
				 this->label6->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(0)));
				 this->label6->ForeColor = System::Drawing::SystemColors::HotTrack;
				 this->label6->Location = System::Drawing::Point(30, 570);
				 this->label6->Name = L"label6";
				 this->label6->Size = System::Drawing::Size(288, 46);
				 this->label6->TabIndex = 12;
				 this->label6->Text = L"- Valor de venda para se ter o lucro \r\n   desejado";
				 // 
				 // label7
				 // 
				 this->label7->AutoSize = true;
				 this->label7->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(0)));
				 this->label7->ForeColor = System::Drawing::SystemColors::HotTrack;
				 this->label7->Location = System::Drawing::Point(30, 634);
				 this->label7->Name = L"label7";
				 this->label7->Size = System::Drawing::Size(299, 46);
				 this->label7->TabIndex = 13;
				 this->label7->Text = L"- Valor da moeda em relação ao Real \r\n   para se ter o lucro desejado";
				 // 
				 // label8
				 // 
				 this->label8->AutoSize = true;
				 this->label8->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(0)));
				 this->label8->ForeColor = System::Drawing::Color::Red;
				 this->label8->Location = System::Drawing::Point(401, 729);
				 this->label8->Name = L"label8";
				 this->label8->Size = System::Drawing::Size(53, 19);
				 this->label8->TabIndex = 64;
				 this->label8->Text = L"           ";
				 // 
				 // label9
				 // 
				 this->label9->AutoSize = true;
				 this->label9->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(0)));
				 this->label9->Location = System::Drawing::Point(30, 147);
				 this->label9->Name = L"label9";
				 this->label9->Size = System::Drawing::Size(266, 19);
				 this->label9->TabIndex = 20;
				 this->label9->Text = L"- Quantidade de moeda a ser comprada";
				 // 
				 // label10
				 // 
				 this->label10->AutoSize = true;
				 this->label10->BackColor = System::Drawing::SystemColors::ScrollBar;
				 this->label10->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(0)));
				 this->label10->ForeColor = System::Drawing::SystemColors::HotTrack;
				 this->label10->Location = System::Drawing::Point(377, 585);
				 this->label10->Name = L"label10";
				 this->label10->Size = System::Drawing::Size(98, 23);
				 this->label10->TabIndex = 17;
				 this->label10->Text = L"                      ";
				 // 
				 // label11
				 // 
				 this->label11->AutoSize = true;
				 this->label11->BackColor = System::Drawing::SystemColors::ScrollBar;
				 this->label11->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(0)));
				 this->label11->ForeColor = System::Drawing::SystemColors::HotTrack;
				 this->label11->Location = System::Drawing::Point(378, 649);
				 this->label11->Name = L"label11";
				 this->label11->Size = System::Drawing::Size(102, 23);
				 this->label11->TabIndex = 18;
				 this->label11->Text = L"                       ";
				 // 
				 // label12
				 // 
				 this->label12->AutoSize = true;
				 this->label12->BackColor = System::Drawing::SystemColors::ScrollBar;
				 this->label12->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(0)));
				 this->label12->Location = System::Drawing::Point(389, 148);
				 this->label12->Name = L"label12";
				 this->label12->Size = System::Drawing::Size(97, 19);
				 this->label12->TabIndex = 21;
				 this->label12->Text = L"                      ";
				 // 
				 // label13
				 // 
				 this->label13->AutoSize = true;
				 this->label13->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(0)));
				 this->label13->Location = System::Drawing::Point(348, 405);
				 this->label13->Name = L"label13";
				 this->label13->Size = System::Drawing::Size(26, 19);
				 this->label13->TabIndex = 38;
				 this->label13->Text = L"R$";
				 // 
				 // label14
				 // 
				 this->label14->AutoSize = true;
				 this->label14->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(0)));
				 this->label14->Location = System::Drawing::Point(536, 405);
				 this->label14->Name = L"label14";
				 this->label14->Size = System::Drawing::Size(20, 19);
				 this->label14->TabIndex = 39;
				 this->label14->Text = L"%";
				 // 
				 // label15
				 // 
				 this->label15->AutoSize = true;
				 this->label15->Font = (gcnew System::Drawing::Font(L"Calibri", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
					 System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
				 this->label15->Location = System::Drawing::Point(12, 20);
				 this->label15->Name = L"label15";
				 this->label15->Size = System::Drawing::Size(151, 19);
				 this->label15->TabIndex = 24;
				 this->label15->Text = L"COMPRA DA MOEDA";
				 // 
				 // label16
				 // 
				 this->label16->AutoSize = true;
				 this->label16->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(0)));
				 this->label16->Location = System::Drawing::Point(30, 234);
				 this->label16->Name = L"label16";
				 this->label16->Size = System::Drawing::Size(197, 19);
				 this->label16->TabIndex = 25;
				 this->label16->Text = L"- Será descontado na compra";
				 // 
				 // label17
				 // 
				 this->label17->AutoSize = true;
				 this->label17->BackColor = System::Drawing::SystemColors::ScrollBar;
				 this->label17->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(0)));
				 this->label17->Location = System::Drawing::Point(383, 234);
				 this->label17->Name = L"label17";
				 this->label17->Size = System::Drawing::Size(97, 19);
				 this->label17->TabIndex = 26;
				 this->label17->Text = L"                      ";
				 // 
				 // label18
				 // 
				 this->label18->AutoSize = true;
				 this->label18->BackColor = System::Drawing::SystemColors::ScrollBar;
				 this->label18->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(0)));
				 this->label18->Location = System::Drawing::Point(499, 202);
				 this->label18->Name = L"label18";
				 this->label18->Size = System::Drawing::Size(93, 19);
				 this->label18->TabIndex = 27;
				 this->label18->Text = L"                     ";
				 // 
				 // label19
				 // 
				 this->label19->AutoSize = true;
				 this->label19->Font = (gcnew System::Drawing::Font(L"Calibri", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
					 System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
				 this->label19->Location = System::Drawing::Point(12, 314);
				 this->label19->Name = L"label19";
				 this->label19->Size = System::Drawing::Size(138, 19);
				 this->label19->TabIndex = 28;
				 this->label19->Text = L"VENDA DA MOEDA";
				 // 
				 // label20
				 // 
				 this->label20->AutoSize = true;
				 this->label20->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(0)));
				 this->label20->Location = System::Drawing::Point(30, 502);
				 this->label20->Name = L"label20";
				 this->label20->Size = System::Drawing::Size(188, 19);
				 this->label20->TabIndex = 29;
				 this->label20->Text = L"- Será descontado na venda";
				 // 
				 // label21
				 // 
				 this->label21->AutoSize = true;
				 this->label21->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(0)));
				 this->label21->Location = System::Drawing::Point(497, 468);
				 this->label21->Name = L"label21";
				 this->label21->Size = System::Drawing::Size(93, 19);
				 this->label21->TabIndex = 30;
				 this->label21->Text = L"                     ";
				 // 
				 // label22
				 // 
				 this->label22->AutoSize = true;
				 this->label22->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(0)));
				 this->label22->Location = System::Drawing::Point(380, 498);
				 this->label22->Name = L"label22";
				 this->label22->Size = System::Drawing::Size(97, 19);
				 this->label22->TabIndex = 31;
				 this->label22->Text = L"                      ";
				 // 
				 // label23
				 // 
				 this->label23->AutoSize = true;
				 this->label23->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(0)));
				 this->label23->Location = System::Drawing::Point(343, 63);
				 this->label23->Name = L"label23";
				 this->label23->Size = System::Drawing::Size(34, 19);
				 this->label23->TabIndex = 40;
				 this->label23->Text = L": R$";
				 // 
				 // label24
				 // 
				 this->label24->AutoSize = true;
				 this->label24->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(0)));
				 this->label24->Location = System::Drawing::Point(530, 372);
				 this->label24->Name = L"label24";
				 this->label24->Size = System::Drawing::Size(26, 19);
				 this->label24->TabIndex = 33;
				 this->label24->Text = L"R$";
				 // 
				 // label25
				 // 
				 this->label25->AutoSize = true;
				 this->label25->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(0)));
				 this->label25->Location = System::Drawing::Point(380, 405);
				 this->label25->Name = L"label25";
				 this->label25->Size = System::Drawing::Size(93, 19);
				 this->label25->TabIndex = 35;
				 this->label25->Text = L"                     ";
				 // 
				 // label26
				 // 
				 this->label26->AutoSize = true;
				 this->label26->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(0)));
				 this->label26->Location = System::Drawing::Point(572, 405);
				 this->label26->Name = L"label26";
				 this->label26->Size = System::Drawing::Size(93, 19);
				 this->label26->TabIndex = 36;
				 this->label26->Text = L"                     ";
				 // 
				 // label27
				 // 
				 this->label27->AutoSize = true;
				 this->label27->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(0)));
				 this->label27->Location = System::Drawing::Point(346, 148);
				 this->label27->Name = L"label27";
				 this->label27->Size = System::Drawing::Size(17, 19);
				 this->label27->TabIndex = 41;
				 this->label27->Text = L": ";
				 // 
				 // label28
				 // 
				 this->label28->AutoSize = true;
				 this->label28->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(0)));
				 this->label28->ForeColor = System::Drawing::SystemColors::HotTrack;
				 this->label28->Location = System::Drawing::Point(340, 653);
				 this->label28->Name = L"label28";
				 this->label28->Size = System::Drawing::Size(40, 23);
				 this->label28->TabIndex = 42;
				 this->label28->Text = L": R$";
				 // 
				 // label29
				 // 
				 this->label29->AutoSize = true;
				 this->label29->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(0)));
				 this->label29->Location = System::Drawing::Point(344, 119);
				 this->label29->Name = L"label29";
				 this->label29->Size = System::Drawing::Size(34, 19);
				 this->label29->TabIndex = 43;
				 this->label29->Text = L": R$";
				 // 
				 // label30
				 // 
				 this->label30->AutoSize = true;
				 this->label30->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(0)));
				 this->label30->Location = System::Drawing::Point(346, 204);
				 this->label30->Name = L"label30";
				 this->label30->Size = System::Drawing::Size(28, 19);
				 this->label30->TabIndex = 44;
				 this->label30->Text = L": %";
				 // 
				 // label31
				 // 
				 this->label31->AutoSize = true;
				 this->label31->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(0)));
				 this->label31->Location = System::Drawing::Point(346, 234);
				 this->label31->Name = L"label31";
				 this->label31->Size = System::Drawing::Size(34, 19);
				 this->label31->TabIndex = 45;
				 this->label31->Text = L": R$";
				 // 
				 // label32
				 // 
				 this->label32->AutoSize = true;
				 this->label32->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(0)));
				 this->label32->Location = System::Drawing::Point(349, 372);
				 this->label32->Name = L"label32";
				 this->label32->Size = System::Drawing::Size(20, 19);
				 this->label32->TabIndex = 46;
				 this->label32->Text = L"%";
				 // 
				 // label33
				 // 
				 this->label33->AutoSize = true;
				 this->label33->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(0)));
				 this->label33->Location = System::Drawing::Point(341, 470);
				 this->label33->Name = L"label33";
				 this->label33->Size = System::Drawing::Size(28, 19);
				 this->label33->TabIndex = 47;
				 this->label33->Text = L": %";
				 // 
				 // label34
				 // 
				 this->label34->AutoSize = true;
				 this->label34->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(0)));
				 this->label34->ForeColor = System::Drawing::SystemColors::HotTrack;
				 this->label34->Location = System::Drawing::Point(341, 589);
				 this->label34->Name = L"label34";
				 this->label34->Size = System::Drawing::Size(40, 23);
				 this->label34->TabIndex = 48;
				 this->label34->Text = L": R$";
				 // 
				 // label35
				 // 
				 this->label35->AutoSize = true;
				 this->label35->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(0)));
				 this->label35->Location = System::Drawing::Point(342, 502);
				 this->label35->Name = L"label35";
				 this->label35->Size = System::Drawing::Size(34, 19);
				 this->label35->TabIndex = 49;
				 this->label35->Text = L": R$";
				 // 
				 // label36
				 // 
				 this->label36->AutoSize = true;
				 this->label36->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(0)));
				 this->label36->Location = System::Drawing::Point(30, 701);
				 this->label36->Name = L"label36";
				 this->label36->Size = System::Drawing::Size(92, 19);
				 this->label36->TabIndex = 50;
				 this->label36->Text = L"- Valorização";
				 // 
				 // label37
				 // 
				 this->label37->AutoSize = true;
				 this->label37->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(0)));
				 this->label37->Location = System::Drawing::Point(341, 701);
				 this->label37->Name = L"label37";
				 this->label37->Size = System::Drawing::Size(28, 19);
				 this->label37->TabIndex = 51;
				 this->label37->Text = L": %";
				 // 
				 // label38
				 // 
				 this->label38->AutoSize = true;
				 this->label38->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(0)));
				 this->label38->Location = System::Drawing::Point(379, 701);
				 this->label38->Name = L"label38";
				 this->label38->Size = System::Drawing::Size(101, 19);
				 this->label38->TabIndex = 52;
				 this->label38->Text = L"                       ";
				 // 
				 // label39
				 // 
				 this->label39->AutoSize = true;
				 this->label39->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(0)));
				 this->label39->ForeColor = System::Drawing::Color::Red;
				 this->label39->Location = System::Drawing::Point(489, 60);
				 this->label39->Name = L"label39";
				 this->label39->Size = System::Drawing::Size(19, 23);
				 this->label39->TabIndex = 53;
				 this->label39->Text = L"*";
				 // 
				 // label40
				 // 
				 this->label40->AutoSize = true;
				 this->label40->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(0)));
				 this->label40->ForeColor = System::Drawing::Color::Red;
				 this->label40->Location = System::Drawing::Point(490, 116);
				 this->label40->Name = L"label40";
				 this->label40->Size = System::Drawing::Size(19, 23);
				 this->label40->TabIndex = 54;
				 this->label40->Text = L"*";
				 // 
				 // label41
				 // 
				 this->label41->AutoSize = true;
				 this->label41->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(0)));
				 this->label41->ForeColor = System::Drawing::Color::Red;
				 this->label41->Location = System::Drawing::Point(40, 771);
				 this->label41->Name = L"label41";
				 this->label41->Size = System::Drawing::Size(139, 19);
				 this->label41->TabIndex = 55;
				 this->label41->Text = L"* campo obrigatório";
				 // 
				 // label42
				 // 
				 this->label42->AutoSize = true;
				 this->label42->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(0)));
				 this->label42->ForeColor = System::Drawing::Color::Red;
				 this->label42->Location = System::Drawing::Point(514, 63);
				 this->label42->Name = L"label42";
				 this->label42->Size = System::Drawing::Size(121, 19);
				 this->label42->TabIndex = 56;
				 this->label42->Text = L"                            ";
				 // 
				 // label43
				 // 
				 this->label43->AutoSize = true;
				 this->label43->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(0)));
				 this->label43->ForeColor = System::Drawing::Color::Red;
				 this->label43->Location = System::Drawing::Point(515, 119);
				 this->label43->Name = L"label43";
				 this->label43->Size = System::Drawing::Size(109, 19);
				 this->label43->TabIndex = 57;
				 this->label43->Text = L"                         ";
				 // 
				 // label44
				 // 
				 this->label44->AutoSize = true;
				 this->label44->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(0)));
				 this->label44->ForeColor = System::Drawing::Color::Red;
				 this->label44->Location = System::Drawing::Point(382, 31);
				 this->label44->Name = L"label44";
				 this->label44->Size = System::Drawing::Size(97, 19);
				 this->label44->TabIndex = 58;
				 this->label44->Text = L"                      ";
				 // 
				 // label45
				 // 
				 this->label45->AutoSize = true;
				 this->label45->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(0)));
				 this->label45->ForeColor = System::Drawing::Color::Red;
				 this->label45->Location = System::Drawing::Point(383, 89);
				 this->label45->Name = L"label45";
				 this->label45->Size = System::Drawing::Size(97, 19);
				 this->label45->TabIndex = 59;
				 this->label45->Text = L"                      ";
				 // 
				 // label46
				 // 
				 this->label46->AutoSize = true;
				 this->label46->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(0)));
				 this->label46->ForeColor = System::Drawing::Color::Red;
				 this->label46->Location = System::Drawing::Point(382, 174);
				 this->label46->Name = L"label46";
				 this->label46->Size = System::Drawing::Size(97, 19);
				 this->label46->TabIndex = 60;
				 this->label46->Text = L"                      ";
				 // 
				 // label47
				 // 
				 this->label47->AutoSize = true;
				 this->label47->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(0)));
				 this->label47->ForeColor = System::Drawing::Color::Red;
				 this->label47->Location = System::Drawing::Point(380, 344);
				 this->label47->Name = L"label47";
				 this->label47->Size = System::Drawing::Size(97, 19);
				 this->label47->TabIndex = 61;
				 this->label47->Text = L"                      ";
				 // 
				 // label48
				 // 
				 this->label48->AutoSize = true;
				 this->label48->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(0)));
				 this->label48->ForeColor = System::Drawing::Color::Red;
				 this->label48->Location = System::Drawing::Point(536, 314);
				 this->label48->Name = L"label48";
				 this->label48->Size = System::Drawing::Size(97, 19);
				 this->label48->TabIndex = 62;
				 this->label48->Text = L"                      ";
				 // 
				 // label49
				 // 
				 this->label49->AutoSize = true;
				 this->label49->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(0)));
				 this->label49->ForeColor = System::Drawing::Color::Red;
				 this->label49->Location = System::Drawing::Point(379, 425);
				 this->label49->Name = L"label49";
				 this->label49->Size = System::Drawing::Size(97, 19);
				 this->label49->TabIndex = 63;
				 this->label49->Text = L"                      ";
				 // 
				 // comboBox1
				 // 
				 this->comboBox1->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(0)));
				 this->comboBox1->FormattingEnabled = true;
				 this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"porcentagem (%)", L"Reais (R$)" });
				 this->comboBox1->Location = System::Drawing::Point(179, 366);
				 this->comboBox1->Name = L"comboBox1";
				 this->comboBox1->Size = System::Drawing::Size(150, 27);
				 this->comboBox1->TabIndex = 65;
				 this->comboBox1->SelectedIndex = 0;
				 this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_SelectedIndexChanged);
				 // 
				 // MyForm
				 // 
				 this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
				 this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
				 this->BackColor = System::Drawing::SystemColors::ScrollBar;
				 this->ClientSize = System::Drawing::Size(743, 801);
				 this->Controls->Add(this->button1);
				 this->Controls->Add(this->button2);
				 this->Controls->Add(this->textBox1);
				 this->Controls->Add(this->textBox2);
				 this->Controls->Add(this->textBox3);
				 this->Controls->Add(this->textBox4);
				 this->Controls->Add(this->textBox5);
				 this->Controls->Add(this->textBox6);
				 this->Controls->Add(this->label1);
				 this->Controls->Add(this->label2);
				 this->Controls->Add(this->label3);
				 this->Controls->Add(this->label4);
				 this->Controls->Add(this->label5);
				 this->Controls->Add(this->label6);
				 this->Controls->Add(this->label7);
				 this->Controls->Add(this->label8);
				 this->Controls->Add(this->label9);
				 this->Controls->Add(this->label10);
				 this->Controls->Add(this->label11);
				 this->Controls->Add(this->label12);
				 this->Controls->Add(this->label13);
				 this->Controls->Add(this->label14);
				 this->Controls->Add(this->label15);
				 this->Controls->Add(this->label16);
				 this->Controls->Add(this->label17);
				 this->Controls->Add(this->label18);
				 this->Controls->Add(this->label19);
				 this->Controls->Add(this->label20);
				 this->Controls->Add(this->label21);
				 this->Controls->Add(this->label22);
				 this->Controls->Add(this->label23);
				 this->Controls->Add(this->label24);
				 this->Controls->Add(this->label25);
				 this->Controls->Add(this->label26);
				 this->Controls->Add(this->label27);
				 this->Controls->Add(this->label28);
				 this->Controls->Add(this->label29);
				 this->Controls->Add(this->label30);
				 this->Controls->Add(this->label31);
				 this->Controls->Add(this->label32);
				 this->Controls->Add(this->label33);
				 this->Controls->Add(this->label34);
				 this->Controls->Add(this->label35);
				 this->Controls->Add(this->label36);
				 this->Controls->Add(this->label37);
				 this->Controls->Add(this->label38);
				 this->Controls->Add(this->label39);
				 this->Controls->Add(this->label40);
				 this->Controls->Add(this->label41);
				 this->Controls->Add(this->label42);
				 this->Controls->Add(this->label43);
				 this->Controls->Add(this->label44);
				 this->Controls->Add(this->label45);
				 this->Controls->Add(this->label46);
				 this->Controls->Add(this->label47);
				 this->Controls->Add(this->label48);
				 this->Controls->Add(this->label49);
				 this->Controls->Add(this->comboBox1);
				 this->Name = L"MyForm";
				 this->ShowIcon = false;
				 this->Text = L"Compra e Venda de Moeda Virtual";
				 this->ResumeLayout(false);
				 this->PerformLayout();

			 }

#pragma endregion

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		double L, TC, M, TV, MR, LR, LM = 0;
		double valorVenda = 0;
		double valorizacao = 0;

		if (!String::IsNullOrEmpty(this->textBox1->Text)){
			if (erroBox1 == 0) {
				MR = Convert::ToDouble(this->textBox1->Text);
			}
		}
		else {
			erroBox1 = 1;
			label42->Text = CAMPO_OBRIGATORIO;
		}

		if (!String::IsNullOrEmpty(this->textBox2->Text)){
			if (erroBox2 == 0) {
				M = Convert::ToDouble(this->textBox2->Text);
				valorVenda = M;
			}
		}
		else {
			erroBox2 = 1;
			label43->Text = CAMPO_OBRIGATORIO;
		}

		if (!String::IsNullOrEmpty(this->textBox3->Text)&&(erroBox3 == 0)){
			TC = Convert::ToDouble(this->textBox3->Text);
		}

		if (!String::IsNullOrEmpty(this->textBox5->Text)&&(erroBox5 == 0)){
			TV = Convert::ToDouble(this->textBox5->Text);
		}

		if (!String::IsNullOrEmpty(this->textBox4->Text)&&(erroBox4 == 0)){
			L = Convert::ToDouble(this->textBox4->Text);
			valorVenda = ((100 + L + TC)*M) / (100 - TV);
		}
		
		if (!String::IsNullOrEmpty(this->textBox6->Text)&&(erroBox6 == 0)){
			LR = Convert::ToDouble(this->textBox6->Text);
			LM = (LR / M) * 100;
			valorVenda = ((100 + LM + TC)*M) / (100 - TV);
		}

		if((erroBox1==0)&&(erroBox2 == 0)&&(erroBox3 == 0)&&
			(erroBox4 == 0)&&(erroBox5 == 0)&&(erroBox6 == 0)){
			label8->Text = L"";
			label10->Text = System::String::Format("{0,12:N2}", valorVenda);
			label22->Text = System::String::Format("{0,12:N2}",(TV / 100)*valorVenda);
			label11->Text = System::String::Format("{0,12:N2}",valorVenda / (M / MR));
			valorizacao = ((((valorVenda / (M / MR)) - MR) * 100) / MR);
			label38->Text = System::String::Format("{0,12:N5}",valorizacao);
		}
		else { 
			label8->Text = ERRO_GERAL;
		}
	}

	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {

			//limpa variaveis globais
			erroBox1 = 0;
			erroBox2 = 0;
			erroBox3 = 0;
			erroBox4 = 0;
			erroBox5 = 0;
			erroBox6 = 0;

			//limpa labels
			this->label8->Text = L"                      ";
			this->label10->Text = L"                      ";
			this->label11->Text = L"                      ";
			this->label12->Text = L"                      ";
			this->label17->Text = L"                      ";
			this->label18->Text = L"                      ";
			this->label21->Text = L"                      ";
			this->label22->Text = L"                      ";
			this->label25->Text = L"                      ";
			this->label26->Text = L"                      ";	
			this->label38->Text = L"                      ";
			this->label42->Text = L"                      ";
			this->label43->Text = L"                      ";
			this->label44->Text = L"                      ";
			this->label45->Text = L"                      ";
			this->label46->Text = L"                      ";
			this->label47->Text = L"                      ";
			this->label48->Text = L"                      ";
			this->label49->Text = L"                      ";

			// limpa textBox
			this->textBox1->Text = L"";
			this->textBox2->Text = L"";
			this->textBox3->Text = L"";
			this->textBox4->Text = L"";
			this->textBox5->Text = L"";
			this->textBox6->Text = L"";
		}

	private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		double moedaR = 0;
		double montanteR = 0;

		erroBox1 = 0;
		label42->Text = L"";
		limpaResultados();

		if (!String::IsNullOrEmpty(this->textBox1->Text)) { // checa se vazio
			if (Regex::IsMatch(this->textBox1->Text, numero_real)){ //checa se numero real
				label44->Text = L"";
				label8->Text = L"";
				moedaR = Convert::ToDouble(this->textBox1->Text);
				if (moedaR == 0) {
					label44->Text = CAMPO_NAO_ZERO;
					erroBox1 = 1;
				}
				else {
					if (!String::IsNullOrEmpty(this->textBox2->Text)&&
						(erroBox2 == 0)){
						montanteR = Convert::ToDouble(this->textBox2->Text);
						label12->Text = System::String::Format("{0,12:N5}", montanteR / moedaR);
					}
				}
			}
			else { 
				label44->Text = FORMATO_MOEDA_1L;
				erroBox1 = 1;
			}
		}
		else {
			label12->Text = L"";
			label44->Text = L"";
			limpaResultados();
			erroBox1 = 1;
		}
	}
	private: System::Void textBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		double moedaR = 0;
		double montanteR = 0;
		double lucro = 0;
		double lucroR = 0;
		double taxaC = 0;

		erroBox2 = 0;
		label43->Text = L"";
		limpaResultados();

		if (!String::IsNullOrEmpty(this->textBox2->Text)) {
			if (Regex::IsMatch(this->textBox2->Text, numero_real)) {
				label45->Text = L"";
				label8->Text = L"";
				montanteR = Convert::ToDouble(this->textBox2->Text);
				if (montanteR == 0) {
					label45->Text = CAMPO_NAO_ZERO;
					erroBox2 = 1;
				}
				else {
					if (!String::IsNullOrEmpty(this->textBox6->Text)&&
						(erroBox6 == 0)) {
						lucroR = Convert::ToDouble(this->textBox6->Text);
						label26->Text = System::String::Format("{0,12:N5}", (lucroR / montanteR) * 100);
					}
				}
				if (!String::IsNullOrEmpty(this->textBox1->Text) && 
					(erroBox1 == 0)){
					moedaR = Convert::ToDouble(this->textBox1->Text);
					label12->Text = System::String::Format("{0,12:N5}", montanteR / moedaR);
				}
				else { label12->Text = L"";	}
				if (!String::IsNullOrEmpty(this->textBox3->Text)&&
					(erroBox3 == 0)) {
					taxaC = Convert::ToDouble(this->textBox3->Text);
					label17->Text = System::String::Format("{0,12:N2}", (taxaC / 100)*montanteR);
				}
				if (!String::IsNullOrEmpty(this->textBox4->Text)&&
					(erroBox4 == 0)) {
					lucro = Convert::ToDouble(this->textBox4->Text);
					label25->Text = System::String::Format("{0,12:N2}", (lucro / 100)*montanteR);
				}
			}
			else { 
				label45->Text = FORMATO_MOEDA_1L; 
				erroBox2 = 1;
			}
		}
		else {
			label12->Text = L"";
			label17->Text = L"";
			label25->Text = L"";
			label26->Text = L"";
			label45->Text = L"";
			limpaResultados();
			erroBox2 = 1;
		}
	}

	private: System::Void textBox3_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		double taxaC = 0;
		double montanteR = 0;

		erroBox3 = 0;
		limpaResultados();

		if (!String::IsNullOrEmpty(this->textBox3->Text)) {
			if (Regex::IsMatch(this->textBox3->Text, numero_real)) {
				label43->Text = L"";
				label46->Text = L"";
				taxaC = Convert::ToDouble(this->textBox3->Text);
				label18->Text = Convert::ToString(taxaC / 100);
				if (!String::IsNullOrEmpty(this->textBox2->Text) &&
					(erroBox2 == 0)) {
					montanteR = Convert::ToDouble(this->textBox2->Text);
					label17->Text = System::String::Format("{0,12:N2}", (taxaC / 100)*montanteR);
				}
			}
			else { 
				label46->Text = CAMPO_NUMERICO;
				erroBox3 = 1;
			}
		}
		else {
			label18->Text = L"";
			label17->Text = L"";
			label46->Text = L"";
			limpaResultados();
		}
	}
	private: System::Void textBox4_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		double lucro = 0;
		double montanteR = 0;

		erroBox4 = 0;
		limpaResultados();

		if (!String::IsNullOrEmpty(this->textBox4->Text)) {
			if (Regex::IsMatch(this->textBox4->Text, numero_real)) {
				label47->Text = L"";
				lucro = Convert::ToDouble(this->textBox4->Text);
				if (!String::IsNullOrEmpty(this->textBox2->Text) &&
					(erroBox2 == 0)) {
					montanteR = Convert::ToDouble(this->textBox2->Text);
					label25->Text = System::String::Format("{0,12:N2}", (lucro / 100)*montanteR);
				}
			}
			else { 
				label47->Text = CAMPO_NUMERICO;
				erroBox4 = 1;
			}
		}
		else {
			label25->Text = L"";
			label47->Text = L"";
			limpaResultados();
		}
	}
	private: System::Void textBox5_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		double taxaV = 0;

		erroBox5 = 0;
		limpaResultados();

		if (!String::IsNullOrEmpty(this->textBox5->Text)) {
			if (Regex::IsMatch(this->textBox5->Text, numero_real)) {
				label49->Text = L"";
				taxaV = Convert::ToDouble(this->textBox5->Text);
				label21->Text = Convert::ToString(taxaV / 100);
			} else { 
				label49->Text = CAMPO_NUMERICO;
				erroBox5 = 1;
			}
		}
		else {
			label21->Text = L"";
			label49->Text = L"";
			limpaResultados();
		}
	}
	private: System::Void textBox6_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		double lucroR = 0;
		double montanteR = 0;

		erroBox6 = 0;
		limpaResultados();

		if (!String::IsNullOrEmpty(this->textBox6->Text)) {
			if (Regex::IsMatch(this->textBox6->Text, numero_real)) {
				label48->Text = L"";
				lucroR = Convert::ToDouble(this->textBox6->Text);
				if (!String::IsNullOrEmpty(this->textBox2->Text) &&
					(erroBox2 == 0)) {
					montanteR = Convert::ToDouble(this->textBox2->Text);
					label26->Text = System::String::Format("{0,12:N5}", (lucroR / montanteR) * 100);
				}
			}
			else { 
				label48->Text = FORMATO_MOEDA_2L; 
				erroBox6 = 1;
			}
		}
		else {
			label26->Text = L"";
			label48->Text = L"";
			limpaResultados();
		}
	}

	private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		
		limpaResultados();
		
		if (comboBox1->SelectedIndex == 0) {
			textBox6->Enabled = false;
			textBox6->BackColor = System::Drawing::SystemColors::ScrollBar;
			textBox6->Text = L"";
			textBox4->Enabled = true;
			textBox4->BackColor = System::Drawing::SystemColors::Window;
		}
		if (comboBox1->SelectedIndex == 1) {
			textBox4->Enabled = false;
			textBox4->BackColor = System::Drawing::SystemColors::ScrollBar;
			textBox4->Text = L"";
			textBox6->Enabled = true;
			textBox6->BackColor = System::Drawing::SystemColors::Window;
		}
	}
	private: System::Void limpaResultados() {
		label22->Text = L"";
		label10->Text = L"";
		label11->Text = L"";
		label38->Text = L"";

		if ((erroBox1 == 0)&&(erroBox2 == 0)&&(erroBox3 == 0)&&
			(erroBox4 == 0)&&(erroBox5 == 0)&&(erroBox6 == 0)) {
			label8->Text = L"";
		}
	}
};

}

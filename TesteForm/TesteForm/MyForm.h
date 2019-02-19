#pragma once

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

		//	protected:
	private:

		System::Windows::Forms::Button^  button1;
		System::Windows::Forms::Button^  button2;

		System::Windows::Forms::RadioButton^  radioButton1;
		System::Windows::Forms::RadioButton^  radioButton2;

		System::Windows::Forms::TextBox^  textBox1;
		System::Windows::Forms::TextBox^  textBox2;
		System::Windows::Forms::TextBox^  textBox3;
		System::Windows::Forms::TextBox^  textBox4;
		System::Windows::Forms::TextBox^  textBox5;
		System::Windows::Forms::TextBox^  textBox6;
		System::Windows::Forms::TextBox^  textBox7;
		System::Windows::Forms::TextBox^  textBox8;
		System::Windows::Forms::TextBox^  textBox9;
	    System::Windows::Forms::TextBox^  textBox10;

		System::Windows::Forms::ComboBox^  comboBox1;
		System::Windows::Forms::ComboBox^  comboBox2;
		System::Windows::Forms::ComboBox^  comboBox3;

		System::Windows::Forms::Label^  label1;
		System::Windows::Forms::Label^  label2;
		System::Windows::Forms::Label^  label3;
		System::Windows::Forms::Label^  label4;
		System::Windows::Forms::Label^  label5;
		System::Windows::Forms::Label^  label6;
		System::Windows::Forms::Label^  label7;
		System::Windows::Forms::Label^  label8;
		System::Windows::Forms::Label^  label9;
		System::Windows::Forms::Label^  label10;
		System::Windows::Forms::Label^  label11;
		System::Windows::Forms::Label^  label12;
		System::Windows::Forms::Label^  label13;
		System::Windows::Forms::Label^  label14;
		System::Windows::Forms::Label^  label15;
		System::Windows::Forms::Label^  label16;
		System::Windows::Forms::Label^  label17;
		System::Windows::Forms::Label^  label18;
		System::Windows::Forms::Label^  label19;
		System::Windows::Forms::Label^  label20;
		System::Windows::Forms::Label^  label21;
		System::Windows::Forms::Label^  label22;
		System::Windows::Forms::Label^  label23;
		System::Windows::Forms::Label^  label24;
		System::Windows::Forms::Label^  label25;
		System::Windows::Forms::Label^  label26;
		System::Windows::Forms::Label^  label27;
		System::Windows::Forms::Label^  label28;
		System::Windows::Forms::Label^  label29;
		System::Windows::Forms::Label^  label30;
		System::Windows::Forms::Label^  label31;
		System::Windows::Forms::Label^  label32;
		System::Windows::Forms::Label^  label33;
		System::Windows::Forms::Label^  label34;
		System::Windows::Forms::Label^  label35;
		System::Windows::Forms::Label^  label36;
		System::Windows::Forms::Label^  label37;
		System::Windows::Forms::Label^  label38;
		System::Windows::Forms::Label^  label39;
		System::Windows::Forms::Label^  label40;
		System::Windows::Forms::Label^  label41;
		System::Windows::Forms::Label^  label42;
		System::Windows::Forms::Label^  label43;
		System::Windows::Forms::Label^  label44;
		System::Windows::Forms::Label^  label45;
		System::Windows::Forms::Label^  label46;
		System::Windows::Forms::Label^  label47;
		System::Windows::Forms::Label^  label48;
		System::Windows::Forms::Label^  label49;
		System::Windows::Forms::Label^  label50;
		System::Windows::Forms::Label^  label51;
		System::Windows::Forms::Label^  label52;
		System::Windows::Forms::Label^  label53;
		System::Windows::Forms::Label^  label54;
		System::Windows::Forms::Label^  label55;
		System::Windows::Forms::Label^  label56;
		System::Windows::Forms::Label^  label57;
		System::Windows::Forms::Label^  label58;
		System::Windows::Forms::Label^  label59;
		System::Windows::Forms::Label^  label60;
		System::Windows::Forms::Label^  label61;
		System::Windows::Forms::Label^  label62;
		System::Windows::Forms::Label^  label63;
		System::Windows::Forms::Label^  label64;
		System::Windows::Forms::Label^  label65;
		System::Windows::Forms::Label^  label66;

		System::ComponentModel::IContainer^  components;

		/// <summary>
		/// Variável de designer necessária.
		/// </summary>

		int erroBox1 = 0;
		int erroBox2 = 0;
		int erroBox3 = 0;
		int erroBox4 = 0;
		int erroBox5 = 0;
		int erroBox6 = 0;
		int erroBox7 = 0;
		int erroBox8 = 0;
		int erroBox9 = 0;
		int erroBox10 = 0;

		String ^ CAMPO_NAO_ZERO = L"valor não pode ser zero";
		String ^ ERRO_GERAL = L"Erro! Verifique os campos!";
		String ^ CAMPO_OBRIGATORIO = L"* campo obrigatório";
		String ^ FORMATO_MOEDA = L"Campo deve ter\nformato de moeda Ex.: 0,00";
		String ^ CAMPO_NUMERICO = L"Campo deve ser numérico";
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
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
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
			this->label50 = (gcnew System::Windows::Forms::Label());
			this->label51 = (gcnew System::Windows::Forms::Label());
			this->label52 = (gcnew System::Windows::Forms::Label());
			this->label53 = (gcnew System::Windows::Forms::Label());
			this->label54 = (gcnew System::Windows::Forms::Label());
			this->label55 = (gcnew System::Windows::Forms::Label());
			this->label56 = (gcnew System::Windows::Forms::Label());
			this->label57 = (gcnew System::Windows::Forms::Label());
			this->label58 = (gcnew System::Windows::Forms::Label());
			this->label59 = (gcnew System::Windows::Forms::Label());
			this->label60 = (gcnew System::Windows::Forms::Label());
			this->label61 = (gcnew System::Windows::Forms::Label());
			this->label62 = (gcnew System::Windows::Forms::Label());
			this->label63 = (gcnew System::Windows::Forms::Label());
			this->label64 = (gcnew System::Windows::Forms::Label());
			this->label65 = (gcnew System::Windows::Forms::Label());
			this->label66 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(392, 943);
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
			this->button2->Location = System::Drawing::Point(516, 943);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(133, 39);
			this->button2->TabIndex = 37;
			this->button2->Text = L"Limpar campos";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Font = (gcnew System::Drawing::Font(L"Calibri", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->radioButton1->Location = System::Drawing::Point(21, 450);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(323, 23);
			this->radioButton1->TabIndex = 84;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Lucro/Prejuízo em relação ao valor de venda";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton1_CheckedChanged);
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Checked = true;
			this->radioButton2->Font = (gcnew System::Drawing::Font(L"Calibri", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->radioButton2->Location = System::Drawing::Point(18, 730);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(312, 23);
			this->radioButton2->TabIndex = 85;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"Valor de venda para se ter o lucro desejado";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(379, 55);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 27);
			this->textBox1->TabIndex = 3;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(379, 102);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 27);
			this->textBox2->TabIndex = 5;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->Location = System::Drawing::Point(379, 210);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 27);
			this->textBox3->TabIndex = 7;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox3_TextChanged);
			// 
			// textBox4
			// 
			this->textBox4->BackColor = System::Drawing::SystemColors::Window;
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox4->Location = System::Drawing::Point(376, 769);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 27);
			this->textBox4->TabIndex = 9;
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox4_TextChanged);
			// 
			// textBox5
			// 
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox5->Location = System::Drawing::Point(379, 351);
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
			this->textBox6->Location = System::Drawing::Point(571, 769);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(100, 27);
			this->textBox6->TabIndex = 34;
			this->textBox6->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox6_TextChanged);
			// 
			// textBox7
			// 
			this->textBox7->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->textBox7->Enabled = false;
			this->textBox7->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox7->Location = System::Drawing::Point(574, 103);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(100, 27);
			this->textBox7->TabIndex = 67;
			this->textBox7->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox7_TextChanged);
			// 
			// textBox8
			// 
			this->textBox8->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->textBox8->Enabled = false;
			this->textBox8->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox8->Location = System::Drawing::Point(377, 478);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(100, 27);
			this->textBox8->TabIndex = 78;
			this->textBox8->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox8_TextChanged);
			// 
			// textBox9
			// 
			this->textBox9->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->textBox9->Enabled = false;
			this->textBox9->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox9->Location = System::Drawing::Point(377, 522);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(100, 27);
			this->textBox9->TabIndex = 79;
			this->textBox9->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox9_TextChanged);
			// 
			// textBox10
			// 
			this->textBox10->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->textBox10->Enabled = false;
			this->textBox10->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox10->Location = System::Drawing::Point(571, 522);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(100, 27);
			this->textBox10->TabIndex = 90;
			this->textBox10->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox10_TextChanged);
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
			this->label2->Location = System::Drawing::Point(30, 110);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(145, 38);
			this->label2->TabIndex = 4;
			this->label2->Text = L"- Quantidade que se \r\n   quer comprar";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(30, 218);
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
			this->label4->Location = System::Drawing::Point(27, 777);
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
			this->label5->Location = System::Drawing::Point(30, 359);
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
			this->label6->Location = System::Drawing::Point(27, 833);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(360, 23);
			this->label6->TabIndex = 12;
			this->label6->Text = L"- Valor de venda para se ter o lucro desejado";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->label7->Location = System::Drawing::Point(24, 868);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(518, 23);
			this->label7->TabIndex = 13;
			this->label7->Text = L"- Valor da moeda em relação ao Real para se ter o lucro desejado";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::Red;
			this->label8->Location = System::Drawing::Point(398, 921);
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
			this->label9->Location = System::Drawing::Point(30, 184);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(198, 19);
			this->label9->TabIndex = 20;
			this->label9->Text = L"- Quantidade a ser comprada";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->label10->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->label10->Location = System::Drawing::Point(594, 833);
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
			this->label11->Location = System::Drawing::Point(594, 868);
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
			this->label12->Location = System::Drawing::Point(380, 184);
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
			this->label13->Location = System::Drawing::Point(345, 808);
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
			this->label14->Location = System::Drawing::Point(549, 808);
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
			this->label16->Location = System::Drawing::Point(30, 248);
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
			this->label17->Location = System::Drawing::Point(385, 247);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(97, 19);
			this->label17->TabIndex = 26;
			this->label17->Text = L"                      ";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->Location = System::Drawing::Point(511, 94);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(57, 38);
			this->label18->TabIndex = 68;
			this->label18->Text = L"Em \r\nmoeda:";
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
			this->label20->Location = System::Drawing::Point(30, 391);
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
			this->label21->ForeColor = System::Drawing::Color::Red;
			this->label21->Location = System::Drawing::Point(570, 133);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(101, 19);
			this->label21->TabIndex = 69;
			this->label21->Text = L"                       ";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label22->Location = System::Drawing::Point(380, 387);
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
			this->label23->Location = System::Drawing::Point(339, 63);
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
			this->label24->Location = System::Drawing::Point(549, 775);
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
			this->label25->Location = System::Drawing::Point(377, 808);
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
			this->label26->Location = System::Drawing::Point(585, 808);
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
			this->label27->Location = System::Drawing::Point(309, 165);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(61, 38);
			this->label27->TabIndex = 41;
			this->label27->Text = L"Em\r\nmoeda: ";
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label28->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->label28->Location = System::Drawing::Point(538, 868);
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
			this->label29->Location = System::Drawing::Point(340, 110);
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
			this->label30->Location = System::Drawing::Point(348, 217);
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
			this->label31->Location = System::Drawing::Point(348, 247);
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
			this->label32->Location = System::Drawing::Point(346, 775);
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
			this->label33->Location = System::Drawing::Point(341, 359);
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
			this->label34->Location = System::Drawing::Point(538, 833);
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
			this->label35->Location = System::Drawing::Point(342, 391);
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
			this->label36->Location = System::Drawing::Point(24, 906);
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
			this->label37->Location = System::Drawing::Point(118, 906);
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
			this->label38->Location = System::Drawing::Point(156, 906);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(101, 19);
			this->label38->TabIndex = 52;
			this->label38->Text = L"                       ";
			// 
			// label39
			// 
			this->label39->AutoSize = true;
			this->label39->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label39->Location = System::Drawing::Point(511, 165);
			this->label39->Name = L"label39";
			this->label39->Size = System::Drawing::Size(49, 38);
			this->label39->TabIndex = 70;
			this->label39->Text = L"Em \r\nReais:";
			// 
			// label40
			// 
			this->label40->AutoSize = true;
			this->label40->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->label40->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label40->Location = System::Drawing::Point(574, 184);
			this->label40->Name = L"label40";
			this->label40->Size = System::Drawing::Size(97, 19);
			this->label40->TabIndex = 71;
			this->label40->Text = L"                      ";
			// 
			// label41
			// 
			this->label41->AutoSize = true;
			this->label41->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label41->ForeColor = System::Drawing::Color::Red;
			this->label41->Location = System::Drawing::Point(485, 217);
			this->label41->Name = L"label41";
			this->label41->Size = System::Drawing::Size(97, 19);
			this->label41->TabIndex = 72;
			this->label41->Text = L"                      ";
			// 
			// label42
			// 
			this->label42->AutoSize = true;
			this->label42->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label42->ForeColor = System::Drawing::Color::Red;
			this->label42->Location = System::Drawing::Point(485, 55);
			this->label42->Name = L"label42";
			this->label42->Size = System::Drawing::Size(139, 19);
			this->label42->TabIndex = 56;
			this->label42->Text = L"* campo obrigatório";
			// 
			// label43
			// 
			this->label43->AutoSize = true;
			this->label43->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label43->ForeColor = System::Drawing::Color::Red;
			this->label43->Location = System::Drawing::Point(378, 132);
			this->label43->Name = L"label43";
			this->label43->Size = System::Drawing::Size(139, 19);
			this->label43->TabIndex = 57;
			this->label43->Text = L"* campo obrigatório";
			// 
			// label44
			// 
			this->label44->AutoSize = true;
			this->label44->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label44->Location = System::Drawing::Point(30, 486);
			this->label44->Name = L"label44";
			this->label44->Size = System::Drawing::Size(311, 19);
			this->label44->TabIndex = 73;
			this->label44->Text = L"- Valor da moeda em relação ao Real na venda";
			// 
			// label45
			// 
			this->label45->AutoSize = true;
			this->label45->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label45->Location = System::Drawing::Point(30, 526);
			this->label45->Name = L"label45";
			this->label45->Size = System::Drawing::Size(149, 19);
			this->label45->TabIndex = 74;
			this->label45->Text = L"- Quantidade vendida";
			// 
			// label46
			// 
			this->label46->AutoSize = true;
			this->label46->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label46->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->label46->Location = System::Drawing::Point(28, 639);
			this->label46->Name = L"label46";
			this->label46->Size = System::Drawing::Size(195, 23);
			this->label46->TabIndex = 75;
			this->label46->Text = L"- Lucro/Prejuízo líquido";
			// 
			// label47
			// 
			this->label47->AutoSize = true;
			this->label47->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label47->ForeColor = System::Drawing::Color::Red;
			this->label47->Location = System::Drawing::Point(377, 747);
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
			this->label49->Location = System::Drawing::Point(485, 359);
			this->label49->Name = L"label49";
			this->label49->Size = System::Drawing::Size(97, 19);
			this->label49->TabIndex = 63;
			this->label49->Text = L"                      ";
			// 
			// label50
			// 
			this->label50->AutoSize = true;
			this->label50->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->label50->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label50->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->label50->Location = System::Drawing::Point(378, 639);
			this->label50->Name = L"label50";
			this->label50->Size = System::Drawing::Size(98, 23);
			this->label50->TabIndex = 76;
			this->label50->Text = L"                      ";
			// 
			// label51
			// 
			this->label51->AutoSize = true;
			this->label51->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label51->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->label51->Location = System::Drawing::Point(337, 639);
			this->label51->Name = L"label51";
			this->label51->Size = System::Drawing::Size(40, 23);
			this->label51->TabIndex = 77;
			this->label51->Text = L": R$";
			// 
			// label52
			// 
			this->label52->AutoSize = true;
			this->label52->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label52->ForeColor = System::Drawing::Color::Red;
			this->label52->Location = System::Drawing::Point(483, 469);
			this->label52->Name = L"label52";
			this->label52->Size = System::Drawing::Size(109, 19);
			this->label52->TabIndex = 80;
			this->label52->Text = L"                         ";
			// 
			// label53
			// 
			this->label53->AutoSize = true;
			this->label53->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label53->ForeColor = System::Drawing::Color::Red;
			this->label53->Location = System::Drawing::Point(378, 552);
			this->label53->Name = L"label53";
			this->label53->Size = System::Drawing::Size(93, 19);
			this->label53->TabIndex = 81;
			this->label53->Text = L"                     ";
			// 
			// label54
			// 
			this->label54->AutoSize = true;
			this->label54->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label54->Location = System::Drawing::Point(340, 486);
			this->label54->Name = L"label54";
			this->label54->Size = System::Drawing::Size(34, 19);
			this->label54->TabIndex = 82;
			this->label54->Text = L": R$";
			// 
			// label55
			// 
			this->label55->AutoSize = true;
			this->label55->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label55->Location = System::Drawing::Point(340, 525);
			this->label55->Name = L"label55";
			this->label55->Size = System::Drawing::Size(34, 19);
			this->label55->TabIndex = 83;
			this->label55->Text = L": R$";
			// 
			// label56
			// 
			this->label56->AutoSize = true;
			this->label56->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label56->Location = System::Drawing::Point(28, 674);
			this->label56->Name = L"label56";
			this->label56->Size = System::Drawing::Size(264, 19);
			this->label56->TabIndex = 86;
			this->label56->Text = L"- Valorização/Desvalorização da moeda";
			// 
			// label57
			// 
			this->label57->AutoSize = true;
			this->label57->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label57->Location = System::Drawing::Point(338, 674);
			this->label57->Name = L"label57";
			this->label57->Size = System::Drawing::Size(28, 19);
			this->label57->TabIndex = 87;
			this->label57->Text = L": %";
			// 
			// label58
			// 
			this->label58->AutoSize = true;
			this->label58->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label58->Location = System::Drawing::Point(376, 674);
			this->label58->Name = L"label58";
			this->label58->Size = System::Drawing::Size(101, 19);
			this->label58->TabIndex = 88;
			this->label58->Text = L"                       ";
			// 
			// label59
			// 
			this->label59->AutoSize = true;
			this->label59->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label59->Location = System::Drawing::Point(508, 513);
			this->label59->Name = L"label59";
			this->label59->Size = System::Drawing::Size(57, 38);
			this->label59->TabIndex = 91;
			this->label59->Text = L"Em \r\nmoeda:";
			// 
			// label60
			// 
			this->label60->AutoSize = true;
			this->label60->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->label60->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label60->Location = System::Drawing::Point(375, 605);
			this->label60->Name = L"label60";
			this->label60->Size = System::Drawing::Size(97, 19);
			this->label60->TabIndex = 92;
			this->label60->Text = L"                      ";
			// 
			// label61
			// 
			this->label61->AutoSize = true;
			this->label61->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label61->Location = System::Drawing::Point(304, 586);
			this->label61->Name = L"label61";
			this->label61->Size = System::Drawing::Size(61, 38);
			this->label61->TabIndex = 93;
			this->label61->Text = L"Em\r\nmoeda: ";
			// 
			// label62
			// 
			this->label62->AutoSize = true;
			this->label62->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label62->Location = System::Drawing::Point(506, 586);
			this->label62->Name = L"label62";
			this->label62->Size = System::Drawing::Size(49, 38);
			this->label62->TabIndex = 94;
			this->label62->Text = L"Em \r\nReais:";
			// 
			// label63
			// 
			this->label63->AutoSize = true;
			this->label63->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->label63->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label63->Location = System::Drawing::Point(569, 605);
			this->label63->Name = L"label63";
			this->label63->Size = System::Drawing::Size(97, 19);
			this->label63->TabIndex = 95;
			this->label63->Text = L"                      ";
			// 
			// label64
			// 
			this->label64->AutoSize = true;
			this->label64->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label64->ForeColor = System::Drawing::Color::Red;
			this->label64->Location = System::Drawing::Point(532, 552);
			this->label64->Name = L"label64";
			this->label64->Size = System::Drawing::Size(101, 19);
			this->label64->TabIndex = 96;
			this->label64->Text = L"                       ";
			// 
			// label65
			// 
			this->label65->AutoSize = true;
			this->label65->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label65->Location = System::Drawing::Point(508, 643);
			this->label65->Name = L"label65";
			this->label65->Size = System::Drawing::Size(44, 19);
			this->label65->TabIndex = 97;
			this->label65->Text = L"ou %:";
			// 
			// label66
			// 
			this->label66->AutoSize = true;
			this->label66->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->label66->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label66->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->label66->Location = System::Drawing::Point(568, 639);
			this->label66->Name = L"label66";
			this->label66->Size = System::Drawing::Size(98, 23);
			this->label66->TabIndex = 98;
			this->label66->Text = L"                      ";
			// 
			// comboBox1
			// 
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"porcentagem (%)", L"Reais (R$)" });
			this->comboBox1->Location = System::Drawing::Point(174, 769);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(152, 27);
			this->comboBox1->TabIndex = 65;
			this->comboBox1->Text = L"em porcentagem (%)";
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_SelectedIndexChanged);
			// 
			// comboBox2
			// 
			this->comboBox2->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"em Reais (R$)", L"em moeda" });
			this->comboBox2->Location = System::Drawing::Point(208, 103);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(121, 27);
			this->comboBox2->TabIndex = 66;
			this->comboBox2->Text = L"em Reais";
			this->comboBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox2_SelectedIndexChanged);
			// 
			// comboBox3
			// 
			this->comboBox3->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->comboBox3->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"em Reais (R$)", L"em moeda" });
			this->comboBox3->Location = System::Drawing::Point(208, 521);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(121, 27);
			this->comboBox3->TabIndex = 89;
			this->comboBox3->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox3_SelectedIndexChanged);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->ClientSize = System::Drawing::Size(724, 1007);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->radioButton1);
			this->Controls->Add(this->radioButton2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->textBox10);
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
			this->Controls->Add(this->label50);
			this->Controls->Add(this->label51);
			this->Controls->Add(this->label52);
			this->Controls->Add(this->label53);
			this->Controls->Add(this->label54);
			this->Controls->Add(this->label55);
			this->Controls->Add(this->label56);
			this->Controls->Add(this->label57);
			this->Controls->Add(this->label58);
			this->Controls->Add(this->label59);
			this->Controls->Add(this->label60);
			this->Controls->Add(this->label61);
			this->Controls->Add(this->label62);
			this->Controls->Add(this->label63);
			this->Controls->Add(this->label64);
			this->Controls->Add(this->label65);
			this->Controls->Add(this->label66);
			this->Controls->Add(this->comboBox3);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->comboBox2);
			this->Name = L"MyForm";
			this->ShowIcon = false;
			this->Text = L"Compra e Venda de Moeda Virtual";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}

#pragma endregion

	System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

		if (radioButton2->Checked == true) {
			calculaRadioButton2();
		}
		else {
			calculaRadioButton1();
		}
	}

	System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {

		//limpa variaveis globais
		if (radioButton2->Checked == true) {
			erroBox1 = imprimeErros(1, CAMPO_OBRIGATORIO);
		}
		else {
			if (comboBox3->SelectedIndex == 1) {
				erroBox1 = imprimeErros(1, CAMPO_OBRIGATORIO);
			}
			else {
				erroBox1 = imprimeErros(1, "");
			}
		}
		erroBox2 = 0;
		erroBox3 = 0;
		erroBox4 = 0;
		erroBox5 = 0;
		erroBox6 = 0;
		erroBox7 = 0;
		erroBox8 = 0;
		erroBox9 = 0;
		erroBox10 = 0;

		//limpa labels
		this->label8->Text = L"                      ";
		this->label10->Text = L"                      ";
		this->label11->Text = L"                      ";
		this->label12->Text = L"                      ";
		this->label17->Text = L"                      ";
		this->label22->Text = L"                      ";
		this->label25->Text = L"                      ";
		this->label26->Text = L"                      ";
		this->label38->Text = L"                      ";
		this->label40->Text = L"                      ";
		this->label41->Text = L"                      ";
		this->label47->Text = L"                      ";
		this->label48->Text = L"                      ";
		this->label49->Text = L"                      ";
		this->label66->Text = L"                      ";

		// limpa textBox
		this->textBox1->Text = L"";
		this->textBox2->Text = L"";
		this->textBox3->Text = L"";
		this->textBox4->Text = L"";
		this->textBox5->Text = L"";
		this->textBox6->Text = L"";
		this->textBox7->Text = L"";
		this->textBox8->Text = L"";
		this->textBox9->Text = L"";
		this->textBox10->Text = L"";

		checaComboBox2();
		checaComboBox3();
	}

	System::Void radioButton1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {

		if (radioButton2->Checked == true) {
			erroBox1 = imprimeErros(1, CAMPO_OBRIGATORIO);
			textBox8->Enabled = false;
			textBox8->BackColor = System::Drawing::SystemColors::ScrollBar;
			erroBox8 = imprimeErros(8, "");
			textBox9->Enabled = false;
			textBox9->BackColor = System::Drawing::SystemColors::ScrollBar;
			erroBox9 = imprimeErros(9, "");
			textBox10->Enabled = false;
			textBox10->BackColor = System::Drawing::SystemColors::ScrollBar;
			erroBox10 = imprimeErros(10, "");
			comboBox1->Text = "               ";
			comboBox1->BackColor = System::Drawing::SystemColors::Window;
			comboBox3->Text = "               ";
			comboBox3->BackColor = System::Drawing::SystemColors::ScrollBar;
			comboBox3->Enabled = false;
		}
		else {
			erroBox1 = imprimeErros(1, "");
			textBox4->Enabled = false;
			textBox4->BackColor = System::Drawing::SystemColors::ScrollBar;
			textBox8->Enabled = true;
			textBox8->BackColor = System::Drawing::SystemColors::Window;
			textBox9->Enabled = true;
			textBox9->BackColor = System::Drawing::SystemColors::Window;
			erroBox9 = imprimeErros(9, CAMPO_OBRIGATORIO);
			comboBox1->Text = "";
			comboBox1->BackColor = System::Drawing::SystemColors::ScrollBar;
			comboBox3->Text = "em Reais (R$)";
			comboBox3->BackColor = System::Drawing::SystemColors::Window;
			comboBox3->Enabled = true;
		}
	}
		
	System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		double moedaR = 0;
		double montanteR = 0;
		double qtd_moeda = 0;
		double qtd_reais = 0;
		double taxaC = 0;
		double lucro = 0;
		double lucroR = 0;
		double valor = 0;

		erroBox1 = inicializaErros_Resultados(1);

		if (!String::IsNullOrEmpty(this->textBox1->Text)) { // checa se vazio
			if (Regex::IsMatch(this->textBox1->Text, numero_real)) { //checa se numero real
				moedaR = Convert::ToDouble(this->textBox1->Text);
				if (moedaR == 0) {
					erroBox1 = imprimeErros(1, CAMPO_NAO_ZERO);
				}
				else {
					montanteR = checaTextBox(2, 12, moedaR, "{0,12:N5}");
					qtd_moeda = checaTextBox(7, 40, moedaR, "{0,12:N2}");
					qtd_reais = qtd_moeda * moedaR;
					taxaC = checaTextBox(3, 17, qtd_reais, "{0,12:N2}");
					lucro = checaTextBox(4, 25, qtd_reais, "{0,12:N2}");
					lucroR = checaTextBox(6, 26, qtd_reais, "{0,12:N5}");
				}
			}
			else {
				erroBox1 = imprimeErros(1, FORMATO_MOEDA);
			}
		}
		else {
			erroBox1 = imprimeErros(1, CAMPO_OBRIGATORIO);
			limpaResultParciais(1);
			limpaResultFinais();
		}
	}

	System::Void textBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		double moedaR = 0;
		double montanteR = 0;
		double lucro = 0;
		double lucroR = 0;
		double taxaC = 0;

		erroBox2 = inicializaErros_Resultados(2);

		if (!String::IsNullOrEmpty(this->textBox2->Text)) {
			if (Regex::IsMatch(this->textBox2->Text, numero_real)) {
				montanteR = Convert::ToDouble(this->textBox2->Text);
				if (montanteR == 0) {
					erroBox2 = imprimeErros(2, CAMPO_NAO_ZERO);
				}
				else {
					lucroR = checaTextBox(6, 26, montanteR, "{0,12:N5}");
					moedaR = checaTextBox(1, 12, montanteR, "{0,12:N5}");
					taxaC = checaTextBox(3, 17, montanteR, "{0,12:N2}");
					lucro = checaTextBox(4, 25, montanteR, "{0,12:N2}");
				}
			}
			else {
				erroBox2 = imprimeErros(2, FORMATO_MOEDA);
			}
		}
		else {
			if (this->comboBox2->SelectedIndex != 1) {
				erroBox2 = imprimeErros(2, CAMPO_OBRIGATORIO);
				limpaResultParciais(2);
				limpaResultFinais();
			}
		}
	}

	System::Void textBox3_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		double taxaC = 0;
		double montanteR = 0;
		double qtd_reais = 0;

		erroBox3 = inicializaErros_Resultados(3);

		if (!String::IsNullOrEmpty(this->textBox3->Text)) {
			if (Regex::IsMatch(this->textBox3->Text, numero_real)) {
				taxaC = Convert::ToDouble(this->textBox3->Text);
				montanteR = checaTextBox(2, 17, taxaC, "{0,12:N2}");
				qtd_reais = checaTextBox(7, 17, taxaC, "{0,12:N2}");
			}
			else {
				erroBox3 = imprimeErros(3, CAMPO_NUMERICO);
			}
		}
		else {
			limpaResultParciais(3);
			limpaResultFinais();
		}
	}

	System::Void textBox4_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		double lucro = 0;
		double montanteR = 0;
		double qtd_reais = 0;

		erroBox4 = inicializaErros_Resultados(4);

		if (!String::IsNullOrEmpty(this->textBox4->Text)) {
			if (Regex::IsMatch(this->textBox4->Text, numero_real)) {
				erroBox4 = imprimeErros(4, "");
				lucro = Convert::ToDouble(this->textBox4->Text);
				montanteR = checaTextBox(2, 25, lucro, "{0,12:N2}");
				qtd_reais = checaTextBox(7, 25, lucro, "{0,12:N2}");
			}
			else {
				erroBox4 = imprimeErros(4, CAMPO_NUMERICO);
			}
		}
		else {
			limpaResultParciais(4);
			limpaResultFinais();
		}
	}

	System::Void textBox5_TextChanged(System::Object^  sender, System::EventArgs^  e) {

		erroBox5 = inicializaErros_Resultados(5);

		if (!String::IsNullOrEmpty(this->textBox5->Text)) {
			if (Regex::IsMatch(this->textBox5->Text, numero_real)) {
				limpaResultParciais(5);
			}
			else {
				erroBox5 = imprimeErros(5, CAMPO_NUMERICO);
			}
		}
		else {
			limpaResultParciais(5);
			limpaResultFinais();
		}
	}

	System::Void textBox6_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		double lucroR = 0;
		double montanteR = 0;
		double qtd_reais = 0;

		erroBox6 = inicializaErros_Resultados(6);

		if (!String::IsNullOrEmpty(this->textBox6->Text)) {
			if (Regex::IsMatch(this->textBox6->Text, numero_real)) {
				erroBox6 = imprimeErros(6, "");
				lucroR = Convert::ToDouble(this->textBox6->Text);
				montanteR = checaTextBox(2, 26, lucroR, "{0,12:N5}");
				qtd_reais = checaTextBox(7, 26, lucroR, "{0,12:N5}");
			}
			else {
				erroBox6 = imprimeErros(6, FORMATO_MOEDA);
			}
		}
		else {
			limpaResultParciais(6);
			limpaResultFinais();
		}
	}

	System::Void textBox7_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		double qtd_moeda = 0;
		double qtd_reais = 0;
		double moedaR = 0;
		double taxaC = 0;
		double lucro = 0;
		double lucroR = 0;

		erroBox7 = inicializaErros_Resultados(7);

		if (!String::IsNullOrEmpty(this->textBox7->Text)) {
			if (Regex::IsMatch(this->textBox7->Text, numero_real)) {
				erroBox7 = imprimeErros(7, "");
				qtd_moeda = Convert::ToDouble(this->textBox7->Text);
				if (qtd_moeda == 0) {
					erroBox7 = imprimeErros(7, CAMPO_NAO_ZERO);
				}
				else {
					moedaR = checaTextBox(1, 40, qtd_moeda, "{0,12:N2}");
					qtd_reais = moedaR * qtd_moeda;
					taxaC = checaTextBox(3, 17, qtd_reais, "{0,12:N2}");
					lucro = checaTextBox(4, 25, qtd_reais, "{0,12:N2}");
					lucroR = checaTextBox(6, 26, qtd_reais, "{0,12:N5}");
				}
			}
			else {
				erroBox7 = imprimeErros(7, CAMPO_NUMERICO);
			}
		}
		else {
			if (this->comboBox2->SelectedIndex == 1) {
				erroBox7 = imprimeErros(7, CAMPO_OBRIGATORIO);
				limpaResultParciais(7);
				limpaResultFinais();
			}
		}
	}

	System::Void textBox8_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		double moedaV = 0;
		double qtd_moedaV = 0;
		double qtd_reaisV = 0;

		erroBox8 = inicializaErros_Resultados(8);

		if (!String::IsNullOrEmpty(this->textBox8->Text)) {
			if (Regex::IsMatch(this->textBox8->Text, numero_real)) {
				moedaV = Convert::ToDouble(this->textBox8->Text);
				qtd_moedaV = checaTextBox(9, 60, moedaV, "{0,12:N5}");
				qtd_reaisV = checaTextBox(10, 63, moedaV, "{0,12:N2}");
			}
			else {
				erroBox8 = imprimeErros(8, FORMATO_MOEDA);
			}
		}
		else {
			if (comboBox3->SelectedIndex == 1) {
				erroBox8 = imprimeErros(8, CAMPO_OBRIGATORIO);
			}
		    limpaResultParciais(8);
			limpaResultFinais2();
		}
	}

	System::Void textBox9_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		double montanteV = 0;
		double qtd_moedaV = 0;

		erroBox9 = inicializaErros_Resultados(9);

		if (!String::IsNullOrEmpty(this->textBox9->Text)) {
			if (Regex::IsMatch(this->textBox9->Text, numero_real)) {
				montanteV = Convert::ToDouble(this->textBox9->Text);
				if (montanteV == 0) {
					erroBox9 = imprimeErros(9, CAMPO_NAO_ZERO);
				}
				else {
					qtd_moedaV = checaTextBox(8, 60, montanteV, "{0,12:N5}");
				}
			}
			else {
				erroBox9 = imprimeErros(9, FORMATO_MOEDA);
			}
		}
		else {
			erroBox9 = imprimeErros(9, CAMPO_OBRIGATORIO);
			limpaResultParciais(9);
			limpaResultFinais2();
		}
	}

	System::Void textBox10_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		double montanteVM = 0;
		double qtd_reaisV = 0;

		erroBox10 = inicializaErros_Resultados(10);

		if (!String::IsNullOrEmpty(this->textBox10->Text)) {
			if (Regex::IsMatch(this->textBox10->Text, numero_real)) {
				erroBox10 = imprimeErros(10, "");
				montanteVM = Convert::ToDouble(this->textBox10->Text);
				if (montanteVM == 0) {
					erroBox10 = imprimeErros(10, CAMPO_NAO_ZERO);
				}
				else {
					qtd_reaisV = checaTextBox(8, 63, montanteVM, "{0,12:N2}");
				}
			}
			else {
				erroBox10 = imprimeErros(10, CAMPO_NUMERICO);
			}
		}
		else {
			if (this->comboBox3->SelectedIndex == 1) {
				erroBox10 = imprimeErros(10, CAMPO_OBRIGATORIO);
				limpaResultParciais(10);
				limpaResultFinais2();
			}
		}
	}

	System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {

		limpaResultFinais();

		if (comboBox1->SelectedIndex == 0) {
			textBox6->Enabled = false;
			textBox6->BackColor = System::Drawing::SystemColors::ScrollBar;
			textBox6->Text = "";
			textBox4->Enabled = true;
			textBox4->BackColor = System::Drawing::SystemColors::Window;
		}
		if (comboBox1->SelectedIndex == 1) {
			textBox4->Enabled = false;
			textBox4->BackColor = System::Drawing::SystemColors::ScrollBar;
			textBox4->Text = "";
			textBox6->Enabled = true;
			textBox6->BackColor = System::Drawing::SystemColors::Window;
		}
	}

	System::Void comboBox2_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		this->label17->Text = L"";
		this->label25->Text = L"";
		this->label26->Text = L"";
		checaComboBox2();
	}

	System::Void comboBox3_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			checaComboBox3();
	}

	System::Void limpaResultParciais(int box_number) {
		switch (box_number) {
		case 1:
			label12->Text = L"";
			if (comboBox2->SelectedIndex == 1) {
				label40->Text = L"";
				label17->Text = L"";
				label25->Text = L"";
				label26->Text = L"";
			}
			break;
		case 2:
			label12->Text = L"";
			label17->Text = L"";
			label25->Text = L"";
			label26->Text = L"";
			break;
		case 3:
			label17->Text = L"";
			break;
		case 4:
			label25->Text = L"";
			break;
		case 5:
			break;
		case 6:
			label26->Text = L"";
			break;
		case 7:
			label40->Text = L""; // limpa qtd a ser comprada, em reais
			label17->Text = L"";
			label25->Text = L"";
			label26->Text = L"";
			break;
		case 8:
			label60->Text = L"";
			if (comboBox3->SelectedIndex == 1) {
				label63->Text = L"";
			}
			break;
		case 9:
			label60->Text = L"";
			break;
		default:
			break;
		}
	}

	System::Void limpaResultFinais() {
		label22->Text = L"";
		label10->Text = L"";
		label11->Text = L"";
		label38->Text = L"";

		if ((erroBox1 == 0) && (erroBox2 == 0) && (erroBox3 == 0) &&
			(erroBox4 == 0) && (erroBox5 == 0) && (erroBox6 == 0) &&
			(erroBox7 == 0)) {
			label8->Text = L"";
		}
	}

	System::Void limpaResultFinais2() {
		label50->Text = L"";
		label58->Text = L"";
		label22->Text = L"";
		label66->Text = L"";

		if ((erroBox8 == 0) && (erroBox9 == 0) && (erroBox10 == 0)) {
			label8->Text = L"";
		}
	}

	System::Void checaComboBox2() {

		if (comboBox2->SelectedIndex == 1) {
			textBox2->Enabled = false;
			textBox2->BackColor = System::Drawing::SystemColors::ScrollBar;
			textBox2->Text = "";
			label12->Text = L"";
			erroBox2 = imprimeErros(2, "");
			textBox7->Enabled = true;
			textBox7->BackColor = System::Drawing::SystemColors::Window;
			erroBox7 = imprimeErros(7, CAMPO_OBRIGATORIO);
		}
		else {
			comboBox2->SelectedIndex = 0;
			textBox7->Enabled = false;
			textBox7->BackColor = System::Drawing::SystemColors::ScrollBar;
			textBox7->Text = "";
			label40->Text = L"";
			erroBox7 = imprimeErros(7, "");
			textBox2->Enabled = true;
			textBox2->BackColor = System::Drawing::SystemColors::Window;
			erroBox2 = imprimeErros(2, CAMPO_OBRIGATORIO);
		}
	}

	System::Void checaComboBox3() {

		if (comboBox3->SelectedIndex == 1) {
			textBox9->Enabled = false;
			textBox9->BackColor = System::Drawing::SystemColors::ScrollBar;
			textBox9->Text = "";
			erroBox9 = imprimeErros(9,"");
			textBox10->Enabled = true;
			textBox10->BackColor = System::Drawing::SystemColors::Window;
			erroBox10 = imprimeErros(10, CAMPO_OBRIGATORIO);
			erroBox8 = imprimeErros(8, CAMPO_OBRIGATORIO);
			erroBox1 = imprimeErros(1, CAMPO_OBRIGATORIO);
		}
		else {
			comboBox3->SelectedIndex = 0;
			textBox10->Enabled = false;
			textBox10->BackColor = System::Drawing::SystemColors::ScrollBar;
			textBox10->Text = "";
			erroBox10 = imprimeErros(10, "");
			textBox9->Enabled = true;
			textBox9->BackColor = System::Drawing::SystemColors::Window;
			erroBox9 = imprimeErros(9, CAMPO_OBRIGATORIO);
			erroBox8 = imprimeErros(8, "");
			erroBox1 = imprimeErros(1, "");
		}
	}

	double checaTextBox(int box_number, int label_number, double valor_entrada, String ^ formato) {
		double valor_saida = 0;
		double calculo = 0;
		double aux1, aux2 = 0;

		switch (box_number) {
		case 1:
			if (!String::IsNullOrEmpty(this->textBox1->Text) && (erroBox1 == 0)) {
				if (label_number == 12) {
					valor_saida = Convert::ToDouble(this->textBox1->Text); //moedaR
					calculo = valor_entrada / valor_saida;
					label12->Text = System::String::Format(formato, calculo);
				}
				if (label_number == 40) {
					valor_saida = Convert::ToDouble(this->textBox1->Text); //moedaR
					calculo = valor_saida * valor_entrada;
					label40->Text = System::String::Format(formato, calculo);
				}
			}
			else {
				limpaResultParciais(1);
			}
			break;
		case 2:
			if (this->comboBox2->SelectedIndex != 1) {
				if (!String::IsNullOrEmpty(this->textBox2->Text) && (erroBox2 == 0)) {
					valor_saida = Convert::ToDouble(this->textBox2->Text); //montanteR
					if (label_number == 12) {
						calculo = valor_saida / valor_entrada;
						label12->Text = System::String::Format(formato, calculo);
					}
					if (label_number == 17) {
						calculo = (valor_entrada / 100)*valor_saida;
						label17->Text = System::String::Format(formato, calculo);
					}
					if (label_number == 25) {
						calculo = (valor_entrada / 100)*valor_saida;
						label25->Text = System::String::Format(formato, calculo);
					}
					if (label_number == 26) {
						calculo = (valor_entrada / valor_saida) * 100;
						label26->Text = System::String::Format(formato, calculo);
					}
				}
				else {
					limpaResultParciais(2);
				}
			}
			break;
		case 3:
			if (!String::IsNullOrEmpty(this->textBox3->Text) && (erroBox3 == 0)) {
				valor_saida = Convert::ToDouble(this->textBox3->Text); //taxaC
				calculo = (valor_saida / 100)*valor_entrada;
				label17->Text = System::String::Format(formato, calculo);
			}
			else {
				limpaResultParciais(3);
			}
			break;
		case 4:
			if (!String::IsNullOrEmpty(this->textBox4->Text) && (erroBox4 == 0)) {
				valor_saida = Convert::ToDouble(this->textBox4->Text); //lucro
				calculo = (valor_saida / 100)*valor_entrada;
				label25->Text = System::String::Format(formato, calculo);
			}
			else {
				limpaResultParciais(4);
			}
			break;
		case 6:
			if (!String::IsNullOrEmpty(this->textBox6->Text) && (erroBox6 == 0)) {
				valor_saida = Convert::ToDouble(this->textBox6->Text); // lucroR
				calculo = (valor_saida / valor_entrada) * 100;
				label26->Text = System::String::Format(formato, calculo);
			}
			else {
				limpaResultParciais(6);
			}
			break;
		case 7:
			if (this->comboBox2->SelectedIndex == 1) {
				if (!String::IsNullOrEmpty(this->textBox7->Text) && (erroBox7 == 0)) {
					if (!String::IsNullOrEmpty(this->textBox1->Text) && (erroBox1 == 0)) {
						aux1 = Convert::ToDouble(this->textBox1->Text);
						aux2 = Convert::ToDouble(this->textBox7->Text);
						if (label_number == 40) {
							valor_saida = aux2; //qtd_moeda
							calculo = valor_entrada * valor_saida;
							label40->Text = System::String::Format(formato, calculo);
						}
						if (label_number == 25) {
							valor_saida = aux1 * aux2; //// qtd_reais
							calculo = (valor_entrada / 100)*valor_saida;
							label25->Text = System::String::Format(formato, calculo);
						}
						if (label_number == 26) {
							valor_saida = aux1 * aux2; //// qtd_reais
							calculo = (valor_entrada / valor_saida) * 100;
							label26->Text = System::String::Format(formato, calculo);
						}
						if (label_number == 17) {
							valor_saida = aux1 * aux2; //// qtd_reais
							calculo = (valor_entrada / 100)*valor_saida;
							label17->Text = System::String::Format(formato, calculo);
						}
					}
					else {
						limpaResultParciais(1);
					}
				}
				else {
					limpaResultParciais(7);
				}
			}
			break;
		case 8:
			if (!String::IsNullOrEmpty(this->textBox8->Text) && (erroBox8 == 0)) {
				valor_saida = Convert::ToDouble(this->textBox8->Text); //qtd_moedaV
				if (label_number == 60) {
					calculo = valor_entrada / valor_saida;
					label60->Text = System::String::Format(formato, calculo);
				}
				if (label_number == 63) {
					calculo = valor_entrada * valor_saida;
					label63->Text = System::String::Format(formato, calculo);
				}
			}
			else {
				limpaResultParciais(8);
			}
			break;
		case 9:
			if (this->comboBox3->SelectedIndex != 1) {
				if (!String::IsNullOrEmpty(this->textBox9->Text) && (erroBox9 == 0)) {
					valor_saida = Convert::ToDouble(this->textBox9->Text); //qtd_moedaV
					if (label_number == 60) {
						calculo = valor_saida / valor_entrada;
						label60->Text = System::String::Format(formato, calculo);
					}
				}
				else {
					limpaResultParciais(9);
				}
			}
			break;
		case 10:
			if (this->comboBox3->SelectedIndex == 1) {
				if (!String::IsNullOrEmpty(this->textBox10->Text) && (erroBox10 == 0)) {
					if (!String::IsNullOrEmpty(this->textBox8->Text) && (erroBox8 == 0)) {
						aux2 = Convert::ToDouble(this->textBox10->Text);
						if (label_number == 63) {
							valor_saida = aux2; //qtd_moedaV
							calculo = valor_entrada * valor_saida;
							label63->Text = System::String::Format(formato, calculo);
						}
					}
					else {
						limpaResultParciais(8);
					}
				}
				else {
					limpaResultParciais(10);
				}
			}
			break;
		default:
			break;
		}

		return valor_saida;
	}

	int inicializaErros_Resultados(int box_number) {
		switch (box_number) {
		case 1:
			label42->Text = L"";
			break;
		case 2:
			label43->Text = L"";
			break;
		case 3:
			label41->Text = L"";
			break;
		case 8:
			label52->Text = L"";
			break;
		case 9:
			label53->Text = L"";
			break;
		case 10:
			label64->Text = L"";
			break;
		default:
			break;
		}

		limpaResultFinais();
		return 0;
	}

	int imprimeErros(int box_number, String ^ msg) {
		switch (box_number) {
		case 1:
			label42->Text = msg;
			break;
		case 2:
			label43->Text = msg;
			break;
		case 3:
			label41->Text = msg;
			break;
		case 4:
			label47->Text = msg;
			break;
		case 5:
			label49->Text = msg;
			break;
		case 6:
			label48->Text = msg;
			break;
		case 7:
			label21->Text = msg;
			break;
		case 8:
			label52->Text = msg;
			break;
		case 9:
			label53->Text = msg;
			break;
		case 10:
			label64->Text = msg;
			break;
		default:
			break;
		}
		if (msg->CompareTo("") == 0) {
			return 0;
		}
		else {
			return 1;
		}
	}

	System::Void calculaRadioButton1() {
		 double M, TV, TC, MR, MV, DV, DC, LP = 0;
		 double valorVenda = 0;
		 double valorizacao = 0;
		 double Lucro = 0;

		 if (!String::IsNullOrEmpty(this->textBox2->Text)) {
			 if (erroBox2 == 0) {
				 M = Convert::ToDouble(this->textBox2->Text);
			 }
		 }
		 else {
			 if (this->comboBox2->SelectedIndex == 0) {
				 erroBox2 = imprimeErros(2, CAMPO_OBRIGATORIO);
			 }
		 }

		 if (!String::IsNullOrEmpty(this->textBox7->Text)) {
			 if (erroBox7 == 0) {
				 M = Convert::ToDouble(this->label40->Text);
			 }
		 }
		 else {
			 if (this->comboBox2->SelectedIndex == 1) {
				 erroBox7 = imprimeErros(7, CAMPO_OBRIGATORIO);
			 }
		 }

		 if (!String::IsNullOrEmpty(this->textBox1->Text)) {
			 if (erroBox1 == 0) {
				 MR = Convert::ToDouble(this->textBox1->Text);
				 valorizacao = ((((valorVenda / (M / MR)) - MR) * 100) / MR);
			 }
		 }
		 else {
			 if (this->comboBox3->SelectedIndex == 1) {
				 erroBox1 = imprimeErros(1, CAMPO_OBRIGATORIO);
			 }
		 }
		
		 if (!String::IsNullOrEmpty(this->textBox3->Text) && (erroBox3 == 0)) {
			 TC = Convert::ToDouble(this->textBox3->Text);
		 }

		 if (!String::IsNullOrEmpty(this->textBox5->Text) && (erroBox5 == 0)) {
			 TV = Convert::ToDouble(this->textBox5->Text);
		 }

		 if (!String::IsNullOrEmpty(this->textBox8->Text) && (erroBox8 == 0)) {
			 MV = Convert::ToDouble(this->textBox8->Text);
		 }
		 else {
			 if (this->comboBox3->SelectedIndex == 1) {
				 erroBox8 = imprimeErros(8, CAMPO_OBRIGATORIO);
			 }
		 }

		 if (!String::IsNullOrEmpty(this->textBox9->Text)) {
			 if (erroBox9 == 0) {
				 valorVenda = Convert::ToDouble(this->textBox9->Text);
				 valorizacao = ((valorVenda / M) - 1) * 100;
			 }
		 }
		 else {
			 if (this->comboBox3->SelectedIndex == 0) {
				 erroBox9 = imprimeErros(9, CAMPO_OBRIGATORIO);
			 }
		 }

		 if (!String::IsNullOrEmpty(this->textBox10->Text)) {
			 if (erroBox10 == 0) {
				 valorVenda = Convert::ToDouble(this->label63->Text);
				 valorizacao = ((valorVenda / M) - 1) * 100;
			 }
		 }
		 else {
			 if (this->comboBox3->SelectedIndex == 1) {
				 erroBox10 = imprimeErros(10, CAMPO_OBRIGATORIO);
			 }
		 }

		 if ((erroBox1 == 0) && (erroBox2 == 0) && (erroBox3 == 0) &&
			 (erroBox5 == 0) && (erroBox7 == 0) && (erroBox8 == 0) &&
			 (erroBox9 == 0) && (erroBox10 == 0)) {
			 label8->Text = L"";
			 DV = (TV / 100)*valorVenda;
			 DC = (TC / 100) * M;
			 Lucro = (valorVenda - DV) - (M + DC);
			 LP = (Lucro / M) * 100;
			 label22->Text = System::String::Format("{0,12:N2}", (TV / 100)*valorVenda);
			 label50->Text = System::String::Format("{0,12:N2}", Lucro);
			 label66->Text = System::String::Format("{0,12:N5}", LP);
			 label58->Text = System::String::Format("{0,12:N5}", valorizacao);
		 }
		 else {
			 label8->Text = ERRO_GERAL;
		 }
	 }

	System::Void calculaRadioButton2() {
		 double L, TC, M, TV, MR, LR, LM = 0;
		 double valorVenda = 0;
		 double valorizacao = 0;

		 if (!String::IsNullOrEmpty(this->textBox1->Text)) {
			 if (erroBox1 == 0) {
				 MR = Convert::ToDouble(this->textBox1->Text);
			 }
		 }
		 else {
			 erroBox1 = imprimeErros(1, CAMPO_OBRIGATORIO);
		 }

		 if (!String::IsNullOrEmpty(this->textBox2->Text)) {
			 if (erroBox2 == 0) {
				 M = Convert::ToDouble(this->textBox2->Text);
				 valorVenda = M;
			 }
		 }
		 else {
			 if (this->comboBox2->SelectedIndex == 0) {
				 erroBox2 = imprimeErros(2, CAMPO_OBRIGATORIO);
			 }
		 }

		 if (!String::IsNullOrEmpty(this->textBox7->Text)) {
			 if (erroBox7 == 0) {
				 M = Convert::ToDouble(this->label40->Text);
				 valorVenda = M;
			 }
		 }
		 else {
			 if (this->comboBox2->SelectedIndex == 1) {
				 erroBox7 = imprimeErros(7, CAMPO_OBRIGATORIO);
			 }
		 }

		 if (!String::IsNullOrEmpty(this->textBox3->Text) && (erroBox3 == 0)) {
			 TC = Convert::ToDouble(this->textBox3->Text);
		 }

		 if (!String::IsNullOrEmpty(this->textBox5->Text) && (erroBox5 == 0)) {
			 TV = Convert::ToDouble(this->textBox5->Text);
		 }

		 if (!String::IsNullOrEmpty(this->textBox4->Text) && (erroBox4 == 0)) {
			 L = Convert::ToDouble(this->textBox4->Text);
			 valorVenda = ((100 + L + TC)*M) / (100 - TV);
		 }

		 if (!String::IsNullOrEmpty(this->textBox6->Text) && (erroBox6 == 0)) {
			 LR = Convert::ToDouble(this->textBox6->Text);
			 LM = (LR / M) * 100;
			 valorVenda = ((100 + LM + TC)*M) / (100 - TV);
		 }

		 if ((erroBox1 == 0) && (erroBox2 == 0) && (erroBox3 == 0) &&
			 (erroBox4 == 0) && (erroBox5 == 0) && (erroBox6 == 0) &&
			 (erroBox7 == 0)) {
			 label8->Text = L"";
			 label10->Text = System::String::Format("{0,12:N2}", valorVenda);
			 label22->Text = System::String::Format("{0,12:N2}", (TV / 100)*valorVenda);
			 label11->Text = System::String::Format("{0,12:N2}", valorVenda / (M / MR));
			 valorizacao = ((((valorVenda / (M / MR)) - MR) * 100) / MR);
			 label38->Text = System::String::Format("{0,12:N5}", valorizacao);
		 }
		 else {
			 label8->Text = ERRO_GERAL;
		 }
	}

	System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
	}

};

}

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
		System::Windows::Forms::Label^  label44;
		System::Windows::Forms::Label^  label45;
		System::Windows::Forms::Label^  label46;
		System::Windows::Forms::Label^  label50;
		System::Windows::Forms::Label^  label51;
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
		System::Windows::Forms::Label^  label65;
		System::Windows::Forms::Label^  label66;

		System::Windows::Forms::Panel^  panel1;
		System::Windows::Forms::Panel^  panel2;
		System::Windows::Forms::Panel^  panel3;
		System::Windows::Forms::Panel^  panel4;

		System::Windows::Forms::ErrorProvider^  errorProviderBox1;
		System::Windows::Forms::ErrorProvider^  errorProviderBox2;
		System::Windows::Forms::ErrorProvider^  errorProviderBox7;
		System::Windows::Forms::ErrorProvider^  errorProviderBox3;
		System::Windows::Forms::ErrorProvider^  errorProviderBox5;
		System::Windows::Forms::ErrorProvider^  errorProviderBox4;
		System::Windows::Forms::ErrorProvider^  errorProviderBox6;
		System::Windows::Forms::ErrorProvider^  errorProviderBox8;
		System::Windows::Forms::ErrorProvider^  errorProviderBox9;
		System::Windows::Forms::ErrorProvider^  errorProviderBox10;

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
		String ^ FORMATO_MOEDA = L"Formato Ex.: 1.000,00";
		String ^ CAMPO_NUMERICO = L"Campo deve ser numérico";
		String ^ POSITIVO = L"valor deve ser positivo";
		String ^ VAZIO = L"";	
		String ^ VENDA_MAIORQ_COMPRA = L"Qtd vendida > Qtd comprada";
private: System::Windows::Forms::Panel^  panel5;


		String ^ numero_real = "^\-{0,1}[0-9]+(\.[0-9]{3,3})*(,[0-9]+)*$";

#pragma region Windows Form Designer generated code

		/// <summary>
		/// Método necessário para suporte ao Designer - não modifique 
		/// o conteúdo deste método com o editor de código.
		/// </summary>
		void InitializeComponent(void)
			 {
			this->components = (gcnew System::ComponentModel::Container());
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
			this->label44 = (gcnew System::Windows::Forms::Label());
			this->label45 = (gcnew System::Windows::Forms::Label());
			this->label46 = (gcnew System::Windows::Forms::Label());
			this->label50 = (gcnew System::Windows::Forms::Label());
			this->label51 = (gcnew System::Windows::Forms::Label());
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
			this->label65 = (gcnew System::Windows::Forms::Label());
			this->label66 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->errorProviderBox1 = (gcnew System::Windows::Forms::ErrorProvider(this->components));
			this->errorProviderBox2 = (gcnew System::Windows::Forms::ErrorProvider(this->components));
			this->errorProviderBox7 = (gcnew System::Windows::Forms::ErrorProvider(this->components));
			this->errorProviderBox3 = (gcnew System::Windows::Forms::ErrorProvider(this->components));
			this->errorProviderBox5 = (gcnew System::Windows::Forms::ErrorProvider(this->components));
			this->errorProviderBox4 = (gcnew System::Windows::Forms::ErrorProvider(this->components));
			this->errorProviderBox6 = (gcnew System::Windows::Forms::ErrorProvider(this->components));
			this->errorProviderBox8 = (gcnew System::Windows::Forms::ErrorProvider(this->components));
			this->errorProviderBox9 = (gcnew System::Windows::Forms::ErrorProvider(this->components));
			this->errorProviderBox10 = (gcnew System::Windows::Forms::ErrorProvider(this->components));
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProviderBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProviderBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProviderBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProviderBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProviderBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProviderBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProviderBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProviderBox8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProviderBox9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProviderBox10))->BeginInit();
			this->panel5->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(617, 909);
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
			this->button2->Location = System::Drawing::Point(733, 909);
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
			this->radioButton1->Location = System::Drawing::Point(7, 19);
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
			this->radioButton2->Location = System::Drawing::Point(7, 21);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(312, 23);
			this->radioButton2->TabIndex = 85;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"Valor de venda para se ter o lucro desejado";
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton2_CheckedChanged);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(308, 14);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(121, 27);
			this->textBox1->TabIndex = 3;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			this->textBox1->Validating += gcnew System::ComponentModel::CancelEventHandler(this, &MyForm::textBox1_Validating);
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(475, 76);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(123, 27);
			this->textBox2->TabIndex = 5;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
			this->textBox2->Validating += gcnew System::ComponentModel::CancelEventHandler(this, &MyForm::textBox2_Validating);
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->Location = System::Drawing::Point(308, 150);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(121, 27);
			this->textBox3->TabIndex = 7;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox3_TextChanged);
			this->textBox3->Validating += gcnew System::ComponentModel::CancelEventHandler(this, &MyForm::textBox3_Validating);
			// 
			// textBox4
			// 
			this->textBox4->BackColor = System::Drawing::SystemColors::Window;
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox4->Location = System::Drawing::Point(397, 60);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(117, 27);
			this->textBox4->TabIndex = 9;
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox4_TextChanged);
			this->textBox4->Validating += gcnew System::ComponentModel::CancelEventHandler(this, &MyForm::textBox4_Validating);
			// 
			// textBox5
			// 
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox5->Location = System::Drawing::Point(308, 11);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(121, 27);
			this->textBox5->TabIndex = 11;
			this->textBox5->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox5_TextChanged);
			this->textBox5->Validating += gcnew System::ComponentModel::CancelEventHandler(this, &MyForm::textBox5_Validating);
			// 
			// textBox6
			// 
			this->textBox6->BackColor = System::Drawing::Color::MediumAquamarine;
			this->textBox6->Enabled = false;
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox6->Location = System::Drawing::Point(588, 60);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(111, 27);
			this->textBox6->TabIndex = 34;
			this->textBox6->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox6_TextChanged);
			this->textBox6->Validating += gcnew System::ComponentModel::CancelEventHandler(this, &MyForm::textBox6_Validating);
			// 
			// textBox7
			// 
			this->textBox7->BackColor = System::Drawing::Color::MediumAquamarine;
			this->textBox7->Enabled = false;
			this->textBox7->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox7->Location = System::Drawing::Point(687, 76);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(123, 27);
			this->textBox7->TabIndex = 67;
			this->textBox7->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox7_TextChanged);
			this->textBox7->Validating += gcnew System::ComponentModel::CancelEventHandler(this, &MyForm::textBox7_Validating);
			// 
			// textBox8
			// 
			this->textBox8->BackColor = System::Drawing::Color::MediumAquamarine;
			this->textBox8->Enabled = false;
			this->textBox8->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox8->Location = System::Drawing::Point(394, 47);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(120, 27);
			this->textBox8->TabIndex = 78;
			this->textBox8->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox8_TextChanged);
			this->textBox8->Validating += gcnew System::ComponentModel::CancelEventHandler(this, &MyForm::textBox8_Validating);
			// 
			// textBox9
			// 
			this->textBox9->BackColor = System::Drawing::Color::MediumAquamarine;
			this->textBox9->Enabled = false;
			this->textBox9->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox9->Location = System::Drawing::Point(394, 97);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(120, 27);
			this->textBox9->TabIndex = 79;
			this->textBox9->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox9_TextChanged);
			this->textBox9->Validating += gcnew System::ComponentModel::CancelEventHandler(this, &MyForm::textBox9_Validating);
			// 
			// textBox10
			// 
			this->textBox10->BackColor = System::Drawing::Color::MediumAquamarine;
			this->textBox10->Enabled = false;
			this->textBox10->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox10->Location = System::Drawing::Point(588, 97);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(111, 27);
			this->textBox10->TabIndex = 90;
			this->textBox10->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox10_TextChanged);
			this->textBox10->Validating += gcnew System::ComponentModel::CancelEventHandler(this, &MyForm::textBox10_Validating);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(3, 17);
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
			this->label2->Location = System::Drawing::Point(3, 79);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(231, 19);
			this->label2->TabIndex = 4;
			this->label2->Text = L"- Quantidade que se quer comprar";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(3, 155);
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
			this->label4->Location = System::Drawing::Point(16, 68);
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
			this->label5->Location = System::Drawing::Point(3, 19);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(182, 19);
			this->label5->TabIndex = 10;
			this->label5->Text = L"- Taxa de venda, se houver";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label6->Location = System::Drawing::Point(16, 124);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(314, 19);
			this->label6->TabIndex = 12;
			this->label6->Text = L"- Valor de venda para se ter o lucro desejado";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label7->Location = System::Drawing::Point(13, 159);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(452, 19);
			this->label7->TabIndex = 13;
			this->label7->Text = L"- Valor da moeda em relação ao Real para se ter o lucro desejado";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::MediumAquamarine;
			this->label8->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::Red;
			this->label8->Location = System::Drawing::Point(592, 4);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(49, 19);
			this->label8->TabIndex = 64;
			this->label8->Text = L"          ";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::MediumAquamarine;
			this->label10->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label10->Location = System::Drawing::Point(598, 124);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(0, 19);
			this->label10->TabIndex = 17;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::Color::MediumAquamarine;
			this->label11->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label11->Location = System::Drawing::Point(598, 159);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(0, 19);
			this->label11->TabIndex = 18;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->BackColor = System::Drawing::Color::MediumAquamarine;
			this->label12->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(475, 115);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(0, 19);
			this->label12->TabIndex = 21;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(366, 99);
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
			this->label14->Location = System::Drawing::Point(558, 99);
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
			this->label15->ForeColor = System::Drawing::Color::AliceBlue;
			this->label15->Location = System::Drawing::Point(12, 35);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(207, 19);
			this->label15->TabIndex = 24;
			this->label15->Text = L"C O M P R A   D A   M O E D A";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(454, 153);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(197, 19);
			this->label16->TabIndex = 25;
			this->label16->Text = L"- Será descontado na compra";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->BackColor = System::Drawing::Color::MediumAquamarine;
			this->label17->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->Location = System::Drawing::Point(684, 150);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(0, 19);
			this->label17->TabIndex = 26;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->Location = System::Drawing::Point(628, 65);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(53, 38);
			this->label18->TabIndex = 68;
			this->label18->Text = L"em \r\nmoeda";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Calibri", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label19->ForeColor = System::Drawing::Color::AliceBlue;
			this->label19->Location = System::Drawing::Point(12, 288);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(194, 19);
			this->label19->TabIndex = 28;
			this->label19->Text = L"V E N D A   D A   M O E D A ";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label20->Location = System::Drawing::Point(454, 19);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(188, 19);
			this->label20->TabIndex = 29;
			this->label20->Text = L"- Será descontado na venda";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label22->Location = System::Drawing::Point(684, 19);
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
			this->label23->Location = System::Drawing::Point(274, 17);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(26, 19);
			this->label23->TabIndex = 40;
			this->label23->Text = L"R$";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label24->Location = System::Drawing::Point(556, 68);
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
			this->label25->Location = System::Drawing::Point(398, 99);
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
			this->label26->Location = System::Drawing::Point(599, 99);
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
			this->label27->Location = System::Drawing::Point(388, 115);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(77, 19);
			this->label27->TabIndex = 41;
			this->label27->Text = L"em moeda";
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label28->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label28->Location = System::Drawing::Point(556, 159);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(26, 19);
			this->label28->TabIndex = 42;
			this->label28->Text = L"R$";
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label29->Location = System::Drawing::Point(443, 79);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(26, 19);
			this->label29->TabIndex = 43;
			this->label29->Text = L"R$";
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label30->Location = System::Drawing::Point(280, 158);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(20, 19);
			this->label30->TabIndex = 44;
			this->label30->Text = L"%";
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label31->Location = System::Drawing::Point(648, 153);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(26, 19);
			this->label31->TabIndex = 45;
			this->label31->Text = L"R$";
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label32->Location = System::Drawing::Point(367, 66);
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
			this->label33->Location = System::Drawing::Point(276, 19);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(20, 19);
			this->label33->TabIndex = 47;
			this->label33->Text = L"%";
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label34->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label34->Location = System::Drawing::Point(556, 124);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(26, 19);
			this->label34->TabIndex = 48;
			this->label34->Text = L"R$";
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label35->Location = System::Drawing::Point(648, 19);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(26, 19);
			this->label35->TabIndex = 49;
			this->label35->Text = L"R$";
			// 
			// label36
			// 
			this->label36->AutoSize = true;
			this->label36->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label36->Location = System::Drawing::Point(13, 197);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(345, 19);
			this->label36->TabIndex = 50;
			this->label36->Text = L"- Valorização da moeda para se ter o lucro desejado";
			// 
			// label37
			// 
			this->label37->AutoSize = true;
			this->label37->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label37->Location = System::Drawing::Point(558, 197);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(20, 19);
			this->label37->TabIndex = 51;
			this->label37->Text = L"%";
			// 
			// label38
			// 
			this->label38->AutoSize = true;
			this->label38->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label38->Location = System::Drawing::Point(596, 197);
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
			this->label39->Location = System::Drawing::Point(648, 115);
			this->label39->Name = L"label39";
			this->label39->Size = System::Drawing::Size(26, 19);
			this->label39->TabIndex = 70;
			this->label39->Text = L"R$";
			// 
			// label40
			// 
			this->label40->AutoSize = true;
			this->label40->BackColor = System::Drawing::Color::MediumAquamarine;
			this->label40->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label40->Location = System::Drawing::Point(684, 115);
			this->label40->Name = L"label40";
			this->label40->Size = System::Drawing::Size(0, 19);
			this->label40->TabIndex = 71;
			// 
			// label44
			// 
			this->label44->AutoSize = true;
			this->label44->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label44->Location = System::Drawing::Point(16, 55);
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
			this->label45->Location = System::Drawing::Point(16, 101);
			this->label45->Name = L"label45";
			this->label45->Size = System::Drawing::Size(149, 19);
			this->label45->TabIndex = 74;
			this->label45->Text = L"- Quantidade vendida";
			// 
			// label46
			// 
			this->label46->AutoSize = true;
			this->label46->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label46->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label46->Location = System::Drawing::Point(16, 174);
			this->label46->Name = L"label46";
			this->label46->Size = System::Drawing::Size(170, 19);
			this->label46->TabIndex = 75;
			this->label46->Text = L"- Lucro/Prejuízo líquido";
			// 
			// label50
			// 
			this->label50->AutoSize = true;
			this->label50->BackColor = System::Drawing::Color::MediumAquamarine;
			this->label50->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label50->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label50->Location = System::Drawing::Point(390, 174);
			this->label50->Name = L"label50";
			this->label50->Size = System::Drawing::Size(0, 19);
			this->label50->TabIndex = 76;
			// 
			// label51
			// 
			this->label51->AutoSize = true;
			this->label51->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label51->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label51->Location = System::Drawing::Point(349, 174);
			this->label51->Name = L"label51";
			this->label51->Size = System::Drawing::Size(26, 19);
			this->label51->TabIndex = 77;
			this->label51->Text = L"R$";
			// 
			// label54
			// 
			this->label54->AutoSize = true;
			this->label54->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label54->Location = System::Drawing::Point(362, 55);
			this->label54->Name = L"label54";
			this->label54->Size = System::Drawing::Size(26, 19);
			this->label54->TabIndex = 82;
			this->label54->Text = L"R$";
			// 
			// label55
			// 
			this->label55->AutoSize = true;
			this->label55->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label55->Location = System::Drawing::Point(362, 100);
			this->label55->Name = L"label55";
			this->label55->Size = System::Drawing::Size(26, 19);
			this->label55->TabIndex = 83;
			this->label55->Text = L"R$";
			// 
			// label56
			// 
			this->label56->AutoSize = true;
			this->label56->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label56->Location = System::Drawing::Point(16, 214);
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
			this->label57->Location = System::Drawing::Point(348, 214);
			this->label57->Name = L"label57";
			this->label57->Size = System::Drawing::Size(20, 19);
			this->label57->TabIndex = 87;
			this->label57->Text = L"%";
			// 
			// label58
			// 
			this->label58->AutoSize = true;
			this->label58->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label58->Location = System::Drawing::Point(386, 214);
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
			this->label59->Location = System::Drawing::Point(525, 88);
			this->label59->Name = L"label59";
			this->label59->Size = System::Drawing::Size(53, 38);
			this->label59->TabIndex = 91;
			this->label59->Text = L"em \r\nmoeda";
			// 
			// label60
			// 
			this->label60->AutoSize = true;
			this->label60->BackColor = System::Drawing::Color::MediumAquamarine;
			this->label60->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label60->Location = System::Drawing::Point(396, 136);
			this->label60->Name = L"label60";
			this->label60->Size = System::Drawing::Size(0, 19);
			this->label60->TabIndex = 92;
			// 
			// label61
			// 
			this->label61->AutoSize = true;
			this->label61->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label61->Location = System::Drawing::Point(309, 136);
			this->label61->Name = L"label61";
			this->label61->Size = System::Drawing::Size(77, 19);
			this->label61->TabIndex = 93;
			this->label61->Text = L"em moeda";
			// 
			// label62
			// 
			this->label62->AutoSize = true;
			this->label62->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label62->Location = System::Drawing::Point(548, 136);
			this->label62->Name = L"label62";
			this->label62->Size = System::Drawing::Size(26, 19);
			this->label62->TabIndex = 94;
			this->label62->Text = L"R$";
			// 
			// label63
			// 
			this->label63->AutoSize = true;
			this->label63->BackColor = System::Drawing::Color::MediumAquamarine;
			this->label63->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label63->Location = System::Drawing::Point(595, 136);
			this->label63->Name = L"label63";
			this->label63->Size = System::Drawing::Size(0, 19);
			this->label63->TabIndex = 95;
			// 
			// label65
			// 
			this->label65->AutoSize = true;
			this->label65->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label65->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label65->Location = System::Drawing::Point(530, 174);
			this->label65->Name = L"label65";
			this->label65->Size = System::Drawing::Size(43, 19);
			this->label65->TabIndex = 97;
			this->label65->Text = L"ou %";
			// 
			// label66
			// 
			this->label66->AutoSize = true;
			this->label66->BackColor = System::Drawing::Color::MediumAquamarine;
			this->label66->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label66->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label66->Location = System::Drawing::Point(595, 174);
			this->label66->Name = L"label66";
			this->label66->Size = System::Drawing::Size(0, 19);
			this->label66->TabIndex = 98;
			// 
			// comboBox1
			// 
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"porcentagem (%)", L"Reais (R$)" });
			this->comboBox1->Location = System::Drawing::Point(195, 60);
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
			this->comboBox2->Location = System::Drawing::Point(308, 76);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(121, 27);
			this->comboBox2->TabIndex = 66;
			this->comboBox2->Text = L"em Reais (R$)";
			this->comboBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox2_SelectedIndexChanged);
			// 
			// comboBox3
			// 
			this->comboBox3->BackColor = System::Drawing::Color::MediumAquamarine;
			this->comboBox3->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"em Reais (R$)", L"em moeda" });
			this->comboBox3->Location = System::Drawing::Point(195, 97);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(152, 27);
			this->comboBox3->TabIndex = 89;
			this->comboBox3->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox3_SelectedIndexChanged);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::MediumAquamarine;
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->label35);
			this->panel1->Controls->Add(this->label33);
			this->panel1->Controls->Add(this->label22);
			this->panel1->Controls->Add(this->label20);
			this->panel1->Controls->Add(this->textBox5);
			this->panel1->Location = System::Drawing::Point(21, 310);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(844, 57);
			this->panel1->TabIndex = 99;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel1_Paint);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::MediumAquamarine;
			this->panel2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel2->Controls->Add(this->textBox8);
			this->panel2->Controls->Add(this->comboBox3);
			this->panel2->Controls->Add(this->label66);
			this->panel2->Controls->Add(this->label65);
			this->panel2->Controls->Add(this->radioButton1);
			this->panel2->Controls->Add(this->label63);
			this->panel2->Controls->Add(this->label62);
			this->panel2->Controls->Add(this->label61);
			this->panel2->Controls->Add(this->label60);
			this->panel2->Controls->Add(this->label59);
			this->panel2->Controls->Add(this->label58);
			this->panel2->Controls->Add(this->label57);
			this->panel2->Controls->Add(this->label56);
			this->panel2->Controls->Add(this->textBox9);
			this->panel2->Controls->Add(this->label55);
			this->panel2->Controls->Add(this->textBox10);
			this->panel2->Controls->Add(this->label54);
			this->panel2->Controls->Add(this->label51);
			this->panel2->Controls->Add(this->label50);
			this->panel2->Controls->Add(this->label46);
			this->panel2->Controls->Add(this->label45);
			this->panel2->Controls->Add(this->label44);
			this->panel2->Location = System::Drawing::Point(21, 373);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(844, 253);
			this->panel2->TabIndex = 100;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::MediumAquamarine;
			this->panel3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel3->Controls->Add(this->textBox4);
			this->panel3->Controls->Add(this->comboBox1);
			this->panel3->Controls->Add(this->label38);
			this->panel3->Controls->Add(this->label37);
			this->panel3->Controls->Add(this->radioButton2);
			this->panel3->Controls->Add(this->label36);
			this->panel3->Controls->Add(this->label34);
			this->panel3->Controls->Add(this->label32);
			this->panel3->Controls->Add(this->label28);
			this->panel3->Controls->Add(this->label26);
			this->panel3->Controls->Add(this->textBox6);
			this->panel3->Controls->Add(this->label25);
			this->panel3->Controls->Add(this->label24);
			this->panel3->Controls->Add(this->label14);
			this->panel3->Controls->Add(this->label13);
			this->panel3->Controls->Add(this->label11);
			this->panel3->Controls->Add(this->label4);
			this->panel3->Controls->Add(this->label10);
			this->panel3->Controls->Add(this->label6);
			this->panel3->Controls->Add(this->label7);
			this->panel3->Location = System::Drawing::Point(21, 632);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(844, 234);
			this->panel3->TabIndex = 101;
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::MediumAquamarine;
			this->panel4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel4->Controls->Add(this->label1);
			this->panel4->Controls->Add(this->comboBox2);
			this->panel4->Controls->Add(this->label40);
			this->panel4->Controls->Add(this->textBox1);
			this->panel4->Controls->Add(this->label39);
			this->panel4->Controls->Add(this->textBox2);
			this->panel4->Controls->Add(this->label31);
			this->panel4->Controls->Add(this->textBox3);
			this->panel4->Controls->Add(this->label30);
			this->panel4->Controls->Add(this->textBox7);
			this->panel4->Controls->Add(this->label29);
			this->panel4->Controls->Add(this->label27);
			this->panel4->Controls->Add(this->label2);
			this->panel4->Controls->Add(this->label23);
			this->panel4->Controls->Add(this->label3);
			this->panel4->Controls->Add(this->label18);
			this->panel4->Controls->Add(this->label17);
			this->panel4->Controls->Add(this->label12);
			this->panel4->Controls->Add(this->label16);
			this->panel4->Location = System::Drawing::Point(21, 57);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(844, 194);
			this->panel4->TabIndex = 102;
			// 
			// errorProviderBox1
			// 
			this->errorProviderBox1->ContainerControl = this;
			// 
			// errorProviderBox2
			// 
			this->errorProviderBox2->ContainerControl = this;
			// 
			// errorProviderBox7
			// 
			this->errorProviderBox7->ContainerControl = this;
			// 
			// errorProviderBox3
			// 
			this->errorProviderBox3->ContainerControl = this;
			// 
			// errorProviderBox5
			// 
			this->errorProviderBox5->ContainerControl = this;
			// 
			// errorProviderBox4
			// 
			this->errorProviderBox4->ContainerControl = this;
			// 
			// errorProviderBox6
			// 
			this->errorProviderBox6->ContainerControl = this;
			// 
			// errorProviderBox8
			// 
			this->errorProviderBox8->ContainerControl = this;
			// 
			// errorProviderBox9
			// 
			this->errorProviderBox9->ContainerControl = this;
			// 
			// errorProviderBox10
			// 
			this->errorProviderBox10->ContainerControl = this;
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::MediumAquamarine;
			this->panel5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel5->Controls->Add(this->label8);
			this->panel5->Location = System::Drawing::Point(21, 872);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(844, 31);
			this->panel5->TabIndex = 103;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->AutoScrollMargin = System::Drawing::Size(2, 10);
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->ClientSize = System::Drawing::Size(903, 867);
			this->Controls->Add(this->panel5);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label19);
			this->Name = L"MyForm";
			this->ShowIcon = false;
			this->Text = L"Compra e Venda de Moeda Virtual - pequenos valores (não inclui I.R.)";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProviderBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProviderBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProviderBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProviderBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProviderBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProviderBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProviderBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProviderBox8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProviderBox9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProviderBox10))->EndInit();
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
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
		 limpaResultParciais(1);

		 if (comboBox2->SelectedIndex != 1) {
			 erroBox2 = imprimeErros(2, CAMPO_OBRIGATORIO);
			 erroBox7 = imprimeErros(7, "");
		 }
		 else {
			 erroBox2 = imprimeErros(2, "");
			 erroBox7 = imprimeErros(7, CAMPO_OBRIGATORIO);
		 }
		 limpaResultParciais(2);
		 limpaResultParciais(7);

		 erroBox3 = imprimeErros(3, "");
		 limpaResultParciais(3);

		 erroBox4 = imprimeErros(4, "");
		 limpaResultParciais(4);

		 erroBox5 = imprimeErros(5, "");
		 limpaResultParciais(5);

		 erroBox6 = imprimeErros(6, "");
		 limpaResultParciais(6);

		 if (radioButton1->Checked == true) {
			 erroBox8 = imprimeErros(8, CAMPO_OBRIGATORIO);
			 if (comboBox3->SelectedIndex == 1) {
				 erroBox9 = imprimeErros(9, "");
				 erroBox10 = imprimeErros(10, CAMPO_OBRIGATORIO);
			 }
			 else {
				 erroBox10 = imprimeErros(10, "");
				 erroBox9 = imprimeErros(9, CAMPO_OBRIGATORIO);
			 }
		 }
		 limpaResultParciais(8);
		 limpaResultParciais(9);
		 limpaResultParciais(10);

		 limpaResultFinais();
		 limpaResultFinais2();
	}

	System::Void radioButton1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		 limpaResultFinais();
		 habilitaRB1();
	}

	System::Void radioButton2_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		 limpaResultFinais2();
		 habilitaRB2();
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
		 limpaResultFinais();
		 limpaResultFinais2();

		 if (!String::IsNullOrEmpty(this->textBox1->Text)) { // checa se vazio
			 if (Regex::IsMatch(this->textBox1->Text, numero_real)) { //checa se numero real
				 if(Convert::ToDouble(this->textBox1->Text) > 0){
					moedaR = Convert::ToDouble(this->textBox1->Text);
					montanteR = checaTextBox(2, 12, moedaR, "{0,12:N5}");
					qtd_moeda = checaTextBox(7, 40, moedaR, "{0,12:N2}");
					qtd_reais = qtd_moeda * moedaR;
					taxaC = checaTextBox(3, 17, qtd_reais, "{0,12:N2}");
					lucro = checaTextBox(4, 25, qtd_reais, "{0,12:N2}");
					lucroR = checaTextBox(6, 26, qtd_reais, "{0,12:N5}");
				 }
			 }
		 }
	}

	System::Void textBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 double moedaR = 0;
		 double montanteR = 0;
		 double lucro = 0;
		 double lucroR = 0;
		 double taxaC = 0;

		 erroBox2 = inicializaErros_Resultados(2);

		 if (!String::IsNullOrEmpty(this->textBox2->Text)) { // checa se vazio
			 if (Regex::IsMatch(this->textBox2->Text, numero_real)) { //checa se numero real
				 if(Convert::ToDouble(this->textBox2->Text) > 0){
					montanteR = Convert::ToDouble(this->textBox2->Text);
					lucroR = checaTextBox(6, 26, montanteR, "{0,12:N5}");
					moedaR = checaTextBox(1, 12, montanteR, "{0,12:N5}");
					taxaC = checaTextBox(3, 17, montanteR, "{0,12:N2}");
					lucro = checaTextBox(4, 25, montanteR, "{0,12:N2}");
				 }
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
				 if (Convert::ToDouble(this->textBox3->Text)> 0) {
					 taxaC = Convert::ToDouble(this->textBox3->Text);
					 montanteR = checaTextBox(2, 17, taxaC, "{0,12:N2}");
					 qtd_reais = checaTextBox(7, 17, taxaC, "{0,12:N2}");
				 }
			 }
		 }
	}
	
	System::Void textBox4_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 double lucro = 0;
		 double montanteR = 0;
		 double qtd_reais = 0;

		 erroBox4 = inicializaErros_Resultados(4);

		 if (!String::IsNullOrEmpty(this->textBox4->Text)) {
			 if (Regex::IsMatch(this->textBox4->Text, numero_real)) {
				 if (Convert::ToDouble(this->textBox4->Text) > 0) {
					 lucro = Convert::ToDouble(this->textBox4->Text);
					 montanteR = checaTextBox(2, 25, lucro, "{0,12:N2}");
					 qtd_reais = checaTextBox(7, 25, lucro, "{0,12:N2}");
				 }
			 }
		 }
	}
	
	System::Void textBox5_TextChanged(System::Object^  sender, System::EventArgs^  e) {

		 erroBox5 = inicializaErros_Resultados(5);
		 limpaResultParciais(5);
		 /*
		 if (!String::IsNullOrEmpty(this->textBox5->Text)) {
			 if (Regex::IsMatch(this->textBox5->Text, numero_real)) {
				 if (Convert::ToDouble(this->textBox5->Text) > 0) {
					 limpaResultParciais(5);
				 }
			 }
		 }
		 */
	}
	
	System::Void textBox6_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 double lucroR = 0;
		 double montanteR = 0;
		 double qtd_reais = 0;

		 erroBox6 = inicializaErros_Resultados(6);

		 if (!String::IsNullOrEmpty(this->textBox6->Text)) {
			 if (Regex::IsMatch(this->textBox6->Text, numero_real)) {
				 if (Convert::ToDouble(this->textBox6->Text) > 0) {
					 lucroR = Convert::ToDouble(this->textBox6->Text);
					 montanteR = checaTextBox(2, 26, lucroR, "{0,12:N5}");
					 qtd_reais = checaTextBox(7, 26, lucroR, "{0,12:N5}");
				 }
			 }
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
				 if(Convert::ToDouble(this->textBox7->Text) > 0){
					qtd_moeda = Convert::ToDouble(this->textBox7->Text);
					moedaR = checaTextBox(1, 40, qtd_moeda, "{0,12:N2}");
					qtd_reais = moedaR * qtd_moeda;
					taxaC = checaTextBox(3, 17, qtd_reais, "{0,12:N2}");
					lucro = checaTextBox(4, 25, qtd_reais, "{0,12:N2}");
					lucroR = checaTextBox(6, 26, qtd_reais, "{0,12:N5}");
				 }
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
				 if (Convert::ToDouble(this->textBox8->Text) > 0) {
					 moedaV = Convert::ToDouble(this->textBox8->Text);
					 qtd_moedaV = checaTextBox(9, 60, moedaV, "{0,12:N5}");
					 qtd_reaisV = checaTextBox(10, 63, moedaV, "{0,12:N2}");
				 }
			 }
		 }
	}
	
	System::Void textBox9_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 double montanteV = 0;
		 double qtd_moedaV = 0;

		 erroBox9 = inicializaErros_Resultados(9);

		 if (!String::IsNullOrEmpty(this->textBox9->Text)) {
			 if (Regex::IsMatch(this->textBox9->Text, numero_real)) {
				 if(Convert::ToDouble(this->textBox9->Text) > 0){
					montanteV = Convert::ToDouble(this->textBox9->Text);
					qtd_moedaV = checaTextBox(8, 60, montanteV, "{0,12:N5}");
				 }
			 }
		 }
	}
	
	System::Void textBox10_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 double montanteVM = 0;
		 double qtd_reaisV = 0;

		 erroBox10 = inicializaErros_Resultados(10);

		 if (!String::IsNullOrEmpty(this->textBox10->Text)) {
			 if (Regex::IsMatch(this->textBox10->Text, numero_real)) {
				 if(Convert::ToDouble(this->textBox10->Text) > 0){
					 montanteVM = Convert::ToDouble(this->textBox10->Text);
					 qtd_reaisV = checaTextBox(8, 63, montanteVM, "{0,12:N2}");
				 }
			 }
		 }
	}
	
	System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {

		 if (radioButton2->Checked == true) {

			 limpaResultFinais();

			 if (comboBox1->SelectedIndex == 0) {
				 //limpa textBox6 e seus resultados parciais
				 habiDesabTextBox(0, 6);
				//habilita textBox4
				 habiDesabTextBox(1, 4);
			 }
			 if (comboBox1->SelectedIndex == 1) {
				 //limpa textBox4 e seus resultados parciais
				 habiDesabTextBox(0, 4);
				 //habilita textBox6
				 habiDesabTextBox(1, 6);
			 }
		 }
	}
	
	System::Void comboBox2_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		 if (comboBox2->SelectedIndex == 1) {
			 //limpa textBox2 e seus resultados parciais
			 //label12->Text = L"";
			 habiDesabTextBox(0, 2);
			 //habilita textBox7
			 habiDesabTextBox(1, 7);
		 }
		 else {
			 comboBox2->SelectedIndex = 0;
			 //limpa textBox7 e seus resultados parciais
			 //label40->Text = L"";
			 habiDesabTextBox(0, 7);
			 //habilita textBox2
			 habiDesabTextBox(1, 2);
		 }
	}
	
	System::Void comboBox3_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		 if (radioButton1->Checked == true) {
			 if (String::IsNullOrEmpty(this->textBox8->Text)) {
				 erroBox8 = imprimeErros(8, CAMPO_OBRIGATORIO);
			 }

			 if (comboBox3->SelectedIndex == 1) {
				 //limpa textBox9 e seus resultados parciais
				 habiDesabTextBox(0, 9);
				 //habilita textBox10
				 habiDesabTextBox(1, 10);
			 }
			 else {
				 comboBox3->SelectedIndex = 0;
				 //limpa textBox10 e seus resultados parciais
				 habiDesabTextBox(0, 10);
				 //habilita textBox9
				 habiDesabTextBox(1, 9);
			 }
		 }
	}
	
	System::Void habiDesabTextBox(int hd, int box_number) {
		switch (box_number) {
		case 2:
			if (hd == 0) { // desabilita textBox2
				textBox2->Enabled = false;
				textBox2->BackColor = System::Drawing::Color::MediumAquamarine;
				textBox2->Text = "";
				erroBox2 = imprimeErros(2, "");
				limpaResultParciais(2);
			}
			else { //habilita
				textBox2->Enabled = true;
				textBox2->BackColor = System::Drawing::SystemColors::Window;
				if (String::IsNullOrEmpty(this->textBox2->Text)) {
					erroBox2 = imprimeErros(2, CAMPO_OBRIGATORIO);
				}
			}
			break;
		case 4:
			if (hd == 0) { // desabilita textBox4
				textBox4->Enabled = false;
				textBox4->BackColor = System::Drawing::Color::MediumAquamarine;
				textBox4->Text = "";
				erroBox4 = imprimeErros(4, "");
				limpaResultParciais(4);
			}
			else { //habilita
				textBox4->Enabled = true;
				textBox4->BackColor = System::Drawing::SystemColors::Window;
			}
			break;
		case 6:
			if (hd == 0) { // desabilita textBox6
				textBox6->Enabled = false;
				textBox6->BackColor = System::Drawing::Color::MediumAquamarine;
				textBox6->Text = "";
				erroBox6 = imprimeErros(6, "");
				limpaResultParciais(6);
			}
			else { //habilita
				textBox6->Enabled = true;
				textBox6->BackColor = System::Drawing::SystemColors::Window;
			}
			break;
		case 7:
			if (hd == 0) { // desabilita textBox7
				textBox7->Enabled = false;
				textBox7->BackColor = System::Drawing::Color::MediumAquamarine;
				textBox7->Text = "";
				erroBox7 = imprimeErros(7, "");
				limpaResultParciais(7);
			}
			else { //habilita
				textBox7->Enabled = true;
				textBox7->BackColor = System::Drawing::SystemColors::Window;
				if (String::IsNullOrEmpty(this->textBox7->Text)) {
					erroBox7 = imprimeErros(7, CAMPO_OBRIGATORIO);
				}
			}
			break;
		case 8:
			if (hd == 0) { // desabilita textBox8
				textBox8->Text = L"";
				textBox8->Enabled = false;
				textBox8->BackColor = System::Drawing::Color::MediumAquamarine;
				erroBox8 = imprimeErros(8, "");
				limpaResultParciais(8);
			}
			else { //habilita
				textBox8->Enabled = true;
				textBox8->BackColor = System::Drawing::SystemColors::Window;
				erroBox8 = imprimeErros(8, CAMPO_OBRIGATORIO);
			}
			break;
		case 9:
			if (hd == 0) { // desabilita textBox9
				textBox9->Text = L"";
				textBox9->Enabled = false;
				textBox9->BackColor = System::Drawing::Color::MediumAquamarine;
				erroBox9 = imprimeErros(9, "");
				limpaResultParciais(9);
			}
			else { //habilita
				textBox9->Enabled = true;
				textBox9->BackColor = System::Drawing::SystemColors::Window;
				if (String::IsNullOrEmpty(this->textBox9->Text)) {
					erroBox9 = imprimeErros(9, CAMPO_OBRIGATORIO);
				}
			}
			break;
		case 10:
			if (hd == 0) { // desabilita textBox10
				textBox10->Text = L"";
				textBox10->Enabled = false;
				textBox10->BackColor = System::Drawing::Color::MediumAquamarine;
				erroBox10 = imprimeErros(10, "");
				limpaResultParciais(10);
			}
			else { //habilita
				textBox10->Enabled = true;
				textBox10->BackColor = System::Drawing::SystemColors::Window;
				if (String::IsNullOrEmpty(this->textBox10->Text)) {
					erroBox10 = imprimeErros(10, CAMPO_OBRIGATORIO);
				}
			}
			break;
		default:
			break;
		}
		return;
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
		 case 10:
			 label63->Text = L"";
			 break;	 
		 default:
			 break;
		 }
		 return;
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
					 errorProviderBox1->Clear();
					 limpaResultParciais(1);
					 limpaResultFinais();
					 break;
				 case 2:
					 errorProviderBox2->Clear();
					 limpaResultParciais(2);
					 limpaResultFinais();
					 break;
				 case 3:
					 errorProviderBox3->Clear();
					 limpaResultParciais(3);
					 limpaResultFinais();
					 break;
				 case 4:
					 errorProviderBox4->Clear();
					 limpaResultParciais(4);
					 limpaResultFinais();
					 break;
				 case 5:
					 errorProviderBox5->Clear();
					 limpaResultParciais(5);
					 limpaResultFinais();
					 break;
				 case 6:
					 errorProviderBox6->Clear();
					 limpaResultParciais(6);
					 limpaResultFinais();
					 break;
				 case 7:
					 errorProviderBox7->Clear();
					 limpaResultParciais(7);
					 limpaResultFinais();
					 break;
				 case 8:
					 errorProviderBox8->Clear();
					 limpaResultParciais(8);
					 limpaResultFinais2();
					 break;
				 case 9:
					 errorProviderBox9->Clear();
					 limpaResultParciais(9);
					 limpaResultFinais2();
					 break;
				 case 10:
					 errorProviderBox10->Clear();
					 limpaResultParciais(10);
					 limpaResultFinais2();
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
			 if (msg->CompareTo("") == 0) { errorProviderBox1->Clear(); }
			 else { errorProviderBox1->SetError(textBox1, msg); }
			 break;
		 case 2:
			 if (msg->CompareTo("") == 0) { errorProviderBox2->Clear(); }
			 else { errorProviderBox2->SetError(textBox2, msg); }
			 break;
		 case 3:
			 if (msg->CompareTo("") == 0) { errorProviderBox3->Clear(); }
			 else { errorProviderBox3->SetError(textBox3, msg); }
			 break;
		 case 4:
			 if (msg->CompareTo("") == 0) { errorProviderBox4->Clear(); }
			 else { errorProviderBox4->SetError(textBox4, msg); }
			 break;
		 case 5:
			 if (msg->CompareTo("") == 0) { errorProviderBox5->Clear(); }
			 else { errorProviderBox5->SetError(textBox5, msg); }
			 break;
		 case 6:
			 if (msg->CompareTo("") == 0) { errorProviderBox6->Clear(); }
			 else { errorProviderBox6->SetError(textBox6, msg); }
			 break;
		 case 7:
			 if (msg->CompareTo("") == 0) { errorProviderBox7->Clear(); }
			 else { errorProviderBox7->SetError(textBox7, msg); }
			 break;
		 case 8:
			 if (msg->CompareTo("") == 0) { errorProviderBox8->Clear(); }
			 else { errorProviderBox8->SetError(textBox8, msg); }
			 break;
		 case 9:
			 if (msg->CompareTo("") == 0) { errorProviderBox9->Clear(); }
			 else { errorProviderBox9->SetError(textBox9, msg); }
			 break;
		 case 10:
			 if (msg->CompareTo("") == 0) { errorProviderBox10->Clear(); }
			 else { errorProviderBox10->SetError(textBox10, msg); }
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
		 double M, TV, TC, MR, MV, DV, DC, LP, QMV = 0;
		 double valorVenda = 0;
		 double valorizacao = 0;
		 double Lucro = 0;

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
			 }
		 }
		 else {
			 if (this->comboBox2->SelectedIndex != 1) {
				 erroBox2 = imprimeErros(2, CAMPO_OBRIGATORIO);
			 }
		 }

		 if (!String::IsNullOrEmpty(this->textBox7->Text)) {
			 if ((erroBox7 == 0)&&(erroBox1 == 0)) {
				 M = Convert::ToDouble(this->label40->Text);
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

		 if (radioButton1->Checked == true) {
			 if (!String::IsNullOrEmpty(this->textBox8->Text) && (erroBox8 == 0)) {
				 if (erroBox1 == 0) {
					 MV = Convert::ToDouble(this->textBox8->Text);
					 valorizacao = ((MV - MR) * 100) / MR;
				 }
			 }
			 else {
				 erroBox8 = imprimeErros(8, CAMPO_OBRIGATORIO);
			 }

			 if (!String::IsNullOrEmpty(this->textBox9->Text)) {
				 if ((erroBox1 == 0)&&(erroBox8==0)&&(erroBox9 == 0)) {
					 valorVenda = Convert::ToDouble(this->textBox9->Text);
					 QMV = Convert::ToDouble(this->label60->Text);
				 }
			 }
			 else {
				 if (this->comboBox3->SelectedIndex != 1) {
					 erroBox9 = imprimeErros(9, CAMPO_OBRIGATORIO);
				 }
			 }

			 if (!String::IsNullOrEmpty(this->textBox10->Text)) {
				 if ((erroBox1 == 0)&&(erroBox8==0)&&(erroBox10 == 0)) {
					 valorVenda = Convert::ToDouble(this->label63->Text);
					 QMV = Convert::ToDouble(this->textBox10->Text);
				 }
			 }
			 else {
				 if (this->comboBox3->SelectedIndex == 1) {
					 erroBox10 = imprimeErros(10, CAMPO_OBRIGATORIO);
				 }
			 }
		 }
		 if ((erroBox1 == 0) && (erroBox2 == 0) && (erroBox3 == 0) &&
			 (erroBox5 == 0) && (erroBox7 == 0) && (erroBox8 == 0) &&
			 (erroBox9 == 0) && (erroBox10 == 0)) {
			 label8->Text = L"";
			 DV = (TV / 100)*valorVenda;
			 DC = (TC / 100) * M;
			 Lucro = ((MV-MR)*QMV) - DC - DV;
			 LP = ((100*(((MV - MR)*QMV) - DC - DV)) / (QMV*MR));
			 if (TV!=0) {
				 label22->Text = System::String::Format("{0,12:N2}", DV);
			 }
			 label50->Text = System::String::Format("{0,12:N2}", Lucro);
			 label66->Text = System::String::Format("{0,12:N5}", LP);
			 label58->Text = System::String::Format("{0,12:N5}", valorizacao);
			 if (Lucro < 0) {
				 this->label50->ForeColor = System::Drawing::Color::Red;
				 this->label66->ForeColor = System::Drawing::Color::Red;
			 }
			 else {
				 this->label50->ForeColor = System::Drawing::SystemColors::ControlText;
				 this->label66->ForeColor = System::Drawing::SystemColors::ControlText;
			 }
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

	System::Void habilitaRB1() {

		 //habilitaRB1
		 if (radioButton1->Checked == true) {
			 radioButton2->Checked = false;

			 //limpa comboBox1
			 comboBox1->Text = "";
			 comboBox1->BackColor = System::Drawing::Color::MediumAquamarine;
			 comboBox1->Enabled = false;

             //limpa textBox4 e seus resultados parciais
			 habiDesabTextBox(0, 4);
			 //limpa textBox6 e seus resultados parciais
			 habiDesabTextBox(0, 6);

			 //habilita default
			 comboBox3->Text = "em Reais (R$)";
			 comboBox3->BackColor = System::Drawing::SystemColors::Window;
			 comboBox3->Enabled = true;
			 //habilita textBox8
			 habiDesabTextBox(1, 8);
			 //habilita textBox8
			 habiDesabTextBox(1, 9);				 
		 }
		 else {
			 habilitaRB2();
		 }
	}
				 
	System::Void habilitaRB2() {

		 //habilitaRB2
		 if (radioButton2->Checked == true) {
			 radioButton1->Checked = false;

			 //limpa comboBox3
			 comboBox3->Text = "               ";
			 comboBox3->BackColor = System::Drawing::Color::MediumAquamarine;
			 comboBox3->Enabled = false;

			 //limpa textBox8 e seus resultados parciais
			 habiDesabTextBox(0, 8);
			 //limpa textBox9 e seus resultados parciais
			 habiDesabTextBox(0, 9);
			 //limpa textBox10 e seus resultados parciais
			 habiDesabTextBox(0, 10);


			 //habilita default
			 comboBox1->Enabled = true;
			 comboBox1->Text = "em porcentagem (%)";
			 comboBox1->BackColor = System::Drawing::SystemColors::Window;
			 //habilita textBox4
			 habiDesabTextBox(1, 4);
		 }
		 else {
			 habilitaRB1();
		 }
	}
	
	System::Void panel1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
	}
	
	System::Void textBox1_Validating(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e) {

		 erroBox1 = imprimeErros(1, "");

		 if (String::IsNullOrEmpty(this->textBox1->Text)) { // checa se vazio
			erroBox1 = imprimeErros(1, CAMPO_OBRIGATORIO);
		 }
		 else {
			 if (!Regex::IsMatch(this->textBox1->Text, numero_real)) {
				 erroBox1 = imprimeErros(1, FORMATO_MOEDA);
			 }
			 else {
				 if ((Convert::ToDouble(this->textBox1->Text)) == 0) {
					 erroBox1 = imprimeErros(1, CAMPO_NAO_ZERO);
				 }
				 if ((Convert::ToDouble(this->textBox1->Text)) < 0) {
					 erroBox1 = imprimeErros(1, POSITIVO);
				 }
			 }
		 }
	}
	
	System::Void textBox2_Validating(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e) {

		 erroBox2 = imprimeErros(2, "");

		 if (String::IsNullOrEmpty(this->textBox2->Text)) {
			 if (this->comboBox2->SelectedIndex != 1) {
				 erroBox2 = imprimeErros(2, CAMPO_OBRIGATORIO);
			 }
		 }
		 else {
			 if (!Regex::IsMatch(this->textBox2->Text, numero_real)) {
				 erroBox2 = imprimeErros(2, FORMATO_MOEDA);
			 }
			 else {
				 if (Convert::ToDouble(this->textBox2->Text) == 0) {
					 erroBox2 = imprimeErros(2, CAMPO_NAO_ZERO);
				 }
				 if (Convert::ToDouble(this->textBox2->Text) < 0) {
					 erroBox2 = imprimeErros(2, POSITIVO);
				 }
			 }
		 }
	}
	
	System::Void textBox3_Validating(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e) {

		 erroBox3 = imprimeErros(3, "");

		 if (!String::IsNullOrEmpty(this->textBox3->Text)) {
			 if (!Regex::IsMatch(this->textBox3->Text, numero_real)) {
				 erroBox3 = imprimeErros(3, CAMPO_NUMERICO);
			 }
			 else {
				 if (Convert::ToDouble(this->textBox3->Text) < 0) {
					 erroBox3 = imprimeErros(3, POSITIVO);
				 }
			 }
		 }
	}
	
	System::Void textBox4_Validating(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e) {

		 erroBox4 = imprimeErros(4, "");

		 if (!String::IsNullOrEmpty(this->textBox4->Text)) {
			 if (!Regex::IsMatch(this->textBox4->Text, numero_real)) {
				 erroBox4 = imprimeErros(4, CAMPO_NUMERICO);
			 }
			 else {
				 if (Convert::ToDouble(this->textBox4->Text) < 0) {
					 erroBox4 = imprimeErros(4, POSITIVO);
				 }
			 }
		 }
	}

	System::Void textBox5_Validating(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e) {

		erroBox5 = imprimeErros(5, "");

		if (!String::IsNullOrEmpty(this->textBox5->Text)) {
			if (!Regex::IsMatch(this->textBox5->Text, numero_real)) {
				erroBox5 = imprimeErros(5, CAMPO_NUMERICO);
			}
			else {
				if (Convert::ToDouble(this->textBox5->Text) < 0) {
					erroBox5 = imprimeErros(5, POSITIVO);
				}
			}
		}
	}

	System::Void textBox6_Validating(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e) {

		 erroBox6 = imprimeErros(6, "");

		 if (!String::IsNullOrEmpty(this->textBox6->Text)) {
			 if (!Regex::IsMatch(this->textBox6->Text, numero_real)) {
				 erroBox6 = imprimeErros(6, FORMATO_MOEDA);
			 }
			 else {
				 if (Convert::ToDouble(this->textBox6->Text) < 0) {
					 erroBox6 = imprimeErros(6, POSITIVO);
				 }
			 }
		 }
	}

	System::Void textBox7_Validating(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e) {

		erroBox7 = imprimeErros(7, "");

		if (String::IsNullOrEmpty(this->textBox7->Text)) {
			if (this->comboBox2->SelectedIndex == 1) {
				erroBox7 = imprimeErros(7, CAMPO_OBRIGATORIO);
			}
		}
		else {
			if (!Regex::IsMatch(this->textBox7->Text, numero_real)) {
				erroBox7 = imprimeErros(7, CAMPO_NUMERICO);
			}
			else {
				if ((Convert::ToDouble(this->textBox7->Text)) == 0) {
					erroBox7 = imprimeErros(7, CAMPO_NAO_ZERO);
				}
				if (Convert::ToDouble(this->textBox7->Text) < 0) {
					erroBox7 = imprimeErros(7, POSITIVO);
				}
			}
		}
	}

	System::Void textBox8_Validating(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e) {

		 erroBox8 = imprimeErros(8, "");

		 if (String::IsNullOrEmpty(this->textBox8->Text)) {
			 if (radioButton1->Checked == true)  {
				 erroBox8 = imprimeErros(8, CAMPO_OBRIGATORIO);
			 }
		 }
		 else {
			 if (!Regex::IsMatch(this->textBox8->Text, numero_real)) {
				 erroBox8 = imprimeErros(8, FORMATO_MOEDA);
			 }
			 if (Convert::ToDouble(this->textBox8->Text) < 0) {
				 erroBox8 = imprimeErros(8, POSITIVO);
			 }
		 }
	}
	
	System::Void textBox9_Validating(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e) {
		 double valorC = 0;
		 double valorV = 0;

		 erroBox9 = imprimeErros(9, "");

		 if (String::IsNullOrEmpty(this->textBox9->Text)) {
			 if ((radioButton1->Checked == true) && (comboBox3->SelectedIndex != 1)) {
				 erroBox9 = imprimeErros(9, CAMPO_OBRIGATORIO);
			 }
		 }
		 else {
				if (!Regex::IsMatch(this->textBox9->Text, numero_real)) {
					erroBox9 = imprimeErros(9, FORMATO_MOEDA);
				}
				else {
					if (Convert::ToDouble(this->textBox9->Text) == 0) {
						erroBox9 = imprimeErros(9, CAMPO_NAO_ZERO);
					}
					else {
						if (Convert::ToDouble(this->textBox9->Text) < 0) {
							erroBox9 = imprimeErros(9, POSITIVO);
						}
						if (!String::IsNullOrEmpty(this->label12->Text)) {
							valorC = Convert::ToDouble(this->label12->Text);
						}
						if (!String::IsNullOrEmpty(this->textBox7->Text)) {
							valorC = Convert::ToDouble(this->textBox7->Text);
						}
						if (!String::IsNullOrEmpty(this->label60->Text)) {
							valorV = Convert::ToDouble(this->label60->Text);
							if (valorV > valorC) {
								erroBox9 = imprimeErros(9, VENDA_MAIORQ_COMPRA);
							}
						}
					}
				}
		 }
	}
	
	System::Void textBox10_Validating(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e) {
		 double valorV = 0;
		 double valorC = 0;

		 erroBox10 = imprimeErros(10, "");

		 if (String::IsNullOrEmpty(this->textBox10->Text)) {
			 if ((radioButton1->Checked == true) && (this->comboBox3->SelectedIndex == 1)) {
				 erroBox10 = imprimeErros(10, CAMPO_OBRIGATORIO);
			 }
		 }
		 else {
			 if (!Regex::IsMatch(this->textBox10->Text, numero_real)) {
				 erroBox10 = imprimeErros(10, CAMPO_NUMERICO);
			 }
			 else { 
				 if (Convert::ToDouble(this->textBox10->Text) == 0) {
					 erroBox10 = imprimeErros(10, CAMPO_NAO_ZERO);
				 }
				 else {
					 if (Convert::ToDouble(this->textBox10->Text) < 0) {
						 erroBox10 = imprimeErros(10, POSITIVO);
					 }
					 valorV = Convert::ToDouble(this->textBox10->Text);
					 if (!String::IsNullOrEmpty(this->label12->Text)) {
						 valorC = Convert::ToDouble(this->label12->Text);
					 }
					 if (!String::IsNullOrEmpty(this->textBox7->Text)) {
						 valorC = Convert::ToDouble(this->textBox7->Text);
					 }
					 if (valorV > valorC) {
						 erroBox10 = imprimeErros(10, VENDA_MAIORQ_COMPRA);
					 }
				 }
			 }
		 }
	}

	System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	};

}

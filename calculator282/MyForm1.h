#pragma once
#include <cstdlib>
#include "MyForm.h"

namespace calculator282 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		MyForm1(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
	private: float bir;
	private: char nir = ' ';
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ n;


		   bool c = false;
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button2;
	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ onedx;
	private: System::Windows::Forms::Button^ e;
	private: System::Windows::Forms::Button^ pi;
	private: System::Windows::Forms::Label^ ryu;
	private: System::Windows::Forms::Button^ C;
	private: System::Windows::Forms::Button^ ravno;
	private: System::Windows::Forms::Button^ zapitaya;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ plus;
	private: System::Windows::Forms::Button^ devit;
	private: System::Windows::Forms::Button^ vosem;
	private: System::Windows::Forms::Button^ sem;
	private: System::Windows::Forms::Button^ minis;
	private: System::Windows::Forms::Button^ shest;
	private: System::Windows::Forms::Button^ pat;
	private: System::Windows::Forms::Button^ chetr;
	private: System::Windows::Forms::Button^ umnojet;
	private: System::Windows::Forms::Button^ tre;
	private: System::Windows::Forms::Button^ dva;
	private: System::Windows::Forms::Button^ number;
	private: System::Windows::Forms::Button^ dileniye;
	private: System::Windows::Forms::Button^ prachent;
	private: System::Windows::Forms::Button^ pulusdileniyeninus;
	private: System::Windows::Forms::Button^ ac;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm1::typeid));
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->onedx = (gcnew System::Windows::Forms::Button());
			this->e = (gcnew System::Windows::Forms::Button());
			this->pi = (gcnew System::Windows::Forms::Button());
			this->ryu = (gcnew System::Windows::Forms::Label());
			this->C = (gcnew System::Windows::Forms::Button());
			this->ravno = (gcnew System::Windows::Forms::Button());
			this->zapitaya = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->plus = (gcnew System::Windows::Forms::Button());
			this->devit = (gcnew System::Windows::Forms::Button());
			this->vosem = (gcnew System::Windows::Forms::Button());
			this->sem = (gcnew System::Windows::Forms::Button());
			this->minis = (gcnew System::Windows::Forms::Button());
			this->shest = (gcnew System::Windows::Forms::Button());
			this->pat = (gcnew System::Windows::Forms::Button());
			this->chetr = (gcnew System::Windows::Forms::Button());
			this->umnojet = (gcnew System::Windows::Forms::Button());
			this->tre = (gcnew System::Windows::Forms::Button());
			this->dva = (gcnew System::Windows::Forms::Button());
			this->number = (gcnew System::Windows::Forms::Button());
			this->dileniye = (gcnew System::Windows::Forms::Button());
			this->prachent = (gcnew System::Windows::Forms::Button());
			this->pulusdileniyeninus = (gcnew System::Windows::Forms::Button());
			this->ac = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->n = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Gold;
			this->button2->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button2->Location = System::Drawing::Point(80, 136);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(64, 55);
			this->button2->TabIndex = 248;
			this->button2->Text = L"|x|";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm1::x_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Gold;
			this->button1->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button1->Location = System::Drawing::Point(150, 136);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(64, 55);
			this->button1->TabIndex = 247;
			this->button1->Text = L"√(х)";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm1::koren_Click);
			// 
			// onedx
			// 
			this->onedx->BackColor = System::Drawing::Color::Gold;
			this->onedx->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->onedx->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->onedx->ForeColor = System::Drawing::SystemColors::ControlText;
			this->onedx->Location = System::Drawing::Point(150, 197);
			this->onedx->Name = L"onedx";
			this->onedx->Size = System::Drawing::Size(64, 55);
			this->onedx->TabIndex = 246;
			this->onedx->Text = L"1/x";
			this->onedx->UseVisualStyleBackColor = false;
			this->onedx->Click += gcnew System::EventHandler(this, &MyForm1::onedx_Click);
			// 
			// e
			// 
			this->e->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(74)), static_cast<System::Int32>(static_cast<System::Byte>(74)),
				static_cast<System::Int32>(static_cast<System::Byte>(74)));
			this->e->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->e->Font = (gcnew System::Drawing::Font(L"Calibri", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->e->ForeColor = System::Drawing::SystemColors::ControlText;
			this->e->Location = System::Drawing::Point(10, 196);
			this->e->Name = L"e";
			this->e->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->e->Size = System::Drawing::Size(63, 55);
			this->e->TabIndex = 245;
			this->e->Text = L"e";
			this->e->UseVisualStyleBackColor = false;
			this->e->Click += gcnew System::EventHandler(this, &MyForm1::e_Click);
			// 
			// pi
			// 
			this->pi->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(74)), static_cast<System::Int32>(static_cast<System::Byte>(74)),
				static_cast<System::Int32>(static_cast<System::Byte>(74)));
			this->pi->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->pi->Font = (gcnew System::Drawing::Font(L"Calibri", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->pi->ForeColor = System::Drawing::SystemColors::ControlText;
			this->pi->Location = System::Drawing::Point(80, 197);
			this->pi->Name = L"pi";
			this->pi->Size = System::Drawing::Size(64, 55);
			this->pi->TabIndex = 244;
			this->pi->Text = L"π";
			this->pi->UseVisualStyleBackColor = false;
			this->pi->Click += gcnew System::EventHandler(this, &MyForm1::pi_Click);
			// 
			// ryu
			// 
			this->ryu->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ryu->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ryu->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->ryu->Location = System::Drawing::Point(8, 5);
			this->ryu->Name = L"ryu";
			this->ryu->Size = System::Drawing::Size(275, 58);
			this->ryu->TabIndex = 243;
			this->ryu->Text = L"0";
			this->ryu->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// C
			// 
			this->C->BackColor = System::Drawing::Color::LightGray;
			this->C->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->C->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->C->ForeColor = System::Drawing::SystemColors::ControlText;
			this->C->Location = System::Drawing::Point(150, 75);
			this->C->Name = L"C";
			this->C->Size = System::Drawing::Size(64, 55);
			this->C->TabIndex = 242;
			this->C->Text = L"C";
			this->C->UseVisualStyleBackColor = false;
			this->C->Click += gcnew System::EventHandler(this, &MyForm1::C_Click);
			// 
			// ravno
			// 
			this->ravno->BackColor = System::Drawing::Color::Lime;
			this->ravno->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->ravno->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ravno->ForeColor = System::Drawing::SystemColors::ControlText;
			this->ravno->Location = System::Drawing::Point(219, 440);
			this->ravno->Name = L"ravno";
			this->ravno->Size = System::Drawing::Size(64, 55);
			this->ravno->TabIndex = 241;
			this->ravno->Text = L"=";
			this->ravno->UseVisualStyleBackColor = false;
			this->ravno->Click += gcnew System::EventHandler(this, &MyForm1::ravno_Click);
			// 
			// zapitaya
			// 
			this->zapitaya->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(110)), static_cast<System::Int32>(static_cast<System::Byte>(117)),
				static_cast<System::Int32>(static_cast<System::Byte>(129)));
			this->zapitaya->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->zapitaya->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->zapitaya->ForeColor = System::Drawing::SystemColors::ControlText;
			this->zapitaya->Location = System::Drawing::Point(149, 441);
			this->zapitaya->Name = L"zapitaya";
			this->zapitaya->Size = System::Drawing::Size(64, 55);
			this->zapitaya->TabIndex = 240;
			this->zapitaya->Text = L",";
			this->zapitaya->UseVisualStyleBackColor = false;
			this->zapitaya->Click += gcnew System::EventHandler(this, &MyForm1::zapitaya_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button4->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button4->Location = System::Drawing::Point(10, 440);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(133, 55);
			this->button4->TabIndex = 239;
			this->button4->Text = L"0";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm1::number_Click);
			// 
			// plus
			// 
			this->plus->BackColor = System::Drawing::Color::Gold;
			this->plus->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->plus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->plus->ForeColor = System::Drawing::SystemColors::ControlText;
			this->plus->Location = System::Drawing::Point(219, 379);
			this->plus->Name = L"plus";
			this->plus->Size = System::Drawing::Size(64, 55);
			this->plus->TabIndex = 238;
			this->plus->Text = L"+";
			this->plus->UseVisualStyleBackColor = false;
			this->plus->Click += gcnew System::EventHandler(this, &MyForm1::plus_Click);
			// 
			// devit
			// 
			this->devit->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->devit->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->devit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->devit->ForeColor = System::Drawing::SystemColors::ControlText;
			this->devit->Location = System::Drawing::Point(150, 379);
			this->devit->Name = L"devit";
			this->devit->Size = System::Drawing::Size(64, 55);
			this->devit->TabIndex = 237;
			this->devit->Text = L"9";
			this->devit->UseVisualStyleBackColor = false;
			this->devit->Click += gcnew System::EventHandler(this, &MyForm1::number_Click);
			// 
			// vosem
			// 
			this->vosem->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->vosem->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->vosem->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->vosem->ForeColor = System::Drawing::SystemColors::ControlText;
			this->vosem->Location = System::Drawing::Point(80, 379);
			this->vosem->Name = L"vosem";
			this->vosem->Size = System::Drawing::Size(64, 55);
			this->vosem->TabIndex = 236;
			this->vosem->Text = L"8";
			this->vosem->UseVisualStyleBackColor = false;
			this->vosem->Click += gcnew System::EventHandler(this, &MyForm1::number_Click);
			// 
			// sem
			// 
			this->sem->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->sem->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->sem->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->sem->ForeColor = System::Drawing::SystemColors::ControlText;
			this->sem->Location = System::Drawing::Point(10, 379);
			this->sem->Name = L"sem";
			this->sem->Size = System::Drawing::Size(64, 55);
			this->sem->TabIndex = 235;
			this->sem->Text = L"7";
			this->sem->UseVisualStyleBackColor = false;
			this->sem->Click += gcnew System::EventHandler(this, &MyForm1::number_Click);
			// 
			// minis
			// 
			this->minis->BackColor = System::Drawing::Color::Gold;
			this->minis->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->minis->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->minis->Location = System::Drawing::Point(219, 318);
			this->minis->Name = L"minis";
			this->minis->Size = System::Drawing::Size(64, 55);
			this->minis->TabIndex = 234;
			this->minis->Text = L"-";
			this->minis->UseVisualStyleBackColor = false;
			this->minis->Click += gcnew System::EventHandler(this, &MyForm1::minis_Click);
			// 
			// shest
			// 
			this->shest->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->shest->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->shest->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->shest->ForeColor = System::Drawing::SystemColors::ControlText;
			this->shest->Location = System::Drawing::Point(149, 318);
			this->shest->Name = L"shest";
			this->shest->Size = System::Drawing::Size(64, 55);
			this->shest->TabIndex = 233;
			this->shest->Text = L"6";
			this->shest->UseVisualStyleBackColor = false;
			this->shest->Click += gcnew System::EventHandler(this, &MyForm1::number_Click);
			// 
			// pat
			// 
			this->pat->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->pat->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->pat->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->pat->ForeColor = System::Drawing::SystemColors::ControlText;
			this->pat->Location = System::Drawing::Point(79, 318);
			this->pat->Name = L"pat";
			this->pat->Size = System::Drawing::Size(64, 55);
			this->pat->TabIndex = 232;
			this->pat->Text = L"5";
			this->pat->UseVisualStyleBackColor = false;
			this->pat->Click += gcnew System::EventHandler(this, &MyForm1::number_Click);
			// 
			// chetr
			// 
			this->chetr->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->chetr->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->chetr->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->chetr->ForeColor = System::Drawing::SystemColors::ControlText;
			this->chetr->Location = System::Drawing::Point(10, 318);
			this->chetr->Name = L"chetr";
			this->chetr->Size = System::Drawing::Size(63, 55);
			this->chetr->TabIndex = 231;
			this->chetr->Text = L"4";
			this->chetr->UseVisualStyleBackColor = false;
			this->chetr->Click += gcnew System::EventHandler(this, &MyForm1::number_Click);
			// 
			// umnojet
			// 
			this->umnojet->BackColor = System::Drawing::Color::Gold;
			this->umnojet->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->umnojet->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->umnojet->Location = System::Drawing::Point(219, 257);
			this->umnojet->Name = L"umnojet";
			this->umnojet->Size = System::Drawing::Size(64, 55);
			this->umnojet->TabIndex = 230;
			this->umnojet->Text = L"*";
			this->umnojet->UseVisualStyleBackColor = false;
			this->umnojet->Click += gcnew System::EventHandler(this, &MyForm1::umnojet_Click);
			// 
			// tre
			// 
			this->tre->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->tre->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->tre->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tre->ForeColor = System::Drawing::SystemColors::ControlText;
			this->tre->Location = System::Drawing::Point(150, 257);
			this->tre->Name = L"tre";
			this->tre->Size = System::Drawing::Size(64, 55);
			this->tre->TabIndex = 229;
			this->tre->Text = L"3";
			this->tre->UseVisualStyleBackColor = false;
			this->tre->Click += gcnew System::EventHandler(this, &MyForm1::number_Click);
			// 
			// dva
			// 
			this->dva->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->dva->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->dva->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->dva->ForeColor = System::Drawing::SystemColors::ControlText;
			this->dva->Location = System::Drawing::Point(80, 257);
			this->dva->Name = L"dva";
			this->dva->Size = System::Drawing::Size(64, 55);
			this->dva->TabIndex = 228;
			this->dva->Text = L"2";
			this->dva->UseVisualStyleBackColor = false;
			this->dva->Click += gcnew System::EventHandler(this, &MyForm1::number_Click);
			// 
			// number
			// 
			this->number->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->number->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->number->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->number->ForeColor = System::Drawing::SystemColors::ControlText;
			this->number->Location = System::Drawing::Point(10, 257);
			this->number->Name = L"number";
			this->number->Size = System::Drawing::Size(64, 55);
			this->number->TabIndex = 227;
			this->number->Text = L"1";
			this->number->UseVisualStyleBackColor = false;
			this->number->Click += gcnew System::EventHandler(this, &MyForm1::number_Click);
			// 
			// dileniye
			// 
			this->dileniye->BackColor = System::Drawing::Color::Gold;
			this->dileniye->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->dileniye->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->dileniye->ForeColor = System::Drawing::SystemColors::ControlText;
			this->dileniye->Location = System::Drawing::Point(220, 195);
			this->dileniye->Name = L"dileniye";
			this->dileniye->Size = System::Drawing::Size(64, 55);
			this->dileniye->TabIndex = 226;
			this->dileniye->Text = L"/";
			this->dileniye->UseVisualStyleBackColor = false;
			this->dileniye->Click += gcnew System::EventHandler(this, &MyForm1::dileniye_Click);
			// 
			// prachent
			// 
			this->prachent->BackColor = System::Drawing::Color::Gold;
			this->prachent->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->prachent->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->prachent->ForeColor = System::Drawing::SystemColors::ControlText;
			this->prachent->Location = System::Drawing::Point(220, 136);
			this->prachent->Name = L"prachent";
			this->prachent->Size = System::Drawing::Size(64, 55);
			this->prachent->TabIndex = 225;
			this->prachent->Text = L"%";
			this->prachent->UseVisualStyleBackColor = false;
			this->prachent->Click += gcnew System::EventHandler(this, &MyForm1::prachent_Click);
			// 
			// pulusdileniyeninus
			// 
			this->pulusdileniyeninus->BackColor = System::Drawing::Color::LightGray;
			this->pulusdileniyeninus->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->pulusdileniyeninus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->pulusdileniyeninus->ForeColor = System::Drawing::SystemColors::ControlText;
			this->pulusdileniyeninus->Location = System::Drawing::Point(81, 75);
			this->pulusdileniyeninus->Name = L"pulusdileniyeninus";
			this->pulusdileniyeninus->Size = System::Drawing::Size(63, 55);
			this->pulusdileniyeninus->TabIndex = 224;
			this->pulusdileniyeninus->Text = L"+/-";
			this->pulusdileniyeninus->UseVisualStyleBackColor = false;
			this->pulusdileniyeninus->Click += gcnew System::EventHandler(this, &MyForm1::pulusdileniyeninus_Click);
			// 
			// ac
			// 
			this->ac->BackColor = System::Drawing::Color::LightGray;
			this->ac->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->ac->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ac->ForeColor = System::Drawing::SystemColors::ControlText;
			this->ac->Location = System::Drawing::Point(9, 74);
			this->ac->Name = L"ac";
			this->ac->Size = System::Drawing::Size(65, 55);
			this->ac->TabIndex = 223;
			this->ac->Text = L"AC";
			this->ac->UseVisualStyleBackColor = false;
			this->ac->Click += gcnew System::EventHandler(this, &MyForm1::ac_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Gold;
			this->button3->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button3->Location = System::Drawing::Point(10, 136);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(64, 55);
			this->button3->TabIndex = 249;
			this->button3->Text = L"x²";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm1::x2_Click);
			// 
			// n
			// 
			this->n->BackColor = System::Drawing::Color::Gold;
			this->n->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->n->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->n->ForeColor = System::Drawing::SystemColors::ControlText;
			this->n->Location = System::Drawing::Point(220, 75);
			this->n->Name = L"n";
			this->n->Size = System::Drawing::Size(64, 55);
			this->n->TabIndex = 250;
			this->n->Text = L"n!";
			this->n->UseVisualStyleBackColor = false;
			this->n->Click += gcnew System::EventHandler(this, &MyForm1::n_Click);
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(56)), static_cast<System::Int32>(static_cast<System::Byte>(56)),
				static_cast<System::Int32>(static_cast<System::Byte>(56)));
			this->ClientSize = System::Drawing::Size(293, 501);
			this->Controls->Add(this->n);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->onedx);
			this->Controls->Add(this->e);
			this->Controls->Add(this->pi);
			this->Controls->Add(this->ryu);
			this->Controls->Add(this->C);
			this->Controls->Add(this->ravno);
			this->Controls->Add(this->zapitaya);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->plus);
			this->Controls->Add(this->devit);
			this->Controls->Add(this->vosem);
			this->Controls->Add(this->sem);
			this->Controls->Add(this->minis);
			this->Controls->Add(this->shest);
			this->Controls->Add(this->pat);
			this->Controls->Add(this->chetr);
			this->Controls->Add(this->umnojet);
			this->Controls->Add(this->tre);
			this->Controls->Add(this->dva);
			this->Controls->Add(this->number);
			this->Controls->Add(this->dileniye);
			this->Controls->Add(this->prachent);
			this->Controls->Add(this->pulusdileniyeninus);
			this->Controls->Add(this->ac);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"MyForm1";
			this->Text = L"Calculator 2.8: Engineering";
			this->ResumeLayout(false);

		}
#pragma endregion
private: System::Void ac_Click(System::Object^ sender, System::EventArgs^ e) {
	this->ryu->Text = "0";
	this->ryu->ForeColor = Color::White;
	this->bir = 0;
	this->nir = ' ';
	this->c = false;
}
		   private: System::Void pulusdileniyeninus_Click(System::Object^ sender, System::EventArgs^ e) {
			   float num1 = System::Convert::ToDouble(this->ryu->Text);
			   num1 *= -1;
			   this->ryu->Text = System::Convert::ToString(num1);

		   }
private: System::Void zapitaya_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ yuk = this->ryu->Text;
	if (!yuk->Contains(","))
		this->ryu->Text = yuk + ",";
}
	   private: System::Void x_Click(System::Object^ sender, System::EventArgs^ e) {
		   float b = Convert::ToDouble(this->ryu->Text);
		   this->ryu->Text = Convert::ToString(abs(b));
	   }
private: System::Void C_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->ryu->Text == "1" || this->ryu->Text == "2" || this->ryu->Text == "3"
		|| this->ryu->Text == "4" || this->ryu->Text == "5" || this->ryu->Text == "6"
		|| this->ryu->Text == "7" || this->ryu->Text == "8" || this->ryu->Text == "9")
		this->ryu->Text = "0";
	else {
		String^ home = this->ryu->Text;
		if (home == "0") {
			home = home;
		}
		else {
			if (this->ryu->Text->Length > 0)
				this->ryu->Text = this->ryu->Text->Remove(this->ryu->Text->Length - 1, 1);

		}
	}

}
		   private: System::Void number_Click(System::Object^ sender, System::EventArgs^ e) {
			   this->ryu->ForeColor = Color::White;
			   Button^ button = safe_cast<Button^>(sender);
			   if (this->ryu->Text == "0" || c) {
				   this->ryu->Text = button->Text;
				   c = false;
			   }
			   else {
				   this->ryu->Text = this->ryu->Text + button->Text;
			   }
		   };
private: System::Void pi_Click(System::Object^ sender, System::EventArgs^ e) {
	this->ryu->Text = "3.14";
}
private: System::Void e_Click(System::Object^ sender, System::EventArgs^ e) {
	this->ryu->Text = "2.71";
}
	   private: System::Void matimatika(char opr) {
		   this->bir = System::Convert::ToDouble(this->ryu->Text);
		   this->nir = opr;
		   this->ryu->Text = "0";
	   };
private: System::Void prachent_Click(System::Object^ sender, System::EventArgs^ e) {
	matimatika('%');
}
private: System::Void dileniye_Click(System::Object^ sender, System::EventArgs^ e) {
	matimatika('/');
}
private: System::Void onedx_Click(System::Object^ sender, System::EventArgs^ e) {
	matimatika('=');
}
private: System::Void umnojet_Click(System::Object^ sender, System::EventArgs^ e) {
	matimatika('*');
}
private: System::Void minis_Click(System::Object^ sender, System::EventArgs^ e) {
	matimatika('-');
}
private: System::Void plus_Click(System::Object^ sender, System::EventArgs^ e) {
	matimatika('+');
}
private: System::Void koren_Click(System::Object^ sender, System::EventArgs^ e) {
	matimatika('^');
}
private: System::Void ravno_Click(System::Object^ sender, System::EventArgs^ e) {
	if (nir == ' ')
		return;


	float doit = System::Convert::ToDouble(this->ryu->Text);
	float res;
	switch (this->nir) {
	case '+': res = this->bir + doit; break;
	case '-': res = this->bir - doit; break;
	case '*': res = this->bir * doit; break;
	case '%':
		if (doit == 0) {
			res = 0;
			this->ryu->ForeColor = Color::DarkRed;
			MessageBox::Show(this, "ERROR!!", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else
			res = this->bir * doit / 100; break;
	case '=': if (doit == 0) {
		res = 0;
		this->ryu->ForeColor = Color::DarkRed;
		MessageBox::Show(this, "ERROR!!", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
			else {
		res = 1.0 / doit;
	}; break;
	case '^':
		if (doit == 0) {
			res = 0;
			this->ryu->ForeColor = Color::DarkRed;
			MessageBox::Show(this, "ERROR!!", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else
			res = doit / 2; break;
	case '/':
		if (doit == 0) {
			res = 0;
			this->ryu->ForeColor = Color::DarkRed;
			MessageBox::Show(this, "ERROR!!", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else
			res = this->bir / doit; break;
	}
	c = true;
	this->ryu->Text = System::Convert::ToString(res);
}
private: System::Void x2_Click(System::Object^ sender, System::EventArgs^ e) {
	int homeInt = Convert::ToInt32(this->ryu->Text);
	this->ryu->Text = Convert::ToString(homeInt*homeInt);
}

private: System::Void n_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		int n = Convert::ToInt32(this->ryu->Text);
		if (n == 0) {
			long factorial = 1;
			this->ryu->Text = Convert::ToString(factorial) + "!";
		}
		else {
			long factorial = 1;

			for (int i = 1; i <= n; ++i) {
				factorial *= i;
				this->ryu->Text = Convert::ToString(factorial) + "!";
			}
		}
	}
	catch (FormatException^) {
		this->ryu->Text = "Error";
	}
}

};
}

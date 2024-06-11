#pragma once
#include "MyForm1.h"

namespace calculator282 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
	private: float bir;
	private: char nir = ' ';
		   bool c = false;
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ fro;
	protected:
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->fro = (gcnew System::Windows::Forms::Button());
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
			this->SuspendLayout();
			// 
			// fro
			// 
			this->fro->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(56)), static_cast<System::Int32>(static_cast<System::Byte>(56)),
				static_cast<System::Int32>(static_cast<System::Byte>(56)));
			this->fro->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->fro->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->fro->ForeColor = System::Drawing::SystemColors::ControlText;
			this->fro->Location = System::Drawing::Point(12, 9);
			this->fro->Name = L"fro";
			this->fro->Size = System::Drawing::Size(24, 24);
			this->fro->TabIndex = 216;
			this->fro->Text = L"∑";
			this->fro->UseVisualStyleBackColor = false;
			this->fro->Click += gcnew System::EventHandler(this, &MyForm::fro_Click);
			// 
			// e
			// 
			this->e->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(74)), static_cast<System::Int32>(static_cast<System::Byte>(74)),
				static_cast<System::Int32>(static_cast<System::Byte>(74)));
			this->e->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->e->Font = (gcnew System::Drawing::Font(L"Calibri", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->e->ForeColor = System::Drawing::SystemColors::ControlText;
			this->e->Location = System::Drawing::Point(13, 139);
			this->e->Name = L"e";
			this->e->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->e->Size = System::Drawing::Size(63, 55);
			this->e->TabIndex = 215;
			this->e->Text = L"e";
			this->e->UseVisualStyleBackColor = false;
			this->e->Click += gcnew System::EventHandler(this, &MyForm::e_Click);
			// 
			// pi
			// 
			this->pi->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(74)), static_cast<System::Int32>(static_cast<System::Byte>(74)),
				static_cast<System::Int32>(static_cast<System::Byte>(74)));
			this->pi->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->pi->Font = (gcnew System::Drawing::Font(L"Calibri", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->pi->ForeColor = System::Drawing::SystemColors::ControlText;
			this->pi->Location = System::Drawing::Point(83, 140);
			this->pi->Name = L"pi";
			this->pi->Size = System::Drawing::Size(64, 55);
			this->pi->TabIndex = 214;
			this->pi->Text = L"π";
			this->pi->UseVisualStyleBackColor = false;
			this->pi->Click += gcnew System::EventHandler(this, &MyForm::pi_Click);
			// 
			// ryu
			// 
			this->ryu->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ryu->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ryu->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->ryu->Location = System::Drawing::Point(12, 9);
			this->ryu->Name = L"ryu";
			this->ryu->Size = System::Drawing::Size(275, 58);
			this->ryu->TabIndex = 213;
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
			this->C->Location = System::Drawing::Point(184, 78);
			this->C->Name = L"C";
			this->C->Size = System::Drawing::Size(100, 55);
			this->C->TabIndex = 212;
			this->C->Text = L"C";
			this->C->UseVisualStyleBackColor = false;
			this->C->Click += gcnew System::EventHandler(this, &MyForm::back_Click);
			// 
			// ravno
			// 
			this->ravno->BackColor = System::Drawing::Color::Lime;
			this->ravno->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->ravno->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ravno->ForeColor = System::Drawing::SystemColors::ControlText;
			this->ravno->Location = System::Drawing::Point(223, 383);
			this->ravno->Name = L"ravno";
			this->ravno->Size = System::Drawing::Size(64, 55);
			this->ravno->TabIndex = 211;
			this->ravno->Text = L"=";
			this->ravno->UseVisualStyleBackColor = false;
			this->ravno->Click += gcnew System::EventHandler(this, &MyForm::ravno_Click);
			// 
			// zapitaya
			// 
			this->zapitaya->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(110)), static_cast<System::Int32>(static_cast<System::Byte>(117)),
				static_cast<System::Int32>(static_cast<System::Byte>(129)));
			this->zapitaya->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->zapitaya->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->zapitaya->ForeColor = System::Drawing::SystemColors::ControlText;
			this->zapitaya->Location = System::Drawing::Point(152, 384);
			this->zapitaya->Name = L"zapitaya";
			this->zapitaya->Size = System::Drawing::Size(64, 55);
			this->zapitaya->TabIndex = 210;
			this->zapitaya->Text = L",";
			this->zapitaya->UseVisualStyleBackColor = false;
			this->zapitaya->Click += gcnew System::EventHandler(this, &MyForm::zapitaya_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button4->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button4->Location = System::Drawing::Point(13, 383);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(133, 55);
			this->button4->TabIndex = 209;
			this->button4->Text = L"0";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::number_Click);
			// 
			// plus
			// 
			this->plus->BackColor = System::Drawing::Color::Gold;
			this->plus->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->plus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->plus->ForeColor = System::Drawing::SystemColors::ControlText;
			this->plus->Location = System::Drawing::Point(223, 322);
			this->plus->Name = L"plus";
			this->plus->Size = System::Drawing::Size(64, 55);
			this->plus->TabIndex = 208;
			this->plus->Text = L"+";
			this->plus->UseVisualStyleBackColor = false;
			this->plus->Click += gcnew System::EventHandler(this, &MyForm::plus_Click);
			// 
			// devit
			// 
			this->devit->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->devit->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->devit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->devit->ForeColor = System::Drawing::SystemColors::ControlText;
			this->devit->Location = System::Drawing::Point(153, 322);
			this->devit->Name = L"devit";
			this->devit->Size = System::Drawing::Size(64, 55);
			this->devit->TabIndex = 207;
			this->devit->Text = L"9";
			this->devit->UseVisualStyleBackColor = false;
			this->devit->Click += gcnew System::EventHandler(this, &MyForm::number_Click);
			// 
			// vosem
			// 
			this->vosem->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->vosem->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->vosem->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->vosem->ForeColor = System::Drawing::SystemColors::ControlText;
			this->vosem->Location = System::Drawing::Point(83, 322);
			this->vosem->Name = L"vosem";
			this->vosem->Size = System::Drawing::Size(64, 55);
			this->vosem->TabIndex = 206;
			this->vosem->Text = L"8";
			this->vosem->UseVisualStyleBackColor = false;
			this->vosem->Click += gcnew System::EventHandler(this, &MyForm::number_Click);
			// 
			// sem
			// 
			this->sem->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->sem->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->sem->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->sem->ForeColor = System::Drawing::SystemColors::ControlText;
			this->sem->Location = System::Drawing::Point(13, 322);
			this->sem->Name = L"sem";
			this->sem->Size = System::Drawing::Size(64, 55);
			this->sem->TabIndex = 205;
			this->sem->Text = L"7";
			this->sem->UseVisualStyleBackColor = false;
			this->sem->Click += gcnew System::EventHandler(this, &MyForm::number_Click);
			// 
			// minis
			// 
			this->minis->BackColor = System::Drawing::Color::Gold;
			this->minis->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->minis->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->minis->Location = System::Drawing::Point(222, 261);
			this->minis->Name = L"minis";
			this->minis->Size = System::Drawing::Size(64, 55);
			this->minis->TabIndex = 204;
			this->minis->Text = L"-";
			this->minis->UseVisualStyleBackColor = false;
			this->minis->Click += gcnew System::EventHandler(this, &MyForm::minis_Click);
			// 
			// shest
			// 
			this->shest->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->shest->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->shest->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->shest->ForeColor = System::Drawing::SystemColors::ControlText;
			this->shest->Location = System::Drawing::Point(152, 261);
			this->shest->Name = L"shest";
			this->shest->Size = System::Drawing::Size(64, 55);
			this->shest->TabIndex = 203;
			this->shest->Text = L"6";
			this->shest->UseVisualStyleBackColor = false;
			this->shest->Click += gcnew System::EventHandler(this, &MyForm::number_Click);
			// 
			// pat
			// 
			this->pat->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->pat->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->pat->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->pat->ForeColor = System::Drawing::SystemColors::ControlText;
			this->pat->Location = System::Drawing::Point(82, 261);
			this->pat->Name = L"pat";
			this->pat->Size = System::Drawing::Size(64, 55);
			this->pat->TabIndex = 202;
			this->pat->Text = L"5";
			this->pat->UseVisualStyleBackColor = false;
			this->pat->Click += gcnew System::EventHandler(this, &MyForm::number_Click);
			// 
			// chetr
			// 
			this->chetr->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->chetr->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->chetr->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->chetr->ForeColor = System::Drawing::SystemColors::ControlText;
			this->chetr->Location = System::Drawing::Point(13, 261);
			this->chetr->Name = L"chetr";
			this->chetr->Size = System::Drawing::Size(63, 55);
			this->chetr->TabIndex = 201;
			this->chetr->Text = L"4";
			this->chetr->UseVisualStyleBackColor = false;
			this->chetr->Click += gcnew System::EventHandler(this, &MyForm::number_Click);
			// 
			// umnojet
			// 
			this->umnojet->BackColor = System::Drawing::Color::Gold;
			this->umnojet->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->umnojet->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->umnojet->Location = System::Drawing::Point(223, 200);
			this->umnojet->Name = L"umnojet";
			this->umnojet->Size = System::Drawing::Size(64, 55);
			this->umnojet->TabIndex = 200;
			this->umnojet->Text = L"*";
			this->umnojet->UseVisualStyleBackColor = false;
			this->umnojet->Click += gcnew System::EventHandler(this, &MyForm::umnojet_Click);
			// 
			// tre
			// 
			this->tre->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->tre->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->tre->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tre->ForeColor = System::Drawing::SystemColors::ControlText;
			this->tre->Location = System::Drawing::Point(153, 200);
			this->tre->Name = L"tre";
			this->tre->Size = System::Drawing::Size(64, 55);
			this->tre->TabIndex = 199;
			this->tre->Text = L"3";
			this->tre->UseVisualStyleBackColor = false;
			this->tre->Click += gcnew System::EventHandler(this, &MyForm::number_Click);
			// 
			// dva
			// 
			this->dva->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->dva->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->dva->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->dva->ForeColor = System::Drawing::SystemColors::ControlText;
			this->dva->Location = System::Drawing::Point(83, 200);
			this->dva->Name = L"dva";
			this->dva->Size = System::Drawing::Size(64, 55);
			this->dva->TabIndex = 198;
			this->dva->Text = L"2";
			this->dva->UseVisualStyleBackColor = false;
			this->dva->Click += gcnew System::EventHandler(this, &MyForm::number_Click);
			// 
			// number
			// 
			this->number->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->number->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->number->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->number->ForeColor = System::Drawing::SystemColors::ControlText;
			this->number->Location = System::Drawing::Point(13, 200);
			this->number->Name = L"number";
			this->number->Size = System::Drawing::Size(64, 55);
			this->number->TabIndex = 197;
			this->number->Text = L"1";
			this->number->UseVisualStyleBackColor = false;
			this->number->Click += gcnew System::EventHandler(this, &MyForm::number_Click);
			// 
			// dileniye
			// 
			this->dileniye->BackColor = System::Drawing::Color::Gold;
			this->dileniye->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->dileniye->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->dileniye->ForeColor = System::Drawing::SystemColors::ControlText;
			this->dileniye->Location = System::Drawing::Point(222, 139);
			this->dileniye->Name = L"dileniye";
			this->dileniye->Size = System::Drawing::Size(64, 55);
			this->dileniye->TabIndex = 196;
			this->dileniye->Text = L"/";
			this->dileniye->UseVisualStyleBackColor = false;
			this->dileniye->Click += gcnew System::EventHandler(this, &MyForm::dileniye_Click);
			// 
			// prachent
			// 
			this->prachent->BackColor = System::Drawing::Color::Gold;
			this->prachent->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->prachent->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->prachent->ForeColor = System::Drawing::SystemColors::ControlText;
			this->prachent->Location = System::Drawing::Point(152, 140);
			this->prachent->Name = L"prachent";
			this->prachent->Size = System::Drawing::Size(64, 55);
			this->prachent->TabIndex = 195;
			this->prachent->Text = L"%";
			this->prachent->UseVisualStyleBackColor = false;
			this->prachent->Click += gcnew System::EventHandler(this, &MyForm::prachent_Click);
			// 
			// pulusdileniyeninus
			// 
			this->pulusdileniyeninus->BackColor = System::Drawing::Color::LightGray;
			this->pulusdileniyeninus->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->pulusdileniyeninus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->pulusdileniyeninus->ForeColor = System::Drawing::SystemColors::ControlText;
			this->pulusdileniyeninus->Location = System::Drawing::Point(115, 79);
			this->pulusdileniyeninus->Name = L"pulusdileniyeninus";
			this->pulusdileniyeninus->Size = System::Drawing::Size(63, 55);
			this->pulusdileniyeninus->TabIndex = 194;
			this->pulusdileniyeninus->Text = L"+/-";
			this->pulusdileniyeninus->UseVisualStyleBackColor = false;
			this->pulusdileniyeninus->Click += gcnew System::EventHandler(this, &MyForm::pulusdileniyeninus_Click);
			// 
			// ac
			// 
			this->ac->BackColor = System::Drawing::Color::LightGray;
			this->ac->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->ac->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ac->ForeColor = System::Drawing::SystemColors::ControlText;
			this->ac->Location = System::Drawing::Point(13, 78);
			this->ac->Name = L"ac";
			this->ac->Size = System::Drawing::Size(96, 55);
			this->ac->TabIndex = 193;
			this->ac->Text = L"AC";
			this->ac->UseVisualStyleBackColor = false;
			this->ac->Click += gcnew System::EventHandler(this, &MyForm::ac_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(56)), static_cast<System::Int32>(static_cast<System::Byte>(56)),
				static_cast<System::Int32>(static_cast<System::Byte>(56)));
			this->ClientSize = System::Drawing::Size(300, 447);
			this->Controls->Add(this->fro);
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
			this->Name = L"MyForm";
			this->Text = L"Calculator 2.8: Usual";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void fro_Click(System::Object^ sender, System::EventArgs^ e) {
		MyForm1^ f2 = gcnew MyForm1();
		f2->Show();
		MyForm::Hide();
	}
	private: System::Void ac_Click(System::Object^ sender, System::EventArgs^ e) {		this->ryu->Text = "0";
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
	private: System::Void back_Click(System::Object^ sender, System::EventArgs^ e) {
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
	private: System::Void e_Click(System::Object^ sender, System::EventArgs^ e) {
		this->ryu->Text = "2.71";
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
	private: System::Void umnojet_Click(System::Object^ sender, System::EventArgs^ e) {
		matimatika('*');
	}
	private: System::Void minis_Click(System::Object^ sender, System::EventArgs^ e) {
		matimatika('-');
	}
	private: System::Void plus_Click(System::Object^ sender, System::EventArgs^ e) {
		matimatika('+');
	}
	private: System::Void zapitaya_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ yuk = this->ryu->Text;
		if (!yuk->Contains(","))
			this->ryu->Text = yuk + ",";
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
	};
}

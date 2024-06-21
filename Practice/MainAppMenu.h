#pragma once

#include <Windows.h>
#include <stdio.h>
#include <locale.h>
#include "BaseForm.h"
#include "AdminMode.h"
#include "Description.h"

int admin = 0;

namespace Practice {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MainAppMenu
	/// </summary>
	public ref class MainAppMenu : public System::Windows::Forms::Form
	{
	public:
		MainAppMenu(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MainAppMenu()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ Mode;
	private: System::Windows::Forms::Button^ ChangeModeButton;
	private: System::Windows::Forms::Button^ DescriptionButton;
	private: System::Windows::Forms::Button^ BaseButton;
	private: System::Windows::Forms::Button^ GameButton;
	private: System::Windows::Forms::Button^ AdminModeButton;
	private: System::Windows::Forms::Button^ ExitButton;
	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Mode = (gcnew System::Windows::Forms::Label());
			this->ChangeModeButton = (gcnew System::Windows::Forms::Button());
			this->DescriptionButton = (gcnew System::Windows::Forms::Button());
			this->BaseButton = (gcnew System::Windows::Forms::Button());
			this->GameButton = (gcnew System::Windows::Forms::Button());
			this->AdminModeButton = (gcnew System::Windows::Forms::Button());
			this->ExitButton = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->label1->Location = System::Drawing::Point(192, 27);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(182, 29);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Главное меню";
			// 
			// Mode
			// 
			this->Mode->AutoSize = true;
			this->Mode->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->Mode->Location = System::Drawing::Point(413, 9);
			this->Mode->Name = L"Mode";
			this->Mode->Size = System::Drawing::Size(188, 20);
			this->Mode->TabIndex = 1;
			this->Mode->Text = L"Режим пользователя";
			// 
			// ChangeModeButton
			// 
			this->ChangeModeButton->Location = System::Drawing::Point(460, 32);
			this->ChangeModeButton->Name = L"ChangeModeButton";
			this->ChangeModeButton->Size = System::Drawing::Size(141, 28);
			this->ChangeModeButton->TabIndex = 2;
			this->ChangeModeButton->Text = L"Выйти из режима";
			this->ChangeModeButton->UseVisualStyleBackColor = true;
			this->ChangeModeButton->Visible = false;
			this->ChangeModeButton->Click += gcnew System::EventHandler(this, &MainAppMenu::ChangeModeButton_Click);
			// 
			// DescriptionButton
			// 
			this->DescriptionButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->DescriptionButton->Location = System::Drawing::Point(13, 13);
			this->DescriptionButton->Name = L"DescriptionButton";
			this->DescriptionButton->Size = System::Drawing::Size(92, 29);
			this->DescriptionButton->TabIndex = 3;
			this->DescriptionButton->Text = L"Справка";
			this->DescriptionButton->UseVisualStyleBackColor = true;
			this->DescriptionButton->Click += gcnew System::EventHandler(this, &MainAppMenu::DescriptionButton_Click);
			// 
			// BaseButton
			// 
			this->BaseButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->BaseButton->Location = System::Drawing::Point(146, 111);
			this->BaseButton->Name = L"BaseButton";
			this->BaseButton->Size = System::Drawing::Size(290, 41);
			this->BaseButton->TabIndex = 4;
			this->BaseButton->Text = L"Перейти к базе";
			this->BaseButton->UseVisualStyleBackColor = true;
			this->BaseButton->Click += gcnew System::EventHandler(this, &MainAppMenu::BaseButton_Click);
			// 
			// GameButton
			// 
			this->GameButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->GameButton->Location = System::Drawing::Point(146, 195);
			this->GameButton->Name = L"GameButton";
			this->GameButton->Size = System::Drawing::Size(290, 41);
			this->GameButton->TabIndex = 5;
			this->GameButton->Text = L"Игра \"Столицы стран\"";
			this->GameButton->UseVisualStyleBackColor = true;
			// 
			// AdminModeButton
			// 
			this->AdminModeButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->AdminModeButton->Location = System::Drawing::Point(146, 268);
			this->AdminModeButton->Name = L"AdminModeButton";
			this->AdminModeButton->Size = System::Drawing::Size(290, 41);
			this->AdminModeButton->TabIndex = 6;
			this->AdminModeButton->Text = L"Вход в режим администратора";
			this->AdminModeButton->UseVisualStyleBackColor = true;
			this->AdminModeButton->Click += gcnew System::EventHandler(this, &MainAppMenu::AdminModeButton_Click);
			// 
			// ExitButton
			// 
			this->ExitButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->ExitButton->Location = System::Drawing::Point(146, 345);
			this->ExitButton->Name = L"ExitButton";
			this->ExitButton->Size = System::Drawing::Size(290, 41);
			this->ExitButton->TabIndex = 7;
			this->ExitButton->Text = L"Выход из программы";
			this->ExitButton->UseVisualStyleBackColor = true;
			this->ExitButton->Click += gcnew System::EventHandler(this, &MainAppMenu::ExitButton_Click);
			// 
			// MainAppMenu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(613, 524);
			this->Controls->Add(this->ExitButton);
			this->Controls->Add(this->AdminModeButton);
			this->Controls->Add(this->GameButton);
			this->Controls->Add(this->BaseButton);
			this->Controls->Add(this->DescriptionButton);
			this->Controls->Add(this->ChangeModeButton);
			this->Controls->Add(this->Mode);
			this->Controls->Add(this->label1);
			this->Activated += gcnew System::EventHandler(this, &MainAppMenu::MainAppMenu_Activated);
			this->Name = L"MainAppMenu";
			this->Text = L"Главное меню";
			this->ResumeLayout(false);
			this->PerformLayout();
		}
#pragma endregion
	private: System::Void DescriptionButton_Click(System::Object^ sender, System::EventArgs^ e) {
		Description^ form = gcnew(Description);
		form->ShowDialog();
	}
	private: System::Void ExitButton_Click(System::Object^ sender, System::EventArgs^ e) {
		exit(0);
	}
	private: System::Void BaseButton_Click(System::Object^ sender, System::EventArgs^ e) {
		BaseForm^ form = gcnew(BaseForm);
		form->ShowDialog();
	}
	private: System::Void AdminModeButton_Click(System::Object^ sender, System::EventArgs^ e) {
		AdminMode^ form = gcnew(AdminMode);
		form->ShowDialog();
	}
	private: System::Void ChangeModeButton_Click(System::Object^ sender, System::EventArgs^ e) {
		admin = 0;
		this->ChangeModeButton->Visible = false;
		this->AdminModeButton->Enabled = true;
		this->Mode->Text = L"Режим пользователя";
		this->Mode->Location = System::Drawing::Point(310, 9);

	}
	private: System::Void MainAppMenu_Activated(System::Object^ sender, System::EventArgs^ e) {
		if (admin == 1) {
			this->AdminModeButton->Enabled = false;
			this->Mode->Text = L"Режим администратора";
			this->Mode->Location = System::Drawing::Point(290, 9);
			this->ChangeModeButton->Visible = true;
		}
	}
	};
}

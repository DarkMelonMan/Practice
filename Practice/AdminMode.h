#pragma once
#define PASSWORD L"125861" // пароль администратора

extern int admin;

namespace Practice {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для AdminMode
	/// </summary>
	public ref class AdminMode : public System::Windows::Forms::Form
	{
	public:
		AdminMode(void)
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
		~AdminMode()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Label^ InputPasswordLabel;
	private: System::Windows::Forms::Button^ OkButton;
	private: System::Windows::Forms::TextBox^ PasswordInput;
	private: System::Windows::Forms::Button^ CancelButton;
	private: System::Windows::Forms::Label^ Info;





	protected:

	private:
		/// <summary>
		/// Требуется переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Обязательный метод для поддержки конструктора - не изменяйте
		/// содержимое данного метода при помощи редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(AdminMode::typeid));
			this->InputPasswordLabel = (gcnew System::Windows::Forms::Label());
			this->OkButton = (gcnew System::Windows::Forms::Button());
			this->PasswordInput = (gcnew System::Windows::Forms::TextBox());
			this->CancelButton = (gcnew System::Windows::Forms::Button());
			this->Info = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// InputPasswordLabel
			// 
			this->InputPasswordLabel->AutoSize = true;
			this->InputPasswordLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->InputPasswordLabel->Location = System::Drawing::Point(21, 50);
			this->InputPasswordLabel->Name = L"InputPasswordLabel";
			this->InputPasswordLabel->Size = System::Drawing::Size(268, 20);
			this->InputPasswordLabel->TabIndex = 3;
			this->InputPasswordLabel->Text = L"Введите пароль администратора";
			this->InputPasswordLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Info
			// 
			this->Info->AutoSize = true;
			this->Info->BackColor = System::Drawing::SystemColors::ControlLight;
			this->Info->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->Info->Location = System::Drawing::Point(20, 149);
			this->Info->Name = L"Info";
			this->Info->Size = System::Drawing::Size(265, 15);
			this->Info->TabIndex = 9;
			this->Info->Text = L"Неправильный ввод. Повторите попытку ещё раз.";
			this->Info->Visible = false;
			// 
			// OkButton
			// 
			this->OkButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->OkButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->OkButton->Location = System::Drawing::Point(79, 114);
			this->OkButton->Name = L"OkButton";
			this->OkButton->Size = System::Drawing::Size(73, 26);
			this->OkButton->TabIndex = 6;
			this->OkButton->TabStop = false;
			this->OkButton->Text = L"OK";
			this->OkButton->UseVisualStyleBackColor = true;
			this->OkButton->Click += gcnew System::EventHandler(this, &AdminMode::OkButton_Click);
			// 
			// PasswordInput
			// 
			this->PasswordInput->Location = System::Drawing::Point(45, 84);
			this->PasswordInput->MaxLength = 25;
			this->PasswordInput->Name = L"PasswordInput";
			this->PasswordInput->Size = System::Drawing::Size(217, 20);
			this->PasswordInput->TabIndex = 8;
			this->PasswordInput->UseSystemPasswordChar = true;
			// 
			// CancelButton
			// 
			this->CancelButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->CancelButton->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->CancelButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->CancelButton->Location = System::Drawing::Point(158, 114);
			this->CancelButton->Name = L"CancelButton";
			this->CancelButton->Size = System::Drawing::Size(73, 26);
			this->CancelButton->TabIndex = 10;
			this->CancelButton->TabStop = false;
			this->CancelButton->Text = L"Отмена";
			this->CancelButton->UseVisualStyleBackColor = true;
			this->CancelButton->Click += gcnew System::EventHandler(this, &AdminMode::CancelButton_Click);
			// 
			// AdminMode
			// 
			this->AcceptButton = this->OkButton;
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->CancelButton = this->CancelButton;
			this->ClientSize = System::Drawing::Size(306, 204);
			this->Controls->Add(this->Info);
			this->Controls->Add(this->CancelButton);
			this->Controls->Add(this->PasswordInput);
			this->Controls->Add(this->OkButton);
			this->Controls->Add(this->InputPasswordLabel);
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(322, 243);
			this->MinimizeBox = false;
			this->MinimumSize = System::Drawing::Size(322, 243);
			this->Name = L"AdminMode";
			this->ShowIcon = false;
			this->ShowInTaskbar = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Ввод пароля администратора";
			this->TopMost = true;
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void OkButton_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->PasswordInput->Text == PASSWORD) //проверка введённого пароля при нажатии ОК
		{
			admin = 1; //отметить глобальной меткой
			Close(); //закрыть форму
		}
		else
		{
			admin = 0; //отметить глобальной меткой
			this->Info->Visible = true; //показать сообщение о неправильном вводе
		}
	}
	private: System::Void CancelButton_Click(System::Object^ sender, System::EventArgs^ e) { //отмена и выход из формы
		Close(); //закрыть форму
	}
	};
}

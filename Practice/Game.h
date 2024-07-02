#pragma once
#define BEST_TIME "bestTime.txt"

namespace Practice {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Сводка для Game
	/// </summary>
	public ref class Game : public System::Windows::Forms::Form
	{
	public:
		Game(void)
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
		~Game()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::TextBox^ TimeTextBox;

	private: System::Windows::Forms::TextBox^ BestTimeTextBox;



	private: System::Windows::Forms::Button^ CloseButton;
	private: System::ComponentModel::IContainer^ components;
	
	int tenthsOfSecondsElapsed;
	int matchesFound;
	int bestTime;
	bool lose;
	const int GAMETIME = 300;
	const int EXTRASECOND = 100;
	array<String^>^ hiddenEmojis = gcnew array<String^>(16);
	array<Button^>^ buttons = gcnew array<Button^>(16);
	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->TimeTextBox = (gcnew System::Windows::Forms::TextBox());
			this->BestTimeTextBox = (gcnew System::Windows::Forms::TextBox());
			this->CloseButton = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->button1->Location = System::Drawing::Point(-3, -1);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(125, 125);
			this->button1->TabIndex = 0;
			this->button1->Text = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Game::button_MouseDown);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->button2->Location = System::Drawing::Point(119, -1);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(125, 125);
			this->button2->TabIndex = 1;
			this->button2->Text = L"button2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Game::button_MouseDown);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->button3->Location = System::Drawing::Point(241, -1);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(125, 125);
			this->button3->TabIndex = 2;
			this->button3->Text = L"button3";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Game::button_MouseDown);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->button4->Location = System::Drawing::Point(363, -1);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(125, 125);
			this->button4->TabIndex = 3;
			this->button4->Text = L"button4";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Game::button_MouseDown);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->button5->Location = System::Drawing::Point(363, 120);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(125, 125);
			this->button5->TabIndex = 7;
			this->button5->Text = L"button5";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Game::button_MouseDown);
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->button6->Location = System::Drawing::Point(241, 120);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(125, 125);
			this->button6->TabIndex = 6;
			this->button6->Text = L"button6";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Game::button_MouseDown);
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->button7->Location = System::Drawing::Point(119, 120);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(125, 125);
			this->button7->TabIndex = 5;
			this->button7->Text = L"button7";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Game::button_MouseDown);
			// 
			// button8
			// 
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->button8->Location = System::Drawing::Point(-3, 120);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(125, 125);
			this->button8->TabIndex = 4;
			this->button8->Text = L"button8";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Game::button_MouseDown);
			// 
			// button9
			// 
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->button9->Location = System::Drawing::Point(363, 242);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(125, 125);
			this->button9->TabIndex = 11;
			this->button9->Text = L"button9";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Game::button_MouseDown);
			// 
			// button10
			// 
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->button10->Location = System::Drawing::Point(241, 242);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(125, 125);
			this->button10->TabIndex = 10;
			this->button10->Text = L"button10";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Game::button_MouseDown);
			// 
			// button11
			// 
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->button11->Location = System::Drawing::Point(119, 242);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(125, 125);
			this->button11->TabIndex = 9;
			this->button11->Text = L"button11";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Game::button_MouseDown);
			// 
			// button12
			// 
			this->button12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->button12->Location = System::Drawing::Point(-3, 242);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(125, 125);
			this->button12->TabIndex = 8;
			this->button12->Text = L"button12";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Game::button_MouseDown);
			// 
			// button13
			// 
			this->button13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->button13->Location = System::Drawing::Point(363, 364);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(125, 125);
			this->button13->TabIndex = 15;
			this->button13->Text = L"button13";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Game::button_MouseDown);
			// 
			// button14
			// 
			this->button14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->button14->Location = System::Drawing::Point(241, 364);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(125, 125);
			this->button14->TabIndex = 14;
			this->button14->Text = L"button14";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Game::button_MouseDown);
			// 
			// button15
			// 
			this->button15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->button15->Location = System::Drawing::Point(119, 364);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(125, 125);
			this->button15->TabIndex = 13;
			this->button15->Text = L"button15";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Game::button_MouseDown);
			// 
			// button16
			// 
			this->button16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->button16->Location = System::Drawing::Point(-3, 364);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(125, 125);
			this->button16->TabIndex = 12;
			this->button16->Text = L"button16";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Game::button_MouseDown);
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Tick += gcnew System::EventHandler(this, &Game::timer1_Tick);
			// 
			// TimeTextBox
			// 
			this->TimeTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->TimeTextBox->Location = System::Drawing::Point(-3, 486);
			this->TimeTextBox->Multiline = true;
			this->TimeTextBox->Name = L"TimeTextBox";
			this->TimeTextBox->ReadOnly = true;
			this->TimeTextBox->Size = System::Drawing::Size(307, 50);
			this->TimeTextBox->TabIndex = 16;
			this->TimeTextBox->Text = L"Прошло времени:";
			this->TimeTextBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->TimeTextBox->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Game::TimeTextBox_MouseDown);
			// 
			// BestTimeTextBox
			// 
			this->BestTimeTextBox->Location = System::Drawing::Point(303, 486);
			this->BestTimeTextBox->Multiline = true;
			this->BestTimeTextBox->Name = L"BestTimeTextBox";
			this->BestTimeTextBox->Size = System::Drawing::Size(185, 84);
			this->BestTimeTextBox->TabIndex = 17;
			// 
			// CloseButton
			// 
			this->CloseButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->CloseButton->Location = System::Drawing::Point(-3, 533);
			this->CloseButton->Name = L"CloseButton";
			this->CloseButton->Size = System::Drawing::Size(307, 37);
			this->CloseButton->TabIndex = 18;
			this->CloseButton->Text = L"Выйти из игры";
			this->CloseButton->UseVisualStyleBackColor = true;
			this->CloseButton->Click += gcnew System::EventHandler(this, &Game::CloseButton_Click);
			// 
			// Game
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(482, 568);
			this->Controls->Add(this->CloseButton);
			this->Controls->Add(this->BestTimeTextBox);
			this->Controls->Add(this->TimeTextBox);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"Game";
			this->Text = L"Game";
			this->Activated += gcnew System::EventHandler(this, &Game::Game_Activated);
			this->ResumeLayout(false);
			this->PerformLayout();

		}

#pragma endregion

		private: Void SetUpGame() {
			FileStream^ file = File::Exists(BEST_TIME) ? File::OpenWrite(BEST_TIME) : File::Create(BEST_TIME);
			file->Close();
			if (!Int32::TryParse(File::ReadAllText(BEST_TIME), bestTime))
				bestTime = 300;
			BestTimeTextBox->Text = (bestTime / 10).ToString("0с");
			lose = false;
			Random^ random = gcnew Random(); // UTF-16
			array<String^>^ allEmoji = { u8"\U0001F419", u8"\U0001F40D", u8"\U0001F98D", u8"\U0001F996", u8"\U0001F994", u8"\U0001F989", u8"\U0001F995", u8"\U0001F982", u8"\U0001F412", u8"\U0001F9A7", u8"\U0001F98F", u8"\U0001F988", u8"\U0001F40B", u8"\U0001F409", u8"\U0001F413", u8"\U0001F987", u8"\U0001F41E", u8"\U0001F577", u8"\U0001F420"};
			array<String^>^ animalEmoji = gcnew array<String^>(16);
			int j = 0;
			for (int i = 0; i < 8; i++) {
				int randIndex = -1;
				while (randIndex < 0 || allEmoji[randIndex] == "")
					randIndex = random->Next(allEmoji->Length);
				animalEmoji[j] = allEmoji[randIndex];
				j++;
				animalEmoji[j] = allEmoji[randIndex];
				j++;
				allEmoji[randIndex] = "";
			}
			int ind = 0;
			for each(Button^ button in buttons) {
				button->Visible = true;
				int index = random->Next(animalEmoji->Length);
				while (animalEmoji[index] == "")
					index = random->Next(animalEmoji->Length);
				String^ nextEmoji = animalEmoji[index];
				hiddenEmojis[ind] = nextEmoji;
				button->Text = "?";
				animalEmoji[index] = "";
				ind++;
			}
		tenthsOfSecondsElapsed = 0;
		matchesFound = 0;
	}

	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
		tenthsOfSecondsElapsed++;
		if (tenthsOfSecondsElapsed % EXTRASECOND == 0) {
			for (int i = 0; i < 16; i++){
				Button^ button = buttons[i];
				button->Text = hiddenEmojis[i];
			}
		}
		else if ((tenthsOfSecondsElapsed - 10) % EXTRASECOND == 0) {
			for each (Button ^ button in buttons)
				button->Text = "?";
		}
		if (tenthsOfSecondsElapsed <= GAMETIME) {
			TimeTextBox->Text = ((GAMETIME - tenthsOfSecondsElapsed) / 10).ToString("0с");
		}
		else {
			lose = true;
		}
		if (matchesFound == 8 || lose)
		{
			timer1->Stop();
			if (!lose) {
				if (tenthsOfSecondsElapsed < bestTime) {
					bestTime = tenthsOfSecondsElapsed;
					BestTimeTextBox->Text = (bestTime / 10).ToString("0с");
				}
				File::WriteAllText(BEST_TIME, bestTime.ToString());
				TimeTextBox->Text = String::Concat("Ты победил!", u8"\U0001F60E", " Сыграем ещё?");
			}
			else {
				TimeTextBox->Text = String::Concat("Ты проиграл.", u8"\U0001F622", " Сыграем ещё?");
			}
		}
	}
private: System::Void CloseButton_Click(System::Object^ sender, System::EventArgs^ e) {
	Close();
}
private: System::Void Game_Activated(System::Object^ sender, System::EventArgs^ e) {
	buttons[0] = button1; buttons[1] = button2; buttons[2] = button3; buttons[3] = button4;
	buttons[4] = button5; buttons[5] = button6; buttons[6] = button7; buttons[7] = button8;
	buttons[8] = button9; buttons[9] = button10; buttons[10] = button11; buttons[11] = button12;
	buttons[12] = button13; buttons[13] = button14; buttons[14] = button15; buttons[15] = button16;
	SetUpGame();
}

private: System::Void TimeTextBox_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	if (matchesFound == 8 || lose)
		SetUpGame();
}

	   Button^ lastButtonClicked;
	   bool findingMatch = false;

private: System::Void button_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	Button^ button = (Button^)sender;
	int index = Array::IndexOf(buttons, button);
	if (!findingMatch) {
		button->Text = hiddenEmojis[index];
		lastButtonClicked = button;
		findingMatch = true;
	}
	else if (hiddenEmojis[index] == lastButtonClicked->Text && lastButtonClicked != button) {
		matchesFound++;
		findingMatch = false;
		lastButtonClicked->Visible = false;
		button->Visible = false;
	}
	else {
		lastButtonClicked->Text = "?";
		findingMatch = false;
	}
}
};
}

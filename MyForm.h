#pragma once

namespace RockPaperScissors {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ playerPictureBox;
	protected:
	private: System::Windows::Forms::PictureBox^ computerPictureBox;
	private: System::Windows::Forms::Label^ playerLabel;
	private: System::Windows::Forms::Label^ computerLabel;
	private: System::Windows::Forms::Label^ remarksLabel;
	private: System::Windows::Forms::Button^ btnRock;
	private: System::Windows::Forms::Button^ btnPaper;

	private: System::Windows::Forms::Button^ btnScissors;



	private: System::Windows::Forms::ImageList^ imgLists;
	private: System::Windows::Forms::Label^ tooltipRock;
	private: System::Windows::Forms::Label^ tooltipPaper;
	private: System::Windows::Forms::Label^ tooltipScissors;



	private: System::ComponentModel::IContainer^ components;





	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->playerPictureBox = (gcnew System::Windows::Forms::PictureBox());
			this->computerPictureBox = (gcnew System::Windows::Forms::PictureBox());
			this->playerLabel = (gcnew System::Windows::Forms::Label());
			this->computerLabel = (gcnew System::Windows::Forms::Label());
			this->remarksLabel = (gcnew System::Windows::Forms::Label());
			this->btnRock = (gcnew System::Windows::Forms::Button());
			this->btnPaper = (gcnew System::Windows::Forms::Button());
			this->btnScissors = (gcnew System::Windows::Forms::Button());
			this->imgLists = (gcnew System::Windows::Forms::ImageList(this->components));
			this->tooltipRock = (gcnew System::Windows::Forms::Label());
			this->tooltipPaper = (gcnew System::Windows::Forms::Label());
			this->tooltipScissors = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->playerPictureBox))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->computerPictureBox))->BeginInit();
			this->SuspendLayout();
			// 
			// playerPictureBox
			// 
			this->playerPictureBox->BackColor = System::Drawing::SystemColors::Menu;
			this->playerPictureBox->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->playerPictureBox->Location = System::Drawing::Point(49, 70);
			this->playerPictureBox->Name = L"playerPictureBox";
			this->playerPictureBox->Size = System::Drawing::Size(334, 176);
			this->playerPictureBox->TabIndex = 0;
			this->playerPictureBox->TabStop = false;
			// 
			// computerPictureBox
			// 
			this->computerPictureBox->BackColor = System::Drawing::SystemColors::Menu;
			this->computerPictureBox->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->computerPictureBox->Location = System::Drawing::Point(389, 70);
			this->computerPictureBox->Name = L"computerPictureBox";
			this->computerPictureBox->Size = System::Drawing::Size(334, 176);
			this->computerPictureBox->TabIndex = 1;
			this->computerPictureBox->TabStop = false;
			// 
			// playerLabel
			// 
			this->playerLabel->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->playerLabel->ForeColor = System::Drawing::SystemColors::ControlText;
			this->playerLabel->Location = System::Drawing::Point(49, 23);
			this->playerLabel->Name = L"playerLabel";
			this->playerLabel->Size = System::Drawing::Size(334, 23);
			this->playerLabel->TabIndex = 2;
			this->playerLabel->Text = L"Player";
			this->playerLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// computerLabel
			// 
			this->computerLabel->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->computerLabel->ForeColor = System::Drawing::SystemColors::ControlText;
			this->computerLabel->Location = System::Drawing::Point(389, 23);
			this->computerLabel->Name = L"computerLabel";
			this->computerLabel->Size = System::Drawing::Size(334, 23);
			this->computerLabel->TabIndex = 3;
			this->computerLabel->Text = L"Computer";
			this->computerLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// remarksLabel
			// 
			this->remarksLabel->Font = (gcnew System::Drawing::Font(L"Century Gothic", 20.25F, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->remarksLabel->ForeColor = System::Drawing::SystemColors::ControlText;
			this->remarksLabel->Location = System::Drawing::Point(49, 269);
			this->remarksLabel->Name = L"remarksLabel";
			this->remarksLabel->Size = System::Drawing::Size(674, 42);
			this->remarksLabel->TabIndex = 4;
			this->remarksLabel->Text = L"Remarks";
			this->remarksLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// btnRock
			// 
			this->btnRock->BackColor = System::Drawing::Color::Black;
			this->btnRock->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnRock.BackgroundImage")));
			this->btnRock->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnRock->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(28)));
			this->btnRock->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnRock->Location = System::Drawing::Point(125, 331);
			this->btnRock->Name = L"btnRock";
			this->btnRock->Size = System::Drawing::Size(166, 89);
			this->btnRock->TabIndex = 1;
			this->btnRock->UseVisualStyleBackColor = false;
			this->btnRock->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			this->btnRock->MouseHover += gcnew System::EventHandler(this, &MyForm::btnRock_Hover);
			// 
			// btnPaper
			// 
			this->btnPaper->BackColor = System::Drawing::Color::Black;
			this->btnPaper->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnPaper.BackgroundImage")));
			this->btnPaper->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnPaper->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(28)));
			this->btnPaper->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnPaper->Location = System::Drawing::Point(297, 331);
			this->btnPaper->Name = L"btnPaper";
			this->btnPaper->Size = System::Drawing::Size(166, 89);
			this->btnPaper->TabIndex = 2;
			this->btnPaper->UseVisualStyleBackColor = false;
			this->btnPaper->Click += gcnew System::EventHandler(this, &MyForm::btnPaper_Click);
			this->btnPaper->MouseHover += gcnew System::EventHandler(this, &MyForm::btnPaper_Hover);
			// 
			// btnScissors
			// 
			this->btnScissors->BackColor = System::Drawing::Color::Black;
			this->btnScissors->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnScissors.BackgroundImage")));
			this->btnScissors->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnScissors->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(28)));
			this->btnScissors->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnScissors->Location = System::Drawing::Point(469, 331);
			this->btnScissors->Name = L"btnScissors";
			this->btnScissors->Size = System::Drawing::Size(166, 89);
			this->btnScissors->TabIndex = 3;
			this->btnScissors->UseVisualStyleBackColor = false;
			this->btnScissors->Click += gcnew System::EventHandler(this, &MyForm::btnScissors_Click);
			this->btnScissors->MouseHover += gcnew System::EventHandler(this, &MyForm::btnScissors_Hover);
			// 
			// imgLists
			// 
			this->imgLists->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^>(resources->GetObject(L"imgLists.ImageStream")));
			this->imgLists->TransparentColor = System::Drawing::Color::Transparent;
			this->imgLists->Images->SetKeyName(0, L"rock.png");
			this->imgLists->Images->SetKeyName(1, L"paper.png");
			this->imgLists->Images->SetKeyName(2, L"scissors.png");
			// 
			// tooltipRock
			// 
			this->tooltipRock->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tooltipRock->ForeColor = System::Drawing::Color::DimGray;
			this->tooltipRock->Location = System::Drawing::Point(122, 428);
			this->tooltipRock->Name = L"tooltipRock";
			this->tooltipRock->Size = System::Drawing::Size(169, 23);
			this->tooltipRock->TabIndex = 5;
			this->tooltipRock->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// tooltipPaper
			// 
			this->tooltipPaper->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tooltipPaper->ForeColor = System::Drawing::Color::DimGray;
			this->tooltipPaper->Location = System::Drawing::Point(294, 428);
			this->tooltipPaper->Name = L"tooltipPaper";
			this->tooltipPaper->Size = System::Drawing::Size(169, 23);
			this->tooltipPaper->TabIndex = 6;
			this->tooltipPaper->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// tooltipScissors
			// 
			this->tooltipScissors->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tooltipScissors->ForeColor = System::Drawing::Color::DimGray;
			this->tooltipScissors->Location = System::Drawing::Point(466, 428);
			this->tooltipScissors->Name = L"tooltipScissors";
			this->tooltipScissors->Size = System::Drawing::Size(169, 23);
			this->tooltipScissors->TabIndex = 7;
			this->tooltipScissors->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Window;
			this->ClientSize = System::Drawing::Size(774, 463);
			this->Controls->Add(this->tooltipScissors);
			this->Controls->Add(this->tooltipPaper);
			this->Controls->Add(this->tooltipRock);
			this->Controls->Add(this->btnScissors);
			this->Controls->Add(this->btnPaper);
			this->Controls->Add(this->btnRock);
			this->Controls->Add(this->remarksLabel);
			this->Controls->Add(this->computerLabel);
			this->Controls->Add(this->playerLabel);
			this->Controls->Add(this->computerPictureBox);
			this->Controls->Add(this->playerPictureBox);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Rock Paper Scissors";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->playerPictureBox))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->computerPictureBox))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		playerPictureBox->BackgroundImage = btnRock->BackgroundImage;
		pickRandom("rock");
	}

private: System::Void btnPaper_Click(System::Object^ sender, System::EventArgs^ e) {
	playerPictureBox->BackgroundImage = btnPaper->BackgroundImage;
	pickRandom("paper");
}
private: System::Void btnScissors_Click(System::Object^ sender, System::EventArgs^ e) {
	playerPictureBox->BackgroundImage = btnScissors->BackgroundImage;
	pickRandom("scissors");
}
private: Void pickRandom(String^ playerMove)
{
	Random^ rand = gcnew Random();
	int randomPick = rand->Next(0, 3); 
	if (randomPick == 0)
	{
		computerPictureBox->BackgroundImage= btnRock->BackgroundImage;
		if (playerMove == "rock")
		{
			remarksLabel->Text = "Tie";
		}
		else if (playerMove == "paper")
		{
			remarksLabel->Text = "You Won";
		}
		else
		{
			remarksLabel->Text = "Computer Won";
		}
	}
	else if (randomPick == 1)
	{
		computerPictureBox->BackgroundImage = btnPaper->BackgroundImage;
		if (playerMove == "paper")
		{
			remarksLabel->Text = "Tie";
		}
		else if (playerMove == "scissors")
		{
			remarksLabel->Text = "You Won";
		}
		else
		{
			remarksLabel->Text = "Computer Won";
		}
	}
	else
	{
		computerPictureBox->BackgroundImage = btnScissors->BackgroundImage;
		if (playerMove == "scissors")
		{
			remarksLabel->Text = "Tie";
		}
		else if (playerMove == "rock")
		{
			remarksLabel->Text = "You Won";
		}
		else
		{
			remarksLabel->Text = "Computer Won";
		}
	}
}
private: System::Void btnRock_Hover(System::Object^ sender, System::EventArgs^ e) {
	tooltipRock->Text = "Rock";
	tooltipPaper->Text = "";
	tooltipScissors->Text = "";
}
private: System::Void btnPaper_Hover(System::Object^ sender, System::EventArgs^ e) {
	tooltipPaper->Text = "Paper";
	tooltipRock->Text = "";
	tooltipScissors->Text = "";
}
private: System::Void btnScissors_Hover(System::Object^ sender, System::EventArgs^ e) {
	tooltipScissors->Text = "Scissors";
	tooltipRock->Text = "";
	tooltipPaper->Text = "";
}
};
}

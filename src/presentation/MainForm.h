#pragma once
#include "../business/ArrayGenerator.h"
#include "../business/CocktailShakerSorter.h"

namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
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
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ arrayLengthLabel;
	protected:
	private: System::Windows::Forms::Label^ rngIntervalLabel;
	private: System::Windows::Forms::TextBox^ arrayLengthInput;
	private: System::Windows::Forms::Label^ rngIntervalFromLabel;
	private: System::Windows::Forms::Label^ rngIntervalToLabel;
	private: System::Windows::Forms::TextBox^ rngIntervalFromInput;
	private: System::Windows::Forms::TextBox^ rngIntervalToInput;
	private: System::Windows::Forms::DataGridView^ initialArrayView;


	private: System::Windows::Forms::Button^ createArrayButton;
	private: System::Windows::Forms::Button^ sortArrayButton;

	private: System::Windows::Forms::Button^ cleanData;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn1;
	private: System::Windows::Forms::DataGridView^ sortedArrayView;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Values;



	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->arrayLengthLabel = (gcnew System::Windows::Forms::Label());
			this->rngIntervalLabel = (gcnew System::Windows::Forms::Label());
			this->arrayLengthInput = (gcnew System::Windows::Forms::TextBox());
			this->rngIntervalFromLabel = (gcnew System::Windows::Forms::Label());
			this->rngIntervalToLabel = (gcnew System::Windows::Forms::Label());
			this->rngIntervalFromInput = (gcnew System::Windows::Forms::TextBox());
			this->rngIntervalToInput = (gcnew System::Windows::Forms::TextBox());
			this->initialArrayView = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->createArrayButton = (gcnew System::Windows::Forms::Button());
			this->sortArrayButton = (gcnew System::Windows::Forms::Button());
			this->cleanData = (gcnew System::Windows::Forms::Button());
			this->sortedArrayView = (gcnew System::Windows::Forms::DataGridView());
			this->Values = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->initialArrayView))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->sortedArrayView))->BeginInit();
			this->SuspendLayout();
			// 
			// arrayLengthLabel
			// 
			this->arrayLengthLabel->AutoSize = true;
			this->arrayLengthLabel->Location = System::Drawing::Point(13, 13);
			this->arrayLengthLabel->Name = L"arrayLengthLabel";
			this->arrayLengthLabel->Size = System::Drawing::Size(286, 25);
			this->arrayLengthLabel->TabIndex = 0;
			this->arrayLengthLabel->Text = L"Длина одномерного массива";
			// 
			// rngIntervalLabel
			// 
			this->rngIntervalLabel->AutoSize = true;
			this->rngIntervalLabel->Location = System::Drawing::Point(12, 85);
			this->rngIntervalLabel->Name = L"rngIntervalLabel";
			this->rngIntervalLabel->Size = System::Drawing::Size(284, 25);
			this->rngIntervalLabel->TabIndex = 1;
			this->rngIntervalLabel->Text = L"Интервал значений массива:";
			// 
			// arrayLengthInput
			// 
			this->arrayLengthInput->Location = System::Drawing::Point(18, 41);
			this->arrayLengthInput->Name = L"arrayLengthInput";
			this->arrayLengthInput->Size = System::Drawing::Size(100, 29);
			this->arrayLengthInput->TabIndex = 2;
			// 
			// rngIntervalFromLabel
			// 
			this->rngIntervalFromLabel->AutoSize = true;
			this->rngIntervalFromLabel->Location = System::Drawing::Point(18, 114);
			this->rngIntervalFromLabel->Name = L"rngIntervalFromLabel";
			this->rngIntervalFromLabel->Size = System::Drawing::Size(39, 25);
			this->rngIntervalFromLabel->TabIndex = 3;
			this->rngIntervalFromLabel->Text = L"От";
			// 
			// rngIntervalToLabel
			// 
			this->rngIntervalToLabel->AutoSize = true;
			this->rngIntervalToLabel->Location = System::Drawing::Point(196, 114);
			this->rngIntervalToLabel->Name = L"rngIntervalToLabel";
			this->rngIntervalToLabel->Size = System::Drawing::Size(40, 25);
			this->rngIntervalToLabel->TabIndex = 4;
			this->rngIntervalToLabel->Text = L"До";
			// 
			// rngIntervalFromInput
			// 
			this->rngIntervalFromInput->Location = System::Drawing::Point(63, 114);
			this->rngIntervalFromInput->Name = L"rngIntervalFromInput";
			this->rngIntervalFromInput->Size = System::Drawing::Size(100, 29);
			this->rngIntervalFromInput->TabIndex = 5;
			// 
			// rngIntervalToInput
			// 
			this->rngIntervalToInput->Location = System::Drawing::Point(242, 114);
			this->rngIntervalToInput->Name = L"rngIntervalToInput";
			this->rngIntervalToInput->Size = System::Drawing::Size(100, 29);
			this->rngIntervalToInput->TabIndex = 6;
			// 
			// initialArrayView
			// 
			this->initialArrayView->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->initialArrayView->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(1) { this->dataGridViewTextBoxColumn1 });
			this->initialArrayView->Location = System::Drawing::Point(17, 188);
			this->initialArrayView->Name = L"initialArrayView";
			this->initialArrayView->RowHeadersWidth = 72;
			this->initialArrayView->RowTemplate->Height = 31;
			this->initialArrayView->Size = System::Drawing::Size(344, 625);
			this->initialArrayView->TabIndex = 7;
			// 
			// dataGridViewTextBoxColumn1
			// 
			this->dataGridViewTextBoxColumn1->HeaderText = L"Значения";
			this->dataGridViewTextBoxColumn1->MinimumWidth = 9;
			this->dataGridViewTextBoxColumn1->Name = L"dataGridViewTextBoxColumn1";
			this->dataGridViewTextBoxColumn1->Width = 175;
			// 
			// createArrayButton
			// 
			this->createArrayButton->Location = System::Drawing::Point(367, 188);
			this->createArrayButton->Name = L"createArrayButton";
			this->createArrayButton->Size = System::Drawing::Size(262, 46);
			this->createArrayButton->TabIndex = 8;
			this->createArrayButton->Text = L"Сгенерировать массив";
			this->createArrayButton->UseVisualStyleBackColor = true;
			this->createArrayButton->Click += gcnew System::EventHandler(this, &MainForm::createArrayButton_Click);
			// 
			// sortArrayButton
			// 
			this->sortArrayButton->Location = System::Drawing::Point(367, 250);
			this->sortArrayButton->Name = L"sortArrayButton";
			this->sortArrayButton->Size = System::Drawing::Size(262, 46);
			this->sortArrayButton->TabIndex = 9;
			this->sortArrayButton->Text = L"Сортировать массив";
			this->sortArrayButton->UseVisualStyleBackColor = true;
			this->sortArrayButton->Click += gcnew System::EventHandler(this, &MainForm::sortArrayButton_Click);
			// 
			// cleanData
			// 
			this->cleanData->Location = System::Drawing::Point(367, 316);
			this->cleanData->Name = L"cleanData";
			this->cleanData->Size = System::Drawing::Size(262, 44);
			this->cleanData->TabIndex = 10;
			this->cleanData->Text = L"Очистить данные";
			this->cleanData->UseVisualStyleBackColor = true;
			this->cleanData->Click += gcnew System::EventHandler(this, &MainForm::cleanData_Click);
			// 
			// sortedArrayView
			// 
			this->sortedArrayView->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->sortedArrayView->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(1) { this->Values });
			this->sortedArrayView->Location = System::Drawing::Point(635, 188);
			this->sortedArrayView->Name = L"sortedArrayView";
			this->sortedArrayView->RowHeadersWidth = 72;
			this->sortedArrayView->RowTemplate->Height = 31;
			this->sortedArrayView->Size = System::Drawing::Size(344, 625);
			this->sortedArrayView->TabIndex = 11;
			// 
			// Values
			// 
			this->Values->HeaderText = L"Значения";
			this->Values->MinimumWidth = 9;
			this->Values->Name = L"Values";
			this->Values->Width = 175;
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(11, 24);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(998, 825);
			this->Controls->Add(this->sortedArrayView);
			this->Controls->Add(this->cleanData);
			this->Controls->Add(this->sortArrayButton);
			this->Controls->Add(this->createArrayButton);
			this->Controls->Add(this->initialArrayView);
			this->Controls->Add(this->rngIntervalToInput);
			this->Controls->Add(this->rngIntervalFromInput);
			this->Controls->Add(this->rngIntervalToLabel);
			this->Controls->Add(this->rngIntervalFromLabel);
			this->Controls->Add(this->arrayLengthInput);
			this->Controls->Add(this->rngIntervalLabel);
			this->Controls->Add(this->arrayLengthLabel);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"MainForm";
			this->Text = L"MainForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->initialArrayView))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->sortedArrayView))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void createArrayButton_Click(System::Object^ sender, System::EventArgs^ e) {
		int min = Convert::ToInt32(this->rngIntervalFromInput->Text);
		int max = Convert::ToInt32(this->rngIntervalToInput->Text);
		int elementCount = Convert::ToInt32(this->arrayLengthInput->Text);

		ArrayGenerator arrayGenerator = ArrayGenerator();
		auto randomNumbers = arrayGenerator.generate(min, max, elementCount);

		this->initialArrayView->Rows->Clear();
		for (int i = 0; i < randomNumbers.size(); i++) {
			this->initialArrayView->Rows->Add();
			this->initialArrayView->Rows[i]->Cells[0]->Value = randomNumbers[i];
		}
	}

	private: System::Void sortArrayButton_Click(System::Object^ sender, System::EventArgs^ e) {
		auto initialNumbers = std::vector<int>();
		for (int i = 0; i < this->initialArrayView->Rows->Count - 1; i++) {
			initialNumbers.emplace_back(
				Convert::ToInt32(this->initialArrayView->Rows[i]->Cells[0]->Value)
			);
		}

		CocktailShakerSorter cocktailShakerSorter = CocktailShakerSorter();
		auto sortedNumbers = cocktailShakerSorter.sort(initialNumbers);

		this->sortedArrayView->Rows->Clear();
		for (int i = 0; i < sortedNumbers.size(); i++) {
			this->sortedArrayView->Rows->Add();
			this->sortedArrayView->Rows[i]->Cells[0]->Value = sortedNumbers[i];
		}
	}

	private: System::Void cleanData_Click(System::Object^ sender, System::EventArgs^ e) {
		this->initialArrayView->Rows->Clear();
		this->sortedArrayView->Rows->Clear();
	}
};
}

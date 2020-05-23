#pragma once
#include "Database.h"
namespace kursach {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для QuestionEcon
	/// </summary>
	public ref class QuestionEcon : public System::Windows::Forms::Form
	{
		Database^ db = gcnew Database();
	public:
		QuestionEcon(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
			mainDataGridView->AutoGenerateColumns = false;
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~QuestionEcon()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ mainDataGridView;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ IdColumn;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ QuestionEconColumn;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ AnswerEconColumn;












	protected:
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
			this->mainDataGridView = (gcnew System::Windows::Forms::DataGridView());
			this->IdColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->QuestionEconColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->AnswerEconColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->mainDataGridView))->BeginInit();
			this->SuspendLayout();
			// 
			// mainDataGridView
			// 
			this->mainDataGridView->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->mainDataGridView->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->mainDataGridView->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->IdColumn,
					this->QuestionEconColumn, this->AnswerEconColumn
			});
			this->mainDataGridView->Location = System::Drawing::Point(1, 1);
			this->mainDataGridView->Name = L"mainDataGridView";
			this->mainDataGridView->Size = System::Drawing::Size(971, 414);
			this->mainDataGridView->TabIndex = 1;
			// 
			// IdColumn
			// 
			this->IdColumn->DataPropertyName = L"Id";
			this->IdColumn->HeaderText = L"Номер";
			this->IdColumn->Name = L"IdColumn";
			this->IdColumn->Width = 50;
			// 
			// QuestionEconColumn
			// 
			this->QuestionEconColumn->DataPropertyName = L"questione";
			this->QuestionEconColumn->HeaderText = L"Вопрос";
			this->QuestionEconColumn->Name = L"QuestionEconColumn";
			this->QuestionEconColumn->Width = 200;
			// 
			// AnswerEconColumn
			// 
			this->AnswerEconColumn->DataPropertyName = L"answere";
			this->AnswerEconColumn->HeaderText = L"Ответ";
			this->AnswerEconColumn->Name = L"AnswerEconColumn";
			this->AnswerEconColumn->Width = 600;
			// 
			// QuestionEcon
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(984, 461);
			this->Controls->Add(this->mainDataGridView);
			this->Name = L"QuestionEcon";
			this->Text = L"QuestionEcon";
			this->Load += gcnew System::EventHandler(this, &QuestionEcon::QuestionEcon_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->mainDataGridView))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: void fillDataGridView();
	private: void refreshDataGridView();
	private: void ExceptionMessage(Exception^ ex);
	private: System::Void QuestionEcon_Load(System::Object^ sender, System::EventArgs^ e);
	};
}

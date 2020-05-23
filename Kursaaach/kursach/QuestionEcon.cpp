#include "MyForm.h"
#include "MyFormTeacher.h"
#include "QuestionEcon.h"

using namespace System;
using namespace System::Windows::Forms;



namespace kursach
{
	void QuestionEcon::ExceptionMessage(Exception^ ex)
	{
		MessageBox::Show(ex->Message, "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}

	// заполняет mainDataGridView данными из бд
	void QuestionEcon::fillDataGridView()
	{
		// задавая DataSource dataGridView выберет колонки с данными сам
		DataTable^ dt = db->loadQuestionEcon()->Tables["QuestionEcon"];
		mainDataGridView->DataSource = db->loadQuestionEcon()->Tables["QuestionEcon"];
		mainDataGridView->DataSource = dt;
	}

	// обновляет информацию в mainDataGridView
	void QuestionEcon::refreshDataGridView()
	{
		mainDataGridView->DataSource = nullptr;
		fillDataGridView();
	}

	// вызовется перед отображением формы
	void QuestionEcon::QuestionEcon_Load(System::Object^ sender, System::EventArgs^ e)
	{
		fillDataGridView();
	}

}
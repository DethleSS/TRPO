#include "MyForm.h"
#include "MyFormTeacher.h"
#include "QuestionMath.h"
#include "QuestionProg.h"
#include "QuestionEcon.h"
using namespace System;
using namespace System::Windows::Forms;



namespace kursach
{
	void MyFormTeacher::ExceptionMessage(Exception^ ex)
	{
		MessageBox::Show(ex->Message, "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}

	// заполняет mainDataGridView данными из бд
	void MyFormTeacher::fillDataGridView()
	{
		// задавая DataSource dataGridView выберет колонки с данными сам
		DataTable^ dt = db->loadTeacher()->Tables["Teacher"];
		mainDataGridView->DataSource = db->loadTeacher()->Tables["Teacher"];
		mainDataGridView->DataSource = dt;
	}

	// обновляет информацию в mainDataGridView
	void MyFormTeacher::refreshDataGridView()
	{
		mainDataGridView->DataSource = nullptr;
		fillDataGridView();
	}

	// вызовется перед отображением формы
	void MyFormTeacher::MyFormTeacher_Load(System::Object^ sender, System::EventArgs^ e)
	{
		fillDataGridView();
	}

	void MyFormTeacher::queryMathButton_Click(System::Object^ sender, System::EventArgs^ e)
	{
		QuestionMath form;
		form.ShowDialog();
	}

	void MyFormTeacher::queryProgButton_Click(System::Object^ sender, System::EventArgs^ e)
	{
		QuestionProg form;
		form.ShowDialog();
	}

	void MyFormTeacher::queryEconButton_Click(System::Object^ sender, System::EventArgs^ e)
	{
		QuestionEcon form;
		form.ShowDialog();
	}
}
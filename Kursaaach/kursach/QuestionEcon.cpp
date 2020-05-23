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

	// ��������� mainDataGridView ������� �� ��
	void QuestionEcon::fillDataGridView()
	{
		// ������� DataSource dataGridView ������� ������� � ������� ���
		DataTable^ dt = db->loadQuestionEcon()->Tables["QuestionEcon"];
		mainDataGridView->DataSource = db->loadQuestionEcon()->Tables["QuestionEcon"];
		mainDataGridView->DataSource = dt;
	}

	// ��������� ���������� � mainDataGridView
	void QuestionEcon::refreshDataGridView()
	{
		mainDataGridView->DataSource = nullptr;
		fillDataGridView();
	}

	// ��������� ����� ������������ �����
	void QuestionEcon::QuestionEcon_Load(System::Object^ sender, System::EventArgs^ e)
	{
		fillDataGridView();
	}

}
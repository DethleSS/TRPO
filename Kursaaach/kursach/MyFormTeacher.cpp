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

	// ��������� mainDataGridView ������� �� ��
	void MyFormTeacher::fillDataGridView()
	{
		// ������� DataSource dataGridView ������� ������� � ������� ���
		DataTable^ dt = db->loadTeacher()->Tables["Teacher"];
		mainDataGridView->DataSource = db->loadTeacher()->Tables["Teacher"];
		mainDataGridView->DataSource = dt;
	}

	// ��������� ���������� � mainDataGridView
	void MyFormTeacher::refreshDataGridView()
	{
		mainDataGridView->DataSource = nullptr;
		fillDataGridView();
	}

	// ��������� ����� ������������ �����
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
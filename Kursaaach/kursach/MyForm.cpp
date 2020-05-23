#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void Main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	kursach::MyForm form;
	Application::Run(%form);
}

namespace kursach
{
	void MyForm::ExceptionMessage(Exception^ ex)
	{
		MessageBox::Show(ex->Message, "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}

	// заполняет mainDataGridView данными из бд
	void MyForm::fillDataGridView()
	{
		// задавая DataSource dataGridView выберет колонки с данными сам
		DataTable^ dt = db->loadPerson()->Tables["Person"];
		mainDataGridView->DataSource = db->loadPerson()->Tables["Person"];
		mainDataGridView->DataSource = dt;
	}

	// обновляет информацию в mainDataGridView
	void MyForm::refreshDataGridView()
	{
		mainDataGridView->DataSource = nullptr;
		fillDataGridView();
	}

	// вызовется перед отображением формы
	void MyForm::MyForm_Load(System::Object^  sender, System::EventArgs^  e)
	{
		fillDataGridView();
	}
	
	// взовется при нажатии на кнопку queryTeacherButton_Click
	void MyForm::queryTeacherButton_Click(System::Object^  sender, System::EventArgs^  e)
	{
		MyFormTeacher form;
		form.ShowDialog();
	}
}
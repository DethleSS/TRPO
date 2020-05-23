CREATE DATABASE kursach
GO

USE kursach
GO

CREATE TABLE QuestionMath(
	id INT NOT NULL IDENTITY(1, 1) PRIMARY KEY,
	questionm VARCHAR(255) NOT NULL,
	answerm VARCHAR(255) NOT NULL
)
GO

CREATE TABLE QuestionProg(
	id INT NOT NULL IDENTITY(1, 1) PRIMARY KEY,
	questionp VARCHAR(255) NOT NULL,
	answerp VARCHAR(255) NOT NULL
)
GO

CREATE TABLE QuestionEcon(
	id INT NOT NULL IDENTITY(1, 1) PRIMARY KEY,
	questione VARCHAR(255) NOT NULL,
	answere VARCHAR(255) NOT NULL
)
GO

CREATE TABLE Teacher(
	id INT NOT NULL IDENTITY(1, 1) PRIMARY KEY,
	name_t VARCHAR(70) NOT NULL,
	surname_t VARCHAR(70) NOT NULL,
	lim_time INT NOT NULL,
	col_question INT NOT NULL,
	min_assessment INT NOT NULL,
	subject_ VARCHAR(70) NOT NULL
)
GO

CREATE TABLE Person(
	id INT NOT NULL IDENTITY(1, 1) PRIMARY KEY,
	name_ VARCHAR(70) NOT NULL,
	surname VARCHAR(70) NOT NULL,
	patronymic VARCHAR(70) NOT NULL,
	group_number INT NOT NULL
)
GO



INSERT INTO QuestionMath(questionm, answerm) VALUES('��� ����� ������ ����� �?','��� ���������� �� ������ ��������� �� ����� �(a)')
INSERT INTO QuestionMath(questionm, answerm) VALUES('��� ����� Sin','��������� ������ ��������������� ���� � ����������')
INSERT INTO QuestionMath(questionm, answerm) VALUES('��� ����� Cos','��������� ������ ����������� ���� � ����������')

INSERT INTO QuestionProg(questionp, answerp) VALUES('��� ����� ������?','����� ���������� ���������')
INSERT INTO QuestionProg(questionp, answerp) VALUES('��� ����� �����?','��� ������� ������� � ������')
INSERT INTO QuestionProg(questionp, answerp) VALUES('��� ����� ������������?','���������� �������� ��� ��������')

INSERT INTO QuestionEcon(questione, answere) VALUES('� ������� � �������� ����������','������������� �������������� ����������, ��� � ������� �����������')
INSERT INTO QuestionEcon(questione, answere) VALUES('���������� ����� ���?','�������������� �� ���� � ����������� �� ������������ ���������')
INSERT INTO QuestionEcon(questione, answere) VALUES('����� ���?','������������ �����, ��������� � ����������� � ���������� ��� � ����� ���������� �������������')




INSERT INTO Teacher(name_t, surname_t, lim_time, col_question, min_assessment, subject_) VALUES('Dima', 'Igorevich', 45, 3, 4, 'Math')
INSERT INTO Teacher(name_t, surname_t, lim_time, col_question, min_assessment, subject_) VALUES('Egor', 'Ivanov', 60, 3, 4, 'Prog')
INSERT INTO Teacher(name_t, surname_t, lim_time, col_question, min_assessment, subject_) VALUES('Vlad', 'Stepanov', 90, 3, 4, 'Econ')


INSERT INTO Person(name_, surname, patronymic, group_number) VALUES('Vanya', 'Pupkin','Vladimirovich',893)
INSERT INTO Person(name_, surname, patronymic, group_number) VALUES('Egor', 'Ivanov','Stepanovich',893)
INSERT INTO Person(name_, surname, patronymic, group_number) VALUES('Dima', 'Putin','Victorovich',893)

SELECT name_, surname, patronymic, group_number FROM Person
GO

SELECT name_t, surname_t, subject_, lim_time, col_question, min_assessment FROM Teacher
GO

SELECT questione, answere FROM QuestionEcon
GO

SELECT questionp, answerp FROM QuestionProg
GO

SELECT questionm, answerm FROM QuestionMath
GO

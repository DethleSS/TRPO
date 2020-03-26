using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows;
using System.Windows.Controls;
using System.Windows.Data;
using System.Windows.Documents;
using System.Windows.Input;
using System.Windows.Media;
using System.Windows.Media.Imaging;
using System.Windows.Shapes;

namespace WpfApp24
{
    /// <summary>
    /// Логика взаимодействия для MathimathicTest.xaml
    /// </summary>
    /// 

    class Answer
    {
        public String Text { get; set; }
        public bool IsAnswer { get; set; }

        public Answer(String text, bool answer)
        {
            Text = text;
            IsAnswer = answer;
        }
    }

    class Question
    {
        public int Number { get; set; }
        public String Quest { get; set; }
        public List<Answer> Questions { get; set; }

        public Question(int number, String quest, List<Answer> questions)
        {
            Number = number;
            Quest = quest;
            Questions = questions;
        }
    }

    public partial class MathimathicTest : Window
    {
        List<Question> questions;
        int i = 0;
        int result = 0;

        void Uncheked(object sender)
        {
            CheckBox current = (CheckBox)sender;
            foreach (CheckBox checkbox in stack.Children)
            {
                if (!current.Name.Equals(checkbox.Name))
                {
                    checkbox.IsChecked = false;
                }
            }
        }
        void Clear()
        {
            foreach (CheckBox checkbox in stack.Children)
            {
                checkbox.IsChecked = false;
            }
        }

        void Answer1_Checked(object sender, RoutedEventArgs e)
        {
            Uncheked(sender);
        }

        void IsCorrectAnswer(int id)
        {
            CheckBox checkBox = new CheckBox();
            foreach (CheckBox ch in stack.Children)
            {
                if (ch.IsChecked == true)
                {
                    checkBox = ch;
                }
            }
            Answer answer = questions[id].Questions.Single(a => a.Text.Contains((string)checkBox.Content));
            if (answer.IsAnswer)
            {
                result += 1;
            }
        }
        bool IsNoOneCheked()
        {
            foreach (CheckBox checkBox in stack.Children)
            {
                if (checkBox.IsChecked == true)
                {
                    return true;
                }
            }
            return false;
        }
        void Button_Click(object sender, RoutedEventArgs e)
        {
            if (IsNoOneCheked())
            {
                IsCorrectAnswer(i);
                i += 1;
                if (i >= questions.Count)
                {
                    i = 0;
                    ResultTest resultsWindow = new ResultTest();
                    resultsWindow.Result = "Results: " + result + "/" + questions.Count;
                    resultsWindow.Show();
                    this.Close();
                }
                question.Text = questions[i].Quest;
                answer1.Content = questions[i].Questions[0].Text;
                answer2.Content = questions[i].Questions[1].Text;
                answer3.Content = questions[i].Questions[2].Text;
                answer4.Content = questions[i].Questions[3].Text;
                Clear();
            }
            else
            {
                MessageBox.Show("Choose answer");
            }
        }


        public MathimathicTest()
        {
           

            questions = new List<Question>()
                {
                new Question(1, "Кто из перечисленных ученых не родился сегодня, 14-го марта??", new List<Answer>()
                {
                new Answer("Этим ученым был Альберт Эйнштейн", false), new Answer("Стивен Хокинг", true), new Answer("Гербер Эдельсбруннер", false), new Answer("Вацлав Серпинский", false)
                }),
                new Question(2, "Каких математических терминов не существует?", new List<Answer>()
                {
                new Answer("Абстрактная чепуха", false), new Answer("Штука", false), new Answer("Микроб", true), new Answer("Тропическай геометрия", false)
                }),
                new Question(3, "Какой теоремы не существует?", new List<Answer>()
                {
                new Answer("Теорема о бутерброде", false), new Answer("Теоремы о двух милиционерах", false), new Answer("Теоремы об одиноком бегуне", true), new Answer("Теоремы об причесывании ежа", false)
                }),
                new Question(4, "Как формулируется знаменитая гипотеза Пуанкаре, доказанная в 2003 году Григорием Перельманом?", new List<Answer>()
                {
                new Answer("Односвязное компактное трехмерное многообразие гомеоморфное трехмерной сфере без края", false), new Answer("Трехмерное компактное многообразие без края гемеоморфное сфера односвязно", false), new Answer("Односвязное компактное трезмерное многообразие без края гемеоморфно трехмерной сфера", true), new Answer("Компактное односвязное многообразие без края гемеоморфное сфера трезмерно", false)
                }),
                new Question(5, "Ладно, настало время настоящей математики. Сконцентрируйтесь. Какие из этих пар чисел являются сексуальными простыми?", new List<Answer>()
                {
                new Answer("2011 и 2017", true), new Answer("2013 и 2019", false), new Answer("2027 и 2029", false), new Answer("P и e", false)
                })
                };
            InitializeComponent();
            question.Text = questions[0].Quest;
            answer1.Content = questions[0].Questions[0].Text;
            answer2.Content = questions[0].Questions[1].Text;
            answer3.Content = questions[0].Questions[2].Text;
            answer4.Content = questions[0].Questions[3].Text;
            


        }

    }
}

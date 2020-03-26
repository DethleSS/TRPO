using Microsoft.Win32;
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
using System.Windows.Navigation;
using System.Windows.Shapes;

namespace WpfApp24
{
    /// <summary>
    /// Логика взаимодействия для MainWindow.xaml
    /// </summary>
    /// 


    public partial class MainWindow : Window
    {
        public MainWindow()
        {
            InitializeComponent();
        }

        public void Button_Click_1(object sender, RoutedEventArgs e)
        {
            Task_22 a = new Task_22();
            a.Show();
        }

        public void Button_Click_2(object sender, RoutedEventArgs e)
        {
            TaskWindow taskWindow = new TaskWindow();
            taskWindow.Show();
        }

        public void Button_Click_3(object sender, RoutedEventArgs e)
        {
            MathimathicTest a = new MathimathicTest();
            a.Show();
        }

        public void Button_Click_4(object sender, RoutedEventArgs e)
        {
            Graphics g = new Graphics();
            g.Show();
        }

        public void Button_Click_5(object sender, RoutedEventArgs e)
        {
            DBForms.AllPlayers wnd = new DBForms.AllPlayers();
            wnd.Show();
        }

        public void Button_Click_6(object sender, RoutedEventArgs e)
        {
            Articles a = new Articles();
            a.Show();
        }

        public void Login_Click(object sender, RoutedEventArgs e)
        {
            Authorization passwordWindow = new Authorization();

            if (passwordWindow.ShowDialog() == true)
            {
                if (passwordWindow.Password == "ГромГей")
                    MessageBox.Show("Авторизация пройдена");
                else
                    MessageBox.Show("Неверный пароль");
            }
            else
            {
                MessageBox.Show("Авторизация не пройдена");
            }
        }

        public void Task_22(object sender, RoutedEventArgs e)
        {
            Task_22 a = new Task_22();
            a.ShowDialog();
        }

        public void MathimathicClick(object sender, RoutedEventArgs e)
        {
            MathimathicTest math = new MathimathicTest();
            math.Show();
        }        
    }
}

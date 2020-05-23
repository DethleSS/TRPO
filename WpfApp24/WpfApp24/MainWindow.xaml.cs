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



        public void Login_Click(object sender, RoutedEventArgs e)
        {
            Authorization passwordWindow = new Authorization();

            if (passwordWindow.ShowDialog() == true)
            {
                if (passwordWindow.Password == "Air")
                    MessageBox.Show("Авторизация пройдена");
                else
                    MessageBox.Show("Неверный пароль");
            }
            else
            {
                MessageBox.Show("Авторизация не пройдена");
            }
        }

        public void SearchClick(object sender, RoutedEventArgs e)
        {

            SearchTicket tick = new SearchTicket
            {
                classFlight = classFlight.Text,
                countPass = countPass.Text,
                countryArrival = countryArrival.Text,
                countryDeparture = countryDeparture.Text
            };
            tick.Show();
        }

        public void Ticket_click(object sender, RoutedEventArgs e)
        {

            DateBaseForms.AllTickets db = new DateBaseForms.AllTickets();
            db.Show();
        }


    }
}

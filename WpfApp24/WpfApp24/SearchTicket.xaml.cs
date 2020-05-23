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
    /// Логика взаимодействия для SearchTicket.xaml
    /// </summary>
    public partial class SearchTicket : Window
    {
        public string classFlight { get; set; }
        public string countPass { get; set; }
        public string countryArrival { get; set; }
        public string countryDeparture { get; set; }


        public SearchTicket()
        {           
            InitializeComponent();           
        }

        public int cheakClass(string text)
        {
            if(text == "Эконом-класс")
            {
                return 1;
            }
            if(text == "Бизнес-класс")
            {
                return 4;
            }
            return 26;
        }
        private void Window_Loaded(object sender, RoutedEventArgs e)
        {
            classFlightLabel.Content = classFlight;
            countPassLabel.Content = countPass;
            countryArrivalLabel.Content = countryArrival;
            countryDepartureLabel.Content = countryDeparture;
            PriceLabel1.Content = 140 * Convert.ToInt32(countPass) * cheakClass(classFlight);
            PriceLabel2.Content = 140 * Convert.ToInt32(countPass) * cheakClass(classFlight);
            PriceLabel3.Content = 140 * Convert.ToInt32(countPass) * cheakClass(classFlight);
            PriceLabel4.Content = 120 * Convert.ToInt32(countPass) * cheakClass(classFlight);

        }

        private void Buy_ticket_Click1(object sender, RoutedEventArgs e)
        {
            Payment p = new Payment();
            p.Namez = classFlight;
            p.ShowDialog();
        }

        private void Buy_ticket_Click2(object sender, RoutedEventArgs e)
        {
            Payment p = new Payment();
            p.ShowDialog();
        }

        private void Buy_ticket_Click3(object sender, RoutedEventArgs e)
        {
            Payment p = new Payment();
            p.ShowDialog();
        }

        private void Buy_ticket_Click4(object sender, RoutedEventArgs e)
        {
            Payment p = new Payment();
            p.ShowDialog();
        }
    }
}

using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using WpfApp24;
using System.Collections.ObjectModel;
using System.Data.Entity;
using System.IO;
using WpfApp24.Services;
using System.Windows;

namespace WpfApp24.DateBaseForms
{
    public class AllTicketsViewModel : INotifyPropertyChanged
    {
        public event PropertyChangedEventHandler PropertyChanged;

        public Func<IEnumerable<Ticket>, ObservableCollection<Ticket>> TicketsRenderer { get; set; } = (tickets) => new ObservableCollection<Ticket>(tickets);

        public ObservableCollection<Ticket> Tickets
        {
            get
            {
                using (DataBaseContext context = new DataBaseContext())
                {
                    return TicketsRenderer.Invoke(context.Tickets);
                }
            }
        }       

        public BaseCommand SaveToExcelCommand
        {
            get
            {
                return new BaseCommand(ButtonSave);
            }
        }


        public BaseCommand AddTicketCommand
        {
            get
            {
                return new BaseCommand(AddTicket);
            }
        }

        public BaseCommand DeleteTicketCommand
        {
            get
            {
                return new BaseCommand(DeleteTicket);
            }
        }



        public void AddTicket(object param)
        {
            using (DataBaseContext context = new DataBaseContext())
            {

                Ticket newTicket = context.Tickets.Create();
                newTicket.Name = "q";
                newTicket.Surname = "q";
                newTicket.Number = 1;
                newTicket.FlightNumber = 1;
                newTicket.ArrivalTime = 1;
                newTicket.DepartureTime = 1;
                newTicket.DeparturePlaces = "Bel";
                newTicket.ArrivalsPlaces = "Rus";
                context.Tickets.Add(newTicket);
                context.SaveChanges();

                OnProperyChanged(nameof(Tickets));

            }
        }

        public void DeleteTicket(object param)
        {
            Ticket t = param as Ticket;
            int TicketId = t.Id;
            using (DataBaseContext context = new DataBaseContext())
            {
                var ticketToDelete = context.Tickets.FirstOrDefault(ticket => ticket.Id == TicketId);

                context.Tickets.Remove(ticketToDelete);
                context.SaveChanges();

                OnProperyChanged(nameof(Tickets));
            }
        }

        public void ButtonSave(object param)
        {
            ExcelService.CreateTicketReport(Tickets, @"C:\Users\Xiaomi\savebd.xlsx");
        }

        public virtual void OnProperyChanged(string propName)
        {
            PropertyChangedEventHandler propertyChangedEventHandler = this.PropertyChanged;
            if (propertyChangedEventHandler != null)
            {
                propertyChangedEventHandler.Invoke(this, new PropertyChangedEventArgs(propName));
            }
        }
    }
}

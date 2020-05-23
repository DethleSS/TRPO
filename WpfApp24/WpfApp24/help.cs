using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace WpfApp24
{
    static class Help
    {
        public static void AddTicket()
        {
            using (DataBaseContext context = new DataBaseContext())
            {

                Ticket newTicket = context.Tickets.Create();
                newTicket.Id = 1;
                newTicket.Name = "q";
                newTicket.Surname = "q";
                newTicket.Number = 1;
                newTicket.FlightNumber = 2;
                newTicket.ArrivalTime = 3;
                newTicket.DepartureTime = 4;
                newTicket.DeparturePlaces = "Belarus";
                newTicket.ArrivalsPlaces = "Russia";
                context.Tickets.Add(newTicket);
                context.SaveChanges();
            }
        }
    }
}

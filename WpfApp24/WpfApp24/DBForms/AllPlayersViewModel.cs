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

namespace WpfApp24.DBForms
{
    public class AllPlayersViewModel : INotifyPropertyChanged
    {
        public event PropertyChangedEventHandler PropertyChanged;

        public Func<IEnumerable<Player>, ObservableCollection<Player>> PlayersRenderer { get; set; } = (players) => new ObservableCollection<Player>(players);

        public ObservableCollection<Player> Players
        {
            get
            {
                using (DBContext context = new DBContext())
                {
                    return PlayersRenderer.Invoke(context.Players);
                }
            }
        }

        public BaseCommand SortAge
        {
            get
            {
                return new BaseCommand(SortAgeButton);
            }
        }
        public BaseCommand SortPlayers
        {
            get
            {
                return new BaseCommand(SortPlayers_);
            }
        }

        public BaseCommand PowerPlay
        {
            get
            {
                return new BaseCommand(HighPowerButton);
            }
        }

        public BaseCommand MostHighAge
        {
            get
            {
                return new BaseCommand(HighAgeButton);
            }
        }

        public void SortPlayers_(object param)
        {
            PlayersRenderer = (players) =>
            {
                var query = from player in players
                            orderby player.Age, player.Name
                            select player;
                return new ObservableCollection<Player>(query);
            };
            OnProperyChanged(nameof(Players));
        }

        public void SortAgeButton(object param)
        {
            PlayersRenderer = (players) =>
            {
                var query = from player in players
                            orderby player.Age
                            descending                           
                            select player;
                return new ObservableCollection<Player>(query);
            };
            OnProperyChanged(nameof(Players));
        }

        public BaseCommand SaveToExcelCommand
        {
            get
            {
                return new BaseCommand(ButtonSave);
            }
        }


        public BaseCommand AddPlayerCommand
        {
            get
            {
                return new BaseCommand(AddPlayer);
            }
        }

        public BaseCommand DeletePlayerCommand
        {
            get
            {
                return new BaseCommand(DeletePlayer);
            }
        }

        public string Name { get; set; }
        public int Age { get; set; }
        public int PowerPlays { get; set; }

        public void AddPlayer(object param)
        {
            using (DBContext context = new DBContext())
            {
               
                Player newPlayer = context.Players.Create();
                newPlayer.Age = Age;
                newPlayer.PowerPlay = PowerPlays;
                newPlayer.Club = context.Clubs.FirstOrDefault();
                newPlayer.Rank = context.Ranks.FirstOrDefault();
                newPlayer.Name = Name;

                context.Players.Add(newPlayer);
                context.SaveChanges();

                OnProperyChanged(nameof(Players));
            }
        }

        public void DeletePlayer(object param)
        {
            Player p = param as Player;
            int playerId = p.Id;
            using (DBContext context = new DBContext())
            {
                var playerToDelete = context.Players.FirstOrDefault(player => player.Id == playerId);

                context.Players.Remove(playerToDelete);
                context.SaveChanges();

                OnProperyChanged(nameof(Players));
            }
        }

        public void ButtonSave(object param)
        {
            ExcelService.CreatePlayerReport(Players, @"C:\Users\Xiaomi\savebd.xlsx");
        }

        public void HighPowerButton(object param)
        {
            int i = 0;
            foreach (var player in Players)
            {
                if (i < player.PowerPlay)
                {
                    i = player.PowerPlay.Value;
                }
            }
            HighPower a = new HighPower();
            a.MyLabel.Content = i;
            a.ShowDialog();
        }

        public void HighAgeButton(object param)
        {
            int i = 0;
            foreach (var player in Players)
            {
                if (i < player.Age)
                {
                    i = player.Age.Value;
                }
            }
            HighAge a = new HighAge();
            a.MyLabel.Content = i;
            a.ShowDialog();
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

   M S B A M L   `   `   `  ����C  ?WpfApp24, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null?$clr-namespace:WpfApp24.DateBaseFormsWpfApp24.DateBaseForms  5   	   '    !WpfApp24.DateBaseForms.AllTickets   5   	   R NWindowsBase, Version=4.0.0.0, Culture=neutral, PublicKeyToken=31bf3856ad364e35\ XPresentationFramework, Version=4.0.0.0, Culture=neutral, PublicKeyToken=31bf3856ad364e35W SPresentationCore, Version=4.0.0.0, Culture=neutral, PublicKeyToken=31bf3856ad364e35D 9http://schemas.microsoft.com/winfx/2006/xaml/presentation    5   	   R NSystem.Xaml, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089:x,http://schemas.microsoft.com/winfx/2006/xaml     5   	   @d2http://schemas.microsoft.com/expression/blend/2008     5   	   Jmc;http://schemas.openxmlformats.org/markup-compatibility/2006     5   	   6local$clr-namespace:WpfApp24.DateBaseForms     5   	     � Title$  
AllTickets��5   	   $	��450��6   $	��800��6)   .��5      � 
����� � � RowDefinitions 5   
   �� 5      $��* �6   �� 5      $
��Auto �6   .+�5   
   �� -   5         ��Name$ listView��5   W   $��0��6   $��0,20,0,0q�6    $	��322��6i   $	��Top=�6v   ��62   ��  �� Path$ Tickets� �� View 5      �� 5      .P�5      �� $
��Name��6%    �� Width$	 100��63    �� DisplayMemberBinding 6?   �� $
 Name��� 5      $��Surname��6%   $	 100��66    6B   �� $ Surname��� 5      $��Departure time��6%   $	 100��6=    6I   �� $ DepartureTime��� 5      $��Arrival time��6%   $	 100��6;    6G   �� $ ArrivalTime��� 5      $��Flight number��6%   $	 100��6<    6H   �� $ FlightNumber��� 5      $��Departure places��6%   $	 100��6?    6K   �� $ DeparturePlaces��� 5      $��Arrivals places��6%   $	 100��6>    6J   �� $ Arrivals_places�5      5      �� 5   
   $��1��6   $��5q�6"    �� Orientation$ 
Horizontal=�6-   .+�5       �� $��Delete��6   $��15(�6&   $��	25 5 25 5q�64   $��5q�6H   ��6S   �� $ AddTicketCommand�5!      o� 5"   
   $��20��6   $	��Top=�6   
����� �.@�5#      m� $
��File��6   .@�5$      m� $��New Project��6   63   m� 5%      $��Menu Project��6   .@�5&      m� $��Save Project��6    m� Command 65   �� *SaveToExcelCommand+6^   m� 5'      $��Print Project��6   69   5(      �� 5)      m� 5*      $
��Exit��6   6,   5+      m� 5,      $
��Edit��6   6(   m� 5-      $
��View��6   6(   5.      5/      50      
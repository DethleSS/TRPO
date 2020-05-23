USE master;
GO

drop database if exists AirFlight;
GO

create database AirFlight;
GO

use AirFlight;
GO


create table Airlines(
	a_id int IDENTITY(1,1),
	a_name varchar(255)
)
GO

create table Flight(
	f_id int IDENTITY(1,1),
	f_type_of_flight varchar(255),
	f_name_of_airline int,
)
GO

create table Passengers(
	p_id int IDENTITY(1,1),
	p_first_name varchar(255),
	p_second_name varchar(255),
	p_year_of_birth Date,
	p_passport_number int
)
GO

create table Tickets(
	t_id int IDENTITY(1,1),
	t_number int,
	t_passenger int,
	t_departure_time Date,
	t_Arrival_time Date,
	t_flight_number int,
	t_registration_end_time Date,
	t_departure_places varchar(255),
	t_arrivals_places varchar(255)
)
GO

ALTER TABLE Tickets
ADD CONSTRAINT PK_Tickets_ID PRIMARY KEY (t_id)
GO

ALTER TABLE Passengers
ADD CONSTRAINT PK_Passengers_ID PRIMARY KEY (p_id)
GO

ALTER TABLE Flight
ADD CONSTRAINT PK_Flight_ID PRIMARY KEY (f_id)
GO

ALTER TABLE Airlines
ADD CONSTRAINT PK_Airlines_ID PRIMARY KEY (a_id)
GO

ALTER TABLE Tickets
WITH CHECK ADD CONSTRAINT FK_Tickets_Passenger_ID FOREIGN KEY(t_passenger)
REFERENCES Passengers (p_id)
ON UPDATE CASCADE
ON DELETE CASCADE
GO

ALTER TABLE Flight
WITH CHECK ADD CONSTRAINT FK_Flight_Airlines_ID FOREIGN KEY(f_name_of_airline)
REFERENCES Airlines (a_id)
ON UPDATE CASCADE
ON DELETE CASCADE
GO


ALTER TABLE Tickets
WITH CHECK ADD CONSTRAINT FK_Tickets_Flight_ID FOREIGN KEY(t_flight_number)
REFERENCES Flight (f_id)
ON UPDATE CASCADE
ON DELETE CASCADE
GO
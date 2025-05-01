namespace Taxi;

class Program
{
    static void Main(string[] args)
    {
        Taxi taxi = new Taxi();

        taxi.DriverName = "Jono";
        taxi.OnDuty = true;
        taxi.NumPassenger = 10;

        taxi.TaxiInfo();
        taxi.PickupPassenger();
        taxi.DropOffPassenger();

        Console.ReadKey();
    }
}

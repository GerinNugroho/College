namespace Taxi;

class Taxi
{
 public int NumPassenger;
 public bool OnDuty;
 public string? DriverName;

 public void TaxiInfo()
 {
  Console.WriteLine("Driver Name: {0}", DriverName);
  if (OnDuty)
  {
   Console.WriteLine("On Duty: Yes");
  }
  else
  {
   Console.WriteLine("On Duty: No");
  }
  Console.WriteLine("Number Of Passenger: {0}\n", NumPassenger);
 }

 public void PickupPassenger()
 {
  Console.WriteLine("{0} Sedang Menjemput Penumpang", DriverName);
 }

 public void DropOffPassenger()
 {
  Console.WriteLine("{0} Selesai Mengantar Penumpang", DriverName);
 }

}
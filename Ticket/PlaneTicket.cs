namespace Ticket;

class PlaneTicket
{
 public float Cost;
 public string? Origin;
 public string? Destination;
 public string? Currency;

 public void TicketSummary()
 {
  Console.WriteLine("Origin: {0}", Origin);
  Console.WriteLine("Destination: {0}", Destination);
  Console.WriteLine("Cost: {0} ({1})", Cost, Currency);
  if (Currency == "IDR")
  {
   Console.WriteLine("Convert To Dolar: {0}", Cost / 15000);
  }
  else
  {
   Console.WriteLine("Convert To Rupiah: {0}", Cost * 15000);
  }
 }
}
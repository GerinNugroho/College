namespace Ticket_Constructor_;

class Program
{
    static void Main(string[] args)
    {
        PlaneTicket ticket1 = new PlaneTicket(100, "JOGJA", "PKU", "USD");
        PlaneTicket ticket2 = new PlaneTicket(1500000, "JKT", "PKU", "IDR");

        ticket1.TicketSummary();
        Console.WriteLine();
        ticket2.TicketSummary();
    }
}

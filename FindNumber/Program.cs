using System.Runtime.InteropServices;

namespace FindNumber;

class Program
{
    static void Main(string[] args)
    {
        Numbers number1 = new Numbers();

        Console.WriteLine("Find  Minimum Number: {0}", number1.FindMinimum(3, 5));
        Console.WriteLine("Find  Minimum Number: {0}", number1.FindMinimum(2, 1, 10));
        Console.WriteLine();
        Console.WriteLine("Find  Maximum Number: {0}", number1.FindMaximum(3, 5));
        Console.WriteLine("Find  Maximum Number: {0}", number1.FindMaximum(2, 21, 10));
    }
}

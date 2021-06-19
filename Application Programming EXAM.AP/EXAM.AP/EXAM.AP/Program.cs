using System;

namespace EXAM.AP
{
    class Program
    {
        static void Main(string[] args)
        {
            People people1 = new People() { Name = "Marry", Gender = true, Age = 25 };
            Console.WriteLine("---------------------------------------------------------------------------------");
            Console.WriteLine("Person details: " + people1.ToString());
            people1.Age += 10;
            Console.WriteLine("Person details (after incrementing age): " + people1.ToString());
            Console.WriteLine("---------------------------------------------------------------------------------");
            People people2 = new People() { Name = "David", Gender = false, Age = 35 };
            Console.WriteLine("Person details: " + people2.ToString());
            people2.Age += 10;
            Console.WriteLine("Person details (after incrementing age): " + people2.ToString());
            Console.WriteLine("---------------------------------------------------------------------------------");
            Console.ReadKey();
        }
    }
}

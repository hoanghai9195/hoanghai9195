using System;

namespace EXAMP.AP2 
{   class Program
    {
        static void Main(string[] args)
        {
           CheckString checkString = new CheckString();           
           checkString.Input();
           checkString.Check();
           Console.ReadKey();
        }       
     }
}

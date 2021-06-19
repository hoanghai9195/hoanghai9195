using System;
namespace EXAMP.AP2
{
     public class CheckString
    {
        string Word;
        string String;
        public void Input()
        {
            Console.WriteLine("Enter a String");
             String = Console.ReadLine();
            Console.WriteLine("Enter a word to search in String");
             Word = Console.ReadLine();
        }
        public void Check()
        {          
                      int FoundIndex, NumberFindIndex = 0, FoundNumbers = 0;
            do
            {
                FoundIndex = String.IndexOf(Word, NumberFindIndex);
                if (FoundIndex > -1)
                {
                    FoundNumbers++;
                }
                NumberFindIndex = FoundIndex + 1;
            } while (FoundIndex > -1);
            Console.WriteLine("Found {0} time(s) word in the string", FoundNumbers);

        }
    }
}

//Program to show how to accept runtime string in c#.net
using System;
namespace HelloWorld
{
class Program
  {
    static void Main(string[] args)
    {
      Console.WriteLine("Enter The Word ");    
      String n1=Console.ReadLine();
      Console.WriteLine("How Many Times ");
      int no1=Convert.ToInt32(Console.ReadLine());
      for(int i=1;i<=no1;i++)
      {
         Console.WriteLine("\n "+n1);
      }    
    }  }
}

// Program To demonstrate simple inheritance in c#.net.
using System;
Namespace CSharp_Shell
{
Public class Program 
    {
    Public	int rollno=107;
     Public string	name=”Gaurav”;
    }
    Class exam:Program
    {
  Public static void Main()
        {
         	Exam n=new exam();
           Console.WriteLine(n.rollno);
           Console.WriteLine( n.name);
        	Console.ReadLine();
        }
    }
}




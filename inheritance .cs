// Program to demonstrate inheritance in c#.net
using system;
namespace CSharp_Shell
{
    Public class stud
 {
 Public string Class=”sybca”;
  Public string name=”gaurav”;
  }
 Public class exam:stude
 {
  Public string s1=”C#”;
   Public string s2=”audit”;
   Public string s3=”rdbms”;
    }
   Public class result:exam
   {
   Public int sc=20;
  Public int sa=30;
  Public int sr=40;
 Public static void Main(string [] args)
{
	Result r=new result();
        Console.WriteLine(r.Class);
	Console.WriteLine(r.name);
	Console.WriteLine(r.s1);		
Console.WriteLine(r.s2);
	Console.WriteLine(r.s3);
         Console.WriteLine(r.sc);
	Console.WriteLine(r.sa);
          Console.WriteLine(r.sr);
	Console.ReadLine();
    }
    }
}


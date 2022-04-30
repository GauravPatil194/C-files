//program to demonstrate multiple inheritance.
using System;
Namespace inheretance
{
   Class student 
 {
    Public void info()
{
   String name = “harshali”;
   String Class = “SYBCA”;
  Console.WriteLine(“student name :-“ +
name);
Console.WriteLine(“Class :-“ + Class);
   }
}
  Interface exam
{
 Void mak();
  }
 class result:student,exam
 {
 Public void mak()
 {
    String subject = “c#.net”;
     Int marks = 28;
 Console.WriteLine(“subject:-“ + subject);
  Console.WriteLine(“marks :-“ + marks);
    }
 Static void Main(string[] args)
{
   Result obj = new result();
  Obj.info();
  Obj.mak();
 Console.ReadLine();
}
 }
}

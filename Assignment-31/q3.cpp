
/*3. Write a C++ program to calculate the percentage of a student using multi-level inheritance.
  Accept the marks of three subjects in base class. A class will be derived from the above mentioned class
  which includes a function to find the total marks obtained and another class derived from
   this class which calculates and displays the percentage of students.*/
   #include<iostream>
   using namespace std;
   class marks
   {
   protected:
    float s1,s2,s3;
   public:
    void getMarks()
    {
        cout<<"Enter marks of three subjects:";
        cin>>s1>>s2>>s3;
    }
   };
   class totalMarks:public marks
   {
   protected:
    float total;
   public:
    void totalMarksObtains()
    {
        total=s1+s2+s3;
        cout<<"total Marks is ="<<total<<endl;;
    }
   };
   class persentage:public totalMarks
   {
   public:
    void per()
    {
    cout<<"percentage is ="<<(total/300)*100<<"%";

    }
   };
   int main()
   {
       persentage p1;
       p1.getMarks();
       p1.totalMarksObtains();
       p1.per();
       return 0;
   }


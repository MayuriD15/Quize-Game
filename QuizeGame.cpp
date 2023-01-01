#include <iostream>  

#include<string.h> 

#include<random>

#include<ctime>

using namespace std;

int Q_NO=1;

int CORRECT=0;

int Wrong=0;

bool ask[10] = {true,true,true,true,true,true,true,true,true,true};

void display_random_question();

void display();

void question(string question, string a, string b, string c, string d, char correct_answer);

void result();


int main()

{
   

display();

    
return 0;

}

void display()

{
    
   
 cout<<"Question number:"<<Q_NO<<"\t\t Correct Answer:"<<CORRECT<<"\t\tWrong Answer:"<<Wrong<<endl<<endl;
  
  display_random_question();

}

void display_random_question()

{
  
srand(time(0));
 
 bool is_question_reamaining = false;
 
 for(int i=0; i<10; i++)
 
 {
      
if(ask[i])
   
   {
        
 is_question_reamaining = true;
    
     break;
  
    }
 
 }
 
 while(is_question_reamaining)
 
 {
   
 int no = rand() %10;
 
   if(ask[no])
   
 {
        
ask[no] = false;
    
    switch(no)
    
    {
           
 case 0:
          
  question("Which language supports the object oriented language?", "c language", "c++ language", "cobal language","fortran language",'b');
     
       break;
    
        case 1:
      
     question("What is length of int variable in byte?","1", "2 or 4", "4", "2",'b');
      
      break;
         
   case 2:
       
     question("What is lint?", "c compiler", "interactive debugger", "analysing tool", "c interpreter",'c');
       
     break;
           
case 3:
         
   question("Which one of the following loop construct that will always be executed once?", "for", "while", "switch", "do-while",'d');
      
      break;
      
     case 4:
            
question("Directives are translated by the?", "Pre-processor", "Compiler", "Linker", "Editor",'a');
        
    break;
           
 case 5:
          
  question("What features make c++ so powefull?", "Easy implementation", "Reusing the old code", "Easy memory management", "All of the above",'d');
        
    break;
         
   case 6:
           
 question("Each instance of a class has a different set of?","Class interface","Method","Return types","Attribute values",'d');
      
      break;
       
    case 7:
          
  question("How many instances of a class can be declare?", "1","10","As per required","None of above",'c');
    
       break;
       
     case 8:
   
         question("How many charecters can a string hold when a declare as follows: char name[20];","18","19","20","None of these",'c');
        
    break;
    
        case 9:
   
         question("Which of the following SLT template class is a container adapter class?","Stack","List","Deque","vector",'a');
       
     break;
   
     }
  
  }

  }
 
result();

}

void result()

{
    
    
cout<<"Total Question = "<<Q_NO-1<<endl ;
  
  cout<<"Correct Answer = "<<CORRECT<<endl;
 
   cout<<"Wrong Answer = "<<Wrong<<endl;

    if(CORRECT>Wrong)
 
   {
      
  cout<<"Result = Pass"<<endl;
        
   
 }
    else if(Wrong> CORRECT)
  
  {
      cout<<"Result = Fail"<<endl;
      
  
  }
   
 else
   
 {
        
cout<<"Result= Tie"<<endl;
 
   }

}

void question(string question, string a, string b, string c, string d, char correct_answer)

{
    
cout<<question<<endl;
   
 cout<<"A.\t"<<a<<endl;
  
  cout<<"B.\t"<<b<<endl;
   
 cout<<"C.\t"<<c<<endl;
   
 cout<<"D.\t"<<d<<endl;
 
   char answer;
   
 cin>>answer;
   
 if(answer == correct_answer)
   
 {
        CORRECT ++;
  
  }
  
  else
  
  {
       
 Wrong ++;
 
   }
       
 Q_NO++;
     
   display();
  
  
}
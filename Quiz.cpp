#include <iostream>
using namespace std;
class Heading
{
	public:
	int head()
	{
		cout<< "\t\t\t==========================================================\n\n";
        cout<< "\t\t\t.....WELCOME TO WORLD OF PROGRAMMING LANGUAGE QUIZ....." << endl;
        cout<< "\n\t\t\t==========================================================\n\n";	
	}
};
class Quiz 
{
	private:
	    int score;
	    char option;
	public:
	    Quiz() 
		{
	        score = 0;
	        option = '\0';
	    }
    int play() 
	{
        cout<< "~~~PLEASE FOLLOW THE INSTRUCTIONS CAREFULLY~~~\n" << endl;
        cout<< "1: Quiz contains 10 questions" << endl;
        cout<< "2: You will be given 1 point for each correct answer" << endl;
        cout<< "3: There will be no negative marking" << endl;
        cout<< "4: Please press 'S' to start the quiz" << endl;
        cout<< "5: Please select option 'A', 'B', 'C', or 'D'" << endl;
        cout<< "6: If you score greater than 7, you will pass the quiz and you are smart" << endl;
		char c;
       	cout<<"\nPRESS 'S/s' TO START THE QUIZ GAME: ";
        cin >> c;
        cout<<endl;
        playquiz:
        if (c == 's' || c == 'S')
        {
        	cout<<"LEVEL-1 IS BEGIN!! HOPE YOU WILL HAVE FUN & ENJOY LEARNING!!"<<endl<<endl;
        	//Question 1 of C++ Language
            qst1:cout<< "Question 1. Who invented C++?" << endl;
            cout<< "a) Dennis Ritchie\nb) Ken Thompson\nc) Brian Kernighan\nd) Bjarne Stroustrup\n" << endl;
            cin>> option;
            cout<<endl;
            if(option=='a'||option=='b'||option=='c'||option=='d'||option=='A'||option=='B'||option=='C'||option=='D')
            {
            	 if (option == 'd' || option == 'D') 
				{
                	score++;
                	cout<< "Correct! \nThe answer is d) Bjarne Stroustrup\n" << endl;
            	}
            	else 
				{
                	cout<< "Wrong Answer! \nThe correct answer is d) Bjarne Stroustrup\n" << endl;
           	 	}
			}
           else
           {
           		cout<<"Invalid Input!!!\nPlease press correct option a,b,c,d\n"<<endl;
           		goto qst1;
		   }
            //Question 2 of C++ Language
            qst2:cout<< "Question 2. What is the difference between 'struct' and 'class' in C++?" << endl;
            cout<< "a) 'struct' can have member functions while 'class' cannot\nb) 'class' can have member functions while 'struct' cannot\n";
            cout<< "c)  There is no difference between 'struct' and 'class' in C++\nd) 'class' can have private members while 'struct' cannot\n" << endl;
            cin>> option;
            cout<<endl;
            if(option=='a'||option=='b'||option=='c'||option=='d'||option=='A'||option=='B'||option=='C'||option=='D')
            {
            	if (option == 'b' || option == 'B')
            	{
                	score++;
                	cout<< "Correct! \nThe answer is b) 'class' can have member functions while 'struct' cannot\n" << endl;
            	}
            	else
            	{
                	cout<< "Wrong Answer! \nThe correct answer is b) 'class' can have member functions while 'struct' cannot\n" << endl;
            	}	
			}
			else
           	{
           		cout<<"Invalid Input!!!\nPlease press correct option a,b,c,d\n"<<endl;
           		goto qst2;
		   	}
            //Question 3 of C++ Language
            qst3:cout<< "Question 3. Which of the following is not a type of constructor in C++?" << endl;
            cout<< "a) Default constructor\nb) Parameterized constructor\nc) Copy constructor\nd) Destructor\n"<< endl;
            cin>> option;
            cout<<endl;
            if(option=='a'||option=='b'||option=='c'||option=='d'||option=='A'||option=='B'||option=='C'||option=='D')
            {
            	if (option == 'd' || option == 'D')
            	{
                score++;
                cout<< "Correct! \nThe answer is d) Destructor\n" << endl;
            	}
            	else
            	{
                cout<< "Wrong answer! \nThe correct answer is d) Destructor\n" << endl;
            	}
			}
            else
           	{
           		cout<<"Invalid Input!!!\nPlease press correct option a,b,c,d\n"<<endl;
           		goto qst3;
		   	}
            //Question 4 of C++ Language
            qst4:cout<<"Question 4. Which of the following type is provided by C++ but not C?"<<endl;
            cout<<"a) double\nb) float\nc) int\nd) bool\n"<<endl;
            cin>>option; 
            cout<<endl;
            if(option=='a'||option=='b'||option=='c'||option=='d'||option=='A'||option=='B'||option=='C'||option=='D')
            {
            	if(option=='d' || option=='D')
            	{
          		score++;
         		cout<<"Correct! \nThe answer is d) bool\n"<<endl;
            	}
            	else
				{
          		cout<<"Wrong Answer! \nThe correct answer is d) bool\n"<<endl;
     			}	
			}
        	else
           	{
           		cout<<"Invalid Input!!!\nPlease press correct option a,b,c,d\n"<<endl;
           		goto qst4;
		   	}
     		//Question 5 of C++ Language
			qst5:cout<<"Question 5. By default, all the files in C++ are opened in ___ mode.?"<<endl;
			cout<<"a) Binary\nb) VTC\nc) Text\nd) ISCII\n"<<endl;
			cin>>option; 
			cout<<endl;
			if(option=='a'||option=='b'||option=='c'||option=='d'||option=='A'||option=='B'||option=='C'||option=='D')
			{
				if(option=='c' || option=='C')
     			{
         		score++;
         		cout<<"Correct! \nThe answer is c) Text\n"<<endl;
     			}
     			else
				{
         		cout<<"Wrong Answer! \nWrite anwer is c) Text\n"<<endl;
     			}	
			}
     		else
           	{
           		cout<<"Invalid Input!!!\nPlease press correct option a,b,c,d\n"<<endl;
           		goto qst5;
		   	}
     		//Question 6 of C++ Language
      		qst6:cout<<"Question 6. Which of the following correctly declares an array in C++?"<<endl;
     		cout<<"a) array{10};\nb) array array[10];\nc) int array;\nd) int array[10];\n"<<endl;
     		cin>>option; 
     		cout<<endl;
     		if(option=='a'||option=='b'||option=='c'||option=='d'||option=='A'||option=='B'||option=='C'||option=='D')
     		{
     			if(option=='d' || option=='D')
     			{
        		score++;
        		cout<<"Correct! \nThe answer is d) int array[10];\n"<<endl;
        		cout<<""<<endl;
     			}
     			else
				{
         		cout<<"Wrong Answer! \nThe correct answer is d) int array[10];\n"<<endl;
    			}	
			}
     		else
           	{
           		cout<<"Invalid Input!!!\nPlease press correct option a,b,c,d\n"<<endl;
           		goto qst6;
		   	}
    		//Question 7 of C++ Language
     		qst7:cout<<"Question 7. What is Inheritance in C++?"<<endl;
     		cout<<"a) Deriving new classes from existing classes\nb) Overloading of classes\nc) Classes with same names\nd) Wrapping of data into a single class\n"<<endl;
     		cin>>option;
     		cout<<endl;
     		if(option=='a'||option=='b'||option=='c'||option=='d'||option=='A'||option=='B'||option=='C'||option=='D')
     		{
     			if(option=='a' || option=='A')
     			{
        		score++;
        		cout<<"Correct! \nThe answer is a) Deriving new classes from existing classes\n"<<endl;
    			}
       			else
				{
        		cout<<"Wrong Answer! \nThe correct answer is a) Deriving new classes from existing classes\n"<<endl;
    			}
			 }	
    		else
           	{
           		cout<<"Invalid Input!!!\nPlease press correct option a,b,c,d\n"<<endl;
           		goto qst7;
		   	}
    		//Question 8 of C++ Language
			qst8:cout<<"Question 8. What is meant by a polymorphism in C++?"<<endl;
    		cout<<"a) Class having only single form\nb) Class having four forms\nc) Class having many forms\nd) Class having two forms\n"<<endl;
     		cin>>option; 
     		cout<<endl;
     		if(option=='a'||option=='b'||option=='c'||option=='d'||option=='A'||option=='B'||option=='C'||option=='D')
     		{
     			if(option=='c'|| option=='C')
     			{
        		score++;
        		cout<<"Correct! \nThe answer is c) class having many forms\n"<<endl;
     			} 
     			else
				{
         		cout<<"Wrong Answer! \nThe correct answer is c) class having many forms\n"<<endl;
     			}
			}
     		else
           	{
           		cout<<"Invalid Input!!!\nPlease press correct option a,b,c,d\n"<<endl;
           		goto qst8;
		   	}
     		//Question 9 of C++ Language
    		qst9:cout<<"question 9. Which concept allows you to reuse the written code in C++?"<<endl;
     		cout<<"a) Inheritance\nb) Polymorphism\nc) Abstraction\nd) Encapsulation\n"<<endl;
     		cin>>option; 
     		cout<<endl;
     		if(option=='a'||option=='b'||option=='c'||option=='d'||option=='A'||option=='B'||option=='C'||option=='D')
     		{
     			if(option=='a' || option=='A')
     			{
    		    score++;
        		cout<<"Correct! \nThe answer is a) Inheritance\n"<<endl;
     			} 
     			else
				{
          		cout<<"Wrong answer! \nThe correct answer is a) Inheritance\n"<<endl;
     			}
			}
     		else
           	{
           		cout<<"Invalid Input!!!\nPlease press correct option a,b,c,d\n"<<endl;
           		goto qst9;
		   	}
     		//Question 10 of C++ Language
       		qst10:cout<<"Question 10. Which of the following user-defined header file extension used in c++?"<<endl;
     		cout<<"a) hg\nb) cpp\nc) h\nd) hf\n"<<endl;
     		cin>>option; 
     		cout<<endl;
     		if(option=='a'||option=='b'||option=='c'||option=='d'||option=='A'||option=='B'||option=='C'||option=='D')
     		{
     			if(option=='c' || option=='C')
     			{
        		score++;
         		cout<<"Correct! \nThe answer is c) h\n"<<endl;
     			}		 
     			else
				{
         		cout<<"Wrong Answer! \nThe correct answer is c) h\n"<<endl;
     			}
			}
     		else
           	{
           		cout<<"Invalid Input!!!\nPlease press correct option a,b,c,d\n"<<endl;
           		goto qst10;
		   	}
        }
        else
        {
            cout<<"You enter wrong input to start! \nPlease enter 's' to start the Quiz: ";
            cin>>c;
            goto playquiz;
        }
        return score;
    }
    int playjava() 
	{
        cout<< "~~~PLEASE FOLLOW THE INSTRUCTIONS CAREFULLY~~~\n" << endl;
        cout<< "1: Quiz contains 10 questions" << endl;
        cout<< "2: You will be given 1 point for each correct answer" << endl;
        cout<< "3: There will be no negative marking" << endl;
        cout<< "4: Please press 's' to start the quiz" << endl;
        cout<< "5: Please select option 'a', 'b', 'c', or 'd'" << endl;
        cout<< "6: If you score greater than 7, you will pass the quiz and you are smart" << endl;
        int s=0;
        char c;
        cout<<"\nPRESS 'S/s' TO START THE QUIZ GAME:";
        cin >> c;
        cout<<endl;
        playquiz:
        if (c == 's' || c == 'S')
        {
        	cout<<"CONGRATULATIONS!!!!!!!!!\nYOU HAVE REACHED TO LEVEL-2:"<<endl;
        	//Question 1 of JAVA Language
            javaqst1:cout<<"Question 1. Who is the father of java?" << endl;
            cout<<"a) Dennis Ritchie\nb) Ken Thompson\nc) Brian Kernighan\nd) James Gosling\n" << endl;
            cin>>option;
            cout<<endl;
            if(option=='a'||option=='b'||option=='c'||option=='d'||option=='A'||option=='B'||option=='C'||option=='D')
            {
            	if (option == 'd' || option == 'D') 
				{
                score++;
                s++;
                cout<< "Correct! \nThe answer is d) James Gosling\n" << endl;
            	}
            	else 
				{
                cout<< "Wrong Answer! \nThe correct answer is d) James Gosling\n" << endl;
            	}
			}
            else
           	{
           		cout<<"Invalid Input!!!\nPlease press correct option a,b,c,d\n"<<endl;
           		goto javaqst1;
		   	}
            //Question 2 of JAVA Language
            javaqst2:cout<<"Question 2. Which of the following is not a Java features?" << endl;
            cout<<"a) Dynamic\nb) Architecture Neutral\nc) Use of pointers\nd) Object-oriented\n"<< endl;
            cin>> option;
            cout<<endl;
            if(option=='a'||option=='b'||option=='c'||option=='d'||option=='A'||option=='B'||option=='C'||option=='D')
            {
            	if (option == 'c' || option == 'C')
            	{
                score++;
                s++;
                cout<<"Correct! \nThe answer is c) Use of pointers\n" << endl;
            	}
            	else
            	{
                cout<<"Wrong Answer! \nThe correct answer is c) Use of pointers\n" << endl;
            	}
			}
            else
           	{
           		cout<<"Invalid Input!!!\nPlease press correct optiona,b,c,d\n"<<endl;
           		goto javaqst2;
		   	}
            //Question 3 of JAVA Language
            javaqst3:cout<< "Question 3.  _____ is used to find and fix bugs in the Java programs." << endl;
            cout<< "a) JVM\nb) JRE\nc) JDK\nd) JDB\n"<< endl;
            cin>> option;
            cout<<endl;
            if(option=='a'||option=='b'||option=='c'||option=='d'||option=='A'||option=='B'||option=='C'||option=='D')
            {
            	if (option == 'd' || option == 'D')
            	{
                score++;
                s++;
                cout<<"Correct! \nThe answer is d) JDB\n" << endl;
            	}
            	else
            	{
                cout<< "Wrong Answer! \nThe correct answer is d) JDB\n" << endl;
            	}
			}
			else
           	{
           		cout<<"Invalid Input!!!\nPlease press correct option a,b,c,d \n"<<endl;
           		goto javaqst3;
		   	}
            //Question 4 of JAVA Language
            javaqst4:cout<<"Question 4. What is the return type of the hashCode() method in the Object class?"<<endl;
            cout<<"a) Object\nb) int\nc) long\nd) void\n"<<endl;
            cin>>option;
			cout<<endl; 
			if(option=='a'||option=='b'||option=='c'||option=='d'||option=='A'||option=='B'||option=='C'||option=='D')
           	{
           		if(option=='b' || option=='B')
            	{
          		score++;
         		cout<<"Correct! \nThe answer is b) int\n"<<endl;
            	}
            	else
				{
          		cout<<"Wrong  Answer! \nThe correct answer is b) int\n"<<endl;
     			}
			}
			else
           	{
           		cout<<"Invalid Input!!!\nPlease press correct option a,b,c,d\n"<<endl;
           		goto javaqst4;
		   	}
     		//Question 5 of JAVA Language
      		javaqst5:cout<<"Question 5. Evaluate the following Java expression, if x=3, y=5, and z=10: ++z + y - y + z + x++"<<endl;
     		cout<<"a) 24\nb) 23\nc) 20\nd) 25\n"<<endl;
     		cin>>option; 
     		cout<<endl;
     		if(option=='a'||option=='b'||option=='c'||option=='d'||option=='A'||option=='B'||option=='C'||option=='D')
     		{
     			if(option=='d' || option=='D')
     			{
         		score++;
         		s++;
         		cout<<"Correct! \nThe answer is d) 25\n"<<endl;
     			}
     			else
		 		{
          		cout<<"Wrong  Answer! \nThe correct answer is d) 25\n"<<endl;
     			}
			}
			else
           	{
           		cout<<"Invalid Input!!!\nPlease press correct option a,b,c,d\n"<<endl;
           		goto javaqst5;
		   	}
     		//Question 6 of JAVA Language
      		javaqst6:cout<<"Question 6. In which process, a local variable has the same name as one of the instance variables?"<<endl;
     		cout<<"a) Serialization\nb) Variable Shadowing\nc) Abstraction\nd) Multi-threading\n"<<endl;
     		cin>>option; 
     		cout<<endl;
     		if(option=='a'||option=='b'||option=='c'||option=='d'||option=='A'||option=='B'||option=='C'||option=='D')
     		{
     			if(option=='b' || option=='B')
     			{
          		score++;
          		s++;
         		cout<<"Correct! \nThe answer is b) Variable Shadowing\n"<<endl;
     			}
    	 		else
				{
         		cout<<"Wrong  Answer! \nThe correct answer is b) Variable Shadowing\n"<<endl;
     			}
			}
			else
           	{
           		cout<<"Invalid Input!!!\nPlease press correct option a,b,c,d\n"<<endl;
           		goto javaqst6;
		   	}
     		//Question 7 of JAVA Language
     		javaqst7:cout<<"Question 7. Which package contains the Random class?"<<endl;
     		cout<<"a) java.util package\nb) java.lang package\nc) java.awt package\nd) java.io package\n"<<endl;
     		cin>>option; 
     		cout<<endl;
     		if(option=='a'||option=='b'||option=='c'||option=='d'||option=='A'||option=='B'||option=='C'||option=='D')
     		{
     			if(option=='a' || option=='A')
     			{
         		score++;
         		s++;
         		cout<<"Correct! \nThe answer is a) java.util package\n"<<endl;
     			}
       			else
				{
          		cout<<"wrong  Answer! \nThe correct answer is a) java.util package\n"<<endl;
     			}
			}
			else
           	{
           		cout<<"Invalid Input!!!\nPlease press correct option a,b,c,d\n"<<endl;
           		goto javaqst7;
		   	}
     		//Question 8 of JAVA Language
			javaqst8:cout<<"Question 8. An interface with no fields or methods is known as a ______."<<endl;
     		cout<<"a) Runnable Interface\nb) Marker Interface\nc) Abstract Interface\nd) CharSequence Interface\n"<<endl;
     		cin>>option; 
     		cout<<endl;
     		if(option=='a'||option=='b'||option=='c'||option=='d'||option=='A'||option=='B'||option=='C'||option=='D')
     		{
     			if(option=='b'|| option=='B')
     			{
     			score++;
     			s++;
     			cout<<"Correct! \nThe answer is b) Marker Interface\n"<<endl;
     			} 
     			else
				{
         		cout<<"Wrong  Answer! \nThe correct answer is b) Marker Interface\n"<<endl;
   				}
			}
			else
           	{
           		cout<<"Invalid Input!!!\nPlease press correct option a,b,c,d\n"<<endl;
           		goto javaqst8;
		   	}
   			//Question 9 of JAVA Language
     		javaqst9:cout<<"question 9. Which of the following is an immediate subclass of the Panel class?"<<endl;
     		cout<<"a) Applet class\nb) Window class\nc) Frame class\nd) Dialog class\n"<<endl;
     		cin>>option; 
     		cout<<endl;
     		if(option=='a'||option=='b'||option=='c'||option=='d'||option=='A'||option=='B'||option=='C'||option=='D')
     		{
     			if(option=='a' || option=='A')
    			{
    			score++;
    			s++;
        		cout<<"Correct! \nThe answer is a) Applet class\n"<<endl;
    			} 
     			else
				{
        		cout<<"Wrong  Answer! \nThe correct answer is a) Applet class\n"<<endl;
    			}
			}
			else
           	{
           		cout<<"Invalid Input!!!\nPlease press correct option a,b,c,d\n"<<endl;
           		goto javaqst9;
		   	}
    		//Question 10 of JAVA Language
       		javaqst10:cout<<"Question 10. Which of the following is a reserved keyword in Java?"<<endl;
     		cout<<"a) object\nb) strictfp\nc) main\nd) system\n"<<endl;
     		cin>>option; 
     		cout<<endl;
     		if(option=='a'||option=='b'||option=='c'||option=='d'||option=='A'||option=='B'||option=='C'||option=='D')
     		{
     			if(option=='b' || option=='B')
     			{
    		    score++;
          		s++;
         		cout<<"Correct! \nThe answer is b) strictfp\n"<<endl;
    			} 
     			else
				{
    			cout<<"Wrong  Answer! \nThe correct answer is b) strictfp\n"<<endl;
     			}
			}
			else
           	{
           		cout<<"Invalid Input!!!\nPlease press correct option a,b,c,d\n"<<endl;
           		goto javaqst10;
		   	}
        }
        else
        {
            cout<<"You enter wrong input to start! \nPlease enter 's' to start the Quiz\n"<<endl;
            cin>>c;
            goto playquiz;
        }
        cout<<"YOUR SCORE OF THE LEVEL IS : "<< s <<endl;
       return score;  
    }
};
int main()
{
	Heading heading;
	heading.head();	
    char playagain = 'y';
    while (playagain == 'y' || playagain == 'Y')
    {
    	Quiz quiz;
        int finalscore = quiz.play();
        cout << "YOUR TOTAL SCORE IS: " << finalscore << endl;
        if (finalscore >= 6) 
		{
            cout<< "You Passed The First Level." << endl;
            cout<< "You Are Smart!" << endl;
            cout<< "You Are Elegible For Second Level!"<<endl;
            cout<<"Do you want to play  ? (Y/N):" ; 
            char again;
            cin>>again;
            while (again == 'y' || again == 'Y')
           {
            	int points=quiz.playjava();
            	cout << "YOUR TOTAL SCORE IS: " << points << endl;
            	again='N';
           }
           playagain='N'; 
        }
        else 
		{
            cout<< "You Failed The Quiz :(" << endl;
            cout<< "TRY AGAIN!\n"<<endl;
            cout<<"Do you want to play again ? (Y/N):" ; 
            cin>>playagain;
            cout<<endl;
        }       
}
    cout<< "\nTHANK TOU FOR PLAYING! HAVE A GREAT DAY.\nHOPE TO SEE YOU AGAIN :)" << endl;
    return 0;
}

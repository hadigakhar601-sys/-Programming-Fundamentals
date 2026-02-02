#include <iostream>
#include <string>
#include <ctime>
#include <vector>
#include <cstdlib>
#include <chrono>
#include <iomanip>
#include <sstream>

using namespace std;

int main()

{
	
	//Start screen
	
//------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
	cout <<"                                                 [TYPING SPEED TESTER]                                                 " << endl;
	cout <<"\n" ;
	cout <<"---<(Welcome to Typing Speed Tester!)>---" << endl;
	cout <<"-----<(Boost your typing speed and accuracy with every keystroke.)>-----" << endl ;
	cout <<"=======================================================================================================================" << endl;
	cout <<"" << endl ;
	
	
//--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
	bool repeat = true ;
	char repeatChoice ;
	
	do {
	
			//Ask user to choose practice or test mode
	cout << "          SELECTION OF OPTIONS          \n";
	cout << "----------------------------------------\n";
	cout << "Select an option according to your need.\n";
	cout << "1. Practice Mode\n";
	cout << "2. Test Mode\n";
	cout << "Enter your choice(1 or 2):";
	int choice;
	cin >> choice;
	
	
	
//------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
	
	if(choice==1)
	{
		cout << "\n";
	cout << "You selected Practice Mode.\n";
	
	bool repeat = true ;
	char repeatChoice ;
	
	do {
	//Practice mode
	cout <<"            ======================================== Practice Mode ========================================\n";
	cout << "Select whether you wanna practice by yourself or let the program suggest you a random text.\n";
	int selection;
	cout << "1. Type your own text.\n";
	cout << "2. Use a suggested text.\n";
	cout << "Enter your choice: \n";
	cin >> selection;
	cin.ignore();
	
	//Use of switch.
	
	
	switch (selection)
	{
	case 1:
	{
	cin.ignore() ;
	string userText, typedText;
	cout << "Enter any text you'd like to practice:\n";
	getline(cin, userText);
	
	cout << "Now type the sentence you entered:\n";
	getline(cin,typedText);
	
	cout << "Practice done!\n" ;
	
    break; 
    }


    case 2:
	{
	srand(time(0)); // It will suggest random sentences from selected level.
   
	cout << "----------------------------------------\n";
    int level;
    cout << "\n Chose difficulty level:\n";
    cout << "1. Easy\n";
    cout << "2. Medium\n";
    cout << "3. Large\n";
    cout << "Enter your choice: \n";
    cin >> level;
	cout << "----------------------------------------\n";
    cin.ignore();
    
    vector<string>easyTexts;
    	easyTexts.push_back("The sun rises in the East.");
    	easyTexts.push_back("Cats like to sleep a lot.");
    	easyTexts.push_back("Water is essential for life.");
    	easyTexts.push_back("Birds can fly high in the sky.");
    	easyTexts.push_back("I love to read books.");
    	easyTexts.push_back("The apple is red and sweet.");
    	easyTexts.push_back("Dogs are very loyal animals.");
    	easyTexts.push_back("He is my best friend.");
    	easyTexts.push_back("Flowers bloom in spring.");
    	easyTexts.push_back("The baby is sleeping peacefully.");
    	easyTexts.push_back("The sun is shining brightly today.");
    	easyTexts.push_back("I like to drink fresh orange juice.");
    	easyTexts.push_back("What is your name?");
    	easyTexts.push_back("The rain makes the grass green.");
    	easyTexts.push_back("What is your favourite color?");
    	easyTexts.push_back("What is the weather today?");
    	easyTexts.push_back("She walks to school every morning.");
    	easyTexts.push_back("The cat sleeps on warm sofa.");
    	easyTexts.push_back("He reads a book before going to bed.");
    	easyTexts.push_back("We play football in the park.");
    	easyTexts.push_back("My favourite color is blue.");
    	easyTexts.push_back("The birds are singing outside.");
    	easyTexts.push_back("I have a small red bicycle.");
    	easyTexts.push_back("They enjoy eating ice cream.");
    	easyTexts.push_back("The flowers smell very sweet.");
    	easyTexts.push_back("He drinks water after running.");
    	easyTexts.push_back("The dog barks at the stranger.");
    	easyTexts.push_back("She wears a preety yellow dress.");
    	easyTexts.push_back("We watch movies on weekends.");
    	easyTexts.push_back("The sky is clear and blue today.");
    	
    vector<string>mediumTexts;
    	mediumTexts.push_back("Learning new skills can improve your life.");
        mediumTexts.push_back("The rain soaked the ground thoroughly yesterday.");
        mediumTexts.push_back("Technology has changed the way we communicate.");
        mediumTexts.push_back("He enjous playing football with his friends every weekend.");
        mediumTexts.push_back("A balanced and healthy diet is very important for health.");
        mediumTexts.push_back("The mountains were covered in a blanket of snow.");
        mediumTexts.push_back("Travelling broadens the mind and opens new perspectives.");
        mediumTexts.push_back("The movie was interesting, but the ending was predictable.");
        mediumTexts.push_back("She workes hard to achieve her goals and dreams.");
        mediumTexts.push_back("The library contains many valuable books and resources." ) ;
        mediumTexts.push_back("The quick brown fox jumps over the lazy fog.") ;
		mediumTexts.push_back("Consistent practice improves your typing speed.") ;
		mediumTexts.push_back("Programming requires patience and precision.") ;
		mediumTexts.push_back("Never give up on learning new skills.") ;
		mediumTexts.push_back("Debugging is twice as hard as writing a code.") ;
        
    vector<string>largeTexts;
    	largeTexts.push_back("The importance of education can not be overstated, as it equips individuals with knowledge, skills, and values necessary for personal development and socital progress.");
    	largeTexts.push_back("Climate change is one of the biggest challanges facing the worls today, affecting ecosystems, weather patterns, and human livelihood on a global scale.");
    	largeTexts.push_back("Travelling to different countries allows people to experience diverse cultures, cuisines, and traditions, fostring mutual understanding and respect.");
    	largeTexts.push_back("Advances in medical sciences have significantly improved life expectancy, enabling treatments for diseases that were once considered fatal.");
    	largeTexts.push_back("The rapid growth of technology hs transformed industries, creating new opportunities while also presenting challanges such as data privacy concerns.");
    	largeTexts.push_back("Reading regularly not only enhances vocabulary and comprehension skills but also stimulates imagination and critical thinking.");
    	largeTexts.push_back("Environmental conservation efforts are crucial for preserving natural habitates and ensuring sustainable resources for future generations.");
    	largeTexts.push_back("Effective communication is vital in both personal and professional life, helping to build relationships and resolve conflicts.");
    	largeTexts.push_back("The development of renewable energy sources is essential to reduce dependence on fossil fuels and combat global warming.");
    	largeTexts.push_back("Community service and volunteering provide opportunities to give bacl to society and develop empathy and leadership skills." ) ;
    	largeTexts.push_back("To become a better typist, you need to develop muscle memory which can only br achieved by regular and accurate practice.") ;
		largeTexts.push_back("Typing speed is measured in words per minute and accuracy is also important to ensure proper communication.") ;
		largeTexts.push_back("Projects like typing speed testers can help beginners practice both speed and precision in a fun and interactive way.") ;
		largeTexts.push_back("Developing good typing habits in yourself improves accuracy and typing speed and reduces errors and increases productivity.") ;
    	
    	
    
	string suggestedText;
	 
	if(level==1)
	{
		suggestedText = easyTexts[rand()% easyTexts.size()];
	}
	
	else if(level==2)
	{
		suggestedText = mediumTexts[rand()% mediumTexts.size()];
	}
	
	else if(level==3)
	{
		suggestedText = largeTexts[rand()% largeTexts.size()];
	}
	
	else 
	{
		cout << "Invalid choice!\n" ;
	}
	
	cout << "Type the following sentence exactly as shown in : \n";
	cout <<"\"" << suggestedText << "\"\n\n";
    string userInput;
    getline(cin, userInput);
    //Word-by-Word comparison
    stringstream origStream(suggestedText), typedStream(userInput);
    string origWord, typedWord;
    int mistakes = 0;
    while (origStream>> origWord)
    {
    if (!(typedStream >> typedWord) || origWord != typedWord)
    { mistakes ++ ;

	}
	// count extra words typed by user
	while (typedStream >> typedWord)
	{ mistakes++ ;
	}
	cout << "\nYou made" << mistakes << " Major mistake (s).\n";
    break; 
}
}
   default :
   {cout << "Invalid choice. Please select 1 0r 2\n" ; }
   }
	 	//Restart practice
			cout << "\n Do you want to practice again? ( Y/ N):" ;
			cin >> repeatChoice;
			cin.ignore() ;
			
			if(repeatChoice=='Y' || repeatChoice=='y')
			{repeatChoice= true;}
			
			else
			{repeatChoice=false;
			cout << "Thanks for using Typing Speed Tester!\n" ;
			}

} while(repeatChoice);
}


//------------------------------------------------------------------------------------------------------------------------------------




	else if (choice==2)
	{
	cout << "You selected Test Mode.\n";
	//Test Mode
	
	bool repeat = true ;
	char repeatChoice;
	do {
	cout << "\n========================================Test Mode========================================\n";
	cout << "\n Choose test mode options:\n";
	cout << "1. Type your own text.\n";
	cout << "2. Program will suggest a text.\n";
	cout << "Enter your choice: \n";
	
	int testChoice;
	cin  >> testChoice;
	cin.ignore();
	
	switch (testChoice) {
		case 1 :
		{
			cout <<"\nTest Mode: Type your text.\n" ;
			string userText;
			cout <<"Start typing and press Enter when you're done.\n";
			
			auto startTime= chrono::steady_clock::now();         //Start timer
			getline(cin, userText);
			auto endTime= chrono::steady_clock::now();          //End timer
			
	    auto duration = chrono :: duration_cast<chrono::seconds>(endTime-startTime).count();
	    auto elapsed = chrono :: duration_cast< chrono::seconds>(endTime-startTime).count() ;
	    double timelnSeconds= elapsed ;
	    
	    // Count Words
	    int wordCount = 0;
	    for(int i=0 ; i<userText.length(); i++)
		{ if ((userText[i] ==' ' && userText[i+1]!=' ') || i== userText.length() -1) {wordCount++; }
		}
		
		// Calculate WPM
		double timelnMinutes = timelnSeconds/60.0 ;
		double wpm = wordCount/timelnMinutes;
		
		cout << "\n----------Result----------\n";
		cout << "Time Taken: " << timelnSeconds << "seconds\n";
		cout << "Words Typed: " << wordCount << "\n";
		cout << "WPM: " << wpm << "\n";
		break;
	}
	
	case 2 :
		{
			srand(time(0)) ;
			
			vector<string>easyTexts;
			easyTexts.push_back("Typing is fun.") ;
			easyTexts.push_back("Practice makes perfect.") ;
			easyTexts.push_back("Hello world!") ;
			easyTexts.push_back("Stay focused and keep typing.") ;
			easyTexts.push_back("C++ is powerful") ;
			easyTexts.push_back("Cats like to sleep a lot.");
     	    easyTexts.push_back("Water is essential for life.");
        	easyTexts.push_back("Birds can fly high in the sky.");
        	easyTexts.push_back("I love to read books.");
        	easyTexts.push_back("The apple is red and sweet.");
        	easyTexts.push_back("Dogs are very loyal animals.");
        	easyTexts.push_back("He is my best friend.");
        	easyTexts.push_back("Flowers bloom in spring.");
        	easyTexts.push_back("The baby is sleeping peacefully.");
        	easyTexts.push_back("The sun is shining brightly today.");
    	    easyTexts.push_back("I like to drink fresh orange juice.");
    	    easyTexts.push_back("What is your name?");
    	    easyTexts.push_back("The rain makes the grass green.");
    	    easyTexts.push_back("What is your favourite color?");
    	    easyTexts.push_back("What is the weather today?");
    	    easyTexts.push_back("She walks to school every morning.");
    	    easyTexts.push_back("The cat sleeps on warm sofa.");
    	    easyTexts.push_back("He reads a book before going to bed.");
        	easyTexts.push_back("We play football in the park.");
    	    easyTexts.push_back("My favourite color is blue.");
    	    easyTexts.push_back("The birds are singing outside.");
    	    easyTexts.push_back("I have a small red bicycle.");
    	    easyTexts.push_back("They enjoy eating ice cream.");
    	    easyTexts.push_back("The flowers smell very sweet.");
    	    easyTexts.push_back("He drinks water after running.");
    	    easyTexts.push_back("The dog barks at the stranger.");
    	    easyTexts.push_back("She wears a preety yellow dress.");
    	    easyTexts.push_back("We watch movies on weekends.");
    	    easyTexts.push_back("The sky is clear and blue today.");
    	
			
			vector<string>mediumTexts;
			mediumTexts.push_back("The quick brown fox jumps over the lazy fog.") ;
			mediumTexts.push_back("Consistent practice improves your typing speed.") ;
			mediumTexts.push_back("Programming requires patience and precision.") ;
			mediumTexts.push_back("Never give up on learning new skills.") ;
			mediumTexts.push_back("Debugging is twice as hard as writing a code.") ;
			mediumTexts.push_back("Learning new skills can improve your life.");
            mediumTexts.push_back("The rain soaked the ground thoroughly yesterday.");
            mediumTexts.push_back("Technology has changed the way we communicate.");
            mediumTexts.push_back("He enjous playing football with his friends every weekend.");
            mediumTexts.push_back("A balanced and healthy diet is very important for health.");
            mediumTexts.push_back("The mountains were covered in a blanket of snow.");
            mediumTexts.push_back("Travelling broadens the mind and opens new perspectives.");
            mediumTexts.push_back("The movie was interesting, but the ending was predictable.");
            mediumTexts.push_back("She workes hard to achieve her goals and dreams.");
            mediumTexts.push_back("The library contains many valuable books and resources." ) ;
        
			vector<string>largeTexts;
			largeTexts.push_back("To become a better typist, you need to develop muscle memory which can only br achieved by regular and accurate practice.") ;
			largeTexts.push_back("Typing speed is measured in words per minute and accuracy is also important to ensure proper communication.") ;
			largeTexts.push_back("Projects like typing speed testers can help beginners practice both speed and precision in a fun and interactive way.") ;
			largeTexts.push_back("Developing good typing habits in yourself improves accuracy and typing speed and reduces errors and increases productivity.") ;
			largeTexts.push_back("The importance of education can not be overstated, as it equips individuals with knowledge, skills, and values necessary for personal development and socital progress.");
			largeTexts.push_back("Climate change is one of the biggest challanges facing the worls today, affecting ecosystems, weather patterns, and human livelihood on a global scale.");
			largeTexts.push_back("Travelling to different countries allows people to experience diverse cultures, cuisines, and traditions, fostring mutual understanding and respect.");
			largeTexts.push_back("The rapid growth of technology hs transformed industries, creating new opportunities while also presenting challanges such as data privacy concerns.");
			largeTexts.push_back("Environmental conservation efforts are crucial for preserving natural habitates and ensuring sustainable resources for future generations.");
			largeTexts.push_back("Community service and volunteering provide opportunities to give bacl to society and develop empathy and leadership skills.");
			
			cout << "You selected text suggestion.\n" ;
			cout << "Choose difficulty level for test: \n" ;
			cout << "1. Easy\n" ;
			cout << "2. Medium\n" ;
			cout << "3. Large\n" ;
			cout << "Enter your choice: " ;
			int level ;
			cin >> level ;
			cin.ignore() ;
			
			
			string testText;
			if(level==1) 
			{ testText = easyTexts[rand() % easyTexts.size()] ; }
			
			else if(level==2)
			{ testText = mediumTexts[rand() % mediumTexts.size()] ; }
			
			else if(level==3)
			{ testText = largeTexts[rand() % largeTexts.size()] ; }
			
			else 
			{ cout << "Invalid choice. Defaulting to easy level.\n";
			testText = easyTexts[rand() % easyTexts.size()] ; }	
			
			cout << "\n Type the following text exactly as shown:\n\"" << testText << "\"\n\n" ;
			
			
			//Start Timer
			auto start = chrono::steady_clock::now() ;
			
			string userInput ;
			getline(cin, userInput) ;
			
			//Stop Timer
			auto end = chrono::steady_clock::now() ;
			
			chrono::duration<double>elapsed_seconds = end - start ;
			double timeTaken = elapsed_seconds.count() ;             //Seconds
			
			
			
			//Calculate mistakes- word by word.
			stringstream  origStream(testText) ;
			stringstream  typedStream(userInput) ;
			string origWord, typedWord ;
			int mistakes=0 ;
			
			while (origStream>>origWord)
		    { if (!(typedStream >> typedWord) || origWord!= typedWord)
			  { mistakes ++ ;}	
			}	
			
			while (typedStream >> typedWord)
		      { mistakes ++ ; }
		      
		      
		      
		    //Calculate words typed
		    int wordCount = 0 ;
		    stringstream countStream(userInput) ;
		    string temp ;
		   
		    while (countStream >> temp)
		    wordCount++ ;
			
			
			
			//Calculate WPM
			double timeMinutes = timeTaken/60.0 ;
			double wpm = (timeMinutes > 0) ? (wordCount/timeMinutes) : 0 ;
			
			
			
			//Calculate accuracy
			int totalChars = (int)testText.length() ;
			int errorChars = mistakes * 5;            //Approximate 5 characters per wrong word.
			int correctChars = totalChars - errorChars ;
			
			if (correctChars < 0)
			correctChars = 0 ;
			double accuracy = ((double)correctChars/totalChars)* 100.0 ;
			
			
			
			//Results
			cout << "\n----------Results----------\n" ;
			cout << "Time Taken:" << timeTaken << "seconds\n" ;
			cout << "Words Typed:" << wordCount << "\n" ;
			cout << "Mistakes (major words):" << mistakes << "\n" ;
			cout << "Typing Speed (WPM):" << wpm << "\n" ;
			cout << "Accuracy:" << accuracy << "%\n" ;
		    break ;	
		
}
		default:
		{
		cout << "Invalid choice. Please select 1 or 2.\n" ; }
}
	 	//Restart test
			cout << "\n Do you want to try test again? (Y/ N):" ;
			cin >> repeatChoice;
			cin.ignore() ;
			
			if(repeatChoice=='Y' || repeatChoice=='y')
			{repeatChoice= true;}
			
			else
			{repeatChoice=false;
			cout << "Thanks for using Typing Speed Tester.\n" ;
			}

}
 while (repeatChoice) ;
}


//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

	else
	{
		cout << "Invalid choice. Please restart the program and select 1 or 2./n";
 }
 
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

 	 	//Restart typing speed tester.
			cout << "\n Do you want to restart? ( Y/ N):" ;
			cin >> repeatChoice;
			cin.ignore() ;
			
			if(repeatChoice=='Y' || repeatChoice=='y')
			{repeatChoice= true;}
			
			else
			{repeatChoice=false;
			cout << "Thanks for using Typing Speed Tester.\n Good Bye!\n" ;
			}

}
 while (repeatChoice) ;

//--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
    return 0;	
}

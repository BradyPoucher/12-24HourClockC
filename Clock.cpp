#include <iostream>

using namespace std;


//References
//Stack Overflow (debugging & help with clear function)



class Clock
{

    int hours; 
    int minutes; 
    int seconds;  
    bool amPm;


 

    int Hour12(bool& amPm)
    {
        if (hours <= 12)
        {
            amPm = 0;
            return hours;
        }
        else
        {
            amPm = 1;
            return hours - 12;
        }
    };

    

    void addMinute(void)
    {   
        minutes++;

        if (minutes == 59)
        {
            minutes = 0;
            addHour();
        }
    };

    void addSecond(void)
    {   
        seconds++;

        if (seconds == 59)
        {
            seconds = 0;
            addMinute();
        }
    };

    void addHour(void)
    {   
        hours++;
     if (hours == 23)
        {
            hours = 0;
        }
    };
void mainMenu(void)
    {
        
        for (int i = 0; i < 27; i++)
        {
            cout << "*";
        }

        cout << endl;

       
        cout << "* 1 - Add One Hour        *" << endl;

        
        cout << "* 2 - Add One Minute      *" << endl;

        
        cout << "* 3 - Add One Second      *" << endl;

        
        cout << "* 4 - Quit                *" << endl;

        
        for (int i = 0; i < 27; i++)
        {
            cout << "*";
        }
    };
    void displayClocks(void)
    {
        
        for (int i = 0; i < 27; i++)
        {
            cout << "*";
        }

        
        cout << "    ";

        
        for (int i = 0; i < 27; i++)
        {
            cout << "*";
        }

       
        cout << endl;

        
        cout << "*      12-Hour Clock      *   *      24-Hour Clock       *" << endl;

        
        cout << "*      ";
        
        if (Hour12(amPm) < 10)
        {
            cout << "0" << Hour12(amPm) << ":";
        }
        else
        {
            cout << Hour12(amPm) << ":";
        }
        
        if (minutes < 10)
        {
            cout << "0" << minutes << ":";
        }
        else
        {
            cout << minutes << ":";
        }
        
        if (seconds < 10)
        {
            cout << "0" << seconds << "          *" << endl;
        }
        else
        {
            cout << seconds;
        }
       
        if (amPm == 0)
        {
            cout << " AM" << "       *";
        }
        else
        {
            cout << " PM" << "       *";
        }

       
        cout << "    ";

        
        cout << "*        ";
        
        if (hours < 10)
        {
            cout << "0" << hours << ":";
        }
        else
        {
            cout << hours << ":";
        }
        
        if (minutes < 10)
        {
            cout << "0" << minutes << ":";
        }
        else
        {
            cout << minutes << ":";
        }
       
        if (seconds < 10)
        {
            cout << "0" << seconds << "          *" << endl;
        }
        else
        {
            cout << seconds << "         *" << endl;
        }

        
        for (int i = 0; i < 27; i++)
        {
            cout << "*";
        }

       
        cout << "    ";

        
        for (int i = 0; i < 27; i++)
        {
            cout << "*";
        }
    };

    

    public:
    void Clear(void) 
    {
        system("CLS");
    };

    void Display(void) 
    {
        mainMenu();
        cout << endl;
        displayClocks();
    };

    bool userInput(void) 
    {
        int input;
        cin >> input;

        switch (input)
        {
        case 1:
            addHour();
            return false;
            break;
        case 2:
            addMinute();
            return false;
            break;
        case 3:
            addSecond();
            return false;
            break;
        case 4:
            return true;
            break;
        }
    };
   

    void Time(int hour, int minute, int second)
    {
        hours = hour;
        minutes = minute;
        seconds = second;
    };
};
int main(void)
{
   
     Clock clock; 

    clock.Time(12, 0, 15); 
    while (1)
    {
        
        clock.Clear(); 
        clock.Display();
        cout << endl;
        if (clock.userInput()) 
            break;         
    }

    
}


/*
Write a simple database program that stores name, roll no., and cgpa in FE , all in separate arrays, 
for 25 students. The program should be able to let the user enter records, display records and replace 
any one of the records (switch()-case can be used to give these options to user). The program must 
continue until ESC is pressed. [Note: A single ‘record’ means name, roll no., and cgpa of one student].. 
*/
#include <iostream>
#include <conio.h>
using namespace std;

int main() 
{
    string name[25];
    int roll[25];
    float cgpa[25];
    int total_students = 0, found_index;
    char command;
    bool application = true;

    while (application) 
    {
        cout<<"\t\tStudent Database";
        cout<<"\nEnter \n1 - Add Students\n2 - Display Records\n3 - Edit Record\nESC - Quit";
        cout<<"\nEnter choice: ";
        command = getche();

        if ((char)command == 27) 
        {
            application = false;
            break;
        }

        switch (command) 
        {
            case '1':
                for (int i=0; i<25; i++) 
                {
                    cout << "\nEnter details of student "<<i+1<<"(Name Roll CGPA): ";
                    cin >> name[i] >> roll[i] >> cgpa[i];
                    total_students++;
                }
                break;
            case '2':
                cout<<"\n\nStudent Records"<<endl;
                for (int i=0; i<total_students; i++) 
                {
                    cout<<i+1<<" "<<name[i]<<" "<< roll[i]<<" "<<cgpa[i]<<endl;
                }
                break;
            case '3':
                int search_roll;
                cout<<"\nEnter Roll No to Edit: ";
                cin>>search_roll;
                {
                    for (int i = 0; i < total_students; i++) 
                    {
                        if (roll[i] == search_roll) 
                        {
                            found_index = i;
                            break;
                        }
                    }

                    cout<<"\nEnter 1 - Change Name\n2 - Change Roll No\n3 - Change CGPA";
                    cout<<"\nEnter your choice: ";
                    char change_command = getche();
                    switch (change_command) 
                    {
                        case '1':
                            cout << "\nEnter new name: ";
                            cin >> name[found_index];
                            break;
                        case '2':
                            cout << "\nEnter new roll number: ";
                            cin >> roll[found_index];
                            break;
                        case '3':
                            cout << "\nEnter new CGPA: ";
                            cin >> cgpa[found_index];
                            break;
                        default:
                            cout << "\nInvalid choice.";
                            break;
                    }
                }
                break;
            default:
                cout << "\nInvalid command. Try again.";
        }
    }
    cout << "\nProgram exited\n";
    return 0;
}

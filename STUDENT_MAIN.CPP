#include"STUDENT ID.CPP"

int main()
{
    Student<int> obj;
    int option, sid;

    do
    {
        cout << "===== MENU ====="<<endl;
        cout << "1. Add Student"<<endl;
        cout << "2. Display All Students"<<endl;
        cout << "3. Remove Student"<<endl;
        cout << "4. Search Student"<<endl;
        cout << "5. Exit"<<endl;
        cout << "Enter Choice: ";
        cin >> option;

        switch (option)
        {
        case 1:
            obj.add();
            break;
        case 2:
            obj.showAll();
            break;
        case 3:
            cout << "Enter Student ID to Remove: ";
            cin >> sid;
            obj.remove(sid);
            break;
        case 4:
            cout << "Enter Student ID to Search: ";
            cin >> sid;
            obj.search(sid);
            break;
        case 5:
            cout << "Exiting Program..."<<endl;
            break;
        default:
            cout << "Invalid Choice. Try Again."<<endl;
        }

    } while (option != 5);

    return 0;
}
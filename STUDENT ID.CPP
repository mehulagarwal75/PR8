#include <iostream>
#include <vector>
#include <string>
using namespace std;

template <typename T>
class Student
{
    vector<T> ids;
    vector<string> names;

public:
    // Add new student
    void add()
    {
        T sid;
        string sname;

        cout << "Enter Student ID : ";
        cin >> sid;
        cin.ignore();

        cout << "Enter Student Name : ";
        getline(cin, sname);

        ids.push_back(sid);
        names.push_back(sname);

        cout << "Student Added Successfully."<<endl;
    }

    // Show all students
    void showAll() const
    {
        if (ids.empty())
        {
            cout << "No Students Available."<<endl;
            return;
        }

        cout << "--- Student List ---"<<endl;
        for (size_t i = 0; i < ids.size(); ++i)
        {
            cout << "ID: " << ids[i] <<" | Name: " << names[i] << endl;
        }
    }

    // Remove student by ID
    void remove(T sid)
    {
        for (size_t i = 0; i < ids.size(); ++i)
        {
            if (ids[i] == sid)
            {
                ids.erase(ids.begin() + i);
                names.erase(names.begin() + i);
                cout << "Student " << sid << " Removed."<<endl;
                return;
            }
        }
        cout << "Student with ID " << sid << " not found."<<endl;
    }

    // Search student by ID
    void search(T sid) const
    {
        for (size_t i = 0; i < ids.size(); ++i)
        {
            if (ids[i] == sid)
            {
                cout << "Found: ID " << ids[i]  <<" | Name: " << names[i] << endl;
                return;
            }
        }
        cout << "No Student with ID " << sid << " found."<<endl;
    }
};

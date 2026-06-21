#include <iostream>
using namespace std;

struct Date
{
    int day , month , year;
};

struct Time
{
    int hour , minute;
};
struct Vehicle
{
    int vehicleNo;
    int vehicleType;     
    int hours;
    int hourlyRate;
    int totalFee;
    Date date;
    Time time;
};

Vehicle parking[10];  
int count = 0;
void parkVehicle();
void removeVehicle();
void displayVehicles();
int getHourlyRate(int type);
int main()
{
      int choice;

    do
    {
        cout << "\n==== Vehicle Parking Management System ====\n";
        cout << "1. Park Vehicle\n";
        cout << "2. Remove Vehicle\n";
        cout << "3. Display Parked Vehicles\n";
        cout << "4. Total Vehicles Parked\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            parkVehicle();
            break;
        case 2:
            removeVehicle();
            break;
        case 3:
            displayVehicles();
            break;
        case 4:
            cout << "Total vehicles parked: " << count << endl;
            break;
        case 5:
            cout << "Exiting program...\n";
            break;
        default:
            cout << "Invalid choice!\n";
        }
    } while (choice != 5);

    return 0;
}

int getHourlyRate(int type)
{
    if (type == 1)
        return 20;    
    else if (type == 2)
        return 50;     
    else if (type == 3)
        return 100;   
    else
        return 0;
}

void parkVehicle()
{
	int i;
    if (count >= 10)
    {
        cout << "Parking is full!\n";
        return;
    }

    
       
    
    


    Vehicle *ptr = &parking[count]; 

    cout << "Enter vehicle number: ";
    cin >> ptr->vehicleNo;
    

    cout << "Select vehicle type:\n";
    cout << "1. Bike\n2. Car\n3. Truck\n";
    cin >> ptr->vehicleType;

    cout << "Enter parking duration (hours): ";
    cin >> ptr->hours;

    cout << "Enter parking date (DD MM YYYY): ";
    cin >> ptr->date.day >> ptr->date.month >> ptr->date.year;

    cout << "Enter parking time (HH MM): ";
    cin >> ptr->time.hour >> ptr->time.minute;

    ptr->hourlyRate = getHourlyRate(ptr->vehicleType);
    ptr->totalFee = ptr->hourlyRate * ptr->hours;

    cout << "Hourly Rate: " << ptr->hourlyRate << endl;
    cout << "Total Parking Fee: " << ptr->totalFee << endl;

    count++;
    cout << "Vehicle parked successfully.\n";
}

void removeVehicle()
{
    int vno;
    cout << "Enter vehicle number to remove: ";
    cin >> vno;

    for (int i = 0; i < count; i++)
    {
        if (parking[i].vehicleNo == vno)
        {
            for (int j = i; j < count - 1; j++)
            {
                parking[j] = parking[j + 1];
            }
            count--;
            cout << "Vehicle removed successfully.\n";
            return;
        }
    }

    cout << "Vehicle not found.\n";
}


void displayVehicles()
{
    if (count == 0)
    {
        cout << "No vehicles parked.\n";
        return;
    }

    cout << "\nVehNo  Type   Hours  Rate  Total  Date        Time\n";
    Vehicle *ptr = &parking[count];
    for (int i = 0; i < count; i++)
    {
       cout << parking[i].vehicleNo << "   ";
       if (ptr->vehicleNo == ptr->vehicleNo)
        {
        	cout<<"Slot is already occupied\n";
        }

        if (parking[i].vehicleType == 1)
            cout << "Bike   ";
        else if (parking[i].vehicleType == 2)
            cout << "Car    ";
        else
            cout << "Truck  ";

cout << parking[i].hours << "     "   
<< parking[i].hourlyRate << "    "
<< parking[i].totalFee << "   "
<< parking[i].date.day << "/"
<< parking[i].date.month << "/"
<< parking[i].date.year << "   "
<< parking[i].time.hour << ":"
<< parking[i].time.minute << endl;
    }
}

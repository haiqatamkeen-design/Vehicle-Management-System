# Vehicle Management System

A vehicle records management application built in C++ with a graphical user interface (GUI) developed using the Qt framework. It supports adding, searching, updating, and deleting vehicles, with persistent storage so data is retained between runs.

## Features

- Add new vehicle records
- Search for vehicles by record details
- Update existing vehicle information
- Delete vehicle records
- Persistent file-based storage
- Input validation for reliable record handling
- User-friendly graphical interface built with Qt

## Tech Stack

- **Language:** C++
- **GUI Framework:** Qt
- **Concepts:** Object-oriented programming, data structures, file handling

## How to Run (GUI — Qt)

**Option 1: Using Qt Creator (easiest)**

1. Install [Qt](https://www.qt.io/download) and Qt Creator.
2. Open Qt Creator and choose **File → Open File or Project**, then select the project file (`.pro` or `CMakeLists.txt`).
3. Select a build kit (compiler) when prompted.
4. Click the green **Run** button (or press `Ctrl + R`) to build and launch the application.

**Option 2: From the command line**

1. Make sure Qt is installed and added to your system PATH.
2. From the project folder, build and run:
   ```
   qmake
   make
   ./VehicleManagementSystem    # On Windows: VehicleManagementSystem.exe
   ```

> Note: Replace the project/executable names above with your actual file names if they differ.

## Future Improvements

- Database integration for larger datasets
- Reporting and search by multiple criteria
- Export records to CSV or PDF

## Author

**Haiqa Tamkeen** — BS Computer Science, Institute of Space Technology, Islamabad
GitHub: [haiqatamkeen-design](https://github.com/haiqatamkeen-design)

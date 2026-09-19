# OOP-Core-Utility-Projects

A comprehensive collection of reusable C++ utility libraries and modular components, designed to implement clean code practices and solid Object-Oriented Programming (OOP) architecture. This repository serves as a growing portfolio of my hands-on software development and system design journey.

Welcome to my repository! This is a comprehensive and growing portfolio of reusable C++ utility libraries and modular components, designed during my object-oriented programming (OOP) studies to practice clean code, modular software architecture, and efficient system design.

## 📁 Repository Structure & Libraries

Every project below is contained within its own dedicated folder. Inside each folder, you will find both the main program (`.cpp`) and the custom-built libraries/classes (`.h`) associated with it.

### 1. 🧵 [String Library Project](./String%20Library%20Project/)
* **Description:** A dedicated custom-built library for advanced string manipulation, formatting, and text processing.
* **Key Components:**
  * [`clsString.h`](./String%20Library%20Project/clsString.h) — The core OOP String class containing powerful text utilities.
  * [`String Library Project.cpp`](./String%20Library%20Project/String%20Library%20Project.cpp) — Implementation and test-bench program.

### 2. 📅 [Date Library Project](./Date%20Library%20Project/)
* **Description:** A library specializing in calendar dates, validation, calculations, and date arithmetic.
* **Key Components:**
  * [`clsDate.h`](./Date%20Library%20Project/clsDate.h) — The core OOP Date class handling leap years, date additions, and comparisons.
  * [`clsString.h`](./Date%20Library%20Project/clsString.h) — Integrated helper library used for text formatting.
  * [`Date Library Project.cpp`](./Date%20Library%20Project/Date%20Library%20Project.cpp) — Implementation and testing file.

### 3. ⏳ [Period Project](./Period%20Project/)
* **Description:** A software utility designed to manage, calculate, and validate time periods and overlapping timeline durations.
* **Key Components:**
  * [`clsPeriod.h`](./Period%20Project/clsPeriod.h) — The core OOP Period class handling duration checks and time slot intersections.
  * [`Period Project.cpp`](./Period%20Project/Period%20Project.cpp) — Implementation and testing file.

### 4. 🛠️ [Utility Library Project](./Utility%20Library%20Project/)
* **Description:** A versatile utility collection designed to encapsulate frequently used static helper functions across everyday OOP applications, including random generation, generic swapping, array operations, simple text encryption, and formatting.
* **Key Components:**
  * [`clsUtil.h`](./Utility%20Library%20Project/clsUtil.h) — The core OOP utility class offering random character/key generation, array shuffling/filling, generic function overloading for swapping (`int`, `double`, `string`, `clsDate`), array manipulation, and Caesar cipher encryption/decryption.
  * [`clsDate.h`](./Utility%20Library%20Project/clsDate.h) — Integrated date management class used for date swapping and calculations.
  * [`clsString.h`](./Utility%20Library%20Project/clsString.h) — Integrated helper library used for text manipulation and formatting.
  * [`Utility Library Project.cpp`](./Utility%20Library%20Project/Utility%20Library%20Project.cpp) — Main implementation and testing bench program.

### 5. 🛡️ [Input & Validation Library Project](./Input%20%26%20Validation%20Library%20Project/)
* **Description:** A specialized input validation and reading library designed to handle user inputs safely, validate numerical ranges, check date boundary intersections, and protect applications from invalid stream states.
* **Key Components:**
  * [`clsInputValidate.h`](./Input%20%26%20Validation%20Library%20Project/clsInputValidate.h) — The core OOP validation class providing overloaded boundary checks (`IsNumberBetween`), range validation for dates (`IsDateBetween`), date validation, and safe interactive reading methods (`ReadIntNumber`, `ReadDblNumber`, etc.) with input stream clearing.
  * [`clsDate.h`](./Input%20%26%20Validation%20Library%20Project/clsDate.h) — Integrated date management class used for date range checks and validations.
  * [`clsString.h`](./Input%20%26%20Validation%20Library%20Project/clsString.h) — Integrated helper library used for text handling.
  * [`Input & Validation Library Project.cpp`](./Input%20%26%20Validation%20Library%20Project/Input%20%26%20Validation%20Library%20Project.cpp) — Implementation and testing file.

### 6. 🏦 [Bank System Project](https://github.com/Abdulrahmanmohammad06/OOP-Core-Utility-Projects/tree/master/Bank%20System%20Project)

- **Description:** A complete console-based banking system developed using Object-Oriented Programming principles, featuring client management, user authentication, banking transactions, currency management, and money transfer operations.
- **Key Components:**
  - `clsBankClient.h` — Core client class responsible for managing bank client information and account operations.
  - `clsUser.h` — User management and authentication functionality.
  - `clsCurrency.h` — Currency information and currency-related operations.
  - `clsTransferLog.h` — Handles transfer transaction records.
  - `clsLoginScreen.h` — Provides the system login interface.
  - `clsMainScreen.h` — Provides the main system navigation interface.
  - `clsTransactionsScreen.h` — Handles banking transaction operations.
  - `clsTransferScreen.h` — Provides the money transfer interface.
  - `clsManageUsersScreen.h` — Provides user management functionality.
  - `Bank System Project.cpp` — Main implementation and system entry point.

---

## 🚀 How to Reuse These Libraries

Since these libraries are built using modular OOP design, you can easily integrate them into your own development:
1. Navigate to any of the project folders above.
2. Copy the header files (`.h`) you need.
3. Include them in your project using `#include "clsName.h"` and start utilizing the classes!

*Note: This repository is a living portfolio; new OOP utility libraries and standalone projects will be added over time.*

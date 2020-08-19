 /*
 Project 3 - Part 2 / 5
 Video: Chapter 2 Part 6
 Implementations tasks
 
Create a branch named Part2

 tasks
 0) delete all of the plain english pseudo-code you added in Part1.
   don't forget to remove the blank lines left behind after you remove your comments
   - you should be left with only your UDTs.
*/
// example:
// if you had something like this at the end of Part1e:
/*
Thing: Car Wash   
    5 properties:
        - number of vacuum cleaners
        - number of eco-friendly cleaning supplies
        - stores the amount of water used per week.
        - stores amount of profit made per week
        - number of cars serviced per day
    3 things it can do:
        - wash and wax car
        - charge customer
        - detail the car interior
 */

#include <iostream>
#include <string>
namespace Part1eVersion 
{
struct CarWash        
{
    //number of vacuum cleaners                     
    int numVacuumCleaners = 3; 
    //number of eco-friendly cleaning supplies      
    int numEcoFriendlyCleaningSupplies = 20;     
    //stores the amount of water used per week.     
    float waterUsedPerWeek = 200.f;            
    //stores amount of profit made per week         
    float profitPerWeek = 495.95f;               
    //number of cars serviced per day               
    int numberOfCarsServiced = 10;               
    
    struct Car  
    {
        bool isAPickupTruck = false;
        float gasMileage = 26.2f;        
        int year = 1985;
        std::string manufacturer = "Toyota";
        std::string model = "Corolla";

        void fillTank(double fuelAmountInGallons = 2.0);  
        void breakDown(std::string failureType, bool requiresTow = false);
        int getMilesTraveledAnnually(bool includeUberLyftTrips);
    };

    //wash and wax car
    void washAndWaxCar( Car car ); 
    //charge customer
    float chargeCustomer(float discountPercentage);
    //detail the car interior
    void detailInterior( Car car );
    
    Car carBeingServiced;  
};
}

//this is what I want to see after the code is cleaned up: 
namespace Part2Version
{
struct CarWash        
{
    int numVacuumCleaners = 3; 
    int numEcoFriendlyCleaningSupplies = 20;     
    float waterUsedPerWeek = 200.f;            
    float profitPerWeek = 495.95f;               
    int numberOfCarsServiced = 10;               
    
    struct Car  
    {
        bool isAPickupTruck = false;
        float gasMileage = 26.2f;        
        int year = 1985;
        std::string manufacturer = "Toyota";
        std::string model = "Corolla";

        void fillTank(double fuelAmountInGallons = 2.0);  
        void breakDown(std::string failureType, bool requiresTow = false);
        int getMilesTraveledAnnually(bool includeUberLyftTrips);
    };

    void washAndWaxCar( Car car ); 
    float chargeCustomer(float discountPercentage);
    void detailInterior( Car car );
    
    Car carBeingServiced;  
};
}
  /*
    The above snippet is just an example showing you how to clean up your code.  
    Do not put your cleaned up code into a namespace like I have done here.

 1) write the definition for the Type that leftFoot and rightFoot are instantiations of.
    don't forget to define and implement the member functions 'stepForward()' and 'stepSize()'
    you should be able to deduce the return type of those functions based on their usage in Person::run()
    You'll need to insert the Person struct from the video in the space below.
 */





 /*
 2) provide implementations for the member functions you declared in your 10 user-defined types from the previous video outside of your UDT definitions.
    If you decide to write empty functions, you will need to fill them in with code in part 3.
 
 3) be sure to write the correct full qualified name for the nested type's member functions.
 
 4) After you finish defining each type/function, click the [run] button.  Clear up any errors or warnings as best you can.
 */



/*
Thing 1) CPU
5 properties:
    1) number of cores
    2) clock speed
    3) L1 cache size
    4) L2 cache size
    5) L3 cache size
3 things it can do:
    1) communicate with RAM
    2) communicate with motherboard chipset
    3) process data
 */
struct CentralProcessingUnit
{
    //1) number of cores
    int numberOfCores = 8;
    //2) clock speed
    float clockSpeedInGHz = 2.8f;
    //3) L1 cache size
    int l1CacheSize = 8;
    //4) L2 cache size
    int l2CacheSize = 16;
    //5) L3 cache size
    int l3CacheSize = 32;

    //1) communicate with RAM
    void communicateWithRAM();
    //2) communicate with motherboard chipset
    void communicateWithMotherboard();
    //3) process data
    float processData();
};
/*
Thing 2) Cat
5 properties:
    1) number of legs
    2) size of meal
    3) weight
    4) length of tail
    5) rat kill count
3 things it can do:
    1) climb a tree
    2) hiss at dog
    3) purr
 */
struct Cat
{
    //1) number of legs
    int numLegs = 4;
    //2) size of meal
    int mealSize = 5;
    //3) weight
    float catWeight = 5.5f;
    //4) length of tail
    float tailLength = 20.3f;
    //5) rat kill count
    int killedRats = 15;

    struct Tree
    {
        int numLeaves = 100;
        unsigned int numBranches = 20;
        float heightInMeters = 10.3f;
        int numFlowers = 1;
        std::string treeType = "Apple";

        void growTaller();
        void growBranches();
        void shedLeaves();
    };

    //1) climb a tree
    void climbTree(Tree tree);
    //2) hiss at dog
    void hissAtDog();
    //3) purr
    void purr();
};
/*
Thing 3) Plane
5 properties:
    1) number of wheels
    2) number of wings
    3) size of fuel tanks
    4) passenger capacity
    5) flights per day
3 things it can do:
    1) take off
    2) land
    3) cruise
 */
struct Plane 
{
    //1) number of wheels
    int numWheels = 3;
    //2) number of wings
    unsigned int numWings = 2;
    //3) size of fuel tanks
    int sizeOfFuelTank = 2000;
    //4) passenger capacity
    int numPassengers = 250;
    //5) flights per day
    int numDailyFlights = 4;
    
    struct Pilot
    {
        int distanceFlown = 100000;
        int age = 30;
        float heightInCentimeters = 175.2f;
        float weightInKilograms = 68.3f;
        std::string airline = "Emirates";

        void flyPlane();
        void contactATC();
        void talkToCoPilot();
    };

    //1) take off
    void takeOff();
    //2) land
    void land();
    //3) cruise
    void cruise (int altitude = 50000);
};
/*
Thing 4) Coffee shop
5 properties:
    1) number of tables
    2) number of chairs
    3) count of customers per day
    4) number of cups
    5) number of coffee machines
3 things it can do:
    1) take customer's order
    2) make coffee
    3) serve customer their order
 */
struct CoffeeShop
{
    //1) number of tables
    int numTables = 10;
    //2) number of chairs
    int numChairs = 40;
    //3) count of customers per day
    int numDailyCustomers = 400;
    //4) number of cups
    int numCups = 10000;
    //5) number of coffee machines
    int numCoffeeMachines = 2;

    //1) take customer's order
    std::string takeOrder();
    //2) make coffee
    void makeCoffee (std::string order = "Latte");
    //3) serve customer their order
    void serveCoffee (std::string order = "Americano");
};
/*
Thing 5) Student
5 properties:
    1) age
    2) height
    3) weight
    4) gpa
    5) GRE score
3 things it can do:
    1) study
    2) attend class
    3) skip class
 */
struct Student
{
    //1) age
    int age = 20;
    //2) height
    float heightInCentimeters = 180.2f;
    //3) weight
    float weightInKilos = 70.2f;
    //4) gpa
    float gpa = 3.8f;
    //5) GRE score
    unsigned int greScore = 325;

    //1) study
    void study();
    //2) attend class
    void attendClass();
    //3) skip class
    void skipClass();
};
/*
Thing 6) Teacher
5 properties:
    1) Age
    2) height
    3) compensation
    4) degree held
    5) position
3 things it can do:
    1) teach
    2) conduct pop quiz
    3) grade students
 */
struct Teacher
{
    //1) Age
    int age = 45;
    //2) height
    float heightInCentimeters = 175.2f;
    //3) compensation
    int compensation = 90000;
    //4) degree held
    std::string highestDegreeHeld = "PhD";
    //5) position
    std::string position = "Senior Professor";

    //1) teach
    void teach();
    //2) conduct pop quiz
    void conductPopQuiz();
    //3) grade students
    std::string gradeStudents();
};
/*
Thing 7) Music Department
5 properties:
    1) number of undergraduate students
    2) number of staff
    3) number of courses
    4) number of postgradute students
    5) number of practice rooms
3 things it can do:
    1) organise a concert
    2) change course contents
    3) add a new course
 */
struct MusicDepartment
{
    //1) number of undergraduate students
    int numUndergraduateStudents = 100;
    //2) number of staff
    int numStaff = 15;
    //3) number of courses
    int numCourses = 10;
    //4) number of postgradute students
    int numPostgraduateStudents = 30;
    //5) number of practice rooms
    int numPracticeRooms = 5;

    //1) organise a concert
    void organiseConcert();
    //2) change course contents
    void changeCourseContents();
    //3) add a new course
    void addNewCourse();
};
/*
Thing 8) Cafeteria
5 properties:
    1) cost of item 1
    2) cost of item 2
    3) number of employees
    4) cost of ingredients monthly
    5) monthly revenue
3 things it can do:
    1) change menu
    2) serve food
    3) collect payment
*/
struct Cafeteria
{
    //1) cost of item 1
    float costItemOne = 3.50f;
    //2) cost of item 2
    float costItemTwo = 5.95f;
    //3) number of employees
    int numEmployees = 12;
    //4) cost of ingredients monthly
    float costMonthlyIngredients = 1093.25f;
    //5) monthly revenue
    float monthlyRevenue = 50096.95f;

    //1) change menu
    void changeMenu();
    //2) serve food
    void serveFood();
    //3) collect payment
    float collectPayment();
};
/*
Thing 9) Library
5 properties:
    1) age of librarian
    2) number of employees
    3) number of shelves
    4) number of books
    5) late fees
3 things it can do:
    1) check out a book
    2) return a book
    3) charge a late fee
 */
struct Library
{
    //1) age of librarian
    int librarianAge = 58;
    //2) number of employees
    int numEmployees = 5;
    //3) number of shelves
    int numShelves = 50;
    //4) number of books
    int numBooks = 3000;
    //5) late fees
    float lateFees = 2.5f;

    //1) check out a book
    void checkOutBook();
    //2) return a book
    void returnBook();
    //3) charge a late fee
    float chargeLateFee(float lateFee, int numDays);
};
/*
Thing 10) University
5 properties:
    1) Student
    2) Teacher
    3) Music Department
    4) Cafeteria
    5) Library
3 things it can do:
    1) conduct exams
    2) collect fees
    3) hold graduation ceremony
 */
struct University
{
    //1) Student
    Student student1;
    //2) Teacher
    Teacher teacher1;
    //3) Music Department
    MusicDepartment musicDepartment;
    //4) Cafeteria
    Cafeteria cafeteria1;
    //5) Library
    Library library1;

    //1) conduct exams
    void conductExams();
    //2) collect fees
    float collectFees(int numStudents,float yearlyFees);
    //3) hold graduation ceremony
    void holdGraduation();
};
/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

#include <iostream>
int main()
{
    std::cout << "good to go!" << std::endl;
}

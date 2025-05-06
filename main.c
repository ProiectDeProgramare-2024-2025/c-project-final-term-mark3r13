#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int choice,ct=0;

typedef struct {
    char university[100];
    char faculty[100];
    char specialization[100];
    char name[50];
    char surname[50];
    int age;
    char graduated[100];
    float baccalaureate_avg;
} formular;

formular users[100];

#define MAX_USERS 100

void insertSubmissions(formular users[], int *count) {
    FILE *file = fopen("submissions.txt", "r");
    if (!file) {
        printf("Error opening file!\n");
        return;
    }
    
    char line[500]; // Adjust size based on expected line length
    *count = 0;
    
    while (fgets(line, sizeof(line), file) && *count < MAX_USERS) {
        formular *user = &users[*count];
        
        sscanf(line, "%[^,],%[^,],%[^,],%[^,],%[^,],%d,%[^,],%f",
               user->university, user->faculty, user->specialization,
               user->name, user->surname, &user->age,
               user->graduated, &user->baccalaureate_avg);
        
        (*count)++;
    }
    
    fclose(file);
}

void clearTerminal() {
    #ifdef _WIN32
        system("cls");  // Windows
    #else
        system("clear"); // Linux/macOS
    #endif
}

void choose() {
    scanf("%d", &choice);
    getchar();
}

void showUnis() {
    printf("1.West Univesity of Timisoara\n");
    printf("2.Politehnica University of Timisoara\n");
    printf("3.University of Medicine and Pharmacy of Timisoara\n");
    printf("4.Banat Univesity of Agricultural Sciences and Veterinary Medicine\n");
    printf("5.Tibiscus University of Timisoara\n");
    printf("6.Go back.\n\n");
    printf("Enter your choice: ");
}

int uni(int choice) {
    switch(choice) {
        case 1:
            printf("You have chosen West University of Timisoara.\n\n");
            clearTerminal();
            return 1;
        case 2:
            printf("You have chosen Politehnica University of Timisoara.\n\n");
            clearTerminal();
            return 2;
        case 3:
            printf("You have chosen University of Medicine and Pharmacy of Timisoara.\n\n");
            clearTerminal();
            return 3;
        case 4:
            printf("You have chosen Banat University of Agricultural Sciences and Veterinary Medicine.\n\n");
            clearTerminal();
            return 4;
        case 5:
            printf("You have chosen Tibiscus University of Timisoara.\n\n");
            clearTerminal();
            return 5;
        case 6:
            printf("Going back...\n\n");
            clearTerminal();
            return 6;
        default:
            printf("Invalid choice. Please try again.\n\n");
            clearTerminal();
            return 6;
    }
}

const char* uniStr(int choice) {
    switch(choice) {
        case 1:
            return "West University of Timisoara";
        case 2:
            return "Politehnica University of Timisoara";
        case 3:
            return "University of Medicine and Pharmacy of Timisoara";
        case 4:
            return "Banat University of Agricultural Sciences and Veterinary Medicine";
        case 5:
            return "Tibiscus University of Timisoara";
        default:
            return NULL;
    }
}

int faculty(int choice) {
    switch(choice) {
        case 1:
            printf("Choose a faculty:\n");
            printf("1.Faculty of Arts and Design\n");
            printf("2.Faculty of Chemistry, Biology, Geography\n");
            printf("3.Faculty of Law\n");
            printf("4.Faculty of Economy and Business Administration\n");
            printf("5.Faculty of Phyisical Education and Sports\n");
            printf("6.Faculty of Physics\n");
            printf("7.Faculty of Mathematics and Computer Science\n");
            printf("8.Faculty of Music and Theater\n");
            printf("9.Faculty of Letters, History and Theology\n");
            printf("10.Faculty of Sociology and Psychology\n");
            printf("11.Faculty of Governance Science and Communication\n");
            printf("12.Department for Teacher Training\n");
            printf("13.Go back.\n\n");
            printf("Enter your choice: ");
            choose();
            clearTerminal();
            return choice;
        case 2:
            printf("Choose a faculty:\n");
            printf("1.Faculty of Automation and Computers\n");
            printf("2.Faculty of Electronics and Telecommunications\n");
            printf("3.Faculty of Mechanical Engineering\n");
            printf("4.Faculty of Civil Engineering\n");
            printf("5.Faculty of Industrial Engineering and Management\n");
            printf("6.Faculty of Chemical Engineering\n");
            printf("7.Faculty of Electrical Engineering\n");
            printf("8.Faculty of Engineering and Management of Technological Systems\n");
            printf("9.Faculty of Communication Sciences\n");
            printf("10.Faculty of Architecture and City Planning\n");
            printf("11.Faculty of Materials and Environmental Engineering\n");
            printf("12.Faculty of Automation and Computers in Hungarian\n");
            printf("13.Go back.\n\n");
            printf("Enter your choice: ");
            choose();
            clearTerminal();
            return choice;
        case 3:
            printf("Choose a faculty:\n");
            printf("1.Faculty of Medicine\n");
            printf("2.Faculty of Pharmacy\n");
            printf("3.Faculty of Dentistry\n");
            printf("4.Faculty of Nursing and Midwifery\n");
            printf("5.Faculty of Physical Education and Sports\n");
            printf("6.Faculty of Medicine in Hungarian\n");
            printf("7.Go back.\n\n");
            printf("Enter your choice: ");
            choose();
            clearTerminal();
            return choice;
        case 4:
            printf("Choose a faculty:\n");
            printf("1.Faculty of Agriculture\n");
            printf("2.Faculty of Horticulture\n");
            printf("3.Faculty of Veterinary Medicine\n");
            printf("4.Faculty of Food Processing Technology\n");
            printf("5.Faculty of Land Reclamation and Environmental Engineering\n");
            printf("6.Faculty of Management in Agriculture and Rural Development\n");
            printf("7.Faculty of Animal Science and Biotechnology\n");
            printf("8.Faculty of Veterinary Medicine in Hungarian\n");
            printf("9.Go back.\n\n");
            printf("Enter your choice: ");
            choose();
            clearTerminal();
            return choice;
        case 5:
            printf("Choose a faculty:\n");
            printf("1.Faculty of Computers and Applied Informatics\n");
            printf("2.Faculty of Law and Public Administration\n");
            printf("3.Faculty of Psychology\n");
            printf("4.Faculty of Economic Sciences\n");
            printf("5.Department for Teacher Training\n");
            printf("6.Go back.\n\n");
            printf("Enter your choice: ");
            choose();
            clearTerminal();
            return choice;
        default:
            printf("Invalid choice. Please try again.\n\n");
            clearTerminal();
            return 6;
    }
}

const char* facultyWUT(int choice) {
    switch(choice) {
        case 1:
            return "Faculty of Arts and Design";
        case 2:
            return "Faculty of Chemistry, Biology, Geography";
        case 3:
            return "Faculty of Law";
        case 4:
            return "Faculty of Economy and Business Administration";
        case 5:
            return "Faculty of Phyisical Education and Sports";
        case 6:
            return "Faculty of Physics";
        case 7:
            return "Faculty of Mathematics and Computer Science";
        case 8:
            return "Faculty of Music and Theater";
        case 9:
            return "Faculty of Letters, History and Theology";
        case 10:
            return "Faculty of Sociology and Psychology";
        case 11:
            return "Faculty of Governance Science and Communication";
        case 12:
            return "Department for Teacher Training";
        case 13:
            return NULL;
        default:
            return NULL;
    }
}

const char* facultyPUT(int choice) {
    switch(choice) {
        case 1:
            return "Faculty of Automation and Computers";
        case 2:
            return "Faculty of Electronics and Telecommunications";
        case 3:
            return "Faculty of Mechanical Engineering";
        case 4:
            return "Faculty of Civil Engineering";
        case 5:
            return "Faculty of Industrial Engineering and Management";
        case 6:
            return "Faculty of Chemical Engineering";
        case 7:
            return "Faculty of Electrical Engineering";
        case 8:
            return "Faculty of Engineering and Management of Technological Systems";
        case 9:
            return "Faculty of Communication Sciences";
        case 10:
            return "Faculty of Architecture and City Planning";
        case 11:
            return "Faculty of Materials and Environmental Engineering";
        case 12:
            return "Faculty of Automation and Computers in Hungarian";
        case 13:
            return NULL;
        default:
            return NULL;
    }
}

const char* facultyUMFT(int choice) {
    switch(choice) {
        case 1:
            return "Faculty of Medicine";
        case 2:
            return "Faculty of Pharmacy";
        case 3:
            return "Faculty of Dentistry";
        case 4:
            return "Faculty of Nursing and Midwifery";
        case 5:
            return "Faculty of Physical Education and Sports";
        case 6:
            return "Faculty of Medicine in Hungarian";
        case 7:
            return NULL;
        default:
            return NULL;
    }
}

const char* facultyBanat(int choice) {
    switch(choice) {
        case 1:
            return "Faculty of Agriculture";
        case 2:
            return "Faculty of Horticulture";
        case 3:
            return "Faculty of Veterinary Medicine";
        case 4:
            return "Faculty of Food Processing Technology";
        case 5:
            return "Faculty of Land Reclamation and Environmental Engineering";
        case 6:
            return "Faculty of Management in Agriculture and Rural Development";
        case 7:
            return "Faculty of Animal Science and Biotechnology";
        case 8:
            return "Faculty of Veterinary Medicine in Hungarian";
        case 9:
            return NULL;
        default:
            return NULL;
    }
}

const char* facultyTibiscus(int choice) {
    switch(choice) {
        case 1:
            return "Faculty of Computers and Applied Informatics";
        case 2:
            return "Faculty of Law and Public Administration";
        case 3:
            return "Faculty of Psychology";
        case 4:
            return "Faculty of Economic Sciences";
        case 5:
            return "Department for Teacher Training";
        case 6:
            return NULL;
        default:
            return NULL;
    }
}

void facultyChoice(int choice) {
    if(choice<6) {
        if(choice==1) {
            strncpy(users[ct].faculty, facultyWUT(choice), sizeof(users[ct].faculty));
        }
        else if(choice==2) {
            strncpy(users[ct].faculty, facultyPUT(choice), sizeof(users[ct].faculty));
        }
        else if(choice==3) {
            strncpy(users[ct].faculty, facultyUMFT(choice), sizeof(users[ct].faculty));
        }
        else if(choice==4) {
            strncpy(users[ct].faculty, facultyBanat(choice), sizeof(users[ct].faculty));
        }
        else if(choice==5) {
            strncpy(users[ct].faculty, facultyTibiscus(choice), sizeof(users[ct].faculty));
        }
    }
}

void showSpec() {
    printf("1.Graphic Design\n");
    printf("2.Fashion Design\n");
    printf("3.Painting\n");
    printf("4.Sculpture\n");
    printf("5.Photography\n");
    printf("6.Geography\n");
    printf("7.Chemistry\n");
    printf("8.Law\n");
    printf("9.Economy\n");
    printf("10.Business Administration\n");
    printf("11.Physical Education\n");
    printf("12.Sports\n");
    printf("13.Physics\n");
    printf("14.Mathematics\n");
    printf("15.Computer Science\n");
    printf("16.Music\n");
    printf("17.Theater\n");
    printf("18.Letters\n");
    printf("19.History\n");
    printf("20.Theology\n");
    printf("21.Sociology\n");
    printf("22.Psychology\n");
    printf("23.Governance Science\n");
    printf("24.Communication\n");
    printf("25.Teacher Training\n");
    printf("26.Automation\n");
    printf("27.Computers\n");
    printf("28.Electronics\n");
    printf("29.Telecommunications\n");
    printf("30.Mechanical Engineering\n");
    printf("31.Civil Engineering\n");
    printf("32.Industrial Engineering\n");
    printf("33.Management\n");
    printf("34.Technological Systems\n");
    printf("35.Communication Sciences\n");
    printf("36.Architecture\n");
    printf("37.City Planning\n");
    printf("38.Materials\n");
    printf("39.Environmental Engineering\n");
    printf("40.Automation\n");
    printf("41.Computers\n");
    printf("42.Hungarian\n");
    printf("43.Medicine\n");
    printf("44.Pharmacy\n");
    printf("45.Dentistry\n");
    printf("46.Nursing\n");
    printf("47.Go back.\n\n");
    printf("Enter your choice: ");
    choose();
    clearTerminal();
}

const char* spec(int choice){
    switch(choice){
        case 1:
            return "Graphic Design";
        case 2:
            return "Fashion Design";
        case 3:
            return "Painting";
        case 4:
            return "Sculpture";
        case 5:
            return "Photography";
        case 6:
            return "Geography";
        case 7:
            return "Chemistry";
        case 8:
            return "Law";
        case 9:
            return "Economy";
        case 10:
            return "Business Administration";
        case 11:
            return "Physical Education";
        case 12:
            return "Sports";
        case 13:
            return "Physics";
        case 14:
            return "Mathematics";
        case 15:
            return "Computer Science";
        case 16:
            return "Music";
        case 17:
            return "Theater";
        case 18:
            return "Letters";
        case 19:
            return "History";
        case 20:
            return "Theology";
        case 21:
            return "Sociology";
        case 22:
            return "Psychology";
        case 23:
            return "Governance Science";
        case 24:
            return "Communication";
        case 25:
            return "Teacher Training";
        case 26:
            return "Automation";
        case 27:
            return "Computers";
        case 28:
            return "Electronics";
        case 29:
            return "Telecommunications";
        case 30:
            return "Mechanical Engineering";
        case 31:
            return "Civil Engineering";
        case 32:
            return "Industrial Engineering";
        case 33:
            return "Management";
        case 34:
            return "Technological Systems";
        case 35:
            return "Communication Sciences";
        case 36:
            return "Architecture";
        case 37:
            return "City Planning";
        case 38:
            return "Materials";
        case 39:
            return "Environmental Engineering";
        case 40:
            return "Automation";
        case 41:
            return "Computers";
        case 42:
            return "Hungarian";
        case 43:
            return "Medicine";
        case 44:
            return "Pharmacy";
        case 45:
            return "Dentistry";
        case 46:
            return "Nursing";
        default:
            return NULL;    
    }
}

void showOpts() {
    printf("1.Fill out a new form\n");
    printf("2.View completed forms\n");
    printf("3.View statistics\n");
    printf("4.Exit\n\n");
    printf("Enter your choice: ");
}

int addForm() {
    printf("Add form?\n\n");
    printf("1.Yes\n");
    printf("2.No\n\n");
    
    int addChoice;
    scanf("%d", &addChoice);
    getchar(); // Clear newline character from input buffer

    if(addChoice == 1) {
        printf("Form added.\n\n");
        getchar();
        clearTerminal();
        return 1;
    }
    else if(addChoice == 2) {
        printf("Form not added.\n\n");
        getchar();
        clearTerminal();
        return 2;
    }
    else {
        printf("Invalid choice. Defaulting to option 2!\n\n");
        getchar();
        clearTerminal();
        return 2;
    }
}

void form(formular *f) {
    printf("Please fill out the following formular: \n");
    printf("Name: ");
    scanf("%s", f->name);

    printf("Surname: ");
    scanf("%s", f->surname);

    printf("Age: ");
    scanf("%d", &f->age);

    printf("Graduated: ");
    getchar(); 
    fgets(f->graduated, sizeof(f->graduated), stdin);
    f->graduated[strcspn(f->graduated, "\n")] = '\0';

    printf("Baccalaureate average: ");
    scanf("%f", &f->baccalaureate_avg);

    putchar('\n');

    printf("Formular completed.\n\n");
    int formChoice = addForm();

    if(formChoice == 1) {
        FILE *file = fopen("submissions.txt", "a");
        if (!file) {
            printf("Error opening file for writing!\n");
            return;
        }

        fprintf(file, "%s,%s,%s,%s,%s,%d,%s,%.2f\n",
                f->university, f->faculty, f->specialization,
                f->name, f->surname, f->age,
                f->graduated, f->baccalaureate_avg);

        fclose(file);
    }

    clearTerminal();
    fflush(stdout);
}

void viewForms(int ct, formular *users) {
    if(ct==0) {
        printf("No forms have been completed yet.\n\n");
        printf("Press any key to continue...\n");
        getchar();
        clearTerminal();
    }
    else {
        printf("View completed forms:\n\n");
        for(int i=0; i<ct; i++) {
            printf("=================Formular=%d==================\n",i);
            printf("University: %s\n", users[i].university);
            printf("Faculty: %s\n", users[i].faculty);
            printf("Specialization: %s\n", users[i].specialization);
            printf("Name: %s\n", users[i].name);
            printf("Surname: %s\n", users[i].surname);
            printf("Age: %d\n", users[i].age);
            printf("Graduated: %s\n", users[i].graduated);
            printf("Baccalaureate average: %.2f\n", users[i].baccalaureate_avg);
            printf("=============================================\n\n");
     
        }
        printf("Press any key to continue...\n");
        getchar();
        clearTerminal();
    }
}

int countForms(int ct, formular *users, const char* tUni, const char* tFac, const char* tSpec) {
    int ctForms=0;
    for(int i=0;i<ct;i++) {
        if(strcmp(users[i].university, tUni)==0 && strcmp(users[i].faculty, tFac)==0 && strcmp(users[i].specialization, tSpec)==0) {
            ctForms++;
        }
    }
    return ctForms;
}

void stats() {
    printf("View statistics:\n\n");
                
    printf("Type university name:\n");
    char tUni[100];
    fgets(tUni, sizeof(tUni), stdin);
    tUni[strcspn(tUni, "\n")] = '\0';
    printf("Type faculty name:\n");
    char tFac[100];
    fgets(tFac, sizeof(tFac), stdin);
    tFac[strcspn(tFac, "\n")] = '\0';
    printf("Type specialization name:\n");
    char tSpec[100];
    fgets(tSpec, sizeof(tSpec), stdin);
    tSpec[strcspn(tSpec, "\n")] = '\0';
    putchar('\n');

    clearTerminal();

    int ctForms=countForms(ct, users, tUni, tFac, tSpec);
    printf("Number of forms completed for %s, %s, %s: %d\n", tUni, tFac, tSpec, ctForms);
    putchar('\n');

    printf("Press any key to continue...\n");
    getchar();
    clearTerminal();
}

int main() {
    clearTerminal();
    insertSubmissions(users, &ct);

    while(1) {
        showOpts();
        choose();
        putchar('\n');
        clearTerminal();

        switch(choice) {
            case 1:
                printf("Choose an university:\n");
                showUnis();
                choose();
                if(choice == 6) {
                    clearTerminal();
                    break;
                }
                else{
                    putchar('\n');

                    choice=uni(choice);

                    if(choice<6) {
                        strncpy(users[ct].university, uniStr(choice), sizeof(users[ct].university));
                    }

                    choice = faculty(choice);

                    facultyChoice(choice);

                    showSpec();

                    if(choice<47) {
                        strncpy(users[ct].specialization, spec(choice), sizeof(users[ct].specialization));
                    }

                    form(&users[ct]);
                    ct++;

                    clearTerminal();
                    break;
                }
            case 2:
                viewForms(ct, users);
                break;
            case 3:
                stats();
                break;
            case 4:
                printf("Exiting...\n");
                exit(0);
                break;
            default: 
                printf("Invalid choice. Please try again.\n");
                break;
        }
    }

    fflush(stdout);
    return 0;
}
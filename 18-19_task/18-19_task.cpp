/*--------------------------------------------------*/
                 //19-task true
/*--------------------------------------------------*/

#include <iostream>
using namespace std;

struct Animal
{
    string name;
    string trait;
    string answer;
};

int main()
{
    const int n = 10;
    
    cout << "\n\t -- Программа -- \n\n";
    cout << "Варианты ответов на вопросы: Да/Нет \n\n" << "Признаки:\n\n";
    
    Animal animals[n] =
    {
        { "1. Имеет копыта - ", "Да" },
        { "2. Имеет хвост - ", "Да" },
        { "3. Лает - ", "Нет" },
        { "4. Имеет маневренность - ", "Да" },
        { "5. Ест траву - ", "Да" },
        { "6. Имеет небольшой размер - ", "Нет" },
        { "7. Имеет гриву - ", "Да" },
        { "8. Имеет шерсть - ", "Да" },
        { "9. Имеет рога - ", "Нет" },
        { "10. Имеет кабаньи рога - ", "Нет" },
    };
    
    for(int i = 0; i < n; i++) {
        //Ввод ответов
        cout << animals[i].name;cin >> animals[i].answer;
    }
    
    for (int i = 0; i < n; i++) {
        //Условия 
        if (animals[i].answer == animals[i].trait) {
            
            cout << "\n Это Лошадь";
            cout << "\n---------------";
            break;
        }
        else {
            
            cout << "\nЭто не лошадь";
            break;
        }
    }
    
    return 0;
}

/*--------------------------------------------------*/
                 //18-task true
/*--------------------------------------------------*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "\nВведите размер массивов: ";
    cin >> n;

    int* array_A = new int[n];
    int* array_B = new int[n];

    cout << "\nВведите массив A:\n";
    for (int i = 0; i < n; i++) {
        cout << "A[" << i << "] = ";
        cin >> array_A[i];
    }

    cout << "\nВведите массив B:\n";
    for (int i = 0; i < n; i++) {
        cout << "B[" << i << "] = ";
        cin >> array_B[i];
    }

    // Меняем местами массивы A и B
        int *ptr = array_A;
        array_A = array_B;
        array_B = ptr;

    cout << "\nРезультат:\n";
    cout << "A - ";
    for (int i = 0; i < n; i++) cout << array_A[i] << " ";
    cout << endl;
    cout << "B - ";
    for (int i = 0; i < n; i++) cout << array_B[i] << " ";

    return 0;
}
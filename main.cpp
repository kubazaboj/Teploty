#include <iostream>
using namespace std;

int maximum, minimum;
const int max_pocet_teplot = 4;
int teploty[max_pocet_teplot];

void nabidka() {

    cout << "Vyberte cinnost:" << endl;
    cout << "Ukonceni progranu    [0]" << endl;
    cout << "Zadavani teplot      [1]" << endl;
    cout << "Vypis teplot         [2]" << endl;
    cout << "Maximalni teplota    [3]" << endl;
    cout << "Minimalni teplota    [4]" << endl;
    cout << endl;
}
void zadavani_teplot()
{

    for(int i = 0; i<= max_pocet_teplot; i++){
            cout << "Zadejte "<< i+1 << ". teplotu" << endl;
            cin >> teploty[i];
    }
}
void vypis_teplot()
{
    cout << "Teploty: " << endl;
    for(int i=0; i<= max_pocet_teplot; i++){

        cout << teploty [i] << endl;

    }
}
void nejvetsi_teplota()
{

    maximum = 0;

    for (int i=0; i<= max_pocet_teplot; i++){

        if (maximum < teploty[i]){

            maximum = teploty[i];

        }
    }
}
void nejmensi_teplota()
{
    minimum = 0;

    for (int i=0; i<= max_pocet_teplot; i++){

        if (minimum > teploty[i]){

            minimum = teploty[i];

        }
    }
}
void insertion_sort(int velikost = max_pocet_teplot - 1)
{
    for(int i = 0; i < velikost; i++)
    {
        int j = i + 1;
        int t = teploty[j];
        while( j > 0 && t > teploty[j-1])
        {
            teploty[j] = teploty[j-1];
            j = j - 1;
        }
        teploty[i] = t;
    }
}
int main()
{
    int volba;

    do{
        nabidka();
        cout << endl << "Zadejte vasi volbu ";
        cin >> volba;
        cout << endl;
        cout << endl;

    switch (volba) {


			case 1 :

				zadavani_teplot();
				cout << endl;
				cout << "---------------------------------------------" << endl;
				cout << endl;
				break;

			case 2 :

				insertion_sort();
				vypis_teplot();
				cout << endl;
				cout << "---------------------------------------------" << endl;
				cout << endl;
				break;

			case 3 :

                    nejvetsi_teplota();
                    cout << "Nejvetsi teplota je: " << maximum << endl;
                    cout << endl;
                    cout << "---------------------------------------------" << endl;
                    cout << endl;
                    break;

            case 4:

                    nejmensi_teplota();
                    cout << "Nejmensi teplota je: " << minimum << endl;
                    cout << endl;
                    cout << "---------------------------------------------" << endl;
                    cout << endl;
                    break;

            default:

            if( volba != 0){
            cout << "Neplatna volba" << endl;
            cout << endl;

            }
		}

		}while(volba > 0);

    cout << endl << "Vypinam program" << endl;

    return 0;
}

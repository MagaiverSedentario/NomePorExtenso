#include <iostream>
#include "data_por_extenso.cpp"

using namespace std;

int main(){

    system("cls");

    Data_Por_Extenso date;

    cout<< "Digite o dia: "; cin>> date.dia_user;
    cout<< endl
        <<"Digite o mes: "; cin>> date.mes_user;
    cout<< endl
        <<"Digite o ano: "; cin>> date.ano_user;

    cout<< endl
        << date.dia(date.dia_user) << " de " << date.mes(date.mes_user) << " de " << date.ano(date.ano_user)
        <<endl;

    return 0;
}
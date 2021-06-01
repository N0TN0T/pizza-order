#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <limits>

using namespace std;
												
int main()
{
	    
    float total_cost = 0;
    float ing_cost = 0;
    float special_cost = 3.99;
    float simple_cost = 1.99;

    int nr_simple;
    int nr_special;

    bool is_invalid = true;
    bool valid = false;

    string size;
    string dough;
    string ingredients;
    string drink;

    string ind = "individual";
    string med = "media";
    string fam = "familiar";

    string thin = "fina";
    string normal = "normal";

    string simple = "simples";
    string special = "especiais";

    string water = "agua";
    string soda = "refrigerante";
    string juice = "sumo";

    char a = 160;
    char A = 181;
    char e = 130;
    char til = 198;
    char Lim_H = 196;
    char Lim_SE = 218;
    char Lim_SD = 191;
    char Lim_V = 179;
    char Lim_IE = 192;
    char Lim_ID = 217;

    system("color 2F");

    printf("\n\t\t%c", Lim_SE);
    
    for (int column =0; column <47;++column)
    {
    printf("%c",Lim_H);
    }
    printf("%c", Lim_SD);
    
    printf("\n\t\t%c\t\t\t\t\t\t%c\n\t\t%c\tBem vindo(a) %c Pizzaria Bob's:\t\t%c",Lim_V, Lim_V, Lim_V, a,Lim_V);
    printf("\n\t\t%c\t\t\t\t\t\t%c\n\t\t%c", Lim_V, Lim_V, Lim_IE);
    
    for (int column =0; column <47;++column)
    {
    printf("%c",Lim_H);
    }
    
    printf("%c\n", Lim_ID);

    printf("\n     Construa a sua pizza : \n\n");
    do
    {
        printf("     De que tamanho deseja a sua pizza?\n");
        printf("\t- Individual\n");
        printf("\t- M%cdia\n", e);
        printf("\t- Familiar\n");
        printf("----------------------------------------------------------------\n     ");

        cin >> size;

        transform(size.begin(), size.end(), size.begin(), ::tolower);

        if (size.compare(ind) == 0)
        {
            is_invalid = false;
            total_cost += 5.99;
        }
        else if (size.compare(med) == 0)
        {
            is_invalid = false;
            total_cost += 8.99;
        }
    
        else if (size.compare(fam) == 0)
        {
            is_invalid = false;
            total_cost += 12.99;
        }
    } while (is_invalid);
    
system("cls");
{

printf("\n\t\t%c", Lim_SE);
    for (int column =0; column <47;++column)
    {
    printf("%c",Lim_H);
    }
    printf("%c", Lim_SD);
    printf("\n\t\t%c\t\t\t\t\t\t%c\n\t\t%c\t\tPizzaria Bob's:\t\t\t%c",Lim_V, Lim_V, Lim_V,Lim_V);
    printf("\n\t\t%c\t\t\t\t\t\t%c\n\t\t%c", Lim_V, Lim_V, Lim_IE);
    for (int column =0; column <47;++column)
    {
    printf("%c",Lim_H);
    }
    printf("%c\n", Lim_ID);
}

is_invalid = true;
    do 
    {
        printf("\n     Agora , decida o tipo de massa que quer :\n\n\t - Normal\n\t - Fina\n");
        printf("----------------------------------------------------------------\n\t");
        cin >> dough;

        transform(dough.begin(), dough.end(), dough.begin(), ::tolower);

        if (dough.compare(thin) == 0)
        {
            is_invalid = false;
            total_cost += 2.99;
        }
        else if (dough.compare(normal) == 0)
        {
            is_invalid = false;
            total_cost += 4.99;
        }
    } while (is_invalid);

system("cls");
printf("\n\t\t%c", Lim_SE);
    for (int column =0; column <47;++column)
    {
    printf("%c",Lim_H);
    }
    printf("%c", Lim_SD);
    printf("\n\t\t%c\t\t\t\t\t\t%c\n\t\t%c\t\tPizzaria Bob's:\t\t\t%c",Lim_V, Lim_V, Lim_V,Lim_V);
    printf("\n\t\t%c\t\t\t\t\t\t%c\n\t\t%c", Lim_V, Lim_V, Lim_IE);
    for (int column =0; column <47;++column)
    {
    printf("%c",Lim_H);
    }
    printf("%c\n", Lim_ID);


    while (!valid)
    {
        cout << "\n\tQuantos Ingredientes simples vai desejar?\n\t";
        cin >> nr_simple;
        if (cin.fail())
        {
            cout << "\nDados Incorrectos" << endl;
            cin.clear();
            cin.ignore(INT_MAX, '\n');
        }
        else
        {
            valid = true;
        }
    }
    
    valid = false;
    
    while (!valid)
    {
        cout << "\n\tQuantos ingredientes especiais vai desejar?\n\t";
        cin >> nr_special;
        if (cin.fail())
        {
            cout << "\n\tDados Incorrectos" << endl;
            cin.clear();
            cin.ignore(INT_MAX, '\n');
        }
        else
        {
            valid = true;
        }
    }
    
    is_invalid = true;
    
    total_cost += (nr_special * special_cost) + (nr_simple * simple_cost);
    
    system("cls");
	printf("\n\t\t%c", Lim_SE);
    for (int column =0; column <47;++column)
    {
    printf("%c",Lim_H);
    }
    printf("%c", Lim_SD);
    printf("\n\t\t%c\t\t\t\t\t\t%c\n\t\t%c\t\tPizzaria Bob's:\t\t\t%c",Lim_V, Lim_V, Lim_V,Lim_V);
    printf("\n\t\t%c\t\t\t\t\t\t%c\n\t\t%c", Lim_V, Lim_V, Lim_IE);
    for (int column =0; column <47;++column)
    {
    printf("%c",Lim_H);
    }
    printf("%c\n", Lim_ID);
    
    
    do
    {
        printf("\n\tQue bebida vai desejar?\n\t");
        printf("- %cgua\n\t", A);
        printf("- Refrigerante\n\t");
        printf("- Sumo\n");
        printf("----------------------------------------------------------------\n\t");
        cin >> drink;

        transform(drink.begin(), drink.end(), drink.begin(), ::tolower);

        if (drink.compare(water) == 0)
        {
            is_invalid = false;
            total_cost += 0.50;
        }
        else if (drink.compare(soda) == 0)
        {
            is_invalid = false;
            total_cost += 1.40;
        }
        else if (drink.compare(juice) == 0)
        {
            is_invalid = false;
            total_cost += 1.00;
        }
    } while (is_invalid);
    
    system("cls");
    printf("\n\t\t%c", Lim_SE);
    for (int column =0; column <47;++column)
    {
    printf("%c",Lim_H);
    }
    printf("%c", Lim_SD);
    printf("\n\t\t%c\t\t\t\t\t\t%c\n\t\t%c\t\tPizzaria Bob's:\t\t\t%c",Lim_V, Lim_V, Lim_V,Lim_V);
    printf("\n\t\t%c\t\t\t\t\t\t%c\n\t\t%c", Lim_V, Lim_V, Lim_IE);
    for (int column =0; column <47;++column)
    {
    printf("%c",Lim_H);
    }
    printf("%c\n", Lim_ID);

    cout << "\n\n\tO seu Pedido: " << endl<< endl;
    cout << "\n\tTamanho : " << size << endl;
    cout << "\tMassa : " << dough << endl;
    cout << "\tBebida: " << drink << endl;
    cout << "\t" << nr_simple;
	
	if(nr_simple == 1)
	printf(" ingrediente simples\n");
	
	else
	printf(" ingredientes simples\n");
	
	

    cout << "\t" << nr_special;
    
    	if(nr_special == 1)
	printf(" Ingrediente especial\n");
	
	else
	printf(" Ingredientes especiais\n");
    
    

    printf("\tCusto final : %.2f euros.", total_cost);

    return 0;
	}

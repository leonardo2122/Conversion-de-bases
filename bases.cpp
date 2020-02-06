/*
	Ramirez Blanco Leonardo Daniel
	217292471
	Programa de conversion de bases
	Trductores de lenguajes I
*/

#include <iostream>
#include <string>
#include <cstring>
#include <cmath>
#include <cstdlib>

using namespace std;

void conversion(int in, int out, string value){
	string final;
	int q, resto;
	double total=0;

	//Convertir cualquier numero de cualquier base a base 10//
	if (in != 10){
		for (int i=value.size()-1, j=0; i>=0, j<=value.size()-1; i--, j++){
			if (value[i]== '0')
				total+= 0;
			else if (value[i]== '1')
				total += (1 * pow (in, j));
			else if (value[i]== '2')
				total += (2 * pow (in, j));
			else if (value[i]== '3')
				total += (3 * pow (in, j));
			else if (value[i]== '4')
				total += (4 * pow (in, j));
			else if (value[i]== '5')
				total += (5 * pow (in, j));
			else if (value[i]== '6')
				total += (6 * pow (in, j));
			else if (value[i]== '7')
				total += (7 * pow (in, j));
			else if (value[i]== '8')
				total += (8 * pow (in, j));
			else if (value[i]== '9')
				total += (9 * pow (in, j));
			else if (value[i]== 'A')
				total += (10 * pow(in, j));
			else if (value[i]== 'B')
				total += (11 * pow(in, j));
			else if (value[i]== 'C')
				total += (12 * pow(in, j));
			else if (value[i]== 'D')
				total += (13 * pow(in, j));
			else if (value[i]== 'E')
				total += (14 * pow(in, j));
			else if (value[i]== 'F')
				total += (15 * pow(in, j));
			else if (value[i]== 'G')
				total += (16 * pow (in, j));
			else if (value[i]== 'H')
				total += (17 * pow (in, j));
			else if (value[i]== 'I')
				total += (18 * pow (in, j));
			else if (value[i]== 'J')
				total += (19 * pow (in, j));
			else if (value[i]== 'K')
				total += (20 * pow (in, j));
			else if (value[i]== 'L')
				total += (21 * pow (in, j));
			else if (value[i]== 'M')
				total += (22 * pow (in, j));
			else if (value[i]== 'N')
				total += (23 * pow (in, j));
			else if (value[i]== 'O')
				total += (24 * pow (in, j));
			else if (value[i]== 'P')
				total += (25 * pow (in, j));
			else if (value[i]== 'Q')
				total += (26 * pow (in, j));
			else if (value[i]== 'R')
				total += (27 * pow (in, j));
			else if (value[i]== 'S')
				total += (28 * pow (in, j));
			else if (value[i]== 'T')
				total += (29 * pow (in, j));
		}
	}
	//Si la entrada ya esta en base 10, no hace falta convertir//
	//atoi: trata la cadena de caracteres como entero//
	else if (in == 10)
		total = atoi(value.c_str());

	cout <<endl;
	//Convertir los numeros obtenidos de base 10 a cualqier otra base//
	if (out != 10){
		do{
			q= total / out;
			resto= (int)total % out;
			total /= out;

			if (resto == 0)
				final += '0';
			else if (resto == 1)
				final += '1';
			else if (resto == 2)
				final += '2';
			else if (resto == 3)
				final += '3';
			else if (resto == 4)
				final += '4';
			else if (resto ==5)
				final += '5';
			else if (resto ==6)
				final += '6';
			else if (resto ==7)
				final += '7';
			else if (resto == 8)
				final += '8';
			else if (resto == 9)
				final += '9';
			else if (resto == 10)
				final += 'A';
			else if (resto == 11)
				final += 'B';
			else if (resto == 12)
				final += 'C';
			else if (resto == 13)
				final += 'D';
			else if (resto == 14)
				final += 'E';
			else if (resto == 15)
				final += 'F';
			else if (resto == 16)
				final += 'G';
			else if (resto == 17)
				final += 'H';
			else if (resto == 18)
				final += 'I';
			else if (resto == 19)
				final += 'J';
			else if (resto == 20)
				final += 'K';
			else if (resto == 21)
				final += 'L';
			else if (resto == 22)
				final += 'M';
			else if (resto == 23)
				final += 'N';
			else if (resto == 24)
				final += 'O';
			else if (resto == 25)
				final += 'P';
			else if (resto == 26)
				final += 'Q';
			else if (resto == 27)
				final += 'R';
			else if (resto == 28)
				final += 'S';
			else if (resto == 29)
				final += 'T';
		}while (q !=0);

		//invierte la cadena a mostrar//
		final = string (final.rbegin(), final.rend());
		cout << "Resultado--> "<<final <<endl;
		cout << "--------------------------------------";
	}
	//Si la salida es base 10, na hace falta volver a convertir//
	else if (out == 10){
		cout << "Resultado--> "<< total <<endl;
		cout << "--------------------------------------";
	}
}

int main()
{
	int tipo_in, tipo_out,i;
	string entrada;
	int bandera = 0;

	cout << "CAMBIO DE BASES\n";
	cout << "--------------------------------------"<<endl;
	cout << "Utilizar letras MAYUSCULAS\n";
	cout << "Ingresa base 0 para terminar.\n";
	cout << "--------------------------------------"<<endl;

	while (true)
	{
		cout << "Base de entrada (2-30): ";
		cin >> tipo_in;
		if (tipo_in == 0)
			break;
		if (tipo_in > 30 || tipo_in < 2)
		{
			cout << "Base no valida";
			break;
		}
		cout << "Numero: ";
		cin >> entrada;

		if (tipo_in == 2)
		{
			for (i=0;entrada[i] != '\0';i++)
			{
				if (entrada[i] == '0' || entrada[i] == '1')
				{
					bandera = 1;
				}
			  else
				{
			    bandera = 0;
			    break;
				}
			}
		}
		if (tipo_in == 3)
		{
			for (i=0;entrada[i] != '\0';i++)
			{
				if (entrada[i] == '0' || entrada[i] == '1' || entrada[i] == '2')
				{
					bandera = 1;
				}
			  else
				{
			    bandera = 0;
			    break;
				}
			}
		}
		if (tipo_in == 4)
		{
			for (i=0;entrada[i] != '\0';i++)
			{
				if (entrada[i] == '0' || entrada[i] == '1' || entrada[i] == '2' || entrada[i] == '3')
				{
					bandera = 1;
				}
			  else
				{
			    bandera = 0;
			    break;
				}
			}
		}
		if (tipo_in == 5)
		{
			for (i=0;entrada[i] != '\0';i++)
			{
				if (entrada[i] == '0' || entrada[i] == '1' || entrada[i] == '2' || entrada[i] == '3' || entrada[i] == '4')
				{
					bandera = 1;
				}
			  else
				{
			    bandera = 0;
			    break;
				}
			}
		}
		if (tipo_in == 6)
		{
			for (i=0;entrada[i] != '\0';i++)
			{
				if (entrada[i] == '0' || entrada[i] == '1' || entrada[i] == '2' || entrada[i] == '3' || entrada[i] == '4' || entrada[i] == '5')
				{
					bandera = 1;
				}
			  else
				{
			    bandera = 0;
			    break;
				}
			}
		}
		if (tipo_in == 7)
		{
			for (i=0;entrada[i] != '\0';i++)
			{
				if (entrada[i] == '0' || entrada[i] == '1' || entrada[i] == '2' || entrada[i] == '3' || entrada[i] == '4' || entrada[i] == '5' || entrada[i] == '6')
				{
					bandera = 1;
				}
			  else
				{
			    bandera = 0;
			    break;
				}
			}
		}
		if (tipo_in == 8)
		{
			for (i=0;entrada[i] != '\0';i++)
			{
				if (entrada[i] == '0' || entrada[i] == '1' || entrada[i] == '2' || entrada[i] == '3' || entrada[i] == '4' || entrada[i] == '5' || entrada[i] == '6' || entrada[i] == '7')
				{
					bandera = 1;
				}
			  else
				{
			    bandera = 0;
			    break;
				}
			}
		}
		if (tipo_in == 9)
		{
			for (i=0;entrada[i] != '\0';i++)
			{
				if (entrada[i] == '0' || entrada[i] == '1' || entrada[i] == '2' || entrada[i] == '3' || entrada[i] == '4' || entrada[i] == '5' || entrada[i] == '6' || entrada[i] == '7' || entrada[i] == '8')
				{
					bandera = 1;
				}
			  else
				{
			    bandera = 0;
			    break;
				}
			}
		}
		if (tipo_in == 10)
		{
			for (i=0;entrada[i] != '\0';i++)
			{
				if (entrada[i] == '0' || entrada[i] == '1' || entrada[i] == '2' || entrada[i] == '3' || entrada[i] == '4' || entrada[i] == '5' || entrada[i] == '6' || entrada[i] == '7' || entrada[i] == '8' || entrada[i] == '9')
				{
					bandera = 1;
				}
			  else
				{
			    bandera = 0;
			    break;
				}
			}
		}
		if (tipo_in == 11)
		{
			for (i=0;entrada[i] != '\0';i++)
			{
				if (entrada[i] == '0' || entrada[i] == '1' || entrada[i] == '2' || entrada[i] == '3' || entrada[i] == '4' || entrada[i] == '5' || entrada[i] == '6' || entrada[i] == '7' || entrada[i] == '8' || entrada[i] == '9' || entrada[i] == 'A')
				{
					bandera = 1;
				}
			  else
				{
			    bandera = 0;
			    break;
				}
			}
		}
		if (tipo_in == 12)
		{
			for (i=0;entrada[i] != '\0';i++)
			{
				if (entrada[i] == '0' || entrada[i] == '1' || entrada[i] == '2' || entrada[i] == '3' || entrada[i] == '4' || entrada[i] == '5' || entrada[i] == '6' || entrada[i] == '7' || entrada[i] == '8' || entrada[i] == '9' || entrada[i] == 'A' || entrada[i] == 'B')
				{
					bandera = 1;
				}
			  else
				{
			    bandera = 0;
			    break;
				}
			}
		}
		if (tipo_in == 13)
		{
			for (i=0;entrada[i] != '\0';i++)
			{
				if (entrada[i] == '0' || entrada[i] == '1' || entrada[i] == '2' || entrada[i] == '3' || entrada[i] == '4' || entrada[i] == '5' || entrada[i] == '6' || entrada[i] == '7' || entrada[i] == '8' || entrada[i] == '9' || entrada[i] == 'A' || entrada[i] == 'B' || entrada[i] == 'C')
				{
					bandera = 1;
				}
			  else
				{
			    bandera = 0;
			    break;
				}
			}
		}
		if (tipo_in == 14)
		{
			for (i=0;entrada[i] != '\0';i++)
			{
				if (entrada[i] == '0' || entrada[i] == '1' || entrada[i] == '2' || entrada[i] == '3' || entrada[i] == '4' || entrada[i] == '5' || entrada[i] == '6' || entrada[i] == '7' || entrada[i] == '8' || entrada[i] == '9' || entrada[i] == 'A' || entrada[i] == 'B' || entrada[i] == 'C' || entrada[i] == 'D')
				{
					bandera = 1;
				}
			  else
				{
			    bandera = 0;
			    break;
				}
			}
		}
		if (tipo_in == 15)
		{
			for (i=0;entrada[i] != '\0';i++)
			{
				if (entrada[i] == '0' || entrada[i] == '1' || entrada[i] == '2' || entrada[i] == '3' || entrada[i] == '4' || entrada[i] == '5' || entrada[i] == '6' || entrada[i] == '7' || entrada[i] == '8' || entrada[i] == '9' || entrada[i] == 'A' || entrada[i] == 'B' || entrada[i] == 'C' || entrada[i] == 'D' || entrada[i] == 'E')
				{
					bandera = 1;
				}
			  else
				{
			    bandera = 0;
			    break;
				}
			}
		}
		if (tipo_in == 16)
		{
			for (i=0;entrada[i] != '\0';i++)
			{
				if (entrada[i] == '0' || entrada[i] == '1' || entrada[i] == '2' || entrada[i] == '3' || entrada[i] == '4' || entrada[i] == '5' || entrada[i] == '6' || entrada[i] == '7' || entrada[i] == '8' || entrada[i] == '9' || entrada[i] == 'A' || entrada[i] == 'B' || entrada[i] == 'C' || entrada[i] == 'D' || entrada[i] == 'E' || entrada[i] == 'F')
				{
					bandera = 1;
				}
			  else
				{
			    bandera = 0;
					break;
				}
			}
		}
		if (tipo_in == 17)
		{
			for (i=0;entrada[i] != '\0';i++)
			{
				if (entrada[i] == '0' || entrada[i] == '1' || entrada[i] == '2' || entrada[i] == '3' || entrada[i] == '4' || entrada[i] == '5' || entrada[i] == '6' || entrada[i] == '7' || entrada[i] == '8' || entrada[i] == '9' || entrada[i] == 'A' || entrada[i] == 'B' || entrada[i] == 'C' || entrada[i] == 'D' || entrada[i] == 'E' || entrada[i] == 'F' || entrada[i] == 'G')
				{
					bandera = 1;
				}
			  else
				{
			    bandera = 0;
			    break;
				}
			}
		}
		if (tipo_in == 18)
		{
			for (i=0;entrada[i] != '\0';i++)
			{
				if (entrada[i] == '0' || entrada[i] == '1' || entrada[i] == '2' || entrada[i] == '3' || entrada[i] == '4' || entrada[i] == '5' || entrada[i] == '6' || entrada[i] == '7' || entrada[i] == '8' || entrada[i] == '9' || entrada[i] == 'A' || entrada[i] == 'B' || entrada[i] == 'C' || entrada[i] == 'D' || entrada[i] == 'E' || entrada[i] == 'F' || entrada[i] == 'G' || entrada[i] == 'H')
				{
					bandera = 1;
				}
			  else
				{
			    bandera = 0;
			    break;
				}
			}
		}
		if (tipo_in == 19)
		{
			for (i=0;entrada[i] != '\0';i++)
			{
				if (entrada[i] == 'J' || entrada[i] == 'K' || entrada[i] == 'L' || entrada[i] == 'M' || entrada[i] == 'N' || entrada[i] == 'O' || entrada[i] == 'P' || entrada[i] == 'Q' || entrada[i] == 'R' || entrada[i] == 'S' || entrada[i] == 'T' || entrada[i] == 'U' || entrada[i] == 'V' || entrada[i] == 'W' || entrada[i] == 'X' || entrada[i] == 'Y' || entrada[i] == 'Z')
				{
					bandera = 0;
					break;
				}
			  else
				{
			    bandera = 1;
				}
			}
		}
		if (tipo_in == 20)
		{
			for (i=0;entrada[i] != '\0';i++)
			{
				if (entrada[i] == 'K' || entrada[i] == 'L' || entrada[i] == 'M' || entrada[i] == 'N' || entrada[i] == 'O' || entrada[i] == 'P' || entrada[i] == 'Q' || entrada[i] == 'R' || entrada[i] == 'S' || entrada[i] == 'T' || entrada[i] == 'U' || entrada[i] == 'V' || entrada[i] == 'W' || entrada[i] == 'X' || entrada[i] == 'Y' || entrada[i] == 'Z')
				{
					bandera = 0;
					break;
				}
			  else
				{
			    bandera = 1;
				}
			}
		}
		if (tipo_in == 21)
		{
			for (i=0;entrada[i] != '\0';i++)
			{
				if (entrada[i] == 'L' || entrada[i] == 'M' || entrada[i] == 'N' || entrada[i] == 'O' || entrada[i] == 'P' || entrada[i] == 'Q' || entrada[i] == 'R' || entrada[i] == 'S' || entrada[i] == 'T' || entrada[i] == 'U' || entrada[i] == 'V' || entrada[i] == 'W' || entrada[i] == 'X' || entrada[i] == 'Y' || entrada[i] == 'Z')
				{
					bandera = 0;
					break;
				}
			  else
				{
			    bandera = 1;
				}
			}
		}
		if (tipo_in == 22)
		{
			for (i=0;entrada[i] != '\0';i++)
			{
				if (entrada[i] == 'M' || entrada[i] == 'N' || entrada[i] == 'O' || entrada[i] == 'P' || entrada[i] == 'Q' || entrada[i] == 'R' || entrada[i] == 'S' || entrada[i] == 'T' || entrada[i] == 'U' || entrada[i] == 'V' || entrada[i] == 'W' || entrada[i] == 'X' || entrada[i] == 'Y' || entrada[i] == 'Z')
				{
					bandera = 0;
					break;
				}
			  else
				{
			    bandera = 1;
				}
			}
		}
		if (tipo_in == 23)
		{
			for (i=0;entrada[i] != '\0';i++)
			{
				if (entrada[i] == 'N' || entrada[i] == 'O' || entrada[i] == 'P' || entrada[i] == 'Q' || entrada[i] == 'R' || entrada[i] == 'S' || entrada[i] == 'T' || entrada[i] == 'U' || entrada[i] == 'V' || entrada[i] == 'W' || entrada[i] == 'X' || entrada[i] == 'Y' || entrada[i] == 'Z')
				{
					bandera = 0;
					break;
				}
			  else
				{
			    bandera = 1;
				}
			}
		}
		if (tipo_in == 24)
		{
			for (i=0;entrada[i] != '\0';i++)
			{
				if (entrada[i] == 'O' || entrada[i] == 'P' || entrada[i] == 'Q' || entrada[i] == 'R' || entrada[i] == 'S' || entrada[i] == 'T' || entrada[i] == 'U' || entrada[i] == 'V' || entrada[i] == 'W' || entrada[i] == 'X' || entrada[i] == 'Y' || entrada[i] == 'Z')
				{
					bandera = 0;
					break;
				}
			  else
				{
			    bandera = 1;
				}
			}
		}
		if (tipo_in == 25)
		{
			for (i=0;entrada[i] != '\0';i++)
			{
				if (entrada[i] == 'P' || entrada[i] == 'Q' || entrada[i] == 'R' || entrada[i] == 'S' || entrada[i] == 'T' || entrada[i] == 'U' || entrada[i] == 'V' || entrada[i] == 'W' || entrada[i] == 'X' || entrada[i] == 'Y' || entrada[i] == 'Z')
				{
					bandera = 0;
					break;
				}
			  else
				{
			    bandera = 1;
				}
			}
		}
		if (tipo_in == 26)
		{
			for (i=0;entrada[i] != '\0';i++)
			{
				if (entrada[i] == 'Q' || entrada[i] == 'R' || entrada[i] == 'S' || entrada[i] == 'T' || entrada[i] == 'U' || entrada[i] == 'V' || entrada[i] == 'W' || entrada[i] == 'X' || entrada[i] == 'Y' || entrada[i] == 'Z')
				{
					bandera = 0;
					break;
				}
			  else
				{
			    bandera = 1;
				}
			}
		}
		if (tipo_in == 27)
		{
			for (i=0;entrada[i] != '\0';i++)
			{
				if (entrada[i] == 'R' || entrada[i] == 'S' || entrada[i] == 'T' || entrada[i] == 'U' || entrada[i] == 'V' || entrada[i] == 'W' || entrada[i] == 'X' || entrada[i] == 'Y' || entrada[i] == 'Z')
				{
					bandera = 0;
					break;
				}
			  else
				{
			    bandera = 1;
				}
			}
		}
		if (tipo_in == 28)
		{
			for (i=0;entrada[i] != '\0';i++)
			{
				if (entrada[i] == 'S' || entrada[i] == 'T' || entrada[i] == 'U' || entrada[i] == 'V' || entrada[i] == 'W' || entrada[i] == 'X' || entrada[i] == 'Y' || entrada[i] == 'Z')
				{
					bandera = 0;
					break;
				}
			  else
				{
			    bandera = 1;
				}
			}
		}
		if (tipo_in == 29)
		{
			for (i=0;entrada[i] != '\0';i++)
			{
				if (entrada[i] == 'T' || entrada[i] == 'U' || entrada[i] == 'V' || entrada[i] == 'W' || entrada[i] == 'X' || entrada[i] == 'Y' || entrada[i] == 'Z')
				{
					bandera = 0;
					break;
				}
			  else
				{
			    bandera = 1;
				}
			}
		}
		if (tipo_in == 30)
		{
			for (i=0;entrada[i] != '\0';i++)
			{
				if (entrada[i] == 'U' || entrada[i] == 'V' || entrada[i] == 'W' || entrada[i] == 'X' || entrada[i] == 'Y' || entrada[i] == 'Z')
				{
					bandera = 0;
					break;
				}
			  else
				{
			    bandera = 1;
				}
			}
		}

		if (bandera == 0)
		{
			cout << "Alguno de los caracteres ingresados no pertenece a la base!\n";
			cout << "--------------------------------------\n";
		}
		if (bandera == 1)
		{
			cout << "Base de salida (2-30): ";
			cin >> tipo_out;
			if (tipo_out == 0)
				break;
			conversion (tipo_in, tipo_out, entrada);
			cout <<endl;
		}
	}
	return 0;
}

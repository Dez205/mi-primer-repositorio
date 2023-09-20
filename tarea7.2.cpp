#include <iostream>

using namespace std;

int datos[7];

int push()
{

}

int pop()
{

}

int vacio()
{
	int pos;
	for (int i = 0; i < 7; i++)
	{
		if (!datos[i])
		{
			pos = i;
			return pos;
			break;
		}
		else
		{
			return 0;
		}
	}
}

int lleno()
{
	int pos;
	for (int i = 0; i < 7; i++)
	{
		if (datos[i])
		{
			pos = i;
			return pos;
		}
		else
		{
			return 0;
			break;
		}
	}
}

int print()
{

}

int main()
{
	bool bucle = true;
	while (bucle)
	{
		int op;
		cout << "Elige la opcion a realizar\n 1.- Push\n 2.- Pop\n 3.- Vacio\n 4.- Lleno \n 5.- Print\n 0.- Print\n";
		cin >> op;
		switch (op)
		{
//		case 1:

	//	case 2:

		case 3:
			cout << "La ultima posicion vacia es " << vacio() << endl;
		case 4:
			cout << "La ultima posicion llen es " << lleno() << endl;
		case 0:
			bucle = false;
			cout << "El programa se ha cerrado correctamente\n";
			break;
		default:
			cout << "Ingresa una operacion valida\n";
		}
	}

	return 0;
}

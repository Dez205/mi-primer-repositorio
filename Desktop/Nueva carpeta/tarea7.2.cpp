##include <iostream>

using namespace std;

int datos[7];

int push(int x)
{
    if(x > -1)
    {
    for(int i = x; i < (x + 1); i++)
    {
        cout << "Ingresa tu dato numero " << i + 1 << "\n";
        cin >> datos[i];
    }
    }
    return 0;
}

int pop(int x)
{
    if(x > 1)
        {
        for(int i = x - 1; i > (x -1); i--)
        {
            datos[i] = !datos[i];
        }
        }
        return 0;
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
			return -1;
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

int print(int x)
{
    for (int i = 0; i < x; i++)
    {
        cout << datos[i];
    }
    return 0;
}

int main()
{
	bool bucle = true;
	while (bucle)
	{
		int op;
		cout << "Elige la opcion a realizar\n 1.- Push\n 2.- Pop\n 3.- Print\n 0.- Cerrar\n";
		cin >> op;
		switch (op)
		{
        case 1:
            push(vacio());
            break;
		case 2:
		    pop(lleno());
	        break;
        case 3:
	        print(vacio());
	        break;
		case 0:
			bucle = false;
			cout << "El programa se ha cerrado correctamente\n";
			break;
		default:
			cout << "Ingresa una operacion valida\n";
			break;
		}
	}

	return 0;
}include <iostream>

using namespace std;

int datos[7];

int push(int x)
{
    if(x > -1)
    {
    for(int i = x; i < (x + 1); i++)
    {
        cout << "Ingresa tu dato numero " << i + 1 << "\n";
        cin >> datos[i];
    }
    }
    return 0;
}

int pop(int x)
{
    if(x > 1)
        {
        for(int i = x - 1; i > (x -1); i--)
        {
            datos[i] = !datos[i];
        }
        }
        return 0;
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
			return -1;
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

int print(int x)
{
    for (int i = 0; i < x; i++)
    {
        cout << datos[i];
    }
    return 0;
}

int main()
{
	bool bucle = true;
	while (bucle)
	{
		int op;
		cout << "Elige la opcion a realizar\n 1.- Push\n 2.- Pop\n 3.- Print\n 0.- Cerrar\n";
		cin >> op;
		switch (op)
		{
        case 1:
            push(vacio());
            break;
		case 2:
		    pop(lleno());
	        break;
        case 3:
	        print(vacio());
	        break;
		case 0:
			bucle = false;
			cout << "El programa se ha cerrado correctamente\n";
			break;
		default:
			cout << "Ingresa una operacion valida\n";
			break;
		}
	}

	return 0;
}

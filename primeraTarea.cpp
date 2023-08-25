 #include<iostream>
    using namespace std;
    //ESTE CÓDIGO ES GENÉRICO Y LO HICE CON LO MÁS BÁSICO PARA NO ADELANTARME EN EL CURSO. :D
    //Área de firguras.
    //círculo
    float areaCir(float radio){
        float area;
        area = 3.1416*radio*radio;
        return area;
    }
    //rectángulo
    float areaRect(float base,float altura){
        float area;
        area = base*altura;
        return area;
    }
    //triángulo Rectángulo
    float areaTriangRect(float base,float altura){
        float area;
        area = (base*altura)/2;
        return area;
    }
    //Perímetro de figuras
    //Cuadrado
    float perimCuadrado(float lado){
        float perimetro;
        perimetro = lado*4;
        return perimetro;
    }
    //Rombiode
    float perimRombiode(float bases, float laterales){
        float perimetro;
        perimetro = (2*bases)+(2*laterales);
        return perimetro;
    }
    //Triángulo isósceles
    float perimTriangIsoceles(float lado, float base){
        float perimetro;
        perimetro = (lado*2)+ base;
        return perimetro;
    }

    //Función principal
    int main(){
        float radio, area, perimetro, base, altura, lado, bases, laterales;
        int opc;
        cout<<"Hola bienvenido, el siguiente programa, calcula el areas y perímetros de distintas formas."<<endl;
        cout<<"Escribe únicamente el número de la opción que requieras: "<<endl;
        cout<<"Opción 1: área de un círculo "<<endl;
        cout<<"Opción 2: área de un rectángulo "<<endl;
        cout<<"Opción 3: área de un Triángulo rectángulo "<<endl;
        cout<<"Opción 4: Perímetro de un cuadrado "<<endl;
        cout<<"Opción 5: Perímetro de un rombiode "<<endl;
        cout<<"Opción 6: Perímetro de un Triángulo Isósceles "<<endl;
        cin>>opc;
        if (opc == 1) {
            //área círculo
            cout<<"Ingresa el radio de tu círculo."<<endl;
            cin>>radio;
            area = areaCir(radio);
            cout<<"El área del círculo es: "<<area<<endl;
            return 0;
        }
        else if (opc == 2) {
            //área rectángulo
            cout<<"Ingresa el número del largo de la base y la altura de tu rectángulo, respectivamente"<<endl;
            cin>>base;
            cin>>altura;
            area = areaRect(base,altura);
            cout<<"El área del rectángulo es: "<<area<<endl;
            return 0;
        }
        else if (opc == 3) {
            //área triángulo Rectángulo
            cout<<"Ingresa el número del largo de la base y la altura de tu triángulo Rectángulo, respectivamente"<<endl;
            cin>>base;
            cin>>altura;
            area = areaTriangRect(base,altura);
            cout<<"El área del triángulo rectángulo es: "<<area<<endl;
            return 0;
        }
        else if (opc == 4) {
            //perímetro cuadrado
            cout<<"Ingresa el largo del lado de tu cuadrado."<<endl;
            cin>>lado;
            perimetro = perimCuadrado(lado);
            cout<<"El perímetro del cuadrado es: "<<perimetro<<endl;
            return 0;
        }
        else if (opc == 5) {
            //perímetro romboide
            cout<<"Ingresa el número del largo de la base y la altura de tu rombiode, respectivamente"<<endl;
            cin>>bases;
            cin>>laterales;
            perimetro = perimRombiode(bases, laterales);
            cout<<"El perímetro del cuadrado es: "<<perimetro<<endl;
            return 0;
        }
        else if (opc == 6) {
            //perímetro triangulo isósceles
            cout<<"Ingresa el número de la altura y de la base de tu triángulo Isósceles, respectivamente"<<endl;
            cin>>lado;
            cin>>base;
            perimetro = perimTriangIsoceles(lado, base);
            cout<<"El perímetro del cuadrado es: "<<perimetro<<endl;
            return 0;
        }
        else {
            cout<<"Esa opción no está dispoible";
            return 0;
        }
    }

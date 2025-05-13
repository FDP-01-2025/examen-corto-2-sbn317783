#include<iostream>
using namespace std;

int userAge, menuDiscount, menuOptEstudent ; 
float comboHamburguesaOrg = 8, ComboPizzaPersonal = 7, AlmuerzoEjecutivo = 10; 
float newHamPrice = comboHamburguesaOrg -(comboHamburguesaOrg * 0.25), newPizzaPrice = ComboPizzaPersonal -(ComboPizzaPersonal * 0.25), newAlmuerzoPrice = AlmuerzoEjecutivo -(AlmuerzoEjecutivo * 0.25); 
float sopaNutritiva = 6, platoCasero = 9, postreyCafe = 5;
float newSopaPrice = (sopaNutritiva -(sopaNutritiva * 0.30)), newPlatoPrice = (platoCasero -(platoCasero * 0.30)), newPostrePrice = (postreyCafe -(postreyCafe * 0.30));
double subOfBal, saldoFijo = 7, absOfBal;

int main()
{

    cout << "Por favor, ingressa tu edad: \n";
    cin >> userAge;

    if (userAge >= 12){
        cout << "Por favor, ingrese que tipo de persona es usted \n 1.Estudiante \n 2. Adulto Mayor \n 3. Ver Todo";
        cin >> menuDiscount;

        switch (menuDiscount)
        {
        case 1:
            cout << "Que te gustaria comprar? \n 1. Combo Hamburguesa Precio Original: $" << comboHamburguesaOrg <<  " Precio Reducido: $" << newHamPrice <<
                    "\n 2. Combo Pizza Personal. Precio Original: $"<< ComboPizzaPersonal << "Precio Reducido: $" <<newPizzaPrice <<
                    "\n 3. Almuerzo Ejecutivo. Precio Original: $ "<< AlmuerzoEjecutivo << "Precio Reducido: $" << newAlmuerzoPrice ;

                     cin >> menuOptEstudent;

                        switch (menuOptEstudent)
                        {
                        case 1:
                        subOfBal = saldoFijo - newHamPrice;
                        absOfBal = newHamPrice - saldoFijo;
                        if  (subOfBal > 0){
                            cout<< "Compra Exitosa! Tu saldo es de: " << subOfBal;
                        } else {
                            cout << "Saldo insuficiente, te hacen falta " << absOfBal  << " para realizar la compra ";
                        }
                        break;

                         case 2:
                        subOfBal = saldoFijo - newPizzaPrice;
                        absOfBal = newPizzaPrice - saldoFijo;
                        if  (subOfBal > 0){
                            cout<< "Compra Exitosa! Tu saldo es de: " << subOfBal;
                        } else {
                            cout << "Saldo insuficiente, te hacen falta " << absOfBal  << " para realizar la compra ";
                        }
                        break;

                         case 3:
                        subOfBal = saldoFijo - newAlmuerzoPrice;
                        absOfBal = newAlmuerzoPrice - saldoFijo;
                        if  (subOfBal > 0){
                            cout<< "Compra Exitosa! Tu saldo es de: " << subOfBal;
                        } else {
                            cout << "Saldo insuficiente, te hacen falta " << absOfBal  << " para realizar la compra ";
                        }
                        break;

                        
                    
                    default:
                        break;
                        }

                    

            break;
        case 2: 
            cout << "Que te gustaria comprar? \n 1. Sopa Nutritiva.  Precio Original: $" << sopaNutritiva <<  " Precio Reducido: $" << newSopaPrice <<
                    "\n 2. Plato Casero. Precio Original: $"<< platoCasero << "Precio Reducido: $" << newPlatoPrice <<
                    "\n 3. Postre y Cafe. Precio Original: $ "<< postreyCafe << "Precio Reducido: $" << newPostrePrice ;

                    cin >> menuOptEstudent;

                        switch (menuOptEstudent)
                        {
                        case 1:
                        subOfBal = saldoFijo - newSopaPrice;
                        absOfBal = newSopaPrice - saldoFijo;
                        if  (subOfBal > 0){
                            cout<< "Compra Exitosa! Tu saldo es de: " << subOfBal;
                        } else {
                            cout << "Saldo insuficiente, te hacen falta " << absOfBal  << " para realizar la compra ";
                        }
                        break;

                         case 2:
                        subOfBal = saldoFijo - newPlatoPrice;
                        absOfBal = newPlatoPrice - saldoFijo;
                        if  (subOfBal > 0){
                            cout<< "Compra Exitosa! Tu saldo es de: " << subOfBal;
                        } else {
                            cout << "Saldo insuficiente, te hacen falta " << absOfBal  << " para realizar la compra ";
                        }
                        break;

                         case 3:
                        subOfBal = saldoFijo - postreyCafe;
                        absOfBal = postreyCafe - saldoFijo;
                        if  (subOfBal > 0){
                            cout<< "Compra Exitosa! Tu saldo es de: " << subOfBal;
                        } else {
                            cout << "Saldo insuficiente, te hacen falta " << absOfBal  << " para realizar la compra ";
                        }
                        break;

                        
                    
                    default:
                        break;
                        }

            break; 
        
        // Mostrar ambos Precios
        case 3: 
            // Precio para estudiantes
             cout << "Que te gustaria comprar? \n 1. Combo Hamburguesa Precio Original: $" << comboHamburguesaOrg <<  " Precio Reducido: $" << newHamPrice <<
                    "\n 2. Combo Pizza Personal. Precio Original: $"<< ComboPizzaPersonal << "Precio Reducido: $" <<newPizzaPrice <<
                    "\n 3. Almuerzo Ejecutivo. Precio Original: $ "<< AlmuerzoEjecutivo << "Precio Reducido: $" << newAlmuerzoPrice ;

                    // precios mayor edad
                     cout << "Que te gustaria comprar? \n 4. Sopa Nutritiva.  Precio Original: $" << sopaNutritiva <<  " Precio Reducido: $" << newSopaPrice <<
                    "\n 5. Plato Casero. Precio Original: $"<< platoCasero << "Precio Reducido: $" << newPlatoPrice <<
                    "\n 6. Postre y Cafe. Precio Original: $ "<< postreyCafe << "Precio Reducido: $" << newPostrePrice ; 



                    cin >> menuOptEstudent;

                        switch (menuOptEstudent)
                        {
                        case 1:
                        subOfBal = saldoFijo - newHamPrice;
                        absOfBal = newHamPrice - saldoFijo;
                        if  (subOfBal > 0){
                            cout<< "Compra Exitosa! Tu saldo es de: " << subOfBal;
                        } else {
                            cout << "Saldo insuficiente, te hacen falta " << absOfBal  << " para realizar la compra ";
                        }
                        break;

                         case 2:
                        subOfBal = saldoFijo - newPizzaPrice;
                        absOfBal = newPizzaPrice - saldoFijo;
                        if  (subOfBal > 0){
                            cout<< "Compra Exitosa! Tu saldo es de: " << subOfBal;
                        } else {
                            cout << "Saldo insuficiente, te hacen falta " << absOfBal  << " para realizar la compra ";
                        }
                        break;

                         case 3:
                        subOfBal = saldoFijo - newAlmuerzoPrice;
                        absOfBal = newAlmuerzoPrice - saldoFijo;
                        if  (subOfBal > 0){
                            cout<< "Compra Exitosa! Tu saldo es de: " << subOfBal;
                        } else {
                            cout << "Saldo insuficiente, te hacen falta " << absOfBal  << " para realizar la compra ";
                        }
                        break;
                         case 4:
                        subOfBal = saldoFijo - newSopaPrice;
                        absOfBal = newSopaPrice - saldoFijo;
                        if  (subOfBal > 0){
                            cout<< "Compra Exitosa! Tu saldo es de: " << subOfBal;
                        } else {
                            cout << "Saldo insuficiente, te hacen falta " << absOfBal  << " para realizar la compra ";
                        }
                        break;

                         case 5:
                        subOfBal = saldoFijo - newPlatoPrice;
                        absOfBal = newPlatoPrice - saldoFijo;
                        if  (subOfBal > 0){
                            cout<< "Compra Exitosa! Tu saldo es de: " << subOfBal;
                        } else {
                            cout << "Saldo insuficiente, te hacen falta " << absOfBal  << " para realizar la compra ";
                        }
                        break;

                         case 6:
                        subOfBal = saldoFijo - postreyCafe;
                        absOfBal = postreyCafe - saldoFijo;
                        if  (subOfBal > 0){
                            cout<< "Compra Exitosa! Tu saldo es de: " << subOfBal;
                        } else {
                            cout << "Saldo insuficiente, te hacen falta " << absOfBal  << " para realizar la compra ";
                        }
                        break;
                         }



                    
        default:
            break;
        }
    }
    else {
        cout << "Necesitar una edad minima de 12 para poder comprar ";
    }





    


    return 0;
}


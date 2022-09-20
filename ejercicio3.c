#include <stdio.h>

int main()
{


    int pasillos=0,filas=0,huecos=0;
    int operation=0,npasillo=0,nfila=0,nhueco=0;
    int n0pasillo=0,n0fila=1,n0hueco=1,n0pos=0;


    do
    {
        printf("\nNumero de pasillos? ");  /*Preguntamos el numero de pasillos que queremos que tenga el almacen*/
        scanf("%d", &pasillos);            /*El bucle se repite hasta que se introduzca un valor valido*/
        if(pasillos<=0)
        {
            printf("\nEL numero de pasillos debe ser un numero positivo mayor que 0.");
        }

    }
    while(pasillos<=0);

    do
    {
        printf("\nFilas de cada pasillo? ");   /*Preguntamos el numero de filas que queremos que tenga el almacen*/
        scanf("%d", &filas);                    /*El bucle se repite hasta que se introduzca un valor valido*/
        if(filas<=0)
        {
            printf("\nEL numero de filas debe ser un numero positivo mayor que 0.");
        }
    }
    while(filas<=0);

    do
    {
        printf("\nNumero de huecos de cada fila? "); /*Preguntamos el numero de huecos que queremos que tenga el almacen*/
        scanf("%d", &huecos);                         /*El bucle se repite hasta que se introduzca un valor valido*/
        if(huecos<=0)
        {
            printf("\nEL numero de huecos debe ser un numero positivo mayor que 0.");
        }
    }
    while(huecos<=0);

    do{                                                                           /*El bucle se repite hasta que se introduzca un 3 que es el comando de salir*/
        printf("\nOperacion a realizar \n[1]Recoger\n[2]Almacenar\n[3]Salir\nOpcion? ");
        scanf("%d",&operation);                                 /*Nos pide el valor 1,2 o 3 de la operacion que deseas realizar en el almacen*/

        switch(operation)  /*Gracias al switch vemos que desea realizar el usuario en el almacen*/
        {


        case 1:            /*EL primer caso es el de coger algo del almacen*/
            n0pos++;
            printf("\nDonde coger?");
            do
            {
                printf("\nPasillo? ");  /*Se nos pide el pasillo donde se desea coger y en caso de que no sea valido el valor te lo repite*/
                scanf("%d",&npasillo);

                if(npasillo<=0 || npasillo>pasillos)
                {
                    printf("\nPasillo no valido.");
                }

            }
            while(npasillo<=0 || npasillo>pasillos);

            do
            {
                printf("\nFila? ");
                scanf("%d",&nfila);    /*Se nos pide la fila de donde se desea coger y en caso de que no sea valido el valor te lo repite*/

                if(nfila<=0 || nfila>filas)
                {
                    printf("\nFila no valida.");
                }

            }
            while(nfila<=0 || nfila>filas);

            do
            {
                printf("\nHueco? ");   /*Se nos pide el hueco de donde se desea coger y en caso de que no sea valido el valor te lo repite*/
                scanf("%d",&nhueco);

                if(nhueco<=0 || nhueco>huecos)
                {
                    printf("\nHueco no valido.");
                }

            }
            while(nhueco<=0 || nhueco>huecos);



            printf("\nPosicion robot -pasillo: %d, fila: %d, hueco %d",n0pasillo,n0fila,n0hueco); /*Posiciona al robot en su posicion inicial*/
            printf("\n mov \t pasillo \t fila \t hueco \n");                                /*Imprimimos el menu del programa*/
            printf("\n-------------------------------------------------------\n");

if(n0pasillo<npasillo){   /*Si el pasillo del que parte es menor que el requerido por el usuario*/

    if(n0pos==1){
       printf("-\t%d\t  %d\t  %d\n",n0pasillo,n0fila,n0hueco);
    }
    if(n0fila>1){
        for (int a=n0fila;a>1;a--){  /*En caso de que el robot este en una fila mayor que 1, disminuimos la fila e imprimios la D de Down*/
            n0fila--;
            printf("D\t%d\t  %d\t  %d\n", n0pasillo,n0fila,n0hueco);
        }
    }
        if(n0hueco>1){   /*En caso de que el robot este en un hueco mayor que 1, disminuimos la fila e imprimios la L de Left*/
        for (int b=n0hueco;b>1;b--){ /*Inicializamos el bucle en el hueco e ira disminuyendo hasta alcanzar el hueco inicial */
            n0hueco--;
            printf("L\t%d\t  %d\t  %d\n", n0pasillo,n0fila,n0hueco);
        }
    }
    for (int c=n0pasillo;c<npasillo;c++){
            n0pasillo++;
            printf("F\t%d\t  %d\t  %d\n", n0pasillo,n0fila,n0hueco);
        }
    if(n0fila<nfila){
        for(int d=n0fila;d<nfila;d++){
            n0fila++;
            printf("U\t%d\t  %d\t  %d\n", n0pasillo,n0fila,n0hueco);
        }
    }
        if(n0hueco<nhueco){
        for(int e=n0hueco;e<nhueco;e++){
            n0hueco++;
            printf("R\t%d\t  %d\t  %d\n", n0pasillo,n0fila,n0hueco);
        }
    }
}else if(n0pasillo>npasillo){ /*El caso contrario, el pasillo inicial es mayor que el pasillo requerido, el robot hará lo mismo menos para el pasillo*/

    if(n0fila>1){
        for(int f=n0fila;f>1;f--){
            n0fila--;
            printf("D\t%d\t  %d\t  %d\n", n0pasillo,n0fila,n0hueco);
        }
    }
        if(n0hueco>1){
        for(int g=n0hueco;g>1;g--){
            n0hueco--;
            printf("L\t%d\t  %d\t  %d\n", n0pasillo,n0fila,n0hueco);
        }
    }
    for(int h=n0pasillo;h>npasillo;h--){ /*En este caso el pasillo el pasillo irá disminuyendo hasta un hueco antes que el introducido*/
        n0pasillo--;
        printf("B\t%d\t  %d\t  %d\n", n0pasillo,n0fila,n0hueco);
    }

    if(n0fila<nfila){
        for(int k=n0fila;k<nfila;k++){
            n0fila++;
            printf("U\t%d\t  %d\t  %d\n", n0pasillo,n0fila,n0hueco);
        }
    }
    if(n0hueco<nhueco){
        for(int l=n0hueco;l<nhueco;l++){
            n0hueco++;
            printf("R\t%d\t  %d\t  %d\n", n0pasillo,n0fila,n0hueco);
        }
    }
}else{
        if(n0hueco>nhueco){ /*Si el hueco en el que se encuentra es mayor que el introducido, el robot se desplazara hacia la */
            for(int m=n0hueco;m>nhueco;m--){  /*izda del almacen hasta que sea uno mayor que el hueco requerido */
                n0hueco--;
                printf("L\t%d\t  %d\t  %d\n", n0pasillo,n0fila,n0hueco);
            }
        }else if (n0hueco<nhueco){ /*El caso opuesto al anterior,el robot iria de esta forma hacia la derecha*/
            for(int n=n0hueco; n<nhueco;n++){
            n0hueco++;
            printf("R\t%d\t  %d\t  %d\n", n0pasillo,n0fila,n0hueco);
        }
    }
        if(n0fila>nfila){ /*Igual que el anterior pero con las filas del almmacen*/
            for(int o=n0fila;o>nfila;o--){
                n0fila--;
                printf("D\t%d\t  %d\t  %d\n", n0pasillo,n0fila,n0hueco);
            }
        }else if (n0fila<nfila){
            for(int p=n0fila; p<nfila;p++){
            n0fila++;
            printf("U\t%d\t  %d\t  %d\n", n0pasillo,n0fila,n0hueco);
        }
    }
}
        printf("Recogida de material\n"); /*Imprimimos que se realizado la recogida de material*/

        if (n0fila>1){  /*Para realizar la entrega del material valdría con devolver el robot con la supuesta mercancia al punto de salida*/
                                                /*el cual sera la fila inicial,el hueco inicial y el nº de pasillos del almacen +1*/
            for(int q=n0fila;q>1;q--){
                n0fila--;
                printf("D\t%d\t  %d\t  %d\n", n0pasillo,n0fila,n0hueco);
            }
        }
        if (n0hueco>1){
            for(int r=n0hueco;r>1;r--){
                n0hueco--;
                printf("L\t%d\t  %d\t  %d\n", n0pasillo,n0fila,n0hueco);
            }
        }
        for(int s=n0pasillo;s<=pasillos;s++){
            n0pasillo++;
            printf("F\t%d\t  %d\t  %d\n", n0pasillo,n0fila,n0hueco);
        }
    printf("Entrega material\n");
    break;


        case 2:               /*Al igual que en el case 1 se nos pediran los valores para almacenar la mercancia y nos devolvera error si no es válido lo introducido*/
            printf("\nDonde almacenar?");
            do
            {
                printf("\nPasillo? ");
                scanf("%d",&npasillo);

                if(npasillo<=0 || npasillo>pasillos)
                {
                    printf("\nPasillo no valido.");
                }

            }
            while(npasillo<=0 || npasillo>pasillos);

            do
            {
                printf("\nFila? ");
                scanf("%d",&nfila);

                if(nfila<=0 || nfila>filas)
                {
                    printf("\nFila no valida.");
                }

            }
            while(nfila<=0 || nfila>filas);

            do
            {
                printf("\nHueco? ");
                scanf("%d",&nhueco);

                if(nhueco<=0 || nhueco>huecos)
                {
                    printf("\nHueco no valido.");
                }

            }
            while(nhueco<=0 || nhueco>huecos);

            printf("\nPosicion robot -pasillo: %d, fila: %d, hueco %d",n0pasillo,n0fila,n0hueco); /*Imprimimos el "menu" del robot justo desde el punto donde*/
            printf("\n mov \t pasillo \t fila \t hueco \n");            /*le hemos dejado parado anteriormente*/
            printf("\n-------------------------------------------------------\n");


                if(n0fila>1){ /*En caso de que la fila en la que se encontraba no fuese 1, le devuelve a esta posicion inicial requerida*/
                        for(int t=n0fila;t>1;t--){
                            n0fila--;
                            printf("D\t%d\t  %d\t  %d\n", n0pasillo,n0fila,n0hueco);
                        }
                    }
                 if(n0hueco>1){
                        for(int u=n0hueco;u>1;u--){ /*Igual que con la fila pero con el hueco*/
                            n0hueco--;
                            printf("L\t%d\t  %d\t  %d\n", n0pasillo,n0fila,n0hueco);
                        }
                    }
                if(n0pasillo>0){
                        for(int v=n0pasillo;v>0;v--){ /*Igual que con el hueco y la fila pero con el pasillo*/
                            n0pasillo--;
                            printf("B\t%d\t  %d\t  %d\n", n0pasillo,n0fila,n0hueco);
                        }
                    }
                printf("Recogida de material\n"); /*Imprimimos el mensaje de recogida del material*/

                for(int w=n0pasillo;w<npasillo;w++){ /*Inicializamos la variable w en el pasillo inicial y avanzamos con sentido Foreground hasta el pasillo requerido */
                    n0pasillo++;
                    printf("F\t%d\t  %d\t  %d\n", n0pasillo,n0fila,n0hueco);
                }
                for(int y=n0hueco;y<nhueco;y++){ /*Lo mismo que con el pasillo pero en este caso con el hueco en sentido Right*/
                    n0hueco++;
                    printf("R\t%d\t  %d\t  %d\n", n0pasillo,n0fila,n0hueco);
                }
                for(int z=n0fila;z<nfila;z++){ /*Lo mismo que con losanteriores pero en sentido Up con la fila*/
                    n0fila++;
                    printf("U\t%d\t  %d\t  %d\n", n0pasillo,n0fila,n0hueco);
                }
                printf("Almacenado de material\n");
            break;
        case 3:
            printf("\nSalir"); /*En caso de que se seleccione la operation 3, se detiene el switch y salimos*/
            break;
        default:
            printf("\nOpcion no valida"); /*Cualquier valor no válido, es decir, que no sea 1,2 y 3, lo rechazara e imprimirá este mensaje*/
        }
    }while(operation !=3); /*El bucle completo se repite hasta que se introduzca la opción 3 y se salga del bucle*/

}


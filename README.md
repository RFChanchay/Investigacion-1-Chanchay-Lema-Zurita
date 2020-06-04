# NODE-RED


## 1. PLANTEAMIENTO DEL PROBLEMA
Investigación acerca de  Node-Red características principales, nodos fundamentales y usos como una herramienta de programación visual para aplicaciones básicas, a realizarse por parte de los estudiantes de segundo año de Tic´s de la Universidad de las Fuerzas armadas “Espe” en el año 2020


## 2. OBJETIVOS
### **General**
- Analizar la aplicación Node-Red, sus características y los usos que tiene en el campo de la Informática y Programación.
### **Específicos**
- Identificar los tipos de Nodos Fundamentales de Node-Red y sus aplicaciones específicas.
- Adquirir nociones básicas del lenguaje esamblador (asm).
- Desarrollar ejemplos prácticos con los Nodos de tipo Adicional, Central y de Almacenamiento.
- Indicar la manera correcta de instalación de Node-Red en un computador.


## 3. ESTADO DEL ARTE



## 4. MARCO TEORIÓCO 
Para poder fomentar bien las bases de nuestra investigación debemos aclarar específicamente las dudas de conocimiento que se tenga sobre el mismo, y sobre lo que se va a trabajar, para lo cual vamos a tomar como punto de partida una vista rápida a los fundamentos de Node-Red los cuales nos serán útiles para ubicarnos dentro de la herramienta.

#### Características
- El 8086 dispone de instrucciones especiales para el tratamiento de cadenas de caracteres. 

- Los registros del 8086 tienen una misión específica, por lo que se podría decir que cada uno de ellos tiene su propia personalidad, aunque varios comparten tareas comunes. 

- El encapsulado del 8086 está formado por 40 patillas, simplificando así el hardware, aunque por contra, es necesario la multiplicación del bus de datos con el de direcciones.

- El 8086 requiere una señal de reloj exterior, siendo 5 y 8 Mhz las frecuencias típicas de funcionamiento.

- El 8086 dispone de un conjunto de registros, denominados ‘cola de instrucciones’, en el cual se van almacenando de forma anticipada los códigos de las instrucciones, consiguiendo que este aumente su velocidad de trabajo.

- El 8086 dispone de una arquitectura “pipe line”, es decir, que la CPU puede seguir leyendo instrucciones en los tiempos en que el bus no se utiliza

#### Estructura Interna

##### Unidad de interfaz del bus y unidad de ejecución
El 80886 y el 8088 tienen internamente dos componentes, la Unidad de Interfaz del Bus (BIU) y la Unidad   de   ejecución (EU).   La Unidad de ejecución procesa las instrucciones del CPU, mientras que la   Unidad   de   Interfaz   del   Bus maneja la lectura y escritura desde y hacia la memoria y los puertos de entrada/salida.
La ventaja de esta división fue el ahorro de esfuerzo necesario para producir el 8088. Sólo una mitad del 8086 (el BIU) tuvo que rediseñarse para producir el 8088.
Registros de uso general del 8086/8088:

##### **Tienen 16 bits cada uno y son ocho:**
- **AX=** Registro acumulador, dividido en AH y AL (8 bits cada uno). Usándolo se produce (en general) una instrucción que ocupa  un  byte  menos  que  si  se utilizaran otros registros de uso general. Su parte más baja, AL, también tiene esta propiedad. El último registro mencionado es el equivalente al acumulador de los procesadores anteriores (8080 y 8085). Además, hay instrucciones como DAA; DAS; AAA; AAS; AAM; AAD; LAHF; SAHF; CBW; IN y OUT que trabajan con AX o con uno de sus dos bytes (AH o AL). También se utiliza este registro (junto con DX a veces) en multiplicaciones y divisiones.

- **BX=** Registro base, dividido en BH y BL. Es el registro base de propósito similar (se usa para direccionamiento indirecto) y es una versión más potente del par de registros HL de los procesadores anteriores.

- **CX=** Registro contador, dividido en CH y CL. Se utiliza como contador en bucles (instrucción LOOP), en operaciones con cadenas (usando el prefijo REP) y en desplazamientos y rotaciones (usando 


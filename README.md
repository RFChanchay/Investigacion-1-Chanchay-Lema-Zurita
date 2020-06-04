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
![](img/11.png)
![](img/12.png)
![](img/13.png)


## 4. MARCO TEORIÓCO 
Para poder fomentar bien las bases de nuestra investigación debemos aclarar específicamente las dudas de conocimiento que se tenga sobre el mismo, y sobre lo que se va a trabajar, para lo cual vamos a tomar como punto de partida una vista rápida a los fundamentos de Node-Red los cuales nos serán útiles para ubicarnos dentro de la herramienta.

#### Fundamentos necesarios de Node- RED
Para obviar temas como la historia de Node- RED, se pondrá únicamente datos puntuales que nos ayuden con nuestra investigación.

- Node red es una herramienta de programación visual basada en flujos.

- Dichos flujos describen el comportamiento de nodos.

- Cada nodo recibe y captura datos específicos, los cuales están enlazados a otros nodos que realizan funciones diferentes.

- No es necesario bajar al nivel de detalle de código en cada nodo.

Una vez que conocemos los datos básicos podemos abrirnos paso para investigar más a fondo la instalación de sus respectivos nodos con sus diferentes funciones o apartados.

#### Instalación de nodos y tipos de nodos
Node RED al ser una herramienta de programación visual nos despliega un barra donde podemos encontrar diversos tipos de nodos, pero no siempre van a venir pre cargados en el sistema, para lo cual debemos instalar librerías que nos proporcionen los tipos de modos que vayamos a utilizar para esto Node Red cuenta con la opción de instalar en  “manage palette”.
Si queremos usar nodos centrales, adicionales o de almacenamiento, debemos entender el flujo que necesita cada nodo para poder implementarlo y debemos conocer cada uno de ellos y cuáles son sus funciones dentro del marco teórico.

#### Nodos centrales
Los nodos centrales pueden tomar diversas ocupaciones dependiendo de la función general que se quiera implementar, pero se debe saber que aquel al que llamaremos nodo central es el que carga con la parte principal del trabajo dentro de la red de nodos, y si este por alguna razón x o y presenta una dificultad el programa no podrá funcionar en su totalidad.
También se ha encontrado que se puede llamar nodos centrales a los “Core nodes” que son: Inject, Function, Change, Debug, Switch, Template.

#### Nodos adicionales

Dentro de la categoría de nodos adicionales, tenemos una infinidad de tipos y diversidad de funciones, que servirán como un plus para nuestro programa, ya que sin estos nodos el programa base si puede funcionar sin ningún problema.

#### Node-Red en el internet de las cosas
Una vez que se tiene claro los fundamentos teóricos y  el funcionamiento de los tipos de nodos con los que vamos a trabajar, es necesario saber en qué campos podemos trabajar los diversos ejemplos que hagamos dentro de Node-Red y nos encontramos con lo que se hace con frecuencia hoy en día con los programas, que es orientarlo al internet de las cosas, con su particularidad, la cual por lo general es facilitar las cosas a un consumidor por medio de internet, además que logra incluir problemas o acciones que nos rodean en el diario vivir las cuales podemos implementar en Node-Red usándolo como nuestra plataforma para el internet de las cosas.  
Siendo así que podemos basar nuestras aportaciones en muchos de los ejemplos que existen de Note-Red en el internet de las cosas. 

## 5.Diagramas 
Automatización de las luces de una casa por nodos
En la siguiente imagen podemos ver que las imágenes con la notificación en amarillo son las que están ejecutando pero no se puede encontrar ningún dispositivo para que el dispositivo aparezca debe estar conectado a la misma red.

![](img/1.jpg)

Después tenemos que realizar un flujo simple  en el cual primero estar en forma de nodo de inyección de segundo se encuentra el nodo netBeast este segundo nod se encontrara en modo de depuración.
Y al final solo se enlazan los 3 nodos en un flujo simple como en la siguiente imagen.
![](img/2.png)
![](img/4.png)

## 6.Lista de Componentes
- Dispositivo de 32 o 64 bits.
- Programa Node.js

## 7.Codigo Fuente
Node-Red se basa en Node.js. Para instalar el Node-Red, necesitas tener tanto Node.js instalado como NPM. Con NPM, es muy fácil instalar. Debemos acceder al common pront de Node.js y digitar:
- npm install -g node-red
El editor de flujo de Node-Red es una aplicación basada en navegadores web. Para poder utilizarlo, ejecuta Node-Red en el common pront:
- node-red

## 8.Descripción de Prerrequisitos y configuración.
Esto puede depender del proyecto que se vaya a poner en marcha con node-red se necesita Windows 7/8/10 de (32 o 64 bits), Mac OS o incluso se la podemos instalar en una raspberry pi claro que dependiendo el hardware en el cual se corre node-red tendrá diferentes limitaciones o problemas de compatibilidad que se pueden solucionar con la intalacion de diferentes drivers faltantes.

## 9.Aportaciones
###  Voltimetro en la pantalla de tu computadora
#### Materiales:
- 1 Resistencia 1MOhm.
- 1 Resistencia 100K
- 1 Multímetro
- 1 Arduino
- 1 Protoboard
- 1 Fuente de poder

#### Funcionamiento
Un microcontrolador como lo es el arduino trabaja con voltajes entre 0v-5v, con pines de entrada y salida. En sus pines de entrada cuenta con entradas analogicas que nos permiten medir valores que variables siempre y cuando sean pequeños. Por este motivo si queremos realizar un voltímetro usaremos estas entradas.
Las entradas análogas en caso de un sobrevoltaje pueden ocasionar da;os en nuestro arduino por lo que debemos disminuir el valor de entrada del voltaje mediante un divisor de voltaje.

![](img/5.png)
- **Nota:** Respetar polaridad de la fuente de voltaje.
#### Los nodos a utilizar son:
- Nodo de puertos Seriales, estos permitirán la comunicación punto a punto vía serial Arduino PC(Node-RED).
- Nodos de Node-RED Dashboard, Permite una variedad de nodos Widgets para crear visualizaciones espectaculares.

![](img/6.png)
Configuración Nodo chart (Node-RED Dashboard)

Con unas pocas configuraciones podemos crear una gráfica para visualizar en nuestros datos.

![](img/7.png)
#### Configuración Nodo Serial Port (Puerto serial)
Vinculamos el puerto serial a usar para conectar nuestro dispositivo y nuestro arduino

![](img/8.png)
#### Node-RED Dashboard
Utilizaremos los nodos Dashboard para ser más específicos los widgets Chart y Gauge que nos permiten visualizar la gráfica en tiempo real de los voltajes medidos.

![](img/9.png)

#### Código de Arduino
Nuestro código va a tomar 10 muestras de los valores de voltaje ingresado dividido por el divisor de voltaje, entonces mediante la calibración debemos determinar los valores óptimos para que concuerde la medición de un voltímetro real y nuestro código.

![](img/14.png)

## 10.Conclusiones
El análisis y dedicación correspondiente que se le dio a nuestra investigación nos arroja como conclusiones que la herramienta Node-RED es de gran utilidad y brinda grandes bondades hasta para aquellos usuarios que no poseen un amplio conocimiento de programación, debido a que la instalación  e implementación de sus nodos por medio de la programación orientada a objetos resulta ser bastante amigable con la comunidad que quiere empezar en este medio, sin embargo al momento de profundizar e ir por proyectos más complejos nos topamos con una herramienta bastante completa que demanda el conocer diferentes apartados de la misma para poder llevar a cabo programas más grandes.

También podemos concluir que Node-RED tiene gran influencia en lo que hoy en dia llamamos “el internet de las cosas” ya que existe una infinidad de proyectos que nos ayudan a optimizar nuestro entorno cotidiano, ya sea facilitando una acción o personalizándola a nuestro gusto, lo que nos demuestra que esta herramienta de programación ha logrado su objetivo en la comunidad.

## 11.Recomendaciones
Son pocas las recomendaciones que se puede dar sobre esta herramienta ya que se apoya con gran eficacia en su página web donde se puede encontrar varios apartados para la ayuda y guía de quien lo necesite. Sin embargo se puede rescatar unas pocas recomendaciones tal como:
- El tema de los comandos, ya que resulta tedioso en diferentes apartados como la instalación, y también en la configuración del host, esto se debe a que Note-RED usa comandos propios, por lo cual se recomienda empaparse muy bien en lo que a comandos de la herramienta respecta.
- Otra recomendación que se puede dar es la de descargar al menos 3 librerias, ya que la herramienta como tal carece de variedad de nodos.

## 12.Cronograma
![](img/10.PNG)







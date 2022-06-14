# CotizacionTiendaComputadores
Prototipo de tienda virtual donde se despliega un menú que nos permite realizar cotizaciones.
Este programa emula la función de una cotización de una tienda de tecnología donde se compran los computadores por partes y así mismo armarlos al gusto y presupuesto del cliente. Este programa genera 3 cotizaciones (archivos) que el cliente puede hacer:1- Bajo Costo: Es la combinación de partes más barata para el comprador.2- Alto Costo: Es la combinación de las partes que desee el comprador así no sea barato. 3-Portatil: Un computador portátil no se vende por partes, así que es la de un portátil más sus periféricos. El código contiene 4 clases: 3 abstractas y 1 derivada, las cuales realizan herencia por tres niveles, estas clases son:
- ABUELO: class tipo.
- PADRES: class torre, class perifericos.
- HIJO:  class computador.
La clase tipo inicializa la variable que decide el tipo de computador, las clases torre y perifericos contienen las variables y funciones que suministran y guardan las opciones de los distintos elementos del computador, y la clase computador es la primera que se ejecuta, se encarga de hacer los cálculos y de imprimir las cotizaciones en los archivos.

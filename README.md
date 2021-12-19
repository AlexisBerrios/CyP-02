# CyP-02
Deseamos crear un programa que cree el encabezado simple de un archivo BPM. Esta información debe visualizarse en Hexadecimal.

Deseamos un programa que muestre el primer segmento de datos de un archivo BMP. Se requieren solo un par
de datos en este primer segmento, pero es un hecho que deben mostrarse en formato hexadecimal, para que se
respeten el número de bytes que requiere la especificación.


bfType
Los dos primeros caracteres corresponden al ASCI ‘B’ y ‘M’ . El estandar define otras posibles letras, pero
corresponden a un sistema operativo que hoy ya no existe
bfSize
El segundo campo es un entero de cuatro bytes con el tamaño del archivo, expresado en bytes. En teoría, esto
significa que un archivo BMP no puede ser mas grande de 4GB (4,294,967,296 bytes). Esto puede acomodar
al menos una imagen de 24 bits con hasta 715 millones de pixeles.
bfReserved1
bfReserved2
Estos campos se han reservado para uso futuro.
bfOffBits
El formato de un archivo BMP es muy cambiante y depende de muchas circunstancias, por esa razón no está
bien establecido en que byte inicia la información del primer pixel. Estos bytes le indican al programa que
representa el mapa de bits, en donde inicia la información, propiamente del mapa de bits
Nota: La especificación real exige que los datos sean asentados bajo formato Little Endian, pero para esta
asignación se omitirá esa parte del requerimiento.

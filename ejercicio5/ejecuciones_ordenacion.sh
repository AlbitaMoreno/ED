#!/bin/csh
@ inicio = 100
@ fin = 30000
@ incremento = 500
set ejecutable = burbuja
set salida = tiempos_operacion_mejor.txt

@ i=$inicio
echo > $salida
while ( $i < $fin )
  echo Ejecución tam = $i
  echo `./{$ejecutable} $i` >> $salida
  @ i += $incremento
  echo Ejecución tam = $i
end



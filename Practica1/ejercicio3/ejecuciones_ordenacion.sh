#!/bin/csh
@ inicio = 100
@ fin = 300000
@ incremento = 300
set ejecutable = ej3
set salida = tiempos_operacion.txt

@ i=$inicio
echo > $salida
while ( $i < $fin )
  echo Ejecución tam = $i
  echo `./{$ejecutable} $i` >> $salida
  @ i += $incremento
  echo Ejecución tam = $i
end



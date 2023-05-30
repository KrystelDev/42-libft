# Resumen Libft:

### (Verifican si "x" entra en una determinada clase de carácter o no)
• isalpha
• isdigit
• isalnum
• isascii
• isprint

### (Realizan operaciones con strings terminadas en nulo)
• strlen 
    Devuelve la grandaria de un puntero char
• strchr 
    Devuelve el puntero donde encuentra ese chr por primera vez
• strrchr 
    Devuelve el puntero donde encuentra ese chr por última vez
• strncmp 
    Devuelve la diferencia del primer caracter diferentre entre los dos *char, como máximo mirará hasta la cantidad del tercer parametro recibido.
• strnstr 
    Devuelve el puntero donde encuentra esa cadena por primera vez, como máximo mirará hasta la cantidad del tercer parametro recibido.
• strlcpy 
    copia una cadena de origen en un búfer de destino con un tamaño máximo especificado y devuelve la longitud total de la cadena de origen
• strlcat 
    concatena una cadena de origen al final de una cadena de destino con un tamaño máximo especificado.
• ft_striteri
    A cada carácter de la string ’s’, aplica la función ’f’ dando como parámetros el índice de cada carácter dentro de ’s’ y la dirección del propio carácter, que podrá modificarse si es necesario.

### (Realiza operaciones de memoria y maneja violaciones de restricciones de tiempo de ejecución.)
• memset 
    Llena el bloque de memoria apuntado por el char* con el valor de int en los siguientes size_t bytes.
• bzero 
    Llena el bloque de memoria apuntado por el char* con '\0' en los siguientes size_t bytes.
• memcpy 
    Copia un bloque de memoria de una ubicación a otra.
• memmove 
    Realiza una copia de un bloque de memoria, incluso si los bloques se superponen.
• memchr 
    Devuelve el puntero donde encuentra ese chr por primera vez, como máximo mirará hasta la cantidad del tercer parametro recibido.
• memcmp 
    Compara los primeros n bytes de dos bloques de memoria y devuelve un valor entero que indica si son iguales, mayores o menores

### (Transforma letras siempre que sea posible para esa condición, o "x" si no ha sido posible)
• toupper (de minúscula a mayúscula)
• tolower (de mayúscula a minúscula)
• atoi (de chr a int)
• itoa (de int a chr) -> usa malloc()

### Usan malloc()
• calloc
    Asigna memoria para una matriz de nmemb elementos de size bytes cada uno y devuelve un puntero a la memoria asignada. La memoria es puesta a cero.
• strdup
    Asigna memoria dinámicamente y copiando el contenido de la cadena original a la nueva cadena duplicada.
• ft_substr 
    Devuelve una parte del string definida por los parámetros start y length.
• ft_strjoin
    devuelve una nueva string, formada por la concatenación de ’s1’ y ’s2’.
• ft_strtrim
    Elimina todos los caracteres de la string ’set’ desde el principio y desde el final de ’s1’, hasta encontrar un caracter no perteneciente a ’set’.
• ft_split
    Reserva (utilizando malloc(3)) un array de strings resultante de separar la string ’s’ en substrings utilizando el caracter ’c’ como delimitador. El array debe terminar con un puntero NULL.
• ft_strmapi
    A cada carácter de la string ’s’, aplica la función ’f’ dando como parámetros el índice de cada carácter dentro de ’s’ y el propio carácter. Genera una nueva string con el resultado del uso sucesivo de ’f’

### Usan write()
• ft_putchar_fd
    Envía el carácter ’c’ al file descriptor especificado.
• ft_putstr_fd
    Envía la string ’s’ al file descriptor especificado.
• ft_putendl_fd
    Envía la string ’s’ al file descriptor dado, seguido de un salto de línea.
• ft_putnbr_fd
    Envía el número ’n’ al file descriptor dado.

Git por lo que entendi es como si fuera una carpeta mejorada, en la cual se puede guardar lo que serian diferentes etapas o versiones de algo. La forma facil de explicar que es seria haciendo referencia a algun videojuego en el cual a medida que avanzas podes ir guardando tu progreso, que en este caso seria con commits, los cuales mas adelante pondre cuales serian los comandos mas comunes y para que sirven. siguiendo con el ejemplo nos podemos dar con la situacion de que guardamos el progreso de nuestro archivo sobre el cual estamos trabajando pero cometemos un error y no podemos continuar desde el ultimo punto donde lo dejamos, ahi es cuando gracias a git podemos elegir otra rama se podria decir y continuar antes del error que nos habia provocado el no poder continuar.

Github por otro lado seria un sitio web en el cual podemos subir justamente estas versiones para poder trabajar en conjunto con otras personas de otras partes, todo de forma remota.

los comandos mas comunes de git son:

git init: Inicializa un repositorio Git en un directorio local.
git clone [url]: Clona un repositorio remoto en tu directorio local.
git add [archivo]: Agrega cambios al área de preparación para ser confirmados. (en este podemos colocar un "." y se agregara todo lo modificado.)
git commit -m "mensaje": Confirma los cambios en el repositorio con un mensaje descriptivo.
git status: Muestra el estado actual del repositorio, incluyendo archivos modificados y pendientes de ser confirmados.
git push: Sube los cambios confirmados a un repositorio remoto.
git pull: Obtiene los últimos cambios del repositorio remoto y los fusiona con tu rama local.
git branch: Muestra una lista de ramas en el repositorio.
git checkout [rama]: Cambia a una rama específica.
git merge [rama]: Fusiona los cambios de una rama específica en la rama actual.
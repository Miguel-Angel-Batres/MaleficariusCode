
    function cambiarRuta(y,x,imagen){
      var nombreimagen;
      if(y==1){
      if(x==1){
      nombreimagen= './imagenes/githubrojo.webp';
      }
      if(x==2){
      nombreimagen = './imagenes/github.webp';
      }
      }
      if(y==2){
        if(x==1){
          nombreimagen = './imagenes/emailrojo.webp';
          }
          if(x==2){
          nombreimagen = './imagenes/email.webp';
          }
      }

      }
      Prism.highlightAll();

    /*function moveSnake() {
      snakeX += directionX * 20; // 20 es el ancho del elemento
      //snakeY += directionY * 20; // 20 es la altura del elemento
  
      // Limitar la serpiente dentro de la pantalla
      if (snakeX < 0) snakeX = 0;
      if (snakeY < 0) snakeY = 0;
      if (snakeX > window.innerWidth - 20) snakeX = window.innerWidth - 20;
      if (snakeY > window.innerHeight - 20) {snakeY = window.innerHeight-20; cambio = -20;}
      if (snakeY <= 0) cambio = 20;
      if(snakeX == window.innerWidth -20){
        snakeY +=cambio;
        directionX = -1;
      }
      if(snakeX==0){
        snakeY +=cambio;
        directionX=1;
      }
  
      // Actualizar la posición de la serpiente en el DOM
      snakeElement.style.left = snakeX + "px";
      snakeElement.style.top = snakeY + "px";
    }
  
    // Mover la serpiente automáticamente cada 100 milisegundos
    setInterval(moveSnake, 50 );*/

  

    function cambiarRuta(y,x,imagen){
      if(y==1){
      if(x==1){
      imagen.src= './imagenes/githubrojo.webp';
      }
      if(x==2){
      imagen.src = './imagenes/github.webp';
      }
      }
      if(y==2){
        if(x==1){
          imagen.src = './imagenes/emailrojo.webp';
          }
          if(x==2){
          imagen.src = './imagenes/email.webp';
          }
      }

      }
      var imgelement = document.getElementById('imagen');
      var img2element = document.getElementById('imagen2');

      if(window.innerWidth < 768){
        imgelement.src = './imagenes/githubrojo.webp';
        img2element.src = './imagenes/emailrojo.webp';
      }
      function toggleDropdown() {
        var dropdownContent = document.getElementById("dropdownContent");
        if (dropdownContent.style.display === "none" || dropdownContent.style.display === "") {
          dropdownContent.style.display = "block";
          setTimeout(function() {
            dropdownContent.style.opacity = "1";
          }, 0);
        } else {
          dropdownContent.style.opacity = "0";
          setTimeout(function() {
            dropdownContent.style.display = "none";
          }, 300);
        }
      }
    
      window.onclick = function(event) {
        var dropdown = document.getElementById("dropdown");
        var dropdownContent = document.getElementById("dropdownContent");
        if (!dropdown.contains(event.target) && event.target !== dropdownContent) {
          dropdownContent.style.opacity = "0";
          setTimeout(function() {
            dropdownContent.style.display = "none";
          }, 300);
        }
      }
      const sonidoClicBoton = document.getElementById('sonidoClicBoton');
      
      document.body.addEventListener('click', (event) => {
        if (sonidoClicBoton !== null) {
          sonidoClicBoton.play();
          }  
          
      });



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

  
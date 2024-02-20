document.addEventListener('DOMContentLoaded', function () {
    var movingGif = document.querySelector('.moving-gif');
    var direction = 100; // Dirección de movimiento, 1 para derecha, -1 para izquierda
    movingGif.style.float = 'right';
    movingGif.style.transform = "scaleX(-1)";
    var arriba = false;

    function moverGif() {
      var limiteDerecho = window.innerWidth;
      // Cambiar la dirección si alcanza los límites
      var leftValue = parseInt(getComputedStyle(movingGif).left);
      var gifheight = parseInt(getComputedStyle(movingGif).height);
      if(parseInt(movingGif.style.top) <= 0 + (gifheight/2)){
        arriba = false;
      }
      if(parseInt(movingGif.style.top) >= window.innerHeight - gifheight){
        arriba = true;
      }
      if (parseInt(movingGif.style.left) >= limiteDerecho) {
        direction *= -1;
        if(arriba){
          movingGif.style.top = parseInt(getComputedStyle(movingGif).top)- 50 + 'px';
        }else{
          movingGif.style.top = parseInt(getComputedStyle(movingGif).top)+ 50 + 'px';
        }
        movingGif.style.transform = "scaleX(1)";
      }
      var gifwidth = parseInt(getComputedStyle(movingGif).width);
      if(parseInt(movingGif.style.left) <= (0-gifwidth)){
        direction *= -1;
        if(arriba){
            movingGif.style.top = parseInt(getComputedStyle(movingGif).top)- 50 + 'px';
          }else{
            movingGif.style.top = parseInt(getComputedStyle(movingGif).top)+ 50 + 'px';
          }    
        movingGif.style.transform = "scaleX(-1)";
      }
    
      movingGif.style.left = (leftValue + direction) + 'px'; 
    }

    moverGif();

    setInterval(moverGif, 10);
  });
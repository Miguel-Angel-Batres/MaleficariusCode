document.addEventListener('DOMContentLoaded', function () {
    var movingGif = document.querySelector('.moving-gif');
    var direction = 0;
    if(window.innerWidth <= 768){
      direction = 50;

    }else{
      direction = 70;
    }
    movingGif.style.float = 'right';
    movingGif.style.transform = "scaleX(-1)";
    var arriba = false;

    function moverGif() {
      var limiteDerecho = window.innerWidth;
      var limiteizquierdo = 0 - parseInt(getComputedStyle(movingGif).width);
      var velocidady = 2;
      if(window.innerWidth <= 768){
        velocidady = 2;
      }else{
        velocidady = 4;
      }
      // Cambiar la dirección si alcanza los límites
      var leftValue = parseInt(getComputedStyle(movingGif).left);
      var gifheight = parseInt(getComputedStyle(movingGif).height);
      if(parseInt(movingGif.style.top) <= 0){
        arriba = false;
      }
      if(parseInt(movingGif.style.top) >= window.innerHeight - (gifheight/4)){
        arriba = true;
      }

      if (parseInt(movingGif.style.left) >= limiteDerecho) {
        direction *= -1;
        movingGif.style.transform = "scaleX(1)";
      }
      if(parseInt(movingGif.style.left) <= limiteizquierdo){
        direction *= -1;  
        movingGif.style.transform = "scaleX(-1)";
      }
      if(arriba){
        movingGif.style.top = parseInt(getComputedStyle(movingGif).top) - velocidady + 'px';
      }else{
        movingGif.style.top = parseInt(getComputedStyle(movingGif).top) + velocidady + 'px';
      }
      movingGif.style.left = (leftValue + direction) + 'px'; 
    }

    moverGif();

    setInterval(moverGif, 10);
  });
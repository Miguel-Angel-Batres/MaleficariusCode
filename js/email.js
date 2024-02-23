function sendEmail() {
    var name = document.getElementById('name').value.trim();
    var email = document.getElementById('email').value.trim();
    var message = document.getElementById('message').value.trim();
    var success = document.getElementById('success');
  
    // Validar el formato del correo electrónico
    var emailRegex = /^(([^<>()\[\]\\.,;:\s@"]+(\.[^<>()\[\]\\.,;:\s@"]+)*)|(".+"))@((\[[0-9]{1,3}\.[0-9]{1,3}\.[0-9]{1,3}\.[0-9]{1,3}\])|(([a-zA-Z\-0-9]+\.)+[a-zA-Z]{2,}))$/;
    var isEmailValid = emailRegex.test(String(email).toLowerCase());
  
    if (name.length > 0 && isEmailValid && message.length > 0) {
      var params = {
        from_name: name,
        email_id: email,
        message: message
      };
  
      emailjs.send("service_mntk9kd", "template_f9siana", params)
        .then((response) => {
            success.style.display = 'flex';
          success.textContent = 'Email sent successfully!';
          success.style.color = 'green';
          setTimeout(function() {
            success.style.display = 'none';
          }, 2000);
          console.log(response);
        })
        .catch((error) => {
            success.style.display = 'flex';
            success.textContent = 'Error Sending Email. Please try again or later';
            success.style.color = 'red';
            setTimeout(function() {
                success.style.display = 'none';
              }, 2000);
            console.error(error);
        });
    } else {
        success.style.display = 'flex';
        success.textContent = 'Please enter a valid name, email and message.';
        success.style.color = 'red';
        setTimeout(function() {
            success.style.display = 'none';
        }, 2000);
    }
  }
  

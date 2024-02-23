document.addEventListener('DOMContentLoaded', function() {
const eJS_message = document.getElementById('message');
const eJS_fullName = document.getElementById('name');
const eJS_sendJoke = document.getElementById('submit');
const eJS_email = document.getElementById('email');



let canSubmit = false;

function eJS_set_event_listeners() {
    eJS_fullName.addEventListener('keyup', eJS_can_submit);
    eJS_email.addEventListener('keyup', eJS_can_submit);
    eJS_message.addEventListener('keyup', eJS_can_submit);
}
eJS_set_event_listeners();
function eJS_validateEmail(email) {
    const re = /^(([^<>()\[\]\\.,;:\s@"]+(\.[^<>()\[\]\\.,;:\s@"]+)*)|(".+"))@((\[[0-9]{1,3}\.[0-9]{1,3}\.[0-9]{1,3}\.[0-9]{1,3}\])|(([a-zA-Z\-0-9]+\.)+[a-zA-Z]{2,}))$/;
    return re.test(String(email).toLowerCase());
}

function eJS_can_submit () {
    let message = eJS_message.value.trim();
    let email = eJS_email.value.trim();
    let fullName = eJS_fullName.value.trim();

    if (message.length > 4 && email.length > 4 && fullName.length > 1) {
        alertComment.style.visibility = "hidden";
        if (eJS_validateEmail(email)) {
            eJS_sendJoke.classList.add('activated');
            eJS_sendJoke.disabled = false;
            canSubmit = true;

        }else {
            eJS_disabled_submit();
        }
    } else {
        alertComment.style.visibility = "visible";
        eJS_disabled_submit();
    }
};

function eJS_can_submit () {
    let message = eJS_message.value.trim();
    let email = eJS_email.value.trim();
    let fullName = eJS_fullName.value.trim();

    if (message.length > 4 && email.length > 4 && fullName.length > 1) {
        alertComment.style.visibility = "hidden";
        if (eJS_validateEmail(email)) {
            eJS_sendJoke.classList.add('activated');
            eJS_sendJoke.disabled = false;
            canSubmit = true;

        }else {
            eJS_disabled_submit();
        }
    } else {
        alertComment.style.visibility = "visible";
        eJS_disabled_submit();
    }
};
function eJS_disabled_submit() {
    eJS_sendJoke.classList.remove('activated');
    eJS_sendJoke.disabled = true;
    canSubmit = false;
};

});
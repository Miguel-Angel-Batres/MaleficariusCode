
function setCookies(name, value, days) {
    const expires = new Date();
    expires.setTime(expires.getTime() + days * 24 * 60 * 60 * 1000);
    const sameSite = ';SameSite=None';
    const secure = ';Secure'; /*because of HTTPS*/
    document.cookie = name + '=' + value  + ';expires=' + expires.toUTCString() + ';path=/' + sameSite + secure;
}


function getCookies(name) {
    const cookieName = name + "=";
    const decodedCookie = decodeURIComponent(document.cookie);
    const cookieArray = decodedCookie.split(';');
    for (let i = 0; i < cookieArray.length; i++) {
        let cookie = cookieArray[i];
        while (cookie.charAt(0) === ' ') {
            cookie = cookie.substring(1);
        }
        if (cookie.indexOf(cookieName) === 0) {
            return cookie.substring(cookieName.length, cookie.length);
        }
    }
    return "";
}

function cookieExists(name) {
    if (getCookies(name) !== null) {
        return true;
    }
    return false;
}
function switchLanguage(lang) {
    let path = fetchCurrentPath();
    setCookies('language', lang, 30);
    let newPath;
    if (path.endsWith('/') === true) {
        if (lang === 'es') {
            newPath = path + 'es';
        } else {
            newPath = path.replace('es/', '');
        }
    } else if (path.endsWith('index.html') === true) { 
        if (lang === 'es') {
            newPath = path.replace('/index.html', '/es/index.html');
        } else {
            newPath = path.replace('/es/index.html', '/index.html');
        }
    }
    if(newPath !== undefined){
        window.location.href = newPath;
    }
}

function oppositeLanguage(lang) {
    if (lang === 'en') {
        return 'es';
    }
    return 'en';
}

function toggleLanguage(button) {
    button.disabled = true;
    let currentLang;
    if ( cookieExists('language') ) {
        currentLang = getCookies('language');
    } else { 
        currentLang = fetchCurrentSiteLanguage();
    }

    switchLanguage(oppositeLanguage(currentLang));    
    setTimeout(function() {
        button.disabled = false;
    }, 500);
}

function fetchCurrentPath(){
    return window.location.pathname;
}

function fetchCurrentSiteLanguage(){
    let currentPath = fetchCurrentPath();
    if(currentPath.endsWith('/es/') || currentPath.endsWith('/es/index.html')){
        return 'es';
    }
    return 'en';
}

function getDefaultLanguage(){
    return navigator.language.substring(0, 2);
}


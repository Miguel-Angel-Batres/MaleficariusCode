document.addEventListener('DOMContentLoaded', () => {
    var theme = localStorage.getItem('theme');
    document.documentElement.setAttribute('data-theme', theme);
    actualizaTheme();

});
// localstorage theme
function getStoredtheme(){
    var theme = localStorage.getItem('theme');
    if(theme == 'dark'){
        return 'dark';
    } else { 
        return 'light';
    }
}
function setStoredtheme(){
 
    if(localStorage.getItem('theme') === 'dark'){
        localStorage.setItem('theme', 'light');
        document.documentElement.setAttribute('data-theme', 'light');
    } else {
        localStorage.setItem('theme', 'dark');
        document.documentElement.setAttribute('data-theme', 'dark');
    }
    actualizaTheme();
   
}
function actualizaTheme(){
    var themeButton = document.getElementById('theme-button');

    if(localStorage.getItem('theme') === 'dark'){
        if(localStorage.getItem('language') === 'es'){
            themeButton.textContent = 'Modo Claro';
        } else {
            themeButton.textContent = 'Light Mode';
        }
    } else {
        if(localStorage.getItem('language') === 'es'){
            themeButton.textContent = 'Modo Oscuro';
        } else {
            themeButton.textContent = 'Dark Mode';
        }
    }
}
function changepath(){
    let currentPath = window.location.pathname;
    let params = window.location.search;
    let newPath;
    var language = localStorage.getItem('language');
    console.log(language);
    if (currentPath.endsWith('/') === true) {
        if (language === 'es') {
            newPath = currentPath + 'es';
        } else {
            newPath = currentPath.replace('es/', '');
        }
    } else if (currentPath.endsWith('index.html') === true) { 
        if (language === 'es') {
            newPath = currentPath.replace('/index.html', '/es/index.html');
        } else { /* en */
            newPath = currentPath.replace('/es/index.html', '/index.html');
        }
    }
    if (newPath !== undefined) {
        window.location.href = newPath + params;
    }
}
function changelanguage(){
    var language = localStorage.getItem('language');
    if(language == 'en'){
        localStorage.setItem('language', 'es');
    } else {
        localStorage.setItem('language', 'en');
    }
    changepath();
}
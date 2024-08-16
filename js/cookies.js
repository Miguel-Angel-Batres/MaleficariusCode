document.addEventListener('DOMContentLoaded', () => {
    setStoredtheme();
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
    var theme = localStorage.getItem('theme');
    if(theme == 'dark'){
        document.getElementById('theme-style').href = 'css/light-theme.css';
        localStorage.setItem('theme', 'light');
    } else {
        document.getElementById('theme-style').href = 'css/dark-theme.css';
        localStorage.setItem('theme', 'dark');
    }
    var theme = document.getElementById('theme-style');
    var themeButton = document.getElementById('theme-button');

    if(theme.getAttribute('href') == 'css/dark-theme.css'){
        if(localStorage.getItem('language') == 'es'){
            themeButton.textContent = 'Modo Claro';
        } else {
            themeButton.textContent = 'Light Mode';
        }
    } else {
        if(localStorage.getItem('language') == 'es'){
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
    } else if (currentPath.endsWith('index.html') === true) { /* for index.html (local developing) */
        if (language === 'es') {
            newPath = currentPath.replace('/index.html', '/es/index.html');
        } else { /* en */
            newPath = currentPath.replace('/es/index.html', '/index.html');
        }
    }
    if (newPath !== undefined) {
        window.location.href = newPath + params; // Append the query parameters to the new path
    }
    setStoredtheme();
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
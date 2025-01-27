
    document.documentElement.setAttribute('data-theme', theme);
    actualizaTheme();

    document.getElementById('menuboton').addEventListener('click', function() {
        const opciones = document.getElementById('opciones');
    
        if (window.innerWidth <= 768) {
            if (opciones.style.display === 'flex') {
                opciones.style.display = 'none'; // Oculta los botones
            } else {
                opciones.style.display = 'flex'; // Muestra los botones
            }
        }
    });
    window.addEventListener('click', function(event) {
        const opciones = document.getElementById('opciones');
        if (window.innerWidth <= 768) {
            if (document.getElementById('menuboton').style.display != 'none') {
                if (!event.target.closest('.navbar')) {
                    opciones.style.display = 'none'; // Oculta los botones si se hace clic fuera del navbar
                }
            }
        }
    });
    
});
window.addEventListener('resize', function() {
    const opciones = document.getElementById('opciones');
    if (window.innerWidth > 768) {
        opciones.style.display = 'flex'; // Muestra los botones
    } else {
        opciones.style.display = 'none'; // Oculta los botones
    }
});
function getStoredtheme(){
    var theme = localStorage.getItem('theme');
    if(theme == 'dark'){
        return 'dark';
    } else { 
        return 'light';
    }
}
function setStoredtheme(){
 
    if(getStoredtheme() === 'dark'){
        localStorage.setItem('theme', 'light');
        document.documentElement.setAttribute('data-theme', 'light');
    } else {
        localStorage.setItem('theme', 'dark');
        document.documentElement.setAttribute('data-theme', 'dark');
    }
    actualizaTheme();
   
}
function redirect(baseFolder) {
    const language = localStorage.getItem('language');

    if (language === 'es') {
        window.location.href = `${baseFolder}/es/index.html`;
    } else {
        window.location.href = `${baseFolder}/index.html`;
    }
}
function actualizaTheme(){
    var themeButton = document.getElementById('theme-button');

    if(getStoredtheme() === 'dark'){
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
    if (currentPath.endsWith('/') === true) {
        if (language === 'es') {
            newPath = currentPath + 'es';
        } else {
            newPath = currentPath.replace('es/', '');
        }
    } else if (currentPath.endsWith('index.html') === true) { 
        if (language === 'es') {
            newPath = currentPath.replace('/index.html', '/es/index.html');
        } else {
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

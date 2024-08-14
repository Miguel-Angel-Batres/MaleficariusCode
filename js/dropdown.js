// cambiar a tema claro y oscuro
function toggleTheme(){
    var theme = document.getElementById('theme-style');
    var themeButton = document.getElementById('theme-button');
    if(theme.getAttribute('href') == 'css/dark-theme.css'){
        theme.href = 'css/light-theme.css';
        themeButton.textContent = 'Dark Mode';
    } else {
        theme.href = 'css/dark-theme.css';
        themeButton.textContent = 'Light Mode';
    }
}
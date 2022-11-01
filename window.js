function resizeGame() {
    var mainContent = document.getElementById('main-content');
    var widthToHeight = 4 / 3;
    var newWidth = window.innerWidth;
    var newHeight = window.innerHeight;
    var newWidthToHeight = newWidth / newHeight;
    
    if (newWidthToHeight > widthToHeight) {
        newWidth = newHeight * widthToHeight;
        mainContent.style.height = newHeight + 'px';
        mainContent.style.width = newWidth + 'px';
    } else {
        newHeight = newWidth / widthToHeight;
        mainContent.style.width = newWidth + 'px';
        mainContent.style.height = newHeight + 'px';
    }
    
    mainContent.style.marginTop = (-newHeight / 2) + 'px';
    mainContent.style.marginLeft = (-newWidth / 2) + 'px';
    
}		


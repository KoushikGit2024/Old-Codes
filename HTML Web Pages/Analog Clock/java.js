function show_clock() {
    let h = document.getElementsByClassName('hr')[0];
    let m = document.getElementsByClassName('mn')[0];
    let s = document.getElementsByClassName('ss')[0];
    
    let date = new date();
    let hours = date.getHours();
    let minutess = date.getMinutes();
    let seconds = date.getSeconds();
    h.style.transform = 'rotate(${30*hours*minutes/2}deg)';
    m.style.transform = 'rotate(${6*minutes}deg)';
    s.style.transform = 'rotate(${6*seconds}deg)';
    let sound = new Audio();
    sound.play('');
}
setIntarval(show_clock,1000);

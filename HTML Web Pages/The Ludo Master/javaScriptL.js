let container=document.getElementById("container");
let body=document.getElementsByTagName("body")[0];
let root=document.querySelector(":root");
var prop=getComputedStyle(root);
if(window.innerHeight>window.innerWidth){
    container.style.height="100vw";
    container.style.width="100vW";
    document.documentElement.style.setProperty("--rootSize",window.innerWidth*0.8);
} else {
    container.style.height="100vh";
    container.style.width="100vh";
    document.documentElement.style.setProperty("--rootSize",window.innerHeight*0.8);
}
let rootSize=getComputedStyle(document.body).getPropertyValue("--rootSize");
document.getElementById("board").style.width=`${rootSize}px`;
document.getElementById("board").style.height=`${rootSize}px`;
window.addEventListener("resize",()=>{
    if(window.innerHeight>window.innerWidth){
        container.style.height="100vw";
        container.style.width="100vW";
        document.documentElement.style.setProperty("--rootSize",window.innerWidth*0.8);
    } else {
        container.style.height="100vh";
        container.style.width="100vh";
        document.documentElement.style.setProperty("--rootSize",window.innerHeight*0.8);
    }
    let rootSize=getComputedStyle(document.body).getPropertyValue("--rootSize");
    document.getElementById("board").style.width=`${rootSize}px`;
    document.getElementById("board").style.height=`${rootSize}px`;
});
function myButton1(){
    localStorage.setItem("name", "Prashanth Chandra Reddy");
}
function myButton2(){
    var today = new Date();
    var time = today.getHours() + ":" + today.getMinutes() + ":" + today.getSeconds();
    window.alert("Current time is "+time)
}
function myButton3(){
    document.body.style.backgroundColor = "green";
}
function myButton4(){
    location.reload();
}
function myButton5(){
    window.open("https://www.google.com");
}
function myButton6(){
    var i=0;
    while(i<10){
        console.log("I did it");
        i++;
    }
}

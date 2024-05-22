let btn = document.querySelector('.btn');
let mail = document.querySelector('#mail');
let password = document.querySelector('#password');
let error = document.querySelector('.error');

// error.textContent = "please";

btn.addEventListener("click", (e)=> {
    e.preventDefault();

    if(mail.value == "" || password.value == "") {
        error.textContent = "Please fill all the fields to Login!"
        error.style.color = "red";
    }
    else {
        
    }
});
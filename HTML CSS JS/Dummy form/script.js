let login = document.getElementById("login")
document.addEventListener('DOMContentLoaded', function () {
    const button = document.getElementById('login');
    if (button) {
        button.addEventListener('click', function (e) {
            e.preventDefault()
            let unm = document.getElementById("username").value;
            let pwd = document.getElementById("password").value;
            if(unm == "" && pwd == ""){
                console.log("Empty Fields !! Please input field")
            }
            else if(unm == ""){
                console.log("username required !!")
            } 
            else if(pwd == ""){
                console.log("Password required!")
            }
            else{
                console.log("Passed")
            }
        });
    }
});
let signup = document.getElementById("signup")
document.addEventListener('DOMContentLoaded', function () {
    const button2 = document.getElementById('signup');
    if (button2) {
        button2.addEventListener('click', function (e) {
            e.preventDefault()
            let newunm = document.getElementById("nw_username").value;
            let newemail = document.getElementById("nw_email").value;
            let newpass = document.getElementById("nw_password").value;
            if(newunm === "" && newemail === "" && newpass === ""){
                console.log("Empty Fields !! Please input field")
            }
            else if(newunm === ""){
                console.log("username required !!")
            } 
            else if(newemail === ""){
                console.log("email required!")
            }
            else if(newpass === ""){
                console.log("Password required!")
            }
            else{
                console.log("Passed")
            }
        });
    }
});

let password_text = document.querySelector('.password-text');
let pass_length = document.querySelector('.pass-length');
let pass_range = document.querySelector('.pass-range');
let easy = document.querySelector('#pass-easy-type');
let medium = document.querySelector('#pass-medium-type');
let hard = document.querySelector('#pass-hard-type');
let uppercase_letter = document.querySelector('#uppercase-letter');
let lowercase_letter = document.querySelector("#lowercase-letter");
let numbers_letter = document.querySelector('#numbers');
let symbols_letter = document.querySelector('#symbols');
let gen_btn = document.querySelector('.gen-btn');
let copy_btn = document.querySelector('.copy-btn');
let alert = document.querySelector('#alert');

pass_length.value = pass_range.value;
easy.checked = true;
numbers_letter.disabled =  true;
symbols_letter.disabled = true;


const uppercaseChars = 'ABCDEFGHIJKLMNOPQRSTUVWXYZ';
const lowercaseChars = 'abcdefghijklmnopqrstuvwxyz';
const numberChars = '0123456789';
const specialChars = '!@#$%^&*()-_+=<>?';
let allChars = uppercaseChars + lowercaseChars + numberChars + specialChars;
let password = generatePassword();


// conditions of all checkboxes
function condition() {
    if(uppercase_letter.checked == true && lowercase_letter.checked == false && numbers_letter.checked == false && symbols_letter.checked == false) {
        allChars = uppercaseChars;
        generatePassword();
    }
    else if(uppercase_letter.checked == false && lowercase_letter.checked == true && numbers_letter.checked == false && symbols_letter.checked == false) {
        allChars = lowercaseChars;
        generatePassword();
    }
    else if(uppercase_letter.checked == false && lowercase_letter.checked == false && numbers_letter.checked == true && symbols_letter.checked == false) {
        allChars = numberChars;
        generatePassword();
    }
    else if(uppercase_letter.checked == false && lowercase_letter.checked == false && numbers_letter.checked == false && symbols_letter.checked == true) {
        allChars = specialChars;
        generatePassword();
    }
    else if(uppercase_letter.checked == true && lowercase_letter.checked == true && numbers_letter.checked == false && symbols_letter.checked == false) {
        allChars = uppercaseChars + lowercaseChars;
        generatePassword();
    }
    else if(uppercase_letter.checked == true && lowercase_letter.checked == false && numbers_letter.checked == true && symbols_letter.checked == false) {
        allChars = uppercaseChars + numberChars;
        generatePassword();
    }
    else if(uppercase_letter.checked == true && lowercase_letter.checked == false && numbers_letter.checked == false && symbols_letter.checked == true) {
        allChars = uppercaseChars + specialChars;
        generatePassword();
    }
    else if(uppercase_letter.checked == false && lowercase_letter.checked == true && numbers_letter.checked == true && symbols_letter.checked == false) {
        allChars = lowercaseChars + numberChars;
        generatePassword();
    }
    else if(uppercase_letter.checked == false && lowercase_letter.checked == true && numbers_letter.checked == false && symbols_letter.checked == true) {
        allChars = lowercaseChars + specialChars;
        generatePassword();
    }
    else if(uppercase_letter.checked == false && lowercase_letter.checked == false && numbers_letter.checked == true && symbols_letter.checked == true) {
        allChars = numberChars + specialChars;
        generatePassword();
    }
    else if(uppercase_letter.checked == true && lowercase_letter.checked == true && numbers_letter.checked == true && symbols_letter.checked == false) {
        allChars = uppercaseChars + lowercaseChars + numberChars;
        generatePassword();
    }
    else if(uppercase_letter.checked == true && lowercase_letter.checked == true && numbers_letter.checked == false && symbols_letter.checked == true) {
        allChars = uppercaseChars + lowercaseChars + specialChars;
        generatePassword();
    }
    else if(uppercase_letter.checked == true && lowercase_letter.checked == false && numbers_letter.checked == true && symbols_letter.checked == true) {
        allChars = uppercaseChars + numberChars + specialChars;
        generatePassword();
    }
    else if(uppercase_letter.checked == false && lowercase_letter.checked == true && numbers_letter.checked == true && symbols_letter.checked == true) {
        allChars = lowercaseChars + numberChars + specialChars;
        generatePassword();
    }
    else if(uppercase_letter.checked == true && lowercase_letter.checked == true && numbers_letter.checked == true && symbols_letter.checked == true) {
        allChars = uppercaseChars + lowercaseChars + numberChars + specialChars;
        generatePassword();
    }
    else if(uppercase_letter.checked == false && lowercase_letter.checked == false && numbers_letter.checked == false && symbols_letter.checked == false) {
        password_text.value = 'You have to check at least one checkbox to generate password';
    }
}

// generate password
function generatePassword() {
    let password = '';
    for (let i = 1; i <= pass_length.value; i++) {
        const randomIndex = Math.floor(Math.random() * allChars.length);
        password = password.concat(allChars[randomIndex]);
    }
    password_text.value = password;

}

// change value when range change
pass_range.addEventListener('change', () => {
    pass_length.value = pass_range.value;
    generatePassword();
})

// radio eventlistner
easy.addEventListener('change', () => {
    numbers_letter.disabled =  true;
    symbols_letter.disabled = true;
    numbers_letter.checked = false;
    symbols_letter.checked = false;
    condition();
    generatePassword();
})

medium.addEventListener('change', () => {
    numbers_letter.disabled = false;
    symbols_letter.disabled = true;
    symbols_letter.checked = false;
    condition();
    // generatePassword();
})

hard.addEventListener('change', () => {
    numbers_letter.disabled =false;
    symbols_letter.disabled = false;
    condition();
    // generatePassword();
})

// checkbox eventlistner
uppercase_letter.addEventListener('change', () => {
    condition();
})

lowercase_letter.addEventListener('change', () => {
    condition();
})

numbers_letter.addEventListener('change', () => {
    condition();
})

symbols_letter.addEventListener('change', () => {
    condition();
})

gen_btn.addEventListener('click', () => {
    condition();
    generatePassword();
})

pass_length.addEventListener('change', () => {
    pass_range.value = pass_length.value;
    condition();
})

// copy password
copy_btn.addEventListener('click', () => {
    password_text.select();
    navigator.clipboard.writeText(password_text.value);
    alert.classList.add("d-flex");
    alert.innerHTML = 'Password has been copied!';
})

gen_btn.addEventListener('click', () => {
    condition();
})
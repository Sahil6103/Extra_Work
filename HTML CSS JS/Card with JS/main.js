// let card = document.createElement("div");
// let imgdiv = document.createElement("div");
// let content = document.createElement("div");
// let heading = document.createElement("h1");
// let desc = document.createElement("p");
// let btn = document.createElement("button");

// card.classList.add("card");
// imgdiv.classList.add("imgdiv");
// content.classList.add("content");

// imgdiv.innerHTML = `<i class="fa-brands fa-instagram"></i>`;

// heading.innerText = "Instagram";

// desc.innerText = `Lorem ipsum dolor, sit amet consectetur adipisicing elit. Perferendis officiis explicabo voluptates enim, esse eveniet dignissimos est mollitia in ipsum?`;

// btn.innerText = "READ MORE";

// content.append(heading);
// content.append(desc);
// content.append(btn);

// card.append(imgdiv);
// card.append(content);
// console.log(card);

// document.querySelector(".root").append(card);

document.querySelector(
  ".root"
).innerHTML = `<div class="card"><div class="imgdiv"><i class="fa-brands fa-instagram"></i></div><div class="content"><h1>Instagram</h1><p>Lorem ipsum dolor, sit amet consectetur adipisicing elit. Perferendis officiis explicabo voluptates enim, esse eveniet dignissimos est mollitia in ipsum?</p><button>READ MORE</button></div></div>`;

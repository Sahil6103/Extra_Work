function calculate(){
    const sub1 = parseInt(document.getElementById("sub1").value)
    const sub2 = parseInt(document.getElementById("sub2").value)
    const sub3 = parseInt(document.getElementById("sub3").value)
    const sub4 = parseInt(document.getElementById("sub4").value)
    const total = sub1 + sub2 + sub3 + sub4
    const avg = total / 4

    document.getElementById("total").innerHTML = "Total is : ", + total;
    document.getElementById("percentage").innerHTML = "percentage is : ", + avg;
}
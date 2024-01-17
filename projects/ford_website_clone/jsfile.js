
// ================ jquery ================


// ---------------- vehicle setion styling--------------


$(document).ready(function(){

    $("#vehicles").click(function(){
        $(".vehicles-extended-info").toggle(300);
    });

    $("#suv-cars").click(function(){
        $(".suv-and-cars").toggle(500);
    })
  
});
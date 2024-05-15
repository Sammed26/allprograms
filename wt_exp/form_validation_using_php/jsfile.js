function validateForm() {
  var name = document.getElementById("name").value;
  var dob = document.getElementById("dob").value;
  var adharNumber = document.getElementById("adharNumber").value;
  var email = document.getElementById("email").value;
  var address = document.getElementById("address").value;

  // Regular expressions for validation
  var nameRegex = /^[a-zA-Z\s]+$/;
  var dobRegex = /^\d{4}-\d{2}-\d{2}$/;
  var adharNumberRegex = /^\d+$/;
  var emailRegex = /^[^\s@]+@[^\s@]+\.[^\s@]+$/;

  // Validation checks
  if (!name.match(nameRegex)) {
      alert("Please enter a valid name.");
      return false;
  }
  
  if (!dob.match(dobRegex)) {
      alert("Please enter date of birth in YYYY-MM-DD format.");
      return false;
  }
  
  if (!adharNumber.match(adharNumberRegex)) {
      alert("Adhar number should contain only numbers.");
      return false;
  }
  
  if (!email.match(emailRegex)) {
      alert("Please enter a valid email address.");
      return false;
  }
  
  if (address.trim() === "") {
      alert("Please enter your address.");
      return false;
  }
  
  // If all validations pass, the form is considered valid
  return true;
}




const submit_btn = document.querySelector(".submit-btn");

submit_btn.addEventListener("click", function(){
  let result = validateForm();

  if(result)
    {
      alert("correct form");
    }
  

})

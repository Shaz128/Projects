<?php
    if(isset($_POST['sub']))
    {

        $name = $_POST['custname'];
        $num = $_POST['custno'];
        $email = $_POST['custemail'];
       $address = $_POST['custadd'];
       $pay = $_POST['pay'];
       $note = $_POST['custnote'];
       $checkbox1=$_POST['deal']; 
       $checkbox2=$_POST['amount'];

$chk="";  
$ami="";
foreach($checkbox1 as $chk1)  
   {  
      $chk .= $chk1.",";  
   }
   
   if(isset($_POST['pay']))
{
    $selectedValue=$_POST['pay'];
}
 $host = "localhost";
        $username = "fc_admin";
        $password = "fc_admin";
        $dbname = "fc_db";
$conn=mysqli_connect("$host", "$username", "$password","$dbname")or die("cannot connect");//connection string  
if (!$conn) {
      die("Connection failed: " . mysqli_connect_error());
}
 
$sql = "INSERT INTO deal (Order_id,Name,Number,Email,Address,Note,Payment,Deal,amount,Date) VALUES (NULL,'$name','$num', '$email', '$address', '$note', '$selectedValue', '$chk','$checkbox2',CURDATE())";
if (mysqli_query($conn, $sql)) {
} else {
	 echo "Error: " . $sql . "<br>" . mysqli_error($conn);
}
mysqli_close($conn);
}
?>


<!doctype html>
<html>

<head>
<script>
var total = 0;

function deal1add(){
var addi1 = document.getElementById("d1");
if(addi1.checked == true){
total=total+450;
document.getElementById("ans").innerHTML = total;
if(total > 0){
document.getElementById("form_hidden").style.display = "block";
}
}else{
total=total-450;
document.getElementById("ans").innerHTML = total;
if(total == 0){
document.getElementById("form_hidden").style.display = "none";
}
}
}

function deal2add(){
var addi1 = document.getElementById("d2");
if(addi1.checked == true){
total=total+670;
document.getElementById("ans").innerHTML = total;
if(total > 0){
document.getElementById("form_hidden").style.display = "block";
}
}else{
total=total-670;
document.getElementById("ans").innerHTML = total;
if(total == 0){
document.getElementById("form_hidden").style.display = "none";
}
}
}

function deal3add(){
var addi1 = document.getElementById("d3");
if(addi1.checked == true){
total=total+345;
document.getElementById("ans").innerHTML = total;
if(total > 0){
document.getElementById("form_hidden").style.display = "block";
}
}else{
total=total-345;
document.getElementById("ans").innerHTML = total;
if(total == 0){
document.getElementById("form_hidden").style.display = "none";
}
}
}

function deal4add(){
var addi1 = document.getElementById("d4");
if(addi1.checked == true){
total=total+580;
document.getElementById("ans").innerHTML = total;
if(total > 0){
document.getElementById("form_hidden").style.display = "block";
}
}else{
total=total-580;
document.getElementById("ans").innerHTML = total;
if(total == 0){
document.getElementById("form_hidden").style.display = "none";
}
}
}

function deal5add(){
var addi1 = document.getElementById("d5");
if(addi1.checked == true){
total=total+600;
document.getElementById("ans").innerHTML = total;
if(total > 0){
document.getElementById("form_hidden").style.display = "block";
}
}else{
total=total-600;
document.getElementById("ans").innerHTML = total;
if(total == 0){
document.getElementById("form_hidden").style.display = "none";
}
}
}

function deal6add(){
var addi1 = document.getElementById("d6");
if(addi1.checked == true){
total=total+1200;
document.getElementById("ans").innerHTML = total;
if(total > 0){
document.getElementById("form_hidden").style.display = "block";
}
}else{
total=total-1200;
document.getElementById("ans").innerHTML = total;
if(total == 0){
document.getElementById("form_hidden").style.display = "none";
}
}
}

function deal7add(){
var addi1 = document.getElementById("d7");
if(addi1.checked == true){
total=total+1050;
document.getElementById("ans").innerHTML = total;
if(total > 0){
document.getElementById("form_hidden").style.display = "block";
}
}else{
total=total-1050;
document.getElementById("ans").innerHTML = total;
if(total == 0){
document.getElementById("form_hidden").style.display = "none";
}
}
}

function deal8add(){
var addi1 = document.getElementById("d8");
if(addi1.checked == true){
total=total+1500;
document.getElementById("ans").innerHTML = total;
if(total > 0){
document.getElementById("form_hidden").style.display = "block";
}
}else{
total=total-1500;
document.getElementById("ans").innerHTML = total;
if(total == 0){
document.getElementById("form_hidden").style.display = "none";
}
}
}

function deal9add(){
var addi1 = document.getElementById("d9");
if(addi1.checked == true){
total=total+1589;
document.getElementById("ans").innerHTML = total;
if(total > 0){
document.getElementById("form_hidden").style.display = "block";
}
}else{
total=total-1589;
document.getElementById("ans").innerHTML = total;
if(total == 0){
document.getElementById("form_hidden").style.display = "none";
}
}
}

function done(){

	document.getElementById("value1").value = total;
}

</script>
<link rel="stylesheet" href="style.css">
</head>

<body>
	<style>
		#but2 
        {
            background-color:#c0c7dd;
            height: 50px;
            width: 150px;
            border-radius: 25px;
            background-color: #c0c7dd;
        }
        #but2:hover
        {
		    background-color: #f89921;
        }
        ::placeholder
        {
            color: #26272b;
        }
	</style>

<nav id="header">
			<a href="index.html"><img src="logo1.jpeg" alt="pic" height="80" width="500"></a>
			&nbsp;
			<ul>
			<li><a href="index.html">HomePage</a></li>
			<li><a href="Cont_Us.php">Contact Us</a></li>
			<li><a href="privicy.html">Privacy</a></li>
			</ul>
		</nav>
		<div style="margin-left:15%;">
		<p style="color:#c0c7dd; font-size:80px;text-align:center;margin-left:5px;">Your Total Cart  Bill Is <span id ="ans" style="color:#f89921;">0</span></p>
		</div>
		<br>
		<br>
		<br>
		<br>
		<br>
<form action="done.php" method="post">
		    <div id="form_hidden" style="display: none;">
		    <center>
			<label style="color: #f89921;font-size: 20px;">Receiver Name</label>
			<br>
			<br>
			<input required type="text" placeholder="Receiver Name" name="custname" style="text-align: center; width: 30%;height: 30px;color: #26272b;border-radius: 25px;"id="user;">
			<br>
			<br>
			<label style="color: #f89921;font-size: 20px;">Mobile Number</label>
			<br>
			<br>
			<input required type="number" placeholder="Mobile Number" name="custno" style="text-align: center; width: 30%;height: 30px;color: #26272b;border-radius: 25px;" id="user">			<br>
			<br>
			<label style="color: #f89921;font-size: 20px;">Email</label>
			<br>
			<br>
			<input type="email" placeholder="Email" style="text-align: center; width: 30%;height: 30px;color: #26272b;border-radius: 25px;" name="custemail" id="Email">
			<br>
			<br>
			<label style="color: #f89921;font-size: 20px;">Complete Address</label>
			<br>
			<br>
			<input required type="suggestion" placeholder="Address" style="text-align: center; width: 30%;height: 30px;color: #26272b;border-radius: 25px;" name="custadd" id="Suggestion"><br>
			<br>
			<br>
			<label style="color: #f89921;font-size: 20px;">Order Note(Optional)</label>
			<br>
			<br>
			<input type="suggestion" placeholder="Order Note" name="custnote" style="text-align: center; width: 30%;height: 30px;color: #26272b;border-radius: 25px;" id="Suggestion">
			<br>
			<br>
			<label style="color: #f89921;font-size: 20px;">How Would Like To Pay</label>
			<br>
			<br>
			<label style="color: #c0c7dd;font-size: 15px;">Cash On Delivery</label>
			<input required type="radio" id="rd1" name="pay" value="cash" onclick="payment()">
			<label style="color: #c0c7dd;font-size: 15px;">Credit / Debit Card</label>
			<input required type="radio" id="rd1"  name="pay" value="card" onclick="paym()">
			<br>
			<br>
			<br>
			<br>
			<input style="font-weight: bold;" type="submit" name="sub" value="Place Order" id="but2" onclick="done()">
			<br>
			</center>
		    </div>
			<br><br><br><br><br>

<div id="dealing">

<table style="width:70%; border-spacing:6px;">
<tr>
<td style="text-align:center;">
<img src="d1.png" style="width:75%;">
<h1 style="color:#f89921;">Deal 1</h1>
<h2 style="color: #c0c7dd;">ChICK CALUB Price : 450</h2>
<br>
<input style="transform:scale(2);" type="checkbox" value="deal1" name="deal[]" onchange="deal1add()" id="d1" class="checkmark">
</td>
<td style="text-align:center;">

<img src="D2.png" style="width:75%;">
<h1 style="color:#f89921;">Deal 2</h1>
<h2 style="color: #c0c7dd;">SELF ENJOY Price : 670</h2>
<br>
<input style="transform:scale(2);" type="checkbox" value="deal2" name="deal[]" onchange="deal2add()" id="d2" class="checkmark">
</td>
<td style="text-align:center;">

<img src="D3.png" style="width:75%;">
<h1 style="color:#f89921;">Deal 3</h1>
<h2 style="color: #c0c7dd;">PIZZA LOVER Price : 345</h2>
<br>
<input style="transform:scale(2);" type="checkbox" value="deal3" name="deal[]" onchange="deal3add()" id="d3" class="checkmark">
</td>
</tr>
<tr>
<td><br></td>
</tr>
<tr>
<td style="text-align:center;">
<img src="D4.png" style="width:75%;">

<h1 style="color:#f89921;">Deal 4</h1>
<h2 style="color: #c0c7dd;">TWO BY TWO Price : 580</h2>
<br>
<br>
<input style="transform:scale(2);" type="checkbox" value="deal4" name="deal[]" onchange="deal4add()" id="d4" class="checkmark">
</td>
<td style="text-align:center;">

<img src="D5.png" style="width:75%;">
<h1 style="color:#f89921;">Deal 5</h1>
<h2 style="color: #c0c7dd;">CHICK A-ZINGER Price : 600</h2><br>
<br>
<input style="transform:scale(2);" type="checkbox" value="deal5" name="deal[]" onchange="deal5add()" id="d5" class="checkmark">
</td>
<td style="text-align:center;">

<img src="D6.png" style="width:75%;">
<h1 style="color:#f89921;">Deal 6</h1>
<h2 style="color: #c0c7dd;">BEENGER Price : 1200</h2>
<br>
<br>
<input style="transform:scale(2);" type="checkbox" value="deal6" name="deal[]" onchange="deal6add()" id="d6" class="checkmark">
</td>
</tr>
<td><br></td>
<tr>
<td style="text-align:center;">

<img src="D7.png" style="width:75%;">

<h1 style="color:#f89921;">Deal 7</h1>
<h2 style="color: #c0c7dd;">SUPER DHAMAKA Price : 1050</h2>
<br>

<br>
<input style="transform:scale(2);" type="checkbox" value="deal7" name="deal[]" onchange="deal7add()" id="d7" class="checkmark">
</td>
<td style="text-align:center;">

<img src="D8.png" style="width:75%;">

<h1 style="color:#f89921;">Deal 8</h1>
<h2 style="color: #c0c7dd;">MIGHTY BEEF Price : 1500</h2>
<br>
<br>
<input style="transform:scale(2);" type="checkbox" value="deal8" name="deal[]" onchange="deal8add()" id="d8" class="checkmark">

</td>

<td style="text-align:center;">
<img src="D9.png" style="width:75%;">

<h1 style="color:#f89921;">Deal 9</h1>
<h2 style="color: #c0c7dd;">TRIPLE III Price : 1589</h2>
<br>
<br>
<input style="transform:scale(2);" type="checkbox" value="deal9" name="deal[]" onchange="deal9add()" id="d9" class="checkmark">

</td>
</tr>
<tr>
<td style="opacity:0%;"><input type="checkbox" value="" id="value1" name="amount" checked><span id="value1"></td>
</tr>
<tr>
<td style="text-align:center;"  colspan="3">
</td>
</tr>

</table>


</div>
</form>
</body>
</html>
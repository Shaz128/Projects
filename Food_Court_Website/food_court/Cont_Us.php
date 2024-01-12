<?php
    if(isset($_POST['submit_button']))
    {

        $Cus_Name = $_POST['Cus_Name'];
        $Cus_Email = $_POST['Cus_Email'];
        $Cus_Num = $_POST['Cus_Num'];
        $Cus_Prob = $_POST['Cus_Prob'];

        $host = "localhost";
        $username = "fc_admin";
        $password = "fc_admin";
        $dbname = "fc_db";
$conn=mysqli_connect("$host", "$username", "$password","$dbname")or die("cannot connect");//connection string  
if (!$conn) {
      die("Connection failed: " . mysqli_connect_error());
}
$sql = "INSERT INTO contact_us (id,Cus_Name,Cus_Email,Cus_Num,Cus_Prob) VALUES (NULL,'$Cus_Name','$Cus_Email', '$Cus_Num', '$Cus_Prob')";
if (mysqli_query($conn, $sql)) {
} else {
      echo "Error: " . $sql . "<br>" . mysqli_error($conn);
}
mysqli_close($conn);
}
?>
<DOCTYPE html>
<html>
<head>
    <link rel="stylesheet" href="style.css">
    <title>Contact Us</title>
    <style>
         #user
         {
            width: 30%;
            height: 30px;
            background-color: rgba(128, 128, 128, 0.432);
            border: none;
            color:  #26272b;
            border-radius: 25px;
            padding:5px;
            background-color: #c0c7dd;
        }
        #Email 
        {
            width: 30%;
            height: 30px;
            background-color: rgba(128, 128, 128, 0.432);
            border: none;
            color:  #26272b;
            border-radius: 25px;
            padding:5px;
            background-color: #c0c7dd;
        }
        #Suggestion 
        {
            width: 40%;
            height: 40px;
            background-color: rgba(128, 128, 128, 0.432);
            border: none;
            color:  #26272b;
            border-radius: 25px;
            padding:10px;
            background-color: #c0c7dd;
        }
        #number 
        {
            width: 30%;
            height: 30px;
            background-color: rgba(128, 128, 128, 0.432);
            border: none;
            color:   #26272b;
            border-radius: 25px;
            padding:5px;   
            background-color: #c0c7dd;
        }
        #but 
        {
            background-color:#c0c7dd;
            height: 50px;
            width: 200px;
            border-radius: 25px;
            background-color: #c0c7dd;
        }
        #but:hover
        {
		    background-color: #f89921;
        }
        ::placeholder
        {
            color: #26272b;
        }





*{
    padding: 0;
    margin: 0;
    text-decoration: none;
    list-style: none;
    box-sizing: border-box;
}
#poster{
	 margin-left:15px;   
	 margin-right: 15px;
   height:800px;
   width:1870px;	
}
body
{
  font-family: monospace;
	background-image: url('bg.png');
	background-repeat: repeat-Y;
  background-size:2100px 500.77px;
	background-attachment: fixed;
}
nav
{
    background-color:#26272b;
    height: 80px;
    width: 100%;
}
label.logo
{
    color: white;
    font-size: 60px;
    line-height: 85px;
    font-family: Times New Roman;
    text-align: center;
    font-weight: bold;
}
nav ul 
{
    float: right;
    margin-right: 20px;
}
nav ul li 
{
    display: inline-block;
    line-height: 80px;
    margin: 0 5px;
}
nav ul li a
{ 
    color: white;
    font-size: 17px;
    padding: 7px 13px;
    border-radius: 20px;
    text-transform: uppercase;
    font-weight: bold;
}
a:hover
{
    transition: .5s;
    color: #26272b;
    background-color: #f89921;
    border-radius: 50px;
}
#header
{
    position: sticky;
}
.site-footer
{
  background-color:#26272b;
  padding:45px 0 20px;
  font-size:15px;
  line-height:24px;
  color:#737373;
}
.site-footer h6
{
  color:#fff;
  font-size:25px;
  text-transform:uppercase;
  margin-top:5px;
  text-align: center;
}
.site-footer .social-icons
{
  text-align:center;
}
.site-footer .social-icons a
{
  width:40px;
  height:40px;
  line-height:40px;
  margin-left:6px;
  margin-right:0;
  border-radius:100%;
  background-color:#33353d
}
.social-icons li
{
  display:inline;
  margin-bottom:4px
}
.social-icons a{
  background-color:#eceeef;
  color:#818a91;
  font-size:30px;
  display:inline-block;
  line-height:44px;
  width:44px;
  height:44px;
  text-align:center;
  margin-right:8px;
  border-radius: 100%;
  -webkit-transition:all .2s linear;
  -o-transition:all .2s linear;
  transition:all .2s linear;
}
.social-icons a:active,.social-icons a:focus,.social-icons a:hover
{
  color:#fff;
  background-color:#29aafe
}
.social-icons a.facebook:hover
{
  background-color:#3b5998
}
.social-icons a.instagram:hover
{
  background-color: #8a3ab9;
}
#sc
{
  color:#fff;
  font-size:25px;
  text-transform:uppercase;
  margin-top:5px;
  text-align: center;
}
.container1 
{
  position: relative;
  width: 50%;
  padding: 30px;
}

#image 
{
  opacity: 1;
  display: block;
  width: 415px;
  height: 350px;
  transition: .5s ease;
  backface-visibility: block;
}
.middle 
{
  transition: .5s ease;
  opacity: 0;
  position: relative;
  top: -25px;
  left: 272px;
  transform: translate(-50%, -50%);
  -ms-transform: translate(-50%, -50%)
}
.container1:hover #image 
{
  opacity: 0.3;
}
.container1:hover .middle
{
  opacity: 1;
}
.text
{
  background-color:  #f89921;
  color: white;
  font-size: 15px;
  padding: 5px 5px;
  border-radius: 25px;
}
.gh
{
  margin-top: -155px;
  float: right;
}
#but1:hover
{
  background-color:#f89921;
}
#but1
{
background-color: #c0c7dd;
height: 50px;
width: 80px;
border-radius: 25px;
}
#user1
{
width: 15%;
height: 30px;
border: none;
color: aqua;
border-radius: 25px;
padding:5px;
}
#user2
{
  width: 15%;
  height: 30px;
  border: none;
  color: aqua;
  border-radius: 25px;
  padding:5px;
}
.card 
{
  width: 350px;
  height: 350px;
  position: relative;
  display: inline-block;
  margin: 50px;
}
.card .img-top 
{
  display: none;
  position: absolute;
  top: 0;
  left: 0;
  z-index: 99;
}
.card:hover .img-top 
{
  display: inline;
}
    </style>
    </head>
    <body>
            <nav id="header">
                <a href="index.html"><img src="logo1.jpeg" alt="pic" height="80" width="500"></a>
                &nbsp;
                <ul>
                <li><a href="index.html">HomePage</a></li>
                <li><a href="done.php">Deals</a></li>
                <li><a href="privicy.html">Privicy</a></li>
                </ul>
            </nav>
    <br>
    <br>
    <br>
    <br>
    <br>
    <br>
    <br>
    <br>
    <br>
    <br>
            <center>
            <form action="Cont_Us.php" method="post">
            <label style="color: #f89921;">Name</label>
            <br>
            <br>
            <input type="text" required placeholder="Your Name" style="text-align: center;" id="user" name="Cus_Name">
            <br>
            <br>
            <br>
            <label style="color: #f89921;">Email</label>
            <br>
            <br>
            <input type="email" required placeholder="Your Email" style="text-align: center;" id="Email" name="Cus_Email">
            <br>
            <br>
            <br>
            <label style="color: #f89921;">Phone Number</label>
            <br>
            <br>
            <input type="number" required placeholder="Your Number" style="text-align: center;" id=number name="Cus_Num">
            <br>
            <br>
            <label style="color: #f89921;">Any Problem With Order Or Anything</label>
            <br>
            <br>
            <input type="text" required placeholder="Problem....." style="text-align: center;" id=number name="Cus_Prob">
            <br>
            <br>
            <br>
            <br>
            <input type="submit" name="submit_button" value="Submit" id="but">
            </form>
            </center>
</body>
</html>
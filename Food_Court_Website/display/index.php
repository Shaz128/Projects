<html>
<style>
body{	background-image: url('bg.png');
	background-repeat: repeat-Y;
  background-size:2100px 500.77px;
	background-attachment: fixed;
}
#customers {
  font-family: Arial, Helvetica, sans-serif;
  border-collapse: collapse;
  width: 100%;
}

#customers td, #customers th {
  border: 1px solid #ddd;
  padding: 8px;
}


#customers th {
  padding-top: 12px;
  padding-bottom: 12px;
  text-align: left;
}
</style>
<head>
</head>
<body>

<?php 
 $host = "localhost";
        $username = "fc_admin";
        $password = "fc_admin";
        $dbname = "fc_db";
$conn=mysqli_connect("$host", "$username", "$password","$dbname")or die("cannot connect");//connection string  
if (!$conn) {
      die("Connection failed: " . mysqli_connect_error());
}

 
$query = "SELECT * FROM deal";


echo '<center><table id="customers">
      <tr style="color:#f89921;font-size:20px;font-weight:bold;"> 
          <td > <font face="Arial">Order_id</font> </td>
          <td> <font face="Arial"> Name</font> </td> 
          <td> <font face="Arial">Number</font> </td> 
          <td> <font face="Arial">Email</font> </td> 
          <td> <font face="Arial">Address</font> </td> 
          <td> <font face="Arial">Note</font> </td> 
          <td> <font face="Arial">Payment</font> </td>  
          <td > <font face="Arial">Deals</font> </td> 
          <td> <font face="Arial">Amount</font> </td>
      </tr>';

if ($result = $conn->query($query)) {
    while ($row = $result->fetch_assoc()) {
        $field1name = $row["Order_id"];
        $field2name = $row["Name"];
        $field3name = $row["Number"];
        $field4name = $row["Email"];
        $field5name = $row["Address"]; 
        $field6name = $row["Note"]; 
        $field7name = $row["Payment"]; 
        $field8name = $row["Deal"]; 
        $field9name = $row["Amount"]; 
        echo '<tr style="color:white;"> 
                  <td>'.$field1name.'</td> 
                  <td>'.$field2name.'</td> 
                  <td>'.$field3name.'</td> 
                  <td>'.$field4name.'</td> 
                  <td>'.$field5name.'</td>  
                  <td>'.$field6name.'</td> 
                  <td>'.$field7name.'</td> 
                  <td>'.$field8name.'</td> 
                  <td>'.$field9name.'</td>
              </tr>';
    }
    $result->free();
} 
?>
</body>
</html>